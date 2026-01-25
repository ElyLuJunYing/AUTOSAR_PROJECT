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
 *              File: Os_MemoryProtection_Lcfg.h
 *   Generation Time: 2018-11-27 15:30:02
 *           Project: TsiStandard - Version 1
 *          Delivery: CBD1800257_D01
 *      Tool Version: DaVinci Configurator  5.18.37 SP1
 *
 *
 *********************************************************************************************************************/

#if !defined (OS_MEMORYPROTECTION_LCFG_H)                                            /* PRQA S 0883 */ /* MD_Os_0883 */
# define OS_MEMORYPROTECTION_LCFG_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module declarations */
# include "Os_MemoryProtection_Types.h"

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

/**********************************************************************************************************************
 *  GLOBAL CONSTANT DATA PROTOTYPES
 *********************************************************************************************************************/

# define OS_START_SEC_CORE0_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! Memory protection configuration data */
extern CONST(Os_MpCoreConfigType, OS_CONST) OsCfg_Mp_OsCore0;
extern CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_OsApplication_NonTrusted_Core0;
extern CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_OsApplication_Trusted_Core0;
extern CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_SystemApplication_OsCore0;
extern CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_CanIsr_0_BusOff;
extern CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_CanIsr_0_MB00To15;
extern CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_CanIsr_0_MB16To31;
extern CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_CounterIsr_SystemTimer;
extern CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_FTM_0_CH_0_CH_1_ISR;
extern CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Default_Appl_Init_Task;
extern CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Default_Appl_Task;
extern CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Default_BSW_Async_Task;
extern CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Default_BSW_Sync_Task;
extern CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Default_Init_Task;
extern CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Default_RTE_Mode_switch_Task;
extern CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_IdleTask_OsCore0;
extern CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_OsTask_WdgM_Cyclic;
extern CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_StartApplication_MemoryViolation_Task;
extern CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_StartApplication_Trusted_Task;

# define OS_STOP_SEC_CORE0_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! Memory protection configuration data */
extern CONST(Os_MpSystemConfigType, OS_CONST) OsCfg_Mp_SystemMpu;

# define OS_STOP_SEC_CONST_UNSPECIFIED
# include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/


#endif /* OS_MEMORYPROTECTION_LCFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Os_MemoryProtection_Lcfg.h
 *********************************************************************************************************************/
