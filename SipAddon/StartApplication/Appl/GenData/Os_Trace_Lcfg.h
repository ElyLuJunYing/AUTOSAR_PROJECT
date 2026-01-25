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
 *              File: Os_Trace_Lcfg.h
 *   Generation Time: 2018-11-27 15:30:02
 *           Project: TsiStandard - Version 1
 *          Delivery: CBD1800257_D01
 *      Tool Version: DaVinci Configurator  5.18.37 SP1
 *
 *
 *********************************************************************************************************************/

#if !defined (OS_TRACE_LCFG_H)                                                       /* PRQA S 0883 */ /* MD_Os_0883 */
# define OS_TRACE_LCFG_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module declarations */
# include "Os_Trace_Types.h"

/* Os kernel module dependencies */

/* Os hal dependencies */

/* User file includes */


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

# define OS_START_SEC_PUBLIC_CORE0_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! Dynamic trace data: OsCore0 */
extern VAR(Os_TraceCoreType, OS_VAR_NOINIT) OsCfg_Trace_OsCore0_Dyn;

# define OS_STOP_SEC_PUBLIC_CORE0_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *  GLOBAL CONSTANT DATA PROTOTYPES
 *********************************************************************************************************************/

# define OS_START_SEC_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! Trace configuration data: Default_Appl_Init_Task */
extern CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_Default_Appl_Init_Task;

/*! Trace configuration data: Default_Appl_Task */
extern CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_Default_Appl_Task;

/*! Trace configuration data: Default_BSW_Async_Task */
extern CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_Default_BSW_Async_Task;

/*! Trace configuration data: Default_BSW_Sync_Task */
extern CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_Default_BSW_Sync_Task;

/*! Trace configuration data: Default_Init_Task */
extern CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_Default_Init_Task;

/*! Trace configuration data: Default_RTE_Mode_switch_Task */
extern CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_Default_RTE_Mode_switch_Task;

/*! Trace configuration data: IdleTask_OsCore0 */
extern CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_IdleTask_OsCore0;

/*! Trace configuration data: OsTask_WdgM_Cyclic */
extern CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_OsTask_WdgM_Cyclic;

/*! Trace configuration data: StartApplication_MemoryViolation_Task */
extern CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_StartApplication_MemoryViolation_Task;

/*! Trace configuration data: StartApplication_Trusted_Task */
extern CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_StartApplication_Trusted_Task;

/*! Trace configuration data: CanIsr_0_BusOff */
extern CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_CanIsr_0_BusOff;

/*! Trace configuration data: CanIsr_0_MB00To15 */
extern CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_CanIsr_0_MB00To15;

/*! Trace configuration data: CanIsr_0_MB16To31 */
extern CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_CanIsr_0_MB16To31;

/*! Trace configuration data: CounterIsr_SystemTimer */
extern CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_CounterIsr_SystemTimer;

/*! Trace configuration data: FTM_0_CH_0_CH_1_ISR */
extern CONST(Os_TraceThreadConfigType, OS_CONST) OsCfg_Trace_FTM_0_CH_0_CH_1_ISR;

# define OS_STOP_SEC_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/


#endif /* OS_TRACE_LCFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Os_Trace_Lcfg.h
 *********************************************************************************************************************/
