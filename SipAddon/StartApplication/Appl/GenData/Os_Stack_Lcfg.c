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
 *              File: Os_Stack_Lcfg.c
 *   Generation Time: 2018-11-27 15:30:02
 *           Project: TsiStandard - Version 1
 *          Delivery: CBD1800257_D01
 *      Tool Version: DaVinci Configurator  5.18.37 SP1
 *
 *
 *********************************************************************************************************************/

/* PRQA S 0777, 0779, 0810, 0828, 0857 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779, MD_MSR_1.1_810, MD_MSR_1.1_828, MD_MSR_1.1_857 */

#define OS_STACK_LCFG_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
#include "Std_Types.h"

/* Os module declarations */
#include "Os_Stack_Cfg.h"
#include "Os_Stack_Lcfg.h"
#include "Os_Stack.h"

/* Os kernel module dependencies */

/* Os hal dependencies */


/**********************************************************************************************************************
 *  LOCAL CONSTANT MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTION MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/

#define OS_START_SEC_STACK_DEFAULT_APPL_TASK_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Task stack: Default_Appl_Task */
/* User: [Default_Appl_Task] */
OS_STACK_DECLARE(OsCfg_Stack_Default_Appl_Task_Dyn, OS_CFG_SIZE_DEFAULT_APPL_TASK_STACK);

#define OS_STOP_SEC_STACK_DEFAULT_APPL_TASK_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define OS_START_SEC_STACK_DEFAULT_BSW_ASYNC_TASK_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Task stack: Default_BSW_Async_Task */
/* User: [Default_BSW_Async_Task] */
OS_STACK_DECLARE(OsCfg_Stack_Default_BSW_Async_Task_Dyn, OS_CFG_SIZE_DEFAULT_BSW_ASYNC_TASK_STACK);

#define OS_STOP_SEC_STACK_DEFAULT_BSW_ASYNC_TASK_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define OS_START_SEC_STACK_OSCORE0_ERROR_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Core error stack: OsCore0_Error */
/* User: [ErrorHook_OsCore0, OsCore0] */
OS_STACK_DECLARE(OsCfg_Stack_OsCore0_Error_Dyn, OS_CFG_SIZE_OSCORE0_ERROR_STACK);

#define OS_STOP_SEC_STACK_OSCORE0_ERROR_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define OS_START_SEC_STACK_OSCORE0_INIT_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Core init stack: OsCore0_Init */
/* User: [OsCore0, Os_CoreInitHook_OsCore0] */
OS_STACK_DECLARE(OsCfg_Stack_OsCore0_Init_Dyn, OS_CFG_SIZE_OSCORE0_INIT_STACK);

#define OS_STOP_SEC_STACK_OSCORE0_INIT_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define OS_START_SEC_STACK_OSCORE0_ISR_CORE_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* ISR core global stack: OsCore0_Isr_Core */
/* User: [CanIsr_0_BusOff, CanIsr_0_MB00To15, CanIsr_0_MB16To31, CounterIsr_SystemTimer, FTM_0_CH_0_CH_1_ISR] */
OS_STACK_DECLARE(OsCfg_Stack_OsCore0_Isr_Core_Dyn, OS_CFG_SIZE_OSCORE0_ISR_CORE_STACK);

#define OS_STOP_SEC_STACK_OSCORE0_ISR_CORE_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define OS_START_SEC_STACK_OSCORE0_KERNEL_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Core kernel stack: OsCore0_Kernel */
/* User: [OsCore0] */
OS_STACK_DECLARE(OsCfg_Stack_OsCore0_Kernel_Dyn, OS_CFG_SIZE_OSCORE0_KERNEL_STACK);

#define OS_STOP_SEC_STACK_OSCORE0_KERNEL_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define OS_START_SEC_STACK_OSCORE0_PROTECTION_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Core protection stack: OsCore0_Protection */
/* User: [OsCore0, ProtectionHook_OsCore0] */
OS_STACK_DECLARE(OsCfg_Stack_OsCore0_Protection_Dyn, OS_CFG_SIZE_OSCORE0_PROTECTION_STACK);

#define OS_STOP_SEC_STACK_OSCORE0_PROTECTION_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define OS_START_SEC_STACK_OSCORE0_TASK_PRIO10_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Shared Task stack: OsCore0_Task_Prio10 */
/* User: [Default_RTE_Mode_switch_Task] */
OS_STACK_DECLARE(OsCfg_Stack_OsCore0_Task_Prio10_Dyn, OS_CFG_SIZE_OSCORE0_TASK_PRIO10_STACK);

#define OS_STOP_SEC_STACK_OSCORE0_TASK_PRIO10_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define OS_START_SEC_STACK_OSCORE0_TASK_PRIO30_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Shared Task stack: OsCore0_Task_Prio30 */
/* User: [OsTask_WdgM_Cyclic] */
OS_STACK_DECLARE(OsCfg_Stack_OsCore0_Task_Prio30_Dyn, OS_CFG_SIZE_OSCORE0_TASK_PRIO30_STACK);

#define OS_STOP_SEC_STACK_OSCORE0_TASK_PRIO30_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define OS_START_SEC_STACK_OSCORE0_TASK_PRIO40_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Shared Task stack: OsCore0_Task_Prio40 */
/* User: [Default_BSW_Sync_Task] */
OS_STACK_DECLARE(OsCfg_Stack_OsCore0_Task_Prio40_Dyn, OS_CFG_SIZE_OSCORE0_TASK_PRIO40_STACK);

#define OS_STOP_SEC_STACK_OSCORE0_TASK_PRIO40_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define OS_START_SEC_STACK_OSCORE0_TASK_PRIO4294967295_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Shared Task stack: OsCore0_Task_Prio4294967295 */
/* User: [IdleTask_OsCore0] */
OS_STACK_DECLARE(OsCfg_Stack_OsCore0_Task_Prio4294967295_Dyn, OS_CFG_SIZE_OSCORE0_TASK_PRIO4294967295_STACK);

#define OS_STOP_SEC_STACK_OSCORE0_TASK_PRIO4294967295_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define OS_START_SEC_STACK_OSCORE0_TASK_PRIO45_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Shared Task stack: OsCore0_Task_Prio45 */
/* User: [Default_Appl_Init_Task] */
OS_STACK_DECLARE(OsCfg_Stack_OsCore0_Task_Prio45_Dyn, OS_CFG_SIZE_OSCORE0_TASK_PRIO45_STACK);

#define OS_STOP_SEC_STACK_OSCORE0_TASK_PRIO45_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define OS_START_SEC_STACK_OSCORE0_TASK_PRIO5_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Shared Task stack: OsCore0_Task_Prio5 */
/* User: [StartApplication_MemoryViolation_Task, StartApplication_Trusted_Task] */
OS_STACK_DECLARE(OsCfg_Stack_OsCore0_Task_Prio5_Dyn, OS_CFG_SIZE_OSCORE0_TASK_PRIO5_STACK);

#define OS_STOP_SEC_STACK_OSCORE0_TASK_PRIO5_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define OS_START_SEC_STACK_OSCORE0_TASK_PRIO50_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Shared Task stack: OsCore0_Task_Prio50 */
/* User: [Default_Init_Task] */
OS_STACK_DECLARE(OsCfg_Stack_OsCore0_Task_Prio50_Dyn, OS_CFG_SIZE_OSCORE0_TASK_PRIO50_STACK);

#define OS_STOP_SEC_STACK_OSCORE0_TASK_PRIO50_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_Stacks.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *  GLOBAL CONSTANT DATA
 *********************************************************************************************************************/

#define OS_START_SEC_CORE0_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! Stack configuration data: Default_Appl_Task */
CONST(Os_StackConfigType, OS_CONST) OsCfg_Stack_Default_Appl_Task =
{
  /* .LowAddress  = */ OS_STACK_GETLOWADDRESS(OsCfg_Stack_Default_Appl_Task_Dyn),
  /* .HighAddress = */ OS_STACK_GETHIGHADDRESS(OsCfg_Stack_Default_Appl_Task_Dyn)
};

/*! Stack configuration data: Default_BSW_Async_Task */
CONST(Os_StackConfigType, OS_CONST) OsCfg_Stack_Default_BSW_Async_Task =
{
  /* .LowAddress  = */ OS_STACK_GETLOWADDRESS(OsCfg_Stack_Default_BSW_Async_Task_Dyn),
  /* .HighAddress = */ OS_STACK_GETHIGHADDRESS(OsCfg_Stack_Default_BSW_Async_Task_Dyn)
};

/*! Stack configuration data: OsCore0_Error */
CONST(Os_StackConfigType, OS_CONST) OsCfg_Stack_OsCore0_Error =
{
  /* .LowAddress  = */ OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Error_Dyn),
  /* .HighAddress = */ OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Error_Dyn)
};

/*! Stack configuration data: OsCore0_Init */
CONST(Os_StackConfigType, OS_CONST) OsCfg_Stack_OsCore0_Init =
{
  /* .LowAddress  = */ OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Init_Dyn),
  /* .HighAddress = */ OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Init_Dyn)
};

/*! Stack configuration data: OsCore0_Isr_Core */
CONST(Os_StackConfigType, OS_CONST) OsCfg_Stack_OsCore0_Isr_Core =
{
  /* .LowAddress  = */ OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn),
  /* .HighAddress = */ OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn)
};

/*! Stack configuration data: OsCore0_Kernel */
CONST(Os_StackConfigType, OS_CONST) OsCfg_Stack_OsCore0_Kernel =
{
  /* .LowAddress  = */ OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Kernel_Dyn),
  /* .HighAddress = */ OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Kernel_Dyn)
};

/*! Stack configuration data: OsCore0_Protection */
CONST(Os_StackConfigType, OS_CONST) OsCfg_Stack_OsCore0_Protection =
{
  /* .LowAddress  = */ OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Protection_Dyn),
  /* .HighAddress = */ OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Protection_Dyn)
};

/*! Stack configuration data: OsCore0_Task_Prio10 */
CONST(Os_StackConfigType, OS_CONST) OsCfg_Stack_OsCore0_Task_Prio10 =
{
  /* .LowAddress  = */ OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Task_Prio10_Dyn),
  /* .HighAddress = */ OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Task_Prio10_Dyn)
};

/*! Stack configuration data: OsCore0_Task_Prio30 */
CONST(Os_StackConfigType, OS_CONST) OsCfg_Stack_OsCore0_Task_Prio30 =
{
  /* .LowAddress  = */ OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Task_Prio30_Dyn),
  /* .HighAddress = */ OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Task_Prio30_Dyn)
};

/*! Stack configuration data: OsCore0_Task_Prio40 */
CONST(Os_StackConfigType, OS_CONST) OsCfg_Stack_OsCore0_Task_Prio40 =
{
  /* .LowAddress  = */ OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Task_Prio40_Dyn),
  /* .HighAddress = */ OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Task_Prio40_Dyn)
};

/*! Stack configuration data: OsCore0_Task_Prio4294967295 */
CONST(Os_StackConfigType, OS_CONST) OsCfg_Stack_OsCore0_Task_Prio4294967295 =
{
  /* .LowAddress  = */ OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Task_Prio4294967295_Dyn),
  /* .HighAddress = */ OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Task_Prio4294967295_Dyn)
};

/*! Stack configuration data: OsCore0_Task_Prio45 */
CONST(Os_StackConfigType, OS_CONST) OsCfg_Stack_OsCore0_Task_Prio45 =
{
  /* .LowAddress  = */ OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Task_Prio45_Dyn),
  /* .HighAddress = */ OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Task_Prio45_Dyn)
};

/*! Stack configuration data: OsCore0_Task_Prio5 */
CONST(Os_StackConfigType, OS_CONST) OsCfg_Stack_OsCore0_Task_Prio5 =
{
  /* .LowAddress  = */ OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Task_Prio5_Dyn),
  /* .HighAddress = */ OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Task_Prio5_Dyn)
};

/*! Stack configuration data: OsCore0_Task_Prio50 */
CONST(Os_StackConfigType, OS_CONST) OsCfg_Stack_OsCore0_Task_Prio50 =
{
  /* .LowAddress  = */ OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Task_Prio50_Dyn),
  /* .HighAddress = */ OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Task_Prio50_Dyn)
};


#define OS_STOP_SEC_CORE0_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  END OF FILE: Os_Stack_Lcfg.c
 *********************************************************************************************************************/
