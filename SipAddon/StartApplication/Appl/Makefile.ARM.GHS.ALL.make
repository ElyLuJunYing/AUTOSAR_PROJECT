#######################################################################################################################
# File Name  : Makefile.ARM.GHS.ALL.make                                                                              #
# Description: This is a global hardware independent file for GHS compiler/linker to generating the linker script.    #
#              It requires the inclusion of Makefile.$(DERIVATIVE).definitions for the location & the size of         #
#              RAM & ROM                                                                                              #
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
# Sascha Mauser                 vismaa        Vector Informatik GmbH                                                  #
# Andreas Hahn                  vishan        Vector Informatik GmbH                                                  #
# Benjamin Walter               visbwa        Vector Informatik GmbH                                                  #
# Sascha Mauser                 vismaa        Vector Informatik GmbH                                                  #
#---------------------------------------------------------------------------------------------------------------------#
# REVISION HISTORY                                                                                                    #
#---------------------------------------------------------------------------------------------------------------------#
# Version   Date        Author  Description                                                                           #
# --------  ----------  ------  --------------------------------------------------------------------------------------#
# 01.00.00  2017-02-09  vismaa  Initial creation Makefile.ARM.GHS.ALL.make                                            #
# 01.00.01  2017-03-20  vishan  Added/tested support for CORTEX_R7 (Rcar-H3)                                          #
#           2017-03-23  visbwa  Review according to Brs_Template 2.01.00                                              #
# 01.00.02  2017-03-27  vismaa  STACK_SECTION_DEFINE from STACK out of Makefile.ARM.GHS.ALL.LinkerScriptOsGen7.make   #
# 01.00.03  2017-07-21  visbwa  Separated OsGen7 support into Cortex-M and Cortex-A linker scripts                    #
# 01.00.04  2017-10-10  visbwa  Fixed typo for include of SAFECTX linkerscript                                        #
# 01.00.05  2017-11-13  visbwa  Added support for Cortex-M4F                                                          #
# 01.00.06  2018-01-18  visbwa  Added support for Cortex-R4, Cortex-R4F and Cortex-R5F                                #
# 01.00.07  2018-01-30  visbwa  Added possibility to set OPTBYTES_DEFINE previous to this file                        #
# 01.00.08  2018-06-12  vismaa  Added support for cortex M0PLUS                                                       #
# 01.00.09  2018-06-18  vismaa  Renamed interrupt vector table section  for Cortex-A/R and FBL support                #
# 01.01.00  2018-06-27  vismaa  Changed naming COREINTERRUPTS to intvect_CoreExceptions for Cortex-M FBL support      #
# 01.01.01  2018-08-20  vismaa  Fixed intvect_CoreExceptions into INTVECT_COREEXCEPTIONS for Cortex-M FBL support     #
#######################################################################################################################

#------------------------------------------------------------------------------
# Include the hardware specific settings
#------------------------------------------------------------------------------
include Makefile.derivative.settings

#------------------------------------------------------------------------------
# Some checks, to ensure that the variables are set:
#------------------------------------------------------------------------------
ifeq ($(MEMORY_REGION_DEFINE),)
  $(error ArmCommon Linker Check: MEMORY_REGION_DEFINE is not defined! Has to be configured within Makefile.Platform.config!)
endif
ifeq ($(PROGRAM_CODE_LOCATION),)
  $(warning Linker: PROGRAM_CODE_LOCATION is not defined!)
endif
ifeq ($(VECTOR_TABLE_LOCATION),)
  $(warning Linker: VECTOR_TABLE_LOCATION is not defined!)
endif

##########################################################################################################
# LINKER FILE GENERATION
##########################################################################################################
#Linker script generation moved to external file
ifeq ($(OS_USECASE),$(filter $(OS_USECASE),BRS OS))
  include Makefile.ARM.GHS.ALL.LinkerScriptDefault.make
endif

ifeq ($(OS_USECASE),SAFECTX)
  include Makefile.ARM.GHS.ALL.LinkerScriptSafeContext.make
endif

ifeq ($(OS_USECASE),OSGEN7)
  ifeq ($(CPU_CORE),$(filter $(CPU_CORE),CORTEX_M0 CORTEX_M0PLUS CORTEX_M3 CORTEX_M4 CORTEX_M4F CORTEX_M7))
    include Makefile.ARM.GHS.ALL.LinkerScriptOsGen7_CortexM.make
  else
    include Makefile.ARM.GHS.ALL.LinkerScriptOsGen7_CortexA.make
  endif
endif

#------------------------------------------------------------------------------
# SUBSTITUTIONS
#------------------------------------------------------------------------------

#------------------------------------------------------------------------------
# ----- STACK -----
#------------------------------------------------------------------------------
#------------------------
# ----- CORTEX-M    -----
#------------------------
ifeq ($(CPU_CORE),$(filter $(CPU_CORE),CORTEX_M0 CORTEX_M0PLUS CORTEX_M3 CORTEX_M4 CORTEX_M4F CORTEX_M7))
  ifeq ($(OS_USECASE), BRS)
    define STACK_SECTION_DEFINE
      $(ECHO) "STACK :"                                                                          >> $@; \
      $(ECHO) "{"                                                                                >> $@; \
      $(ECHO) " __stack_start = .;"                                                              >> $@; \
      $(ECHO) " . = . + $(STACKSIZE); /*Reserve memory for the stack*/"                          >> $@; \
      $(ECHO) " __stack_top = .;"                                                                >> $@; \
      $(ECHO) "} > STACK"                                                                        >> $@;
    endef
  endif
endif

#------------------------
# ----- CORTEX-A/-R -----
#------------------------
ifeq ($(CPU_CORE),$(filter $(CPU_CORE),CORTEX_A5 CORTEX_A7 CORTEX_A8 CORTEX_A9 CORTEX_A15 CORTEX_R4 CORTEX_R4F CORTEX_R5 CORTEX_R5F CORTEX_R7))
  ifeq ($(OS_USECASE),$(filter $(OS_USECASE), BRS OS SAFECTX))
    define STACK_CONST_DEFINES
      $(ECHO) " /* Definition of the stack sizes */"                                                          >> $@; \
      $(ECHO) " FIQ_Size  = 0x200;"                                                                           >> $@; \
      $(ECHO) " IRQ_Size  = 0x400;"                                                                           >> $@; \
      $(ECHO) " SVC_Size  = 0x200;"                                                                           >> $@; \
      $(ECHO) " ABT_Size  = 0x200;"                                                                           >> $@; \
      $(ECHO) " UND_Size  = 0x200;"                                                                           >> $@; \
      $(ECHO) " USR_Size  = 0x800;"                                                                           >> $@; \
      $(ECHO) " STACK_SUM = (UND_Size + SVC_Size + ABT_Size + FIQ_Size + IRQ_Size + USR_Size);">> $@;
    endef

    define STACK_SECTION_DEFINE
      $(ECHO) "   /* Define the symbols of the stack sizes needed in ARMStartup.c*/"                          >> $@; \
      $(ECHO) "   FIQ_Stack_Size  = FIQ_Size;"                                                                >> $@; \
      $(ECHO) "   IRQ_Stack_Size  = IRQ_Size;"                                                                >> $@; \
      $(ECHO) "   SVC_Stack_Size  = SVC_Size;"                                                                >> $@; \
      $(ECHO) "   ABT_Stack_Size  = ABT_Size;"                                                                >> $@; \
      $(ECHO) "   UND_Stack_Size  = UND_Size;"                                                                >> $@; \
      $(ECHO) "   USR_Stack_Size  = USR_Size;"                                                                >> $@; \
      $(ECHO) ""                                                                                              >> $@; \
      $(ECHO) "   STACK :"                                                                                    >> $@; \
      $(ECHO) "   {"                                                                                          >> $@; \
      $(ECHO) "    __stack_start = .;"                                                                        >> $@; \
      $(ECHO) "    . = . + STACK_SUM; /*Reserve memory for the stack(s)*/"                                    >> $@; \
      $(ECHO) "    __stack_top = .;"                                                                          >> $@; \
      $(ECHO) "   } > STACK"                                                                                  >> $@;
    endef
  endif
endif

#------------------------------------------------------------------------------
# ----- OPTION BYTES -----
#------------------------------------------------------------------------------
ifndef OPTBYTES_DEFINE
  ifneq ($($(DERIVATIVE)_OPTIONBYTES),)
    define OPTBYTES_DEFINE
      $(ECHO) " .OPTIONBYTES   : > OPTBYTES"                >> $@;
    endef
  else
    define OPTBYTES_DEFINE
    endef
  endif
endif

#------------------------------------------------------------------------------
# ----- PROGRAM MEMORY -----
#------------------------------------------------------------------------------
ifeq ($(VECTOR_TABLE_LOCATION),$(filter $(PROGRAM_CODE_LOCATION),RAM))
  define PROGRAM_MEMORY
    $(ECHO) " : > RAM"                                >> $@;
  endef
endif

ifeq ($(VECTOR_TABLE_LOCATION),$(filter $(PROGRAM_CODE_LOCATION),FLASH))
  define PROGRAM_MEMORY
    $(ECHO) " : > FLASH"                              >> $@;
  endef
endif

#------------------------------------------------------------------------------
# ----- ROM DATA -----
#------------------------------------------------------------------------------
ifeq ($(VECTOR_TABLE_LOCATION),$(filter $(PROGRAM_CODE_LOCATION),RAM))
  define ROM_DATA
    $(ECHO) " .romdata ROM(.data) : > RAM"            >> $@;
  endef
endif

ifeq ($(VECTOR_TABLE_LOCATION),$(filter $(PROGRAM_CODE_LOCATION),FLASH))
  define ROM_DATA
    $(ECHO) " .romdata ROM(.data) : > FLASH"          >> $@;
  endef
endif

#------------------------------------------------------------------------------
# ----- VECTOR TABLE -----
#------------------------------------------------------------------------------
#------------------------
# ----- CORTEX-M    -----
#------------------------
ifeq ($(CPU_CORE),$(filter $(CPU_CORE),CORTEX_M0 CORTEX_M0PLUS CORTEX_M3 CORTEX_M4 CORTEX_M4F CORTEX_M7))
  ifeq ($(OS_USECASE), BRS)
    define VECTOR_TABLE_DEFINE
      $(ECHO) " .INTVECT_COREEXCEPTIONS  : > ."                   >> $@; \
      $(ECHO) " .PERIPHERALINTERRUPTS    : > ."                   >> $@;
     endef
  endif
  ifeq ($(OS_USECASE), OS SAFECTX)
    define VECTOR_TABLE_DEFINE
      $(ECHO) " .os_vector_table      : > ."                   >> $@;
     endef
  endif
endif

#------------------------
# ----- CORTEX-A/-R -----
#------------------------
ifeq ($(CPU_CORE),$(filter $(CPU_CORE),CORTEX_A5 CORTEX_A7 CORTEX_A8 CORTEX_A9 CORTEX_A15 CORTEX_R4 CORTEX_R4F CORTEX_R5 CORTEX_R5F CORTEX_R7))
  ifeq ($(OS_USECASE),$(filter $(OS_USECASE), BRS OS SAFECTX))
    define VECTOR_TABLE_DEFINE
    $(ECHO) ".INTVECT_COREEXCEPTIONS  : > ."                   >> $@; \
    $(ECHO) ".IMAGE_VECTOR_TABLE      : > ."                   >> $@;
    endef
  endif
endif

#-----------------------------------------------------------------------------
# target to start GHS Multi debugger
#-----------------------------------------------------------------------------
multi:
	@export GHS_LMHOST=$(LICENSE_SERVER); \
  export GHS_LMPORT=$(LICENSE_SERVER_PORT);\
  $(ECHO) "$(COMPILER_BASE)" > "$(MULTI_BASE)\.redirect_tools"; \
  $(ECHO) "File '$(MULTI_BASE)\.redirect_tools' updated with compiler path '$(COMPILER_BASE)'"; \
  $(subst \,/,$(MULTI_BASE)\multi.exe $(PROJECT_NAME).$(BINARY_SUFFIX) -rc _GHS_Probe\standalone_tcflash.rc) &

$(PROJECT_NAME).hex: force
	$(HEX) $(HEXFLAGS) $(PROJECT_NAME).hex

#End of Makefile.ARM.GHS.ALL.make
