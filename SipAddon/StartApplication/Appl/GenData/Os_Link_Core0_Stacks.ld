/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                 This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                 Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                 All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  LICENSE
 *  -------------------------------------------------------------------------------------------------------------------
 *            Module: Os
 *           Program: MSR_Vector_SLP4
 *          Customer: Harman International (China) Holdings Co., Ltd.
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: FS32K148UAT0VLQR
 *    License Scope : The usage is restricted to CBD1800257_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Os_Link_Core0_Stacks.ld
 *   Generation Time: 2018-11-27 15:30:02
 *           Project: TsiStandard - Version 1
 *          Delivery: CBD1800257_D01
 *      Tool Version: DaVinci Configurator  5.18.37 SP1
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  STACK SECTIONS
 *********************************************************************************************************************/

#if defined ( OS_LINK_KERNEL_STACKS )
_OS_CORE0_STACKS_START = .;
__OS_CORE0_STACKS_START = .;

/* Stack: Default_Appl_Task (2048 Byte) */
.OS_STACK_DEFAULT_APPL_TASK_VAR_NOINIT ALIGN(32) :> .
_OS_STACK_DEFAULT_APPL_TASK_VAR_NOINIT_START = ADDR(.OS_STACK_DEFAULT_APPL_TASK_VAR_NOINIT);
_OS_STACK_DEFAULT_APPL_TASK_VAR_NOINIT_END = ENDADDR(.OS_STACK_DEFAULT_APPL_TASK_VAR_NOINIT) - 1;

/* Stack: Default_BSW_Async_Task (4096 Byte) */
.OS_STACK_DEFAULT_BSW_ASYNC_TASK_VAR_NOINIT ALIGN(32) :> .
_OS_STACK_DEFAULT_BSW_ASYNC_TASK_VAR_NOINIT_START = ADDR(.OS_STACK_DEFAULT_BSW_ASYNC_TASK_VAR_NOINIT);
_OS_STACK_DEFAULT_BSW_ASYNC_TASK_VAR_NOINIT_END = ENDADDR(.OS_STACK_DEFAULT_BSW_ASYNC_TASK_VAR_NOINIT) - 1;

/* Stack: OsCore0_Error (1024 Byte) */
.OS_STACK_OSCORE0_ERROR_VAR_NOINIT ALIGN(32) :> .
_OS_STACK_OSCORE0_ERROR_VAR_NOINIT_START = ADDR(.OS_STACK_OSCORE0_ERROR_VAR_NOINIT);
_OS_STACK_OSCORE0_ERROR_VAR_NOINIT_END = ENDADDR(.OS_STACK_OSCORE0_ERROR_VAR_NOINIT) - 1;

/* Stack: OsCore0_Init (2048 Byte) */
.OS_STACK_OSCORE0_INIT_VAR_NOINIT ALIGN(32) :> .
_OS_STACK_OSCORE0_INIT_VAR_NOINIT_START = ADDR(.OS_STACK_OSCORE0_INIT_VAR_NOINIT);
_OS_STACK_OSCORE0_INIT_VAR_NOINIT_END = ENDADDR(.OS_STACK_OSCORE0_INIT_VAR_NOINIT) - 1;

/* Stack: OsCore0_Isr_Core (1024 Byte) */
.OS_STACK_OSCORE0_ISR_CORE_VAR_NOINIT ALIGN(32) :> .
_OS_STACK_OSCORE0_ISR_CORE_VAR_NOINIT_START = ADDR(.OS_STACK_OSCORE0_ISR_CORE_VAR_NOINIT);
_OS_STACK_OSCORE0_ISR_CORE_VAR_NOINIT_END = ENDADDR(.OS_STACK_OSCORE0_ISR_CORE_VAR_NOINIT) - 1;

/* Stack: OsCore0_Kernel (1024 Byte) */
.OS_STACK_OSCORE0_KERNEL_VAR_NOINIT ALIGN(32) :> .
_OS_STACK_OSCORE0_KERNEL_VAR_NOINIT_START = ADDR(.OS_STACK_OSCORE0_KERNEL_VAR_NOINIT);
_OS_STACK_OSCORE0_KERNEL_VAR_NOINIT_END = ENDADDR(.OS_STACK_OSCORE0_KERNEL_VAR_NOINIT) - 1;

/* Stack: OsCore0_Protection (1024 Byte) */
.OS_STACK_OSCORE0_PROTECTION_VAR_NOINIT ALIGN(32) :> .
_OS_STACK_OSCORE0_PROTECTION_VAR_NOINIT_START = ADDR(.OS_STACK_OSCORE0_PROTECTION_VAR_NOINIT);
_OS_STACK_OSCORE0_PROTECTION_VAR_NOINIT_END = ENDADDR(.OS_STACK_OSCORE0_PROTECTION_VAR_NOINIT) - 1;

/* Stack: OsCore0_Task_Prio10 (1024 Byte) */
.OS_STACK_OSCORE0_TASK_PRIO10_VAR_NOINIT ALIGN(32) :> .
_OS_STACK_OSCORE0_TASK_PRIO10_VAR_NOINIT_START = ADDR(.OS_STACK_OSCORE0_TASK_PRIO10_VAR_NOINIT);
_OS_STACK_OSCORE0_TASK_PRIO10_VAR_NOINIT_END = ENDADDR(.OS_STACK_OSCORE0_TASK_PRIO10_VAR_NOINIT) - 1;

/* Stack: OsCore0_Task_Prio30 (1024 Byte) */
.OS_STACK_OSCORE0_TASK_PRIO30_VAR_NOINIT ALIGN(32) :> .
_OS_STACK_OSCORE0_TASK_PRIO30_VAR_NOINIT_START = ADDR(.OS_STACK_OSCORE0_TASK_PRIO30_VAR_NOINIT);
_OS_STACK_OSCORE0_TASK_PRIO30_VAR_NOINIT_END = ENDADDR(.OS_STACK_OSCORE0_TASK_PRIO30_VAR_NOINIT) - 1;

/* Stack: OsCore0_Task_Prio40 (1024 Byte) */
.OS_STACK_OSCORE0_TASK_PRIO40_VAR_NOINIT ALIGN(32) :> .
_OS_STACK_OSCORE0_TASK_PRIO40_VAR_NOINIT_START = ADDR(.OS_STACK_OSCORE0_TASK_PRIO40_VAR_NOINIT);
_OS_STACK_OSCORE0_TASK_PRIO40_VAR_NOINIT_END = ENDADDR(.OS_STACK_OSCORE0_TASK_PRIO40_VAR_NOINIT) - 1;

/* Stack: OsCore0_Task_Prio4294967295 (1024 Byte) */
.OS_STACK_OSCORE0_TASK_PRIO4294967295_VAR_NOINIT ALIGN(32) :> .
_OS_STACK_OSCORE0_TASK_PRIO4294967295_VAR_NOINIT_START = ADDR(.OS_STACK_OSCORE0_TASK_PRIO4294967295_VAR_NOINIT);
_OS_STACK_OSCORE0_TASK_PRIO4294967295_VAR_NOINIT_END = ENDADDR(.OS_STACK_OSCORE0_TASK_PRIO4294967295_VAR_NOINIT) - 1;

/* Stack: OsCore0_Task_Prio45 (1024 Byte) */
.OS_STACK_OSCORE0_TASK_PRIO45_VAR_NOINIT ALIGN(32) :> .
_OS_STACK_OSCORE0_TASK_PRIO45_VAR_NOINIT_START = ADDR(.OS_STACK_OSCORE0_TASK_PRIO45_VAR_NOINIT);
_OS_STACK_OSCORE0_TASK_PRIO45_VAR_NOINIT_END = ENDADDR(.OS_STACK_OSCORE0_TASK_PRIO45_VAR_NOINIT) - 1;

/* Stack: OsCore0_Task_Prio5 (1024 Byte) */
.OS_STACK_OSCORE0_TASK_PRIO5_VAR_NOINIT ALIGN(32) :> .
_OS_STACK_OSCORE0_TASK_PRIO5_VAR_NOINIT_START = ADDR(.OS_STACK_OSCORE0_TASK_PRIO5_VAR_NOINIT);
_OS_STACK_OSCORE0_TASK_PRIO5_VAR_NOINIT_END = ENDADDR(.OS_STACK_OSCORE0_TASK_PRIO5_VAR_NOINIT) - 1;

/* Stack: OsCore0_Task_Prio50 (2048 Byte) */
.OS_STACK_OSCORE0_TASK_PRIO50_VAR_NOINIT ALIGN(32) :> .
_OS_STACK_OSCORE0_TASK_PRIO50_VAR_NOINIT_START = ADDR(.OS_STACK_OSCORE0_TASK_PRIO50_VAR_NOINIT);
_OS_STACK_OSCORE0_TASK_PRIO50_VAR_NOINIT_END = ENDADDR(.OS_STACK_OSCORE0_TASK_PRIO50_VAR_NOINIT) - 1;



_OS_CORE0_STACKS_END = .-1;
__OS_CORE0_STACKS_END = .-1;
#endif

#ifdef OS_LINK_KERNEL_STACKS
# undef OS_LINK_KERNEL_STACKS
#endif


