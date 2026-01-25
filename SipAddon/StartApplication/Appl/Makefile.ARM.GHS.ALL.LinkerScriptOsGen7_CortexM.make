#######################################################################################################################
# File Name  : Makefile.ARM.GHS.ALL.LinkerScriptOsGen7_CortexM.make                                                   #
# Description: This is a global hardware independent file for GHS compiler/linker to generate the linker script.      #
#              It requires the inclusion of Makefile.derivative.settings for the location & the size of RAM & ROM.    #
# Project    : Vector Basic Runtime System                                                                            #
# Module     : BrsHw for platform ArmCommon                                                                           #
#              and Compiler GreenHills                                                                                #
#                                                                                                                     #
#---------------------------------------------------------------------------------------------------------------------#
# COPYRIGHT                                                                                                           #
#---------------------------------------------------------------------------------------------------------------------#
# Copyright (c) 2018 by Vector Informatik GmbH.                                                  All rights reserved. #
#                                                                                                                     #
#---------------------------------------------------------------------------------------------------------------------#
# AUTHOR IDENTITY                                                                                                     #
#---------------------------------------------------------------------------------------------------------------------#
# Name                          Initials      Company                                                                 #
# ----------------------------  ------------  ------------------------------------------------------------------------#
# Benjamin Walter               visbwa        Vector Informatik GmbH                                                  #
# Manuel Rettig                 visrgm        Vector Informatik GmbH                                                  #
#---------------------------------------------------------------------------------------------------------------------#
# REVISION HISTORY                                                                                                    #
#---------------------------------------------------------------------------------------------------------------------#
# Version   Date        Author  Description                                                                           #
# --------  ----------  ------  --------------------------------------------------------------------------------------#
# 01.00.00  2017-07-21  visbwa  Initial creation for OsGen7 (tested with Os_PlatformArmCortexMGen7@root[2.03.01]      #
#                               on S32K144)                                                                           #
# 01.00.01  2017-07-28  visbwa  Fixed allocation of bss into RAM                                                      #
# 01.00.02  2018-10-05  visrgm  Added OS Linker Sections OS_LINK_VAR_APP_OSAPPLICATION_TRUSTED_CORE0                  #
#                               and OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0                                         #
#######################################################################################################################

#------------------------------------------------------------------------------
# Rule to generate linker command file (listing of all dependent files)
#------------------------------------------------------------------------------
$(PROJECT_NAME).$(LNK_SUFFIX): Makefile \
                               Makefile.config \
                               Makefile.Platform.config \
                               Makefile.derivative.settings \
                               Makefile.project.part.defines \
                               Makefile.$(PLATFORM).$(COMPILER_MANUFACTURER).$(EMULATOR).make \
                               Makefile.$(PLATFORM).$(COMPILER_MANUFACTURER).$(EMULATOR).LinkerScriptOsGen7_CortexM.make

#------------------------------------------------------------------------------
# Some checks, to ensure that the variables are set:
#------------------------------------------------------------------------------
ifeq ($(CPU_NO_OF_CORES),)
  $(error ArmCommon Linker Check: CPU_NO_OF_CORES is not defined! Has to be configured within Makefile.Platform.config!)
endif

#---------------------------------------------------------------------------------
# _NEVER_ delete the leading "Tab" in the first ECHO-line below!!!
# The Linker-Command-File which will be generated:
#---------------------------------------------------------------------------------
	@$(ECHO) "Vector BRS for platform $(PLATFORM) and compiler $(COMPILER_MANUFACTURER)";                      \
  $(ECHO);                                                                                                   \
  $(ECHO) "Generate Linker-script $(PROJECT_NAME).$(LNK_SUFFIX) out of Linker command file";                 \
  $(ECHO) "Makefile.ARM.GHS.ALL.LinkerScriptOsGen7_CortexM.make ...";                                        \
  $(ECHO) "/* ----------------------------------------------------------------------"                  > $@; \
  $(ECHO) " *  Vector BRS linker file for platform $(PLATFORM) and compiler $(COMPILER_MANUFACTURER)" >> $@; \
  $(ECHO) " * ---------------------------------------------------------------------- */"              >> $@; \
  $(ECHO) ""                                                                                          >> $@; \
  $(ECHO) " /* Linker Constants */"                                                                   >> $@; \
  $(ECHO) "DEFAULTS {"                                                                                >> $@; \
             $(STACK_CONST_DEFINES)                                                                          \
  $(ECHO) "}"                                                                                         >> $@; \
  $(ECHO) ""                                                                                          >> $@; \
  $(ECHO) "MEMORY {"                                                                                  >> $@; \
  $(ECHO) "    /* Derivative specific section allocation */"                                          >> $@; \
  $(MEMORY_REGION_DEFINE)                                                                                    \
  $(ECHO) "}"                                                                                         >> $@; \
  $(ECHO) ""                                                                                          >> $@; \
  $(ECHO) "SECTIONS {"                                                                                >> $@; \
  $(ECHO) "  /* ROM OR RAM sections depends on PROGRAM_MEMORY */"                                     >> $@; \
  $(ECHO) "  . = ADDR($(PROGRAM_CODE_LOCATION));"                                                     >> $@; \
  $(ECHO) "  __CODE_START = .;"                                                                       >> $@; \
  $(ECHO) "  .STARTUP                       ALIGN(16)"                                                >> $@; \
  $(PROGRAM_MEMORY)                                                                                          \
  $(ROM_DATA)                                                                                                \
  $(ECHO) ""                                                                                          >> $@; \
  $(ECHO) "#define OS_LINK_CODE"                                                                      >> $@; \
  $(ECHO) "#define OS_LINK_CALLOUT_CODE"                                                              >> $@; \
  $(ECHO) "#define OS_LINK_INTVEC_CODE"                                                               >> $@; \
  $(ECHO) "  #include \"./GenData/Os_Link.ld\""                                                       >> $@; \
  $(ECHO) "#define OS_LINK_CALLOUT_CODE"                                                              >> $@; \
  $(ECHO) "#define OS_LINK_EXCVEC_CODE"                                                               >> $@; \
  $(ECHO) "#define OS_LINK_INTVEC_CODE"                                                               >> $@; \
  $(ECHO) "  #include \"./GenData/Os_Link_Core0.ld\""                                                 >> $@; \
  $(ECHO) ""                                                                                          >> $@;
ifeq ($(CPU_NO_OF_CORES),$(filter $(CPU_NO_OF_CORES),2 3 4))
	@$(ECHO) "#define OS_LINK_CALLOUT_CODE"                                                             >> $@; \
  $(ECHO) "  #include \"./GenData/Os_Link_Core1.ld\""                                                 >> $@; \
  $(ECHO) ""                                                                                          >> $@;
endif
ifeq ($(CPU_NO_OF_CORES),$(filter $(CPU_NO_OF_CORES),3 4))
	@$(ECHO) "#define OS_LINK_CALLOUT_CODE"                                                             >> $@; \
  $(ECHO) "  #include \"./GenData/Os_Link_Core2.ld\""                                                 >> $@; \
  $(ECHO) ""                                                                                          >> $@;
endif
ifeq ($(CPU_NO_OF_CORES),$(filter $(CPU_NO_OF_CORES),4))
	@$(ECHO) "#define OS_LINK_CALLOUT_CODE"                                                             >> $@; \
  $(ECHO) "  #include \"./GenData/Os_Link_Core3.ld\""                                                 >> $@; \
  $(ECHO) ""                                                                                          >> $@;
endif
	@$(ECHO) "  .text   ALIGN(16)                       : > ."                                          >> $@; \
  $(ECHO) "  .ghtws.text                              : > ."                                          >> $@; \
  $(ECHO) "  __CODE_END   = .;"                                                                       >> $@; \
  $(ECHO) ""                                                                                          >> $@; \
  $(ECHO) "  /* Constants ---------------------------------------------------- */"                    >> $@; \
  $(ECHO) "  __CONST_START = .;"                                                                      >> $@; \
  $(ECHO) "  .robase                                  : > ."                                          >> $@; \
  $(ECHO) "  .rodata                                  : > ."                                          >> $@; \
  $(ECHO) ""                                                                                          >> $@; \
  $(ECHO) "#define OS_LINK_CONST"                                                                     >> $@; \
  $(ECHO) "  #include \"./GenData/Os_Link.ld\""                                                       >> $@; \
  $(ECHO) "#define OS_LINK_CONST"                                                                     >> $@; \
  $(ECHO) "  #include \"./GenData/Os_Link_Core0.ld\""                                                 >> $@; \
  $(ECHO) ""                                                                                          >> $@;
ifeq ($(CPU_NO_OF_CORES),$(filter $(CPU_NO_OF_CORES),2 3 4))
	@$(ECHO) "#define OS_LINK_CONST"                                                                    >> $@; \
  $(ECHO) "  #include \"./GenData/Os_Link_Core1.ld\""                                                 >> $@; \
  $(ECHO) ""                                                                                          >> $@;
endif
ifeq ($(CPU_NO_OF_CORES),$(filter $(CPU_NO_OF_CORES),3 4))
	@$(ECHO) "#define OS_LINK_CONST"                                                                    >> $@; \
  $(ECHO) "  #include \"./GenData/Os_Link_Core2.ld\""                                                 >> $@; \
  $(ECHO) ""                                                                                          >> $@;
endif
ifeq ($(CPU_NO_OF_CORES),$(filter $(CPU_NO_OF_CORES),4))
	@$(ECHO) "#define OS_LINK_CONST"                                                                    >> $@; \
  $(ECHO) "  #include \"./GenData/Os_Link_Core3.ld\""                                                 >> $@; \
  $(ECHO) ""                                                                                          >> $@;
endif
	@$(ECHO) ""                                                                                         >> $@; \
  $(ECHO) "  .picbase                   : > ."                                                        >> $@; \
  $(ECHO) "  .intercall                 : > . /* Used by Thumb-capable processor variants,       */"  >> $@; \
  $(ECHO) "  .interfunc                 : > . /* to create correct mixed-mode applications       */"  >> $@; \
  $(ECHO) "  .fixaddr                   : > . /* enables the Green Hills startup code, to        */"  >> $@; \
  $(ECHO) "  .fixtype                   : > . /* relocate PIC/PID initializers of data variables */"  >> $@; \
  $(ECHO) "  .secinfo                   : > . /* Information on section layout of the program    */"  >> $@; \
  $(ECHO) ""                                                                                          >> $@; \
  $(ECHO) "  .pidbase                   : > ."                                                        >> $@; \
  $(ECHO) "  .syscall         ALIGN(16) : > ."                                                        >> $@; \
  $(ECHO) "  __CONST_END = .;"                                                                        >> $@; \
  $(ECHO) ""                                                                                          >> $@; \
  $(OPTBYTES_DEFINE)                                                                                         \
  $(ECHO) "  .data                                    : > RAM"                                        >> $@; \
  $(ECHO) ""                                                                                          >> $@; \
  $(ECHO) "  __bss_start = .;"                                                                        >> $@; \
  $(ECHO) "  .bss             ALIGN(16) : > ."                                                        >> $@; \
  $(ECHO) ""                                                                                          >> $@; \
  $(ECHO) "#define OS_LINK_SPINLOCKS"                                                                 >> $@; \
  $(ECHO) "  #include \"./GenData/Os_Link.ld\""                                                       >> $@; \
  $(ECHO) "#define OS_LINK_SPINLOCKS"                                                                 >> $@; \
  $(ECHO) "  #include \"./GenData/Os_Link_Core0.ld\""                                                 >> $@; \
  $(ECHO) ""                                                                                          >> $@;
ifeq ($(CPU_NO_OF_CORES),$(filter $(CPU_NO_OF_CORES),2 3 4))
	@$(ECHO) "#define OS_LINK_SPINLOCKS"                                                                >> $@; \
  $(ECHO) "  #include \"./GenData/Os_Link_Core1.ld\""                                                 >> $@; \
  $(ECHO) ""                                                                                          >> $@;
endif
ifeq ($(CPU_NO_OF_CORES),$(filter $(CPU_NO_OF_CORES),3 4))
	@$(ECHO) "#define OS_LINK_SPINLOCKS"                                                                >> $@; \
  $(ECHO) "  #include \"./GenData/Os_Link_Core2.ld\""                                                 >> $@; \
  $(ECHO) ""                                                                                          >> $@;
endif
ifeq ($(CPU_NO_OF_CORES),$(filter $(CPU_NO_OF_CORES),4))
	@$(ECHO) "#define OS_LINK_SPINLOCKS"                                                                >> $@; \
  $(ECHO) "  #include \"./GenData/Os_Link_Core3.ld\""                                                 >> $@; \
  $(ECHO) ""                                                                                          >> $@;
endif
	@$(ECHO) ""                                                                                         >> $@; \
  $(ECHO) "#define OS_LINK_VAR_KERNEL"                                                                >> $@; \
  $(ECHO) "#define OS_LINK_KERNEL_BARRIERS"                                                           >> $@; \
  $(ECHO) "#define OS_LINK_KERNEL_CORESTATUS"                                                         >> $@; \
  $(ECHO) "#define OS_LINK_VAR_GLOBALSHARED"                                                          >> $@; \
  $(ECHO) "  #include \"./GenData/Os_Link.ld\""                                                       >> $@; \
  $(ECHO) "#define OS_LINK_VAR_APP_OSAPPLICATION_NONTRUSTED_CORE0"                                                     >> $@; \
  $(ECHO) "#define OS_LINK_VAR_APP_OSAPPLICATION_TRUSTED_CORE0"                                                     >> $@; \
  $(ECHO) "#define OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0"                                    >> $@; \
  $(ECHO) "#define OS_LINK_VAR_KERNEL"                                                                >> $@; \
  $(ECHO) "#define OS_LINK_VAR_TASK"                                                                  >> $@; \
  $(ECHO) "#define OS_LINK_VAR_ISR"                                                                   >> $@; \
  $(ECHO) "#define OS_LINK_KERNEL_BARRIERS"                                                           >> $@; \
  $(ECHO) "#define OS_LINK_KERNEL_TRACE"                                                              >> $@; \
  $(ECHO) "#define OS_LINK_KERNEL_CORESTATUS"                                                         >> $@; \
  $(ECHO) "  #include \"./GenData/Os_Link_Core0.ld\""                                                 >> $@; \
  $(ECHO) ""                                                                                          >> $@;
ifeq ($(CPU_NO_OF_CORES),$(filter $(CPU_NO_OF_CORES),2 3 4))
	@$(ECHO) "#define OS_LINK_VAR_APP_OSAPPLICATION"                                                    >> $@; \
  $(ECHO) "#define OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE1"                                    >> $@; \
  $(ECHO) "#define OS_LINK_VAR_KERNEL"                                                                >> $@; \
  $(ECHO) "#define OS_LINK_VAR_TASK"                                                                  >> $@; \
  $(ECHO) "#define OS_LINK_VAR_ISR"                                                                   >> $@; \
  $(ECHO) "#define OS_LINK_KERNEL_BARRIERS"                                                           >> $@; \
  $(ECHO) "#define OS_LINK_KERNEL_TRACE"                                                              >> $@; \
  $(ECHO) "#define OS_LINK_KERNEL_CORESTATUS"                                                         >> $@; \
  $(ECHO) "  #include \"./GenData/Os_Link_Core1.ld\""                                                 >> $@; \
  $(ECHO) ""                                                                                          >> $@;
endif
ifeq ($(CPU_NO_OF_CORES),$(filter $(CPU_NO_OF_CORES),3 4))
	@$(ECHO) "#define OS_LINK_VAR_APP_OSAPPLICATION"                                                    >> $@; \
  $(ECHO) "#define OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE2"                                    >> $@; \
  $(ECHO) "#define OS_LINK_VAR_KERNEL"                                                                >> $@; \
  $(ECHO) "#define OS_LINK_VAR_TASK"                                                                  >> $@; \
  $(ECHO) "#define OS_LINK_VAR_ISR"                                                                   >> $@; \
  $(ECHO) "#define OS_LINK_KERNEL_BARRIERS"                                                           >> $@; \
  $(ECHO) "#define OS_LINK_KERNEL_TRACE"                                                              >> $@; \
  $(ECHO) "#define OS_LINK_KERNEL_CORESTATUS"                                                         >> $@; \
  $(ECHO) "  #include \"./GenData/Os_Link_Core2.ld\""                                                 >> $@; \
  $(ECHO) ""                                                                                          >> $@;
endif
ifeq ($(CPU_NO_OF_CORES),$(filter $(CPU_NO_OF_CORES),4))
	@$(ECHO) "#define OS_LINK_VAR_APP_OSAPPLICATION"                                                    >> $@; \
  $(ECHO) "#define OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE3"                                    >> $@; \
  $(ECHO) "#define OS_LINK_VAR_KERNEL"                                                                >> $@; \
  $(ECHO) "#define OS_LINK_VAR_TASK"                                                                  >> $@; \
  $(ECHO) "#define OS_LINK_VAR_ISR"                                                                   >> $@; \
  $(ECHO) "#define OS_LINK_KERNEL_BARRIERS"                                                           >> $@; \
  $(ECHO) "#define OS_LINK_KERNEL_TRACE"                                                              >> $@; \
  $(ECHO) "#define OS_LINK_KERNEL_CORESTATUS"                                                         >> $@; \
  $(ECHO) "  #include \"./GenData/Os_Link_Core3.ld\""                                                 >> $@; \
  $(ECHO) ""                                                                                          >> $@;
endif
	@$(ECHO) ""                                                                                         >> $@; \
  $(ECHO) "  .dynbss                                  : > ."                                          >> $@; \
  $(ECHO) "  COMMON                                   : > ."                                          >> $@; \
  $(ECHO) "  .scommon                                 : > ."                                          >> $@; \
  $(ECHO) ""                                                                                          >> $@; \
  $(ECHO) "  __bss_end = .;"                                                                          >> $@; \
  $(ECHO) "  . = ALIGN(0x4);"                                                                         >> $@; \
  $(ECHO) ""                                                                                          >> $@; \
  $(ECHO) "  _eth_start                               : > RAM_ETH"                                    >> $@; \
  $(ECHO) "  .EthDesc align(16)                       : > ."                                          >> $@; \
  $(ECHO) "  .EthBuffers align(16)                    : > ."                                          >> $@; \
  $(ECHO) "  _eth_end =.;"                                                                            >> $@; \
  $(ECHO) ""                                                                                          >> $@; \
  $(ECHO) "  _placeholder_start_address_vectortable  : > VECTORS"                                     >> $@; \
  $(ECHO) "#define OS_LINK_EXCVEC_CONST"                                                              >> $@; \
  $(ECHO) "   #include \"./GenData/Os_Link_Core0.ld\""                                                >> $@; \
  $(ECHO) "#define OS_LINK_INTVEC_CONST"                                                              >> $@; \
  $(ECHO) "   #include \"./GenData/OS_Link.ld\""                                                      >> $@; \
  $(ECHO) "#define OS_LINK_INTVEC_CONST"                                                              >> $@; \
  $(ECHO) "   #include \"./GenData/Os_Link_Core0.ld\""                                                >> $@; \
  $(ECHO) ""                                                                                          >> $@;
ifeq ($(CPU_NO_OF_CORES),$(filter $(CPU_NO_OF_CORES),2 3 4))
	@$(ECHO) "#define OS_LINK_INTVEC_CONST"                                                             >> $@; \
    $(ECHO) "   #include \"./GenData/Os_Link_Core1.ld\""                                              >> $@; \
    $(ECHO) ""                                                                                        >> $@;
endif
ifeq ($(CPU_NO_OF_CORES),$(filter $(CPU_NO_OF_CORES),3 4))
	@$(ECHO) "#define OS_LINK_INTVEC_CONST"                                                             >> $@; \
    $(ECHO) "   #include \"./GenData/Os_Link_Core2.ld\""                                              >> $@; \
    $(ECHO) ""                                                                                        >> $@;
endif
ifeq ($(CPU_NO_OF_CORES),$(filter $(CPU_NO_OF_CORES),4))
	@$(ECHO) "#define OS_LINK_INTVEC_CONST"                                                             >> $@; \
    $(ECHO) "   #include \"./GenData/Os_Link_Core3.ld\""                                              >> $@; \
    $(ECHO) ""                                                                                        >> $@;
endif
	@$(ECHO) ""                                                                                         >> $@; \
  $(ECHO) "  /* HEAP */"                                                                              >> $@; \
  $(ECHO) "  .HEAP                                    : > HEAP"                                       >> $@; \
  $(ECHO) ""                                                                                          >> $@; \
  $(ECHO) "  /* STACK */"                                                                             >> $@; \
  $(ECHO) "  _placeholder_start_address_stack         : > STACK"                                      >> $@; \
  $(ECHO) "  __STACK_START = .;"                                                                      >> $@; \
  $(ECHO) "  __stack_start = .;"                                                                      >> $@; \
  $(ECHO) ""                                                                                          >> $@; \
  $(ECHO) "#define OS_LINK_KERNEL_STACKS"                                                             >> $@; \
  $(ECHO) "  #include \"./GenData/Os_Link_Core0_Stacks.ld\""                                          >> $@; \
  $(ECHO) ""                                                                                          >> $@;
ifeq ($(CPU_NO_OF_CORES),$(filter $(CPU_NO_OF_CORES),2 3 4))
	@$(ECHO) "#define OS_LINK_KERNEL_STACKS"                                                            >> $@; \
  $(ECHO) "  #include \"./GenData/Os_Link_Core1_Stacks.ld\""                                          >> $@; \
  $(ECHO) ""                                                                                          >> $@;
endif
ifeq ($(CPU_NO_OF_CORES),$(filter $(CPU_NO_OF_CORES),3 4))
	@$(ECHO) "#define OS_LINK_KERNEL_STACKS"                                                            >> $@; \
  $(ECHO) "  #include \"./GenData/Os_Link_Core2_Stacks.ld\""                                          >> $@; \
  $(ECHO) ""                                                                                          >> $@;
endif
ifeq ($(CPU_NO_OF_CORES),$(filter $(CPU_NO_OF_CORES),4))
	@$(ECHO) "#define OS_LINK_KERNEL_STACKS"                                                            >> $@; \
  $(ECHO) "  #include \"./GenData/Os_Link_Core3_Stacks.ld\""                                          >> $@; \
  $(ECHO) ""                                                                                          >> $@;
endif
	@$(ECHO) ""                                                                                         >> $@; \
  $(ECHO) "  __STACK_END = .;"                                                                        >> $@; \
  $(ECHO) "  __STACK_INIT = .;"                                                                       >> $@; \
  $(ECHO) "  __stack_top = .;"                                                                        >> $@; \
  $(ECHO) ""                                                                                          >> $@; \
  $(ECHO) "  RC_SDATA_SRC    = ADDR(.romdata);"                                                       >> $@; \
  $(ECHO) "  RC_SDATA_DEST   = ADDR(.data);"                                                          >> $@; \
  $(ECHO) "  RC_SDATA_SIZE   = SIZEOF(.data);"                                                        >> $@; \
  $(ECHO) "}"                                                                                         >> $@;

#End of Makefile.ARM.GHS.ALL.LinkerScriptOsGen7_CortexM.make