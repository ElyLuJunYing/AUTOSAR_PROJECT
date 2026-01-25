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
 *              File: Os_Hal_Context_Lcfg.h
 *   Generation Time: 2018-11-27 15:30:01
 *           Project: TsiStandard - Version 1
 *          Delivery: CBD1800257_D01
 *      Tool Version: DaVinci Configurator  5.18.37 SP1
 *
 *
 *********************************************************************************************************************/

#if !defined (OS_HAL_CONTEXT_LCFG_H)                                                 /* PRQA S 0883 */ /* MD_Os_0883 */
# define OS_HAL_CONTEXT_LCFG_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module declarations */
# include "Os_Hal_Context_Types.h"

/* Os kernel module dependencies */
# include "Os_Core_Cfg.h"

/* Os hal dependencies */
# include "Os_Hal_Os_Types.h"


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

# define OS_START_SEC_CORE0_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! HAL dynamic hook context data: Os_CoreInitHook_OsCore0 */
extern VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_Os_CoreInitHook_OsCore0_Dyn;

/*! HAL dynamic hook context data: ErrorHook_OsCore0 */
extern VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_ErrorHook_OsCore0_Dyn;

/*! HAL dynamic hook context data: ProtectionHook_OsCore0 */
extern VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_ProtectionHook_OsCore0_Dyn;

/*! HAL dynamic ISR2 level context data: Level1 */
extern VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_OsCore0_Isr_Level1_Dyn;

/*! HAL dynamic ISR2 level context data: Level2 */
extern VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_OsCore0_Isr_Level2_Dyn;

/*! HAL dynamic ISR2 level context data: Level3 */
extern VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_OsCore0_Isr_Level3_Dyn;

/*! HAL dynamic ISR2 level context data: Level4 */
extern VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_OsCore0_Isr_Level4_Dyn;

/*! HAL dynamic ISR2 level context data: Level5 */
extern VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_OsCore0_Isr_Level5_Dyn;

/*! HAL dynamic task context data: Default_Appl_Init_Task */
extern VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_Default_Appl_Init_Task_Dyn;


/*! HAL dynamic task context data: Default_Appl_Task */
extern VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_Default_Appl_Task_Dyn;


/*! HAL dynamic task context data: Default_BSW_Async_Task */
extern VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_Default_BSW_Async_Task_Dyn;


/*! HAL dynamic task context data: Default_BSW_Sync_Task */
extern VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_Default_BSW_Sync_Task_Dyn;


/*! HAL dynamic task context data: Default_Init_Task */
extern VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_Default_Init_Task_Dyn;


/*! HAL dynamic task context data: Default_RTE_Mode_switch_Task */
extern VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_Default_RTE_Mode_switch_Task_Dyn;


/*! HAL dynamic task context data: IdleTask_OsCore0 */
extern VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_IdleTask_OsCore0_Dyn;


/*! HAL dynamic task context data: OsTask_WdgM_Cyclic */
extern VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_OsTask_WdgM_Cyclic_Dyn;


/*! HAL dynamic task context data: StartApplication_MemoryViolation_Task */
extern VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_StartApplication_MemoryViolation_Task_Dyn;


/*! HAL dynamic task context data: StartApplication_Trusted_Task */
extern VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_StartApplication_Trusted_Task_Dyn;


/*! HAL exception context data: OsCore0 */
extern VAR(Os_ExceptionContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_OsCore0_ExceptionContext;

# define OS_STOP_SEC_CORE0_VAR_NOINIT_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *  GLOBAL CONSTANT DATA PROTOTYPES
 *********************************************************************************************************************/

# define OS_START_SEC_CORE0_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! HAL hook context configuration data: Os_CoreInitHook_OsCore0 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Os_CoreInitHook_OsCore0;

/*! HAL hook context configuration data: ErrorHook_OsCore0 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_ErrorHook_OsCore0;

/*! HAL hook context configuration data: ProtectionHook_OsCore0 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_ProtectionHook_OsCore0;

/*! HAL ISR2 context configuration data: CanIsr_0_BusOff */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_0_BusOff;

/*! HAL ISR2 context configuration data: CanIsr_0_MB00To15 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_0_MB00To15;

/*! HAL ISR2 context configuration data: CanIsr_0_MB16To31 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_0_MB16To31;

/*! HAL ISR2 context configuration data: CounterIsr_SystemTimer */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CounterIsr_SystemTimer;

/*! HAL ISR2 context configuration data: FTM_0_CH_0_CH_1_ISR */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_FTM_0_CH_0_CH_1_ISR;

/*! HAL task context configuration data: Default_Appl_Init_Task */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Default_Appl_Init_Task;

/*! HAL task context configuration data: Default_Appl_Task */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Default_Appl_Task;

/*! HAL task context configuration data: Default_BSW_Async_Task */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Default_BSW_Async_Task;

/*! HAL task context configuration data: Default_BSW_Sync_Task */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Default_BSW_Sync_Task;

/*! HAL task context configuration data: Default_Init_Task */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Default_Init_Task;

/*! HAL task context configuration data: Default_RTE_Mode_switch_Task */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Default_RTE_Mode_switch_Task;

/*! HAL task context configuration data: IdleTask_OsCore0 */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_IdleTask_OsCore0;

/*! HAL task context configuration data: OsTask_WdgM_Cyclic */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_OsTask_WdgM_Cyclic;

/*! HAL task context configuration data: StartApplication_MemoryViolation_Task */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_StartApplication_MemoryViolation_Task;

/*! HAL task context configuration data: StartApplication_Trusted_Task */
extern CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_StartApplication_Trusted_Task;

/*! HAL kernel stack configuration data: OsCore0_Kernel */
extern CONST(Os_Hal_ContextStackConfigType, OS_CONST) OsCfg_Hal_Stack_OsCore0_Kernel;

# define OS_STOP_SEC_CORE0_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



# define OS_START_SEC_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! Object reference table for HAL exception context. */
extern CONSTP2VAR(Os_ExceptionContextType, AUTOMATIC, OS_CONST)
  OsCfg_Hal_Context_ExceptionContextRef[OS_CFG_COREPHYSICALID_COUNT + 1];

# define OS_STOP_SEC_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/


#endif /* OS_HAL_CONTEXT_LCFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Os_Hal_Context_Lcfg.h
 *********************************************************************************************************************/
