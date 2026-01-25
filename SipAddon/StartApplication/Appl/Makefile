#######################################################################################################################
# File Name  : Makefile                                                                                               #
# Description: local main project Makefile                                                                            #
# Project    : Vector Basic Runtime System                                                                            #
# Module     : BrsHw for platform ArmCommon                                                                           #
#              and Compiler GreenHills,                                                                               #
#              using Vector PES Makesupport 3.13                                                                      #
# Template   : This Makefile is reviewed according to zBrs_Template@root[2.02.00]                                     #
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
# Carlos Sanchez                viscsz        Vector Informatik GmbH                                                  #
# Benjamin Walter               visbwa        Vector Informatik GmbH                                                  #
# Tobias Mueller                vismto        Vector Informatik GmbH                                                  #
# Jens Haerer                   visjhr        Vector Informatik GmbH                                                  #
# Andreas Hahn                  vishan        Vector Informatik GmbH                                                  #
# Michael Tiran                 vismin        Vector Informatik GmbH                                                  #
# Steffen Frank                 visfsn        Vector Informatik GmbH                                                  #
# Roland Reinl                  virrro        Vector Informatik GmbH                                                  #
# Sherif Elsabbahy              vissey        Vector Informatik GmbH                                                  #
# Sascha Mauser                 vismaa        Vector Informatik GmbH                                                  #
#---------------------------------------------------------------------------------------------------------------------#
# REVISION HISTORY                                                                                                    #
#---------------------------------------------------------------------------------------------------------------------#
# Version   Date        Author  Description                                                                           #
# --------  ----------  ------  --------------------------------------------------------------------------------------#
# 01.00.00  2013-11-19  vispdr  Initial creation (adapted from zBrs_Sja2020@root[1.00.xx])                            #
# 01.00.01  2014-01-29  vispdr  Patched - (now it is really a) Global GHS Makefile                                    #
# 01.00.02  2014-03-26  viscsz  added iMX6 comment within LDFLAGS_ADDITIONAL_POST                                     #
# 02.00.00  2014-11-18  visbwa  Adaptions for new BRS code structure                                                  #
# 02.00.01  2015-01-08  visbwa  Adopted support for THUMB mode                                                        #
# 02.00.02  2015-06-15  visjhr  Added support for Option Bytes                                                        #
# 02.00.03  2015-07-09  visbwa  Review, added CONFIGURATION AREA                                                      #
# 02.00.04  2015-09-23  visbwa  Added support for S32K144                                                             #
# 02.00.05  2015-10-26  visjhr  Added BRS_INSTRUCTION_SET_x compiler switch, needed in ARMStartup.c                   #
# 02.00.06  2015-10-26  visjhr  Added support for ATSAMV7xx                                                           #
# 02.00.07  2015-12-07  visbwa  Added support for STM32L4x6                                                           #
# 02.00.08  2016-01-29  vishan  Added alternative derivative settings include                                         #
# 02.00.09  2016-02-16  vishan  Added check for RAM and RAM ETH defines                                               #
# 02.00.10  2016-03-16  visbwa  Fixed assembler version define (added dummy.asm)                                      #
# 02.00.11  2016-04-05  visbwa  Repaired Linefeed back to windows style                                               #
# 05.00.00  2016-05-11  vismin  support zBrs_MakeSupport@Implementation[3.13.xx]                                      #
# 05.00.01  2016-06-17  visbwa  Fixed assembler Arm/Thumb usage                                                       #
# 05.01.00  2016-06-22  vismin  Adapted complete file header structure for zBrs_Template@root[2.00.01]                #
# 05.01.01  2016-06-30  vismin  Removed include of  Makefile.$(DERIVATIVE).definitions (Makefile.derivative.settings!)#
# 05.01.02  2017-01-30  visfsn  Support for user linker script file, GHS driver exe used for CC,AS,LD                 #
# 05.01.03  2017-03-17  visbwa  Added support for S32K142, S32K146, S32K148, WCT1013 and WCT1014                      #
# 05.01.04  2017-03-20  vishan  Added support for CortexR7                                                            #
# 05.01.05  2017-04-26  virrro  Moved LINKER_COMMAND_FILE attribute from LINK_RULE to LDFLAGS (better NAnt support)   #
# 05.02.00  2017-04-28  vissey  Moved parts to Makefile.static, adapted to zBrs_Template@root[2.01.00]                #
#           2017-05-30  visbwa  Review                                                                                #
# 05.02.01  2017-07-21  visbwa  Update to Brs_Template 2.01.04                                                        #
# 05.02.02  2017-08-31  visbwa  Added $(COMPILER_BASE)\ansi to default compiler includes list                         #
# 05.02.03  2017-11-13  visbwa  Added support for Cortex-M4F (-cpu switch)                                            #
# 05.02.04  2018-01-03  visbwa  Added support for ArmGeneric (Derivative=GENERIC)                                     #
# 05.02.05  2018-01-18  visbwa  Added support for Cortex-R4F and Cortex-R5F (-cpu switch)                             #
# 05.02.06  2018-02-15  vismaa  Added CFLAGS_ARM_FPU_USED_x for floating point support                                #
# 05.02.07  2018-03-19  vismaa  Added diag_suppress for warning "last line of file ends without a new line "          #
# 05.02.08  2018-06-12  vismaa  Added Support for S32K116 and S32K118, add support for cortex M0PLUS                  #
#######################################################################################################################

#------------------------------------------------------------------------------
# Name of this project (dir under which the appl dir resides)
# E.g.: TestSuit
#------------------------------------------------------------------------------
PROJECT_NAME = TestSuit

#------------------------------------------------------------------------------
# More static settings placed inside separate file
#------------------------------------------------------------------------------
include Makefile.static

#------------------------------------------------------------------------------
# Define Compiler path
# E.g.: COMPILER_BASE = D:\uti\%vendor%\%platform%\%version%
#       COMPILER_BIN  = $(COMPILER_BASE)\bin
#       COMPILER_INC  = $(COMPILER_BASE)\inc
#       COMPILER_LIB  = $(COMPILER_BASE)\lib
#------------------------------------------------------------------------------
COMPILER_BASE = D:\uti\GHS\ARM\comp_201714
COMPILER_BIN  = $(COMPILER_BASE)
COMPILER_INC  = $(COMPILER_BASE)\include\arm $(COMPILER_BASE)\ansi
COMPILER_LIB  = $(COMPILER_BASE)\lib\arm4

MULTI_BASE = D:\uti\GHS\ARM\multi_714

#------------------------------------------------------------------------------
# Build Options Selection: VECTOR / CUSTOMER
#------------------------------------------------------------------------------
ASFLAGS_SELECTOR = CUSTOMER
CFLAGS_SELECTOR  = CUSTOMER
LDFLAGS_SELECTOR = CUSTOMER

#------------------------------------------------------------------------------
# Default License server and port
#------------------------------------------------------------------------------
LICENSE_SERVER = vistrlic1
LICENSE_SERVER_PORT = 2009

#------------------------------------------------------------------------------
# Define Emulator path
# E.g.: EMU_PATH = C:\UTI\HITOPWIN\P6811
#------------------------------------------------------------------------------
EMU_PATH = $(COMPILER_BASE)

#------------------------------------------------------------------------------
# Set NANT_USED to '1', to enable the usage of NAnt support within
# Global Makefile. If this is enabled, the Makesupport will include the
# NAnt support from a intranel link and the NAnt build-targets can be used.
#------------------------------------------------------------------------------
NANT_USED=1

#------------------------------------------------------------------------------
# Set MKVERBOSE to a various value, to enable enhanced debug output from 
# Makesupport. To disable this afterwards, set MKVERBOSE to nothing
# (comment out this line and type "set MKVERBOSE=" in command window)
#------------------------------------------------------------------------------
#MKVERBOSE=1

#------------------------------------------------------------------------------
# Set BRSVINFO_USED to '1', to enable the generation of BrsVInfo.h within the
# GenData folder by the Makesupport.
# The BrsVInfo.h will contain e.g. kBrsCompilerVersion, to use this 
# information within the embedded code.
#------------------------------------------------------------------------------
#BRSVINFO_USED=1

#------------------------------------------------------------------------------
# Turn off strict c setting for dependency generation
#------------------------------------------------------------------------------
#STRICT_C_OFF=1

#------------------------------------------------------------------------------
# Set DELETE_DLD to '1', to enable the deleting of previously 
# generated/outdated Linker-script file, before every new linkage request.
#------------------------------------------------------------------------------
#DELETE_DLD=1

#------------------------------------------------------------------------------
# Set NEW_DEPENDENCY_FORMAT to '1' to enable parallel creation of dependencies.
# You have to ensure that you call m.bat with -jX to use this feature.
#------------------------------------------------------------------------------
NEW_DEPENDENCY_FORMAT=1

#------------------------------------------------------------------------------
# If you want to use code analysis tools like PC-Lint or QAC,
# configure them within Makefile.analysis (part of global-make-package)
# and include this file here
#------------------------------------------------------------------------------
#include Makefile.analysis

#------------------------------------------------------------------------------
# Dependency defines
# These defines are used for the GNU-Preprocessor,
# e.g.: BRS_TIMEBASE_CLOCK=$(TIMEBASE_CLOCK)
#------------------------------------------------------------------------------
DEP_DEFINES = BRS_DERIVATIVE_$(DERIVATIVE)                       \
              BRS_OSC_CLK=$(MAIN_OSC_CLK)                        \
              BRS_TIMEBASE_CLOCK=$(TIMEBASE_CLOCK)               \
              BRS_OS_USECASE_$(OS_USECASE)                       \
              BRS_EVA_BOARD_$(EVA_BOARD)                         \
              BRS_CPU_CORE_$(CPU_CORE)                           \
              BRS_PROGRAM_CODE_LOCATION_$(PROGRAM_CODE_LOCATION) \
              BRS_VECTOR_TABLE_LOCATION_$(VECTOR_TABLE_LOCATION) \
              BRS_STACK_SIZE=$(STACKSIZE)                        \
              BRS_PLATFORM_$(PLATFORM)                           \
              BRS_COMP_$(COMPILER_MANUFACTURER)                  \
              BRS_INSTRUCTION_SET_$(INSTRUCTION_SET)             \
              $(BRS_OPTBYTES_ADR_DEFINE)                         \
              $(BRS_RAM_SIZE_DEFINE)                             \
              $(BRS_RAM_MAPPING_DEFINE)                          \
              $(BRS_RAM_ETH_SIZE_DEFINE)                         \
              $(BRS_RAM_ETH_MAPPING_DEFINE)

#------------------------------------------------------------------------------
#                     CPU-core-specific CFLAGS option list
# Reference : MULTI v6.1.4 - Compiler v2013.1.4
#------------------------------------------------------------------------------
CPU_SWITCH_ARM7           = arm7tm
CPU_SWITCH_ARM9           = arm9
CPU_SWITCH_ARM11          = arm11
CPU_SWITCH_CORTEX_M0      = cortexm0
CPU_SWITCH_CORTEX_M0PLUS  = cortexm0plus
CPU_SWITCH_CORTEX_M3      = cortexm3
CPU_SWITCH_CORTEX_M4      = cortexm4
CPU_SWITCH_CORTEX_M4F     = cortexm4f

# set cortexm7 to cortexm4 when compiler does not support it
CPU_SWITCH_CORTEX_M7  = cortexm7

CPU_SWITCH_CORTEX_A5  = cortexa5
CPU_SWITCH_CORTEX_A7  = cortexa7
CPU_SWITCH_CORTEX_A8  = cortexa8
CPU_SWITCH_CORTEX_A9  = cortexa9
CPU_SWITCH_CORTEX_A15 = cortexa15
CPU_SWITCH_CORTEX_R4  = cortexr4
CPU_SWITCH_CORTEX_R4F = cortexr4f
CPU_SWITCH_CORTEX_R5  = cortexr5
CPU_SWITCH_CORTEX_R5F = cortexr5f
CPU_SWITCH_CORTEX_R7  = cortexr7

ifeq ($(CPU_SWITCH_$(CPU_CORE)),)
 $(warning COMPILERFLAGERROR: The compiler option (-cpu=<value>) is not defined!)
endif

#------------------------------------------------------------------------------
# $(AS_ENV) is the environment necessary to run the assembler
# $(AS) defines the path to the assembler
# $(ASFLAGS_VECTOR_MAKESUPPORT) defines all assembler switches, mandatory for
#                               the Vector build environment (Makesupport/BrsHw)
# $(ASFLAGS_VECTOR_OPTIONS) defines the Vector default assembler switches
# $(ASFLAGS_CUSTOMER_OPTIONS) defines the customer requested assembler switches
# Depending of ASFLAGS_SELECTOR, ASFLAGS_VECTOR_OPTIONS or ASFLAGS_CUSTOMER_OPTIONS
# are used together with ASFLAGS_VECTOR_MAKESUPPORT for Build.
#------------------------------------------------------------------------------
AS_ENV  = $(CC_ENV)
AS      = $(CC)

#Please add only absolutely mandatory options below
#-preprocess_assembly_files is necessary for asm files that use "#define"
ASFLAGS_VECTOR_MAKESUPPORT = $(CFLAGS_VECTOR_MAKESUPPORT) \
                             -preprocess_assembly_files

#Please add any other option below (vector default options)
ASFLAGS_VECTOR_OPTIONS = $(CFLAGS_VECTOR_OPTIONS) \
                         -asm3g                   \
                         -I $(ROOT)\BSW\Os        \
                         -I Gendata

#Please enter all customer options below
ASFLAGS_CUSTOMER_OPTIONS = 	$(CFLAGS_CUSTOMER_OPTIONS) 	\
							-cpu=cortexm4 				\ 
							-noobj 						\
							--long_long 				\
							-G 							\
							-dual_debug 				\
							-farcalls 					\
							-dwarf2 					\
							-no_misalign_pack 			\
							-nostartfiles				\
							-act_like=2015.1 			\
							-pragma_asm_inline 			\
							-thumb 						\
							-thumb_lib 					\
							-Osize 						\
							-object_dir=$(BUILD_PATH) 	\
							-e Startup_Handler 			\
							-preprocess_assembly_files

#------------------------------------------------------------------------------
# $(ASVERSION) defines the assembler switch for version report
# E.g.: ASVERSION = -V
#------------------------------------------------------------------------------
ASVERSION = -V dummy.asm

#------------------------------------------------------------------------------
# $(AS_LC) defines the number of lines used for assembler version information
# in BrsVinfo.h and Deliverydescription (default is 5)
#------------------------------------------------------------------------------
AS_LC = 5

#------------------------------------------------------------------------------
#------------------------- MUST be filled out ---------------------------------
# $(CC_ENV) is the environment necessary to run the compiler
# $(CC) defines the path to the C-Compiler
# $(CFLAGS_VECTOR_MAKESUPPORT) defines all compiler switches, mandatory for
#                               the Vector build environment (Makesupport/BrsHw)
# $(CFLAGS_VECTOR_OPTIONS) defines the Vector default compiler switches
# $(CFLAGS_CUSTOMER_OPTIONS) defines the customer requested compiler switches
# Depending of CFLAGS_SELECTOR, CFLAGS_VECTOR_OPTIONS or CFLAGS_CUSTOMER_OPTIONS
# are used together with CFLAGS_VECTOR_MAKESUPPORT for Build.
#------------------------------------------------------------------------------
# Options: (Not all options apply to all languages or targets).
# -a                Compile for code coverage analysis by Multi.
# -archive          Create a library archive for use with linker.
# --arm             Set the C/C++ Compiler Language Dialect option to Standard C
# -asm=<args>       Pass <args> directly to the assembler.
# -[no]bigswitch    Allow large switch statements.
# -c                Produce object files, but do not link.
# -check            Run-Time error checking. Possible Parameters:
#                   --> none,all,[no]bound,[no]nilderef,[no]switch,[no]assignbound,[no]zerodivide. 
#                   The compiler generates runtime checks for the items requested.
# -cpu              To specify a target processor with the driver, pass the -cpu=cpu option.
# -D<name>[=<val>]  In C, C++: define <name> with value <val>. (Preprocessor-MACRO)
# --diag_suppress   Sets the specified diagnostics message to the level of silent.
# -dual_debug       DWARF debugging information
# -dwarf2           Enables the generation of DWARF debugging information in the object file 
#                   (in addition to the Green Hills .dbo format)
# -E                In C, C++: preprocess file and send result to stdout.
# -entry=symbol     Set the entry point in the linker output.
# -farcalls         This option instructs the compiler to generate a far function call for every call
#                     An ARM mode function call is normally performed with an instruction that contains
#                     a 24-bit value that is shifted left by 2 and is added to the address of the current
#                     instruction to yield the address of the called function.
# -fsoft            Use software floating point.
# -fnone            In C, C++: Give syntax errors for floating point usage
# -G                Generate information for MULTI debugger.
# -H                Print names of included headers to stderr.
# -I<dir>           Passed to compiler to add <dir> to include search path.
# -L<dir>           Passed to linker to add <dir> to library search path.
# -l<name>          Passed to linker to look for library lib<name>.a.
# --long_long       [default] Support the long long data type.
# -lnk=<arg>        Pass <arg> directly to linker.
# -list[=name]      Assembler will produce a listing file.
# -list/<type>      For Ada95, generate the requested listing.
# -map[=name]       Linker will produce a map file.
# -nofloatio        Use printf, scanf without %e %f %g in libansi.
# -nostartfiles     Do not add start-up files to link
# -no_misalign_pack  The compiler generates extra code to handle misaligned data accesses.
# -nostdlib         Do not add start-up files or libraries to link
# -o name           Name final output file.
# -Ospeed           Optimize for speed, even if code is larger.
# -Ospace           Optimize for smaller code, even if it is slower.
# -O                Turn on general optimizations
# -object_dir="my"  Put object files in ./my
# -OI               Expand routines inline rather than generating calls.
# -OI=name,...      Inline only the named routines.
# -OL               Optimize loops, including loop unrolling.
# -Onopeep          Turn off peephole optimization.
# -P                In C, C++: preprocess into file.i and stop.
# -p                Compile for call count profiling.
# -pg               Compile for call count and call graph profiling.
# -passsource       Pass compiler source lines into assembly file.
# -S                Produce assembly files, and stop.
# -syntax           Compilers will check syntax but not generate code.
# -thumb            Enables Thumb mode. This option is the default for Thumb-only processors (Cortex M family)
# -U<name>          In C, C++: undefine the macro <name>.
# -v                Print all commands before they are executed.
# -w                Suppress compiler, assembler, and linker warning messages.
# -#                Print all commands INSTEAD of executing them.
#------------------------------------------------------------------------------
CC_ENV  = export GHS_LMHOST=@$(LICENSE_SERVER); \
          export GHS_LMWHICH="ghs";
ifeq ($(INSTRUCTION_SET),THUMB)
CC      = $(COMPILER_BIN)\ccthumb.exe
else
CC      = $(COMPILER_BIN)\ccarm.exe
endif

#Please add only absolutely mandatory options below
CFLAGS_VECTOR_MAKESUPPORT = -DBRS_DERIVATIVE_$(DERIVATIVE)                       \
                            -DBRS_OSC_CLK=$(MAIN_OSC_CLK)                        \
                            -DBRS_TIMEBASE_CLOCK=$(TIMEBASE_CLOCK)               \
                            -DBRS_OS_USECASE_$(OS_USECASE)                       \
                            -DBRS_EVA_BOARD_$(EVA_BOARD)                         \
                            -DBRS_PROGRAM_CODE_LOCATION_$(PROGRAM_CODE_LOCATION) \
                            -DBRS_VECTOR_TABLE_LOCATION_$(VECTOR_TABLE_LOCATION) \
                            -DBRS_CPU_CORE_$(CPU_CORE)                           \
                            -DBRS_STACK_SIZE=$(STACKSIZE)                        \
                            -DBRS_PLATFORM_$(PLATFORM)                           \
                            -DBRS_COMP_$(COMPILER_MANUFACTURER)                  \
                            -DBRS_INSTRUCTION_SET_$(INSTRUCTION_SET)             \
                            $(BRS_OPTBYTES_ADR_DEFINE_COMP)                      \
                            $(BRS_RAM_ETH_SIZE_DEFINE_COMP)                      \
                            $(BRS_RAM_ETH_MAPPING_DEFINE_COMP)                   \
                            $(BRS_RAM_SIZE_DEFINE_COMP)                          \
                            $(BRS_RAM_MAPPING_DEFINE_COMP)                       \
                            -c                                                   \
                            -object_dir=$(OBJ_PATH)                              \
                            -list=$(LST_PATH)/$*.lst                             \
                            --diag_suppress=1

CFLAGS_ARM   = --arm
CFLAGS_THUMB = -thumb

CFLAGS_ARM_FPU_USED_1 = -fhard
CFLAGS_ARM_FPU_USED_0 = 

#Please add any other option below (vector default options)
CFLAGS_VECTOR_OPTIONS = -cpu=$(CPU_SWITCH_$(CPU_CORE)) \
                        -noobj                         \
                        --long_long                    \
                        -G                             \
                        -dual_debug                    \
                        -farcalls                      \
                        -dwarf2                        \
                        -no_misalign_pack              \
                        -nostartfiles                  \
                        -pragma_asm_inline             \
                        $(CFLAGS_$(INSTRUCTION_SET))   \
                        -Onone                         \
                        $(CFLAGS_ARM_FPU_USED_$(ARM_FPU_USED))

#Please enter all customer options below
CFLAGS_CUSTOMER_OPTIONS = -cpu=cortexm4 			\
                          -noobj 					\
                          --long_long 				\
                          -G 						\
                          -dual_debug 				\
                          -farcalls 				\
                          -dwarf2 					\
                          -no_misalign_pack 		\
                          -nostartfiles 			\
                          -act_like=2015.1 			\
                          -pragma_asm_inline		\
                          -thumb 					\
                          -thumb_lib 				\
                          -Osize 					\
                          -object_dir=$(BUILD_PATH) \
                          -e Startup_Handler     

#------------------------------------------------------------------------------
# $(CVERSION) defines the compiler switch for version report
# E.g.: CVERSION = -V
#------------------------------------------------------------------------------
CVERSION = -V dummy.c

#------------------------------------------------------------------------------
# $(CC_LC) defines the number of lines used for compiler version information
# in BrsVinfo.h and Deliverydescription (default is 5)
#------------------------------------------------------------------------------
CC_LC = 6

#------------------------------------------------------------------------------
# $(CINC) defines the include switch of the used compiler.
# E.g.: COSMIC Compiler use: CINC = -i
#------------------------------------------------------------------------------
CINC = -I

#------------------------------------------------------------------------------
#------------------------- MUST be filled out ---------------------------------
# $(LD_ENV) is the environment necessary to run the linker
# $(LD) defines the path linker
# $(LDFLAGS_VECTOR_MAKESUPPORT) defines all linker switches, mandatory for
#                               the Vector build environment (Makesupport/BrsHw)
# $(LDFLAGS_VECTOR_OPTIONS) defines the Vector default linker switches
# $(LDFLAGS_CUSTOMER_OPTIONS) defines the customer requested linker switches
# Depending of LDFLAGS_SELECTOR, LDFLAGS_VECTOR_OPTIONS or LDFLAGS_CUSTOMER_OPTIONS
# are used together with LDFLAGS_VECTOR_MAKESUPPORT for Build.
#------------------------------------------------------------------------------
# -Bstatic 		    Do not link against shared libraries.
# -cpu            To specify a target processor with the driver, pass the -cpu=cpu option.
# -dual_debug     Enables the generation of DWARF, COFF, or BSD debugging information in
#                 the object file (in addition to the Green Hills .dbo format),
#                 according to the convention for your target
# -e=<symbol>     Change entry point to <symbol>.
# -G              Generate information for MULTI debugger.
# -hex             Generates output file in HEX386 format with .run extension
# -keepmap        Controls the retention (dt. Aufrechterhaltung) of the map file in the event of a link error
# -Map=<mapfile>	Print a link map to the file mapfile.		
# -nostartfiles   Do Not Use Start Files 
# -o <file> 		  Place output in file <file>.
# -T <scriptfile>	Use scriptfi le as the linker script.
#------------------------------------------------------------------------------
LD_ENV  = $(CC_ENV)
LD      = $(CC)

ifeq ($(findstring $(DERIVATIVE),GENERIC STM32F04x STM32F107 STM32L4x6 S32K116 S32K118 S32K142 S32K144 S32K146 S32K148 WCT1013 WCT1014 ATSAMV71Q21 ATSAMV70Q20 ATSAMC21J18 ATSAMC21E17 ATSAMV71N21),)
 ifeq ($(CPU_CORE),$(filter $(CPU_CORE),CORTEX_M0 CORTEX_M0PLUS CORTEX_M3 CORTEX_M4 CORTEX_M7))
  ##########################################################################################
  # If you're using a Cortex-M, the 1st Inst. might be a "PUSH", but you don't have        #
  # an initialized stackpointer (sp). So you'll have to start @ "Startup_Handler+2",       #
  # where "Startup_Handler+2" is an absolute address, which can be taken from the MAP-File #
  ##########################################################################################
  LDFLAGS_STARTUP_HANDLER  = -e=0x________
  #For iMX6, also this code was sufficient:
  #LDFLAGS_ADDITIONAL_POST += -e=Startup_Handler
 else
  LDFLAGS_STARTUP_HANDLER  = -e=Startup_Handler
 endif
endif

#Please add only absolutely mandatory options below
LDFLAGS_VECTOR_MAKESUPPORT = --preprocess_linker_directive_full \
                             -nostartfiles                      \
                             $(LDFLAGS_STARTUP_HANDLER)         \
                             -map=$(PROJECT_NAME).map           \
                             $(LINKER_COMMAND_FILE)             \
                             -o $*.$(BINARY_SUFFIX)

#Please add any other option below (vector default options)
LDFLAGS_VECTOR_OPTIONS =  -cpu=$(CPU_SWITCH_$(CPU_CORE)) \
                          -pragma_asm_inline             \
                          -g                             \
                          -keepmap                       \
                          -dual_debug                    \
                          -hex

#Please enter all customer options below
LDFLAGS_CUSTOMER_OPTIONS =  -cpu=cortexm4		\
							-pragma_asm_inline 	\
							-thumb -thumb_lib 	\
							-g 					\
							-keepmap 			\
							-dual_debug 		\
							-hex

#------------------------------------------------------------------------------
# $(LDVERSION) defines the linker switch for version report
# E.g.: LDVERSION = -v
#------------------------------------------------------------------------------
LDVERSION = $(CVERSION)

#------------------------------------------------------------------------------
# $(LD_LC) defines the number of lines used for linker version information
# in BrsVinfo.h and Deliverydescription (default is 5)
#------------------------------------------------------------------------------
LD_LC = $(CC_LC)

#------------------------------------------------------------------------------
#------------------------- MUST be filled out ---------------------------------
# $(LB_ENV) is the environment necessary to run the librarian
# $(LB) defines the path to the C-librarian
# $(LBFLAGS) defines all librarian switches
#------------------------------------------------------------------------------
# Invoce ccarm.exe with option -archive.
# Modifying Libraries with Advanced Options
# :archive.args=-options
# 
# c Suppresses warnings when creating a library that did not exist.
# C Ignores the existing library.
# e Prefixes messages with ERROR or WARNING. Equivalent to the
#   compiler driver option -prefixed_msgs.
# o Keeps original timestamps when extracting files from a library.
# s Regenerates the table of contents; use with -t.
# S Prevents the creation of a table of contents.
# v Prints verbose messages when executing a command.
#------------------------------------------------------------------------------
LB_ENV  = $(LD_ENV)
LB      = $(LD)

LBFLAGS = :archiver.args=-c \
          -archive          \
          -o $@

#------------------------------------------------------------------------------
# $(LBVERSION) defines the archiver switch for version report
# E.g.: LBVERSION = -v
#------------------------------------------------------------------------------
LBVERSION = $(LDVERSION)

#------------------------------------------------------------------------------
# $(LB_LC) defines the number of lines used for librarian version information
# in BrsVinfo.h
#------------------------------------------------------------------------------
LB_LC = $(LD_LC)

#------------------------------------------------------------------------------
# Additional includes essentially for compilation
#------------------------------------------------------------------------------
ADDITIONAL_INCLUDES +=

#------------------------------------------------------------------------------
# Additional objects essentially for linking
# E.g.: ADDITIONAL_OBJECTS = $(OBJ_PATH)\myobject.$(OBJ_SUFFIX)
#------------------------------------------------------------------------------
ADDITIONAL_OBJECTS +=

#------------------------------------------------------------------------------
# List of assembler source files
# E.g.: ASM_SOURCES = source\startup.$(ASM_SUFFIX)
#------------------------------------------------------------------------------
ASM_SOURCES +=

#------------------------------------------------------------------------------
# Add Startup code to application source list
# E.g.: APP_SOURCE_LST += source\startup.c
#------------------------------------------------------------------------------
APP_SOURCE_LST +=

#------------------------------------------------------------------------------
# Check if all necessary variables are set
# (Checks that are not possible to be performed within Makefile.static)
#------------------------------------------------------------------------------

###############################################################################
######### DO NOT remove these lines from the end of the Makefile!!! ###########
###############################################################################

#------------------------------------------------------------------------------
# Platform/compiler/derivative/emulator dependant makefile is included here
# It defines a rule to generate the linker and a rule to generate the
# symbol preprocessor command file.
# A template for this Makefile can be found under
#     R:\Can_Base\CANtate\BRS\PlatformSpecific\...\OrganiAndMake\...
#------------------------------------------------------------------------------
include Makefile.$(PLATFORM).$(COMPILER_MANUFACTURER).$(EMULATOR).make

#------------------------------------------------------------------------------
# Include the main makefile where all the targets are defined
#------------------------------------------------------------------------------
include $(MAKESUPPORT_DIR)\Global.Makefile.target.make.$(VERSION)

#End of Makefile
