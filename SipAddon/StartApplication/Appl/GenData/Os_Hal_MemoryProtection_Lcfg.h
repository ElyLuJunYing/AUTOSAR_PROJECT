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
 *              File: Os_Hal_MemoryProtection_Lcfg.h
 *   Generation Time: 2018-11-27 15:30:01
 *           Project: TsiStandard - Version 1
 *          Delivery: CBD1800257_D01
 *      Tool Version: DaVinci Configurator  5.18.37 SP1
 *
 *
 *********************************************************************************************************************/

#if !defined (OS_HAL_MEMORYPROTECTION_LCFG_H)                                        /* PRQA S 0883 */ /* MD_Os_0883 */
# define OS_HAL_MEMORYPROTECTION_LCFG_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module declarations */
# include "Os_Hal_MemoryProtection_Types.h"

/* Os kernel module dependencies */

/* Os hal dependencies */


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

/* Start/end address label declarations */
extern uint8 _OS_CORE0_STACKS_END[]; /* PRQA S 3684 */ /* MD_Os_3684_LinkerSymbol */
extern uint8 _OS_CORE0_STACKS_START[]; /* PRQA S 3684 */ /* MD_Os_3684_LinkerSymbol */
extern uint8 _OS_GLOBALSHARED_VAR_END[]; /* PRQA S 3684 */ /* MD_Os_3684_LinkerSymbol */
extern uint8 _OS_GLOBALSHARED_VAR_START[]; /* PRQA S 3684 */ /* MD_Os_3684_LinkerSymbol */
extern uint8 _OS_OsApplication_NonTrusted_Core0_VAR_ALL_END[]; /* PRQA S 3684 */ /* MD_Os_3684_LinkerSymbol */
extern uint8 _OS_OsApplication_NonTrusted_Core0_VAR_ALL_START[]; /* PRQA S 3684 */ /* MD_Os_3684_LinkerSymbol */


/**********************************************************************************************************************
 *  GLOBAL CONSTANT DATA PROTOTYPES
 *********************************************************************************************************************/

# define OS_START_SEC_CORE0_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! HAL memory protection configuration data: OsCore0 */
extern CONST(Os_Hal_MpCoreConfigType, OS_CONST) OsCfg_Hal_Mp_OsCore0;

/*! HAL memory protection configuration data: OsApplication_NonTrusted_Core0 */
extern CONST(Os_Hal_MpAppConfigType, OS_CONST) OsCfg_Hal_Mp_OsApplication_NonTrusted_Core0;

/*! HAL memory protection configuration data: OsApplication_Trusted_Core0 */
extern CONST(Os_Hal_MpAppConfigType, OS_CONST) OsCfg_Hal_Mp_OsApplication_Trusted_Core0;

/*! HAL memory protection configuration data: SystemApplication_OsCore0 */
extern CONST(Os_Hal_MpAppConfigType, OS_CONST) OsCfg_Hal_Mp_SystemApplication_OsCore0;

/*! HAL memory protection configuration data: CanIsr_0_BusOff */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_0_BusOff;

/*! HAL memory protection configuration data: CanIsr_0_MB00To15 */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_0_MB00To15;

/*! HAL memory protection configuration data: CanIsr_0_MB16To31 */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_0_MB16To31;

/*! HAL memory protection configuration data: CounterIsr_SystemTimer */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CounterIsr_SystemTimer;

/*! HAL memory protection configuration data: FTM_0_CH_0_CH_1_ISR */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_FTM_0_CH_0_CH_1_ISR;

/*! HAL memory protection configuration data: Default_Appl_Init_Task */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Default_Appl_Init_Task;

/*! HAL memory protection configuration data: Default_Appl_Task */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Default_Appl_Task;

/*! HAL memory protection configuration data: Default_BSW_Async_Task */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Default_BSW_Async_Task;

/*! HAL memory protection configuration data: Default_BSW_Sync_Task */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Default_BSW_Sync_Task;

/*! HAL memory protection configuration data: Default_Init_Task */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Default_Init_Task;

/*! HAL memory protection configuration data: Default_RTE_Mode_switch_Task */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Default_RTE_Mode_switch_Task;

/*! HAL memory protection configuration data: IdleTask_OsCore0 */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_IdleTask_OsCore0;

/*! HAL memory protection configuration data: OsTask_WdgM_Cyclic */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_WdgM_Cyclic;

/*! HAL memory protection configuration data: StartApplication_MemoryViolation_Task */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_StartApplication_MemoryViolation_Task;

/*! HAL memory protection configuration data: StartApplication_Trusted_Task */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_StartApplication_Trusted_Task;

# define OS_STOP_SEC_CORE0_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! HAL memory protection configuration data: SystemMpu */
extern CONST(Os_Hal_MpSystemConfigType, OS_CONST) OsCfg_Hal_Mp_SystemMpu;

/*! HAL memory protection configuration data: EmptyThread */
extern CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_EmptyThread;

# define OS_STOP_SEC_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/


#endif /* OS_HAL_MEMORYPROTECTION_LCFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Os_Hal_MemoryProtection_Lcfg.h
 *********************************************************************************************************************/
