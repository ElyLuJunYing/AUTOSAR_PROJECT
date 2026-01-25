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
 *              File: Os_Lcfg.h
 *   Generation Time: 2018-11-27 15:30:02
 *           Project: TsiStandard - Version 1
 *          Delivery: CBD1800257_D01
 *      Tool Version: DaVinci Configurator  5.18.37 SP1
 *
 *
 *********************************************************************************************************************/

#if !defined (OS_LCFG_H)                                                             /* PRQA S 0883 */ /* MD_Os_0883 */
# define OS_LCFG_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module declarations */
# include "Os_Cfg.h"
# include "Os_Types.h"
# include "Os_Types_Lcfg.h"

/* Os kernel module dependencies */

/* Os hal dependencies */
# include "Os_Hal_Lcfg.h"

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

/**********************************************************************************************************************
 *  GLOBAL CONSTANT DATA PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

# define OS_START_SEC_Default_Appl_Init_Task_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  Default_Appl_Init_Task()
 *********************************************************************************************************************/
extern FUNC(void, OS_DEFAULT_APPL_INIT_TASK_CODE) Os_Task_Default_Appl_Init_Task(void);

# define OS_STOP_SEC_Default_Appl_Init_Task_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_Default_Appl_Task_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  Default_Appl_Task()
 *********************************************************************************************************************/
extern FUNC(void, OS_DEFAULT_APPL_TASK_CODE) Os_Task_Default_Appl_Task(void);

# define OS_STOP_SEC_Default_Appl_Task_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_Default_BSW_Async_Task_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  Default_BSW_Async_Task()
 *********************************************************************************************************************/
extern FUNC(void, OS_DEFAULT_BSW_ASYNC_TASK_CODE) Os_Task_Default_BSW_Async_Task(void);

# define OS_STOP_SEC_Default_BSW_Async_Task_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_Default_BSW_Sync_Task_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  Default_BSW_Sync_Task()
 *********************************************************************************************************************/
extern FUNC(void, OS_DEFAULT_BSW_SYNC_TASK_CODE) Os_Task_Default_BSW_Sync_Task(void);

# define OS_STOP_SEC_Default_BSW_Sync_Task_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_Default_Init_Task_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  Default_Init_Task()
 *********************************************************************************************************************/
extern FUNC(void, OS_DEFAULT_INIT_TASK_CODE) Os_Task_Default_Init_Task(void);

# define OS_STOP_SEC_Default_Init_Task_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_Default_RTE_Mode_switch_Task_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  Default_RTE_Mode_switch_Task()
 *********************************************************************************************************************/
extern FUNC(void, OS_DEFAULT_RTE_MODE_SWITCH_TASK_CODE) Os_Task_Default_RTE_Mode_switch_Task(void);

# define OS_STOP_SEC_Default_RTE_Mode_switch_Task_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_OsTask_WdgM_Cyclic_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  OsTask_WdgM_Cyclic()
 *********************************************************************************************************************/
extern FUNC(void, OS_OSTASK_WDGM_CYCLIC_CODE) Os_Task_OsTask_WdgM_Cyclic(void);

# define OS_STOP_SEC_OsTask_WdgM_Cyclic_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_StartApplication_MemoryViolation_Task_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  StartApplication_MemoryViolation_Task()
 *********************************************************************************************************************/
extern FUNC(void, OS_STARTAPPLICATION_MEMORYVIOLATION_TASK_CODE) Os_Task_StartApplication_MemoryViolation_Task(void);

# define OS_STOP_SEC_StartApplication_MemoryViolation_Task_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_StartApplication_Trusted_Task_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  StartApplication_Trusted_Task()
 *********************************************************************************************************************/
extern FUNC(void, OS_STARTAPPLICATION_TRUSTED_TASK_CODE) Os_Task_StartApplication_Trusted_Task(void);

# define OS_STOP_SEC_StartApplication_Trusted_Task_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_CanBusOffIsr_0_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  CanBusOffIsr_0()
 *********************************************************************************************************************/
extern FUNC(void, OS_CANBUSOFFISR_0_CODE) Os_Isr_CanBusOffIsr_0(void);

# define OS_STOP_SEC_CanBusOffIsr_0_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_CanMailboxIsr_0_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  CanMailboxIsr_0()
 *********************************************************************************************************************/
extern FUNC(void, OS_CANMAILBOXISR_0_CODE) Os_Isr_CanMailboxIsr_0(void);

# define OS_STOP_SEC_CanMailboxIsr_0_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_FTM_0_CH_0_CH_1_ISR_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  FTM_0_CH_0_CH_1_ISR()
 *********************************************************************************************************************/
extern FUNC(void, OS_FTM_0_CH_0_CH_1_ISR_CODE) Os_Isr_FTM_0_CH_0_CH_1_ISR(void);

# define OS_STOP_SEC_FTM_0_CH_0_CH_1_ISR_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#endif /* OS_LCFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Os_Lcfg.h
 *********************************************************************************************************************/
