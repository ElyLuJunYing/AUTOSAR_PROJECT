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
 *              File: Os_Alarm_Lcfg.h
 *   Generation Time: 2018-11-27 15:30:01
 *           Project: TsiStandard - Version 1
 *          Delivery: CBD1800257_D01
 *      Tool Version: DaVinci Configurator  5.18.37 SP1
 *
 *
 *********************************************************************************************************************/

#if !defined (OS_ALARM_LCFG_H)                                                       /* PRQA S 0883 */ /* MD_Os_0883 */
# define OS_ALARM_LCFG_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module declarations */
# include "Os_Alarm_Types.h"

/* Os kernel module dependencies */
# include "Os_Lcfg.h"

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

/**********************************************************************************************************************
 *  GLOBAL CONSTANT DATA PROTOTYPES
 *********************************************************************************************************************/

# define OS_START_SEC_CORE0_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! Alarm configuration data: Rte_Al_TE2_Default_BSW_Async_Task_0_10ms */
extern CONST(Os_AlarmSetEventConfigType, OS_CONST) OsCfg_Alarm_Rte_Al_TE2_Default_BSW_Async_Task_0_10ms;

/*! Alarm configuration data: Rte_Al_TE2_Default_BSW_Async_Task_0_1ms */
extern CONST(Os_AlarmSetEventConfigType, OS_CONST) OsCfg_Alarm_Rte_Al_TE2_Default_BSW_Async_Task_0_1ms;

/*! Alarm configuration data: Rte_Al_TE2_Default_BSW_Async_Task_0_20ms */
extern CONST(Os_AlarmSetEventConfigType, OS_CONST) OsCfg_Alarm_Rte_Al_TE2_Default_BSW_Async_Task_0_20ms;

/*! Alarm configuration data: Rte_Al_TE2_Default_BSW_Async_Task_0_5ms */
extern CONST(Os_AlarmSetEventConfigType, OS_CONST) OsCfg_Alarm_Rte_Al_TE2_Default_BSW_Async_Task_0_5ms;

/*! Alarm configuration data: Rte_Al_TE2_OsTask_WdgM_Cyclic_0_10ms */
extern CONST(Os_AlarmActivateTaskConfigType, OS_CONST) OsCfg_Alarm_Rte_Al_TE2_OsTask_WdgM_Cyclic_0_10ms;

/*! Alarm configuration data: Rte_Al_TE_StartApplication_StartApplication_Cyclic1000ms */
extern CONST(Os_AlarmSetEventConfigType, OS_CONST) OsCfg_Alarm_Rte_Al_TE_StartApplication_StartApplication_Cyclic1000ms;

/*! Alarm configuration data: Rte_Al_TE_StartApplication_StartApplication_Cyclic10ms */
extern CONST(Os_AlarmSetEventConfigType, OS_CONST) OsCfg_Alarm_Rte_Al_TE_StartApplication_StartApplication_Cyclic10ms;

/*! Alarm configuration data: Rte_Al_TE_StartApplication_StartApplication_Cyclic1ms */
extern CONST(Os_AlarmSetEventConfigType, OS_CONST) OsCfg_Alarm_Rte_Al_TE_StartApplication_StartApplication_Cyclic1ms;

/*! Alarm configuration data: Rte_Al_TE_StartApplication_StartApplication_Cyclic250ms */
extern CONST(Os_AlarmSetEventConfigType, OS_CONST) OsCfg_Alarm_Rte_Al_TE_StartApplication_StartApplication_Cyclic250ms;

/*! Alarm configuration data: Rte_Al_TE_StartApplication_StartApplication_MEMORYPROTECTION_Cyclic10ms */
extern CONST(Os_AlarmActivateTaskConfigType, OS_CONST) OsCfg_Alarm_Rte_Al_TE_StartApplication_StartApplication_MEMORYPROTECTION_Cyclic10ms;

# define OS_STOP_SEC_CORE0_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! Object reference table for alarms. */
extern CONSTP2CONST(Os_AlarmConfigType, OS_CONST, OS_CONST) OsCfg_AlarmRefs[OS_ALARMID_COUNT + 1];

# define OS_STOP_SEC_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/


#endif /* OS_ALARM_LCFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Os_Alarm_Lcfg.h
 *********************************************************************************************************************/
