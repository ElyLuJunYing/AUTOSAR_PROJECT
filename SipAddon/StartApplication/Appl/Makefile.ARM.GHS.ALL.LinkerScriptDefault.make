#######################################################################################################################
# File Name  : Makefile.ARM.GHS.ALL.LinkerScriptDefault.make                                                          #
# Description: This is a global hardware independent file for GHS compiler/linker to generate the linker script.      #
#              It requires the inclusion of Makefile.derivative.settings for the location & the size of RAM & ROM.    #
# Project    : Vector Basic Runtime System                                                                            #
# Module     : BrsHw for Platform ArmCommon                                                                           #
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
# Philipp Duller                vispdr        Vector Informatik GmbH                                                  #
# Benjamin Walter               visbwa        Vector Informatik GmbH                                                  #
# Tobias Mueller                vismto        Vector Informatik GmbH                                                  #
# Jens Haerer                   visjhr        Vector Informatik GmbH                                                  #
# Andreas Hahn                  vishan        Vector Informatik GmbH                                                  #
# Mohammed Seblani              vissmd        Vector Informatik GmbH                                                  #
# Michael Tiran                 vismin        Vector Informatik GmbH                                                  #
# Sascha Mauser                 vismaa        Vector Informatik GmbH                                                  #
#---------------------------------------------------------------------------------------------------------------------#
# REVISION HISTORY                                                                                                    #
#---------------------------------------------------------------------------------------------------------------------#
# Version   Date        Author  Description                                                                           #
# --------  ----------  ------  --------------------------------------------------------------------------------------#
# 01.00.00  2013-10-11  vispdr  Initial version for GHS                                                               #
# 02.00.00  2014-01-27  vispdr  Generic GHS-Linkerfile-Skeleton                                                       #
# 02.01.00  2014-01-27  vispdr  Independent VectorTable-Location                                                      #
# 02.02.00  2014-11-27  visbwa  added '.' to all section defines (for compatibility reasons)                          #
# 02.03.00  2014-12-15  vismto  Changed structure of linker script file because of problem with Stack definition!     #
# 02.03.01  2014-02-17  vismto  Little adaptions to simplify ARMStartup.c                                             #
# 02.04.00  2015-06-15  visjhr  Added support for derivative STM32F04x Option Bytes                                   #
# 02.04.01  2015-10-19  vishan  Added support for BRS OS_USECASE SAFECTX                                              #
# 02.04.02  2015-10-26  visjhr  Added support for Cortex-M7                                                           #
# 02.04.03  2015-11-05  visbwa  Review (fixed Cortex-M linking)                                                       #
# 02.04.04  2015-11-05  visbwa  Fixed Vector table size for Optionbyte+Flash usage                                    #
# 02.04.05  2015-11-19  vissmd  Evaluated section mapping for Usecase OS                                              #
# 02.04.06  2015-12-07  visbwa  Fixed FLASH size for Flash usage                                                      #
# 02.04.07  2016-01-29  vishan  Added alternative derivative settings include, added m multi for GHS probe,           #
#                               added eth section                                                                     #
# 03.00.00  2016-05-31  visbwa  Moved MEMORY_REGION_DEFINE into platform specific definitions file, combined BRS+OS   #
#                               UseCase                                                                               #
# 03.00.01  2016-06-02  visbwa  Added mapping of .IMAGE_VECTOR_TABLE                                                  #
# 03.00.02  2016-06-14  visbwa  Fixed missing end of comment                                                          #
# 03.01.00  2016-06-22  vismin  Adapted complete file header structure for zBrs_Template@root[2.00.01]                #
# 03.01.01  2016-06-30  vismin  Added '.' to PERIPHERALINTERRUPTS section usage,                                      #
#                               removed duplicated include of Makefile.derivative.settings define (done in Makefile)  #
# 03.01.02  2016-06-30  vismin  Changed MAKEFILE_DERIVATIVE_SETTINGS into atatic Makefile.derivative.settings         #
# 03.01.03  2017-01-17  visjhr  Added/tested support for CORTEX_A7 (Tcc800x)                                          #
# 03.01.04  2017-02-09  vismaa  Extracted LinkerScriptDefault from Makefile.ARM.GHS.ALL.Make                          #
# 03.01.05  2017-07-21  visbwa  Review according to Brs_Template 2.01.04                                              #
# 03.01.06  2018-01-04  visbwa  Review according to Brs_Template 2.02.00                                              #
#######################################################################################################################

#------------------------------------------------------------------------------
# Include the hardware specific settings
#------------------------------------------------------------------------------
include Makefile.derivative.settings

#---------------------------------------------------------------------------------
# Rule to generate linker command file (listing of all dependent files)
#---------------------------------------------------------------------------------
$(PROJECT_NAME).$(LNK_SUFFIX): Makefile \
                               Makefile.static \
                               Makefile.config \
                               Makefile.Platform.config \
                               Makefile.derivative.settings \
                               Makefile.project.part.defines \
                               Makefile.$(PLATFORM).$(COMPILER_MANUFACTURER).$(EMULATOR).make \
                               Makefile.$(PLATFORM).$(COMPILER_MANUFACTURER).$(EMULATOR).LinkerScriptDefault.make

#---------------------------------------------------------------------------------
# _NEVER_ delete the leading "Tab" in the first ECHO-line below!!!
# The Linker-Command-File which will be generated:
#---------------------------------------------------------------------------------
	@$(ECHO) "Vector BRS for platform $(PLATFORM) and compiler $(COMPILER_MANUFACTURER)";                      \
  $(ECHO);                                                                                                   \
  $(ECHO) "Generate Linker-script $(PROJECT_NAME).$(LNK_SUFFIX) out of Linker command file";                 \
  $(ECHO) "Makefile.ARM.GHS.ALL.LinkerScriptDefault.make ...";                                               \
  $(ECHO) "/* ----------------------------------------------------------------------"                  > $@; \
  $(ECHO) " *  Vector BRS linker file for platform $(PLATFORM) and compiler $(COMPILER_MANUFACTURER)" >> $@; \
  $(ECHO) " * ---------------------------------------------------------------------- */"              >> $@; \
  $(ECHO) ""                                                                                          >> $@; \
  $(ECHO) " /* Linker Constants */"                                                                   >> $@; \
  $(ECHO) "DEFAULTS {"                                                                                >> $@; \
  $(STACK_CONST_DEFINES)                                                                                     \
  $(ECHO) "}"                                                                                         >> $@; \
  $(ECHO) ""                                                                                          >> $@; \
  $(ECHO) "MEMORY {"                                                                                  >> $@; \
  $(ECHO) "    /* Derivative specific section allocation */"                                          >> $@; \
  $(MEMORY_REGION_DEFINE)                                                                                    \
  $(ECHO) "}"                                                                                         >> $@; \
  $(ECHO) ""                                                                                          >> $@; \
  $(ECHO) "SECTIONS {"                                                                                >> $@; \
  $(ECHO) " _placeholder_start_address_vectortable : > VECTORS"                                       >> $@; \
  $(ECHO) ""                                                                                          >> $@; \
  $(VECTOR_TABLE_DEFINE)                                                                                     \
  $(ECHO) ""                                                                                          >> $@; \
  $(ECHO) " .STARTUP"                                                                                 >> $@; \
  $(PROGRAM_MEMORY)                                                                                          \
  $(ECHO) ""                                                                                          >> $@; \
  $(ECHO) " .text                    : > ."                                                           >> $@; \
  $(ECHO) " .os_code                 : > ."                                                           >> $@; \
  $(ECHO) " .picbase                 : > .  /* Base of text sections  */"                             >> $@; \
  $(ECHO) " .intercall               : > .  /* Used by Thumb-capable processor variants,       */"    >> $@; \
  $(ECHO) " .interfunc               : > .  /* to create correct mixed-mode applications       */"    >> $@; \
  $(ECHO) " .fixaddr                 : > .  /* enables the Green Hills startup code, to        */"    >> $@; \
  $(ECHO) " .fixtype                 : > .  /* relocate PIC/PID initializers of data variables */"    >> $@; \
  $(ECHO) " .secinfo                 : > .  /* Information on section layout of the program    */"    >> $@; \
  $(ECHO) " .osSectionConfigBlock    : > ."                                                           >> $@; \
  $(ECHO) " .os_rodata               : > ."                                                           >> $@; \
  $(ECHO) " .rodata                  : > ."                                                           >> $@; \
  $(ECHO) ""                                                                                          >> $@; \
  $(ROM_DATA)                                                                                                \
  $(ECHO) ""                                                                                          >> $@; \
  $(OPTBYTES_DEFINE)                                                                                         \
  $(ECHO) "     __data = .;"                                                                          >> $@; \
  $(ECHO) " .data                    : > RAM"                                                         >> $@; \
  $(ECHO) ""                                                                                          >> $@; \
  $(ECHO) " /* UNINITIALIZED DATA */"                                                                 >> $@; \
  $(ECHO) ""                                                                                          >> $@; \
  $(ECHO) " .bss      ALIGN(4)       : > ."                                                           >> $@; \
  $(ECHO) " .os_bss   ALIGN(4)       : > ."                                                           >> $@; \
  $(ECHO) " .dynbss   ALIGN(4)       : > ."                                                           >> $@; \
  $(ECHO) "  COMMON   ALIGN(4)       : > ."                                                           >> $@; \
  $(ECHO) " .scommon  ALIGN(4)       : > ."                                                           >> $@; \
  $(ECHO) " . = ALIGN(0x4);"                                                                          >> $@; \
  $(ECHO) "  __bss_end = .;"                                                                          >> $@; \
  $(ECHO) ""                                                                                          >> $@; \
  $(ECHO) " /* HEAP */"                                                                               >> $@; \
  $(ECHO) " .HEAP                    : > HEAP"                                                        >> $@; \
  $(ECHO) ""                                                                                          >> $@; \
  $(ECHO) " _eth_start :> RAM_ETH"                                                                    >> $@; \
  $(ECHO) " .EthDesc align(16)       : > ."                                                           >> $@; \
  $(ECHO) " .EthBuffers align(16)    : > ."                                                           >> $@; \
  $(ECHO) " _eth_end =.;"                                                                             >> $@; \
  $(ECHO) " /* STACK */"                                                                              >> $@; \
  $(STACK_SECTION_DEFINE)                                                                                    \
  $(ECHO) ""                                                                                          >> $@; \
  $(ECHO) " __bss_start     = ADDR(.bss);"                                                            >> $@; \
  $(ECHO) "  RC_SDATA_SRC    = ADDR(.romdata);"                                                       >> $@; \
  $(ECHO) "  RC_SDATA_DEST   = ADDR(.data);"                                                          >> $@; \
  $(ECHO) "  RC_SDATA_SIZE   = SIZEOF(.data);"                                                        >> $@; \
  $(ECHO) "}"                                                                                         >> $@;

#End of Makefile.ARM.GHS.ALL.LinkerScriptDefault.make