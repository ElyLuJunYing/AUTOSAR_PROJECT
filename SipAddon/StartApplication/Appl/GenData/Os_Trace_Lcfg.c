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
 *              File: Os_Trace_Lcfg.c
 *   Generation Time: 2018-11-27 15:30:02
 *           Project: TsiStandard - Version 1
 *          Delivery: CBD1800257_D01
 *      Tool Version: DaVinci Configurator  5.18.37 SP1
 *
 *
 *********************************************************************************************************************/

/* PRQA S 0777, 0779, 0810, 0828, 0857 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779, MD_MSR_1.1_810, MD_MSR_1.1_828, MD_MSR_1.1_857 */

#define OS_TRACE_LCFG_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
#include "Std_Types.h"

/* Os module declarations */
#include "Os_Trace_Lcfg.h"
#include "Os_Trace.h"

/* Os kernel module dependencies */
#include "Os_Common_Types.h"

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

#define OS_START_SEC_PUBLIC_CORE0_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! Dynamic trace data: OsCore0 */
VAR(Os_TraceCoreType, OS_VAR_NOINIT) OsCfg_Trace_OsCore0_Dyn;

/*! Dynamic trace data: Default_Appl_Init_Task */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_Default_Appl_Init_Task_Dyn;

/*! Dynamic trace data: Default_Appl_Task */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_Default_Appl_Task_Dyn;

/*! Dynamic trace data: Default_BSW_Async_Task */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_Default_BSW_Async_Task_Dyn;

/*! Dynamic trace data: Default_BSW_Sync_Task */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_Default_BSW_Sync_Task_Dyn;

/*! Dynamic trace data: Default_Init_Task */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_Default_Init_Task_Dyn;

/*! Dynamic trace data: Default_RTE_Mode_switch_Task */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_Default_RTE_Mode_switch_Task_Dyn;

/*! Dynamic trace data: IdleTask_OsCore0 */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_IdleTask_OsCore0_Dyn;

/*! Dynamic trace data: OsTask_WdgM_Cyclic */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_OsTask_WdgM_Cyclic_Dyn;

/*! Dynamic trace data: StartApplication_MemoryViolation_Task */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_StartApplication_MemoryViolation_Task_Dyn;

/*! Dynamic trace data: StartApplication_Trusted_Task */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_StartApplication_Trusted_Task_Dyn;

/*! Dynamic trace data: CanIsr_0_BusOff */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_CanIsr_0_BusOff_Dyn;

/*! Dynamic trace data: CanIsr_0_MB00To15 */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_CanIsr_0_MB00To15_Dyn;

/*! Dynamic trace data: CanIsr_0_MB16To31 */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_CanIsr_0_MB16To31_Dyn;

/*! Dynamic trace data: CounterIsr_SystemTimer */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_CounterIsr_SystemTimer_Dyn;

/*! Dynamic trace data: FTM_0_CH_0_CH_1_ISR */
OS_LOCAL VAR(Os_TraceThreadType, OS_VAR_NOINIT) OsCfg_Trace_FTM_0_CH_0_CH_1_ISR_Dyn;

#define OS_STOP_SEC_PUBLIC_CORE0_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL CONSTANT DATA
 *********************************************************************************************************************/

#define OS_START_SEC_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! Trace configuration data: Default_Appl_Init_Task */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_Default_Appl_Init_Task =
{
  /* .Dyn  = */ &OsCfg_Trace_Default_Appl_Init_Task_Dyn,
  /* .Id   = */ Os_TraceId_Default_Appl_Init_Task,
  /* .Type = */ OS_TRACE_THREAD_TYPE_TASK
};

/*! Trace configuration data: Default_Appl_Task */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_Default_Appl_Task =
{
  /* .Dyn  = */ &OsCfg_Trace_Default_Appl_Task_Dyn,
  /* .Id   = */ Os_TraceId_Default_Appl_Task,
  /* .Type = */ OS_TRACE_THREAD_TYPE_TASK
};

/*! Trace configuration data: Default_BSW_Async_Task */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_Default_BSW_Async_Task =
{
  /* .Dyn  = */ &OsCfg_Trace_Default_BSW_Async_Task_Dyn,
  /* .Id   = */ Os_TraceId_Default_BSW_Async_Task,
  /* .Type = */ OS_TRACE_THREAD_TYPE_TASK
};

/*! Trace configuration data: Default_BSW_Sync_Task */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_Default_BSW_Sync_Task =
{
  /* .Dyn  = */ &OsCfg_Trace_Default_BSW_Sync_Task_Dyn,
  /* .Id   = */ Os_TraceId_Default_BSW_Sync_Task,
  /* .Type = */ OS_TRACE_THREAD_TYPE_TASK
};

/*! Trace configuration data: Default_Init_Task */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_Default_Init_Task =
{
  /* .Dyn  = */ &OsCfg_Trace_Default_Init_Task_Dyn,
  /* .Id   = */ Os_TraceId_Default_Init_Task,
  /* .Type = */ OS_TRACE_THREAD_TYPE_TASK
};

/*! Trace configuration data: Default_RTE_Mode_switch_Task */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_Default_RTE_Mode_switch_Task =
{
  /* .Dyn  = */ &OsCfg_Trace_Default_RTE_Mode_switch_Task_Dyn,
  /* .Id   = */ Os_TraceId_Default_RTE_Mode_switch_Task,
  /* .Type = */ OS_TRACE_THREAD_TYPE_TASK
};

/*! Trace configuration data: IdleTask_OsCore0 */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_IdleTask_OsCore0 =
{
  /* .Dyn  = */ &OsCfg_Trace_IdleTask_OsCore0_Dyn,
  /* .Id   = */ Os_TraceId_IdleTask_OsCore0,
  /* .Type = */ OS_TRACE_THREAD_TYPE_TASK
};

/*! Trace configuration data: OsTask_WdgM_Cyclic */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_OsTask_WdgM_Cyclic =
{
  /* .Dyn  = */ &OsCfg_Trace_OsTask_WdgM_Cyclic_Dyn,
  /* .Id   = */ Os_TraceId_OsTask_WdgM_Cyclic,
  /* .Type = */ OS_TRACE_THREAD_TYPE_TASK
};

/*! Trace configuration data: StartApplication_MemoryViolation_Task */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_StartApplication_MemoryViolation_Task =
{
  /* .Dyn  = */ &OsCfg_Trace_StartApplication_MemoryViolation_Task_Dyn,
  /* .Id   = */ Os_TraceId_StartApplication_MemoryViolation_Task,
  /* .Type = */ OS_TRACE_THREAD_TYPE_TASK
};

/*! Trace configuration data: StartApplication_Trusted_Task */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_StartApplication_Trusted_Task =
{
  /* .Dyn  = */ &OsCfg_Trace_StartApplication_Trusted_Task_Dyn,
  /* .Id   = */ Os_TraceId_StartApplication_Trusted_Task,
  /* .Type = */ OS_TRACE_THREAD_TYPE_TASK
};

/*! Trace configuration data: CanIsr_0_BusOff */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_CanIsr_0_BusOff =
{
  /* .Dyn  = */ &OsCfg_Trace_CanIsr_0_BusOff_Dyn,
  /* .Id   = */ Os_TraceId_CanIsr_0_BusOff,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

/*! Trace configuration data: CanIsr_0_MB00To15 */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_CanIsr_0_MB00To15 =
{
  /* .Dyn  = */ &OsCfg_Trace_CanIsr_0_MB00To15_Dyn,
  /* .Id   = */ Os_TraceId_CanIsr_0_MB00To15,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

/*! Trace configuration data: CanIsr_0_MB16To31 */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_CanIsr_0_MB16To31 =
{
  /* .Dyn  = */ &OsCfg_Trace_CanIsr_0_MB16To31_Dyn,
  /* .Id   = */ Os_TraceId_CanIsr_0_MB16To31,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

/*! Trace configuration data: CounterIsr_SystemTimer */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_CounterIsr_SystemTimer =
{
  /* .Dyn  = */ &OsCfg_Trace_CounterIsr_SystemTimer_Dyn,
  /* .Id   = */ Os_TraceId_CounterIsr_SystemTimer,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

/*! Trace configuration data: FTM_0_CH_0_CH_1_ISR */
CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_FTM_0_CH_0_CH_1_ISR =
{
  /* .Dyn  = */ &OsCfg_Trace_FTM_0_CH_0_CH_1_ISR_Dyn,
  /* .Id   = */ Os_TraceId_FTM_0_CH_0_CH_1_ISR,
  /* .Type = */ OS_TRACE_THREAD_TYPE_ISR
};

#define OS_STOP_SEC_CONST_UNSPECIFIED
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
 *  END OF FILE: Os_Trace_Lcfg.c
 *********************************************************************************************************************/
