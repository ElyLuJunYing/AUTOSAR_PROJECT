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
 *              File: Os_MemoryProtection_Lcfg.c
 *   Generation Time: 2018-11-27 15:30:02
 *           Project: TsiStandard - Version 1
 *          Delivery: CBD1800257_D01
 *      Tool Version: DaVinci Configurator  5.18.37 SP1
 *
 *
 *********************************************************************************************************************/

/* PRQA S 0777, 0779, 0810, 0828, 0857 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779, MD_MSR_1.1_810, MD_MSR_1.1_828, MD_MSR_1.1_857 */

#define OS_MEMORYROTECTION_LCFG_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
#include "Std_Types.h"

/* Os module declarations */
#include "Os_MemoryProtection_Lcfg.h"
#include "Os_MemoryProtection.h"

/* Os kernel module dependencies */

/* Os hal dependencies */
#include "Os_Hal_MemoryProtection_Lcfg.h"


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

/**********************************************************************************************************************
 *  GLOBAL CONSTANT DATA
 *********************************************************************************************************************/

#define OS_START_SEC_CORE0_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! Memory protection configuration data: OsCore0 */
CONST(Os_MpCoreConfigType, OS_CONST) OsCfg_Mp_OsCore0 =
{
  /* .HwConfig = */ &OsCfg_Hal_Mp_OsCore0
};

/*! Memory protection configuration data: OsApplication_NonTrusted_Core0 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_OsApplication_NonTrusted_Core0 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_NonTrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_EmptyThread
};

/*! Memory protection configuration data: OsApplication_Trusted_Core0 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_OsApplication_Trusted_Core0 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Trusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_EmptyThread
};

/*! Memory protection configuration data: SystemApplication_OsCore0 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_SystemApplication_OsCore0 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_SystemApplication_OsCore0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_EmptyThread
};

/*! Memory protection configuration data: CanIsr_0_BusOff */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_CanIsr_0_BusOff =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_NonTrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_CanIsr_0_BusOff
};

/*! Memory protection configuration data: CanIsr_0_MB00To15 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_CanIsr_0_MB00To15 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_NonTrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_CanIsr_0_MB00To15
};

/*! Memory protection configuration data: CanIsr_0_MB16To31 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_CanIsr_0_MB16To31 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_NonTrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_CanIsr_0_MB16To31
};

/*! Memory protection configuration data: CounterIsr_SystemTimer */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_CounterIsr_SystemTimer =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_SystemApplication_OsCore0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_CounterIsr_SystemTimer
};

/*! Memory protection configuration data: FTM_0_CH_0_CH_1_ISR */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_FTM_0_CH_0_CH_1_ISR =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_NonTrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_FTM_0_CH_0_CH_1_ISR
};

/*! Memory protection configuration data: Default_Appl_Init_Task */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Default_Appl_Init_Task =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_NonTrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_Default_Appl_Init_Task
};

/*! Memory protection configuration data: Default_Appl_Task */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Default_Appl_Task =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_NonTrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_Default_Appl_Task
};

/*! Memory protection configuration data: Default_BSW_Async_Task */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Default_BSW_Async_Task =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_NonTrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_Default_BSW_Async_Task
};

/*! Memory protection configuration data: Default_BSW_Sync_Task */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Default_BSW_Sync_Task =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_NonTrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_Default_BSW_Sync_Task
};

/*! Memory protection configuration data: Default_Init_Task */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Default_Init_Task =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_NonTrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_Default_Init_Task
};

/*! Memory protection configuration data: Default_RTE_Mode_switch_Task */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_Default_RTE_Mode_switch_Task =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_NonTrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_Default_RTE_Mode_switch_Task
};

/*! Memory protection configuration data: IdleTask_OsCore0 */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_IdleTask_OsCore0 =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_SystemApplication_OsCore0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_IdleTask_OsCore0
};

/*! Memory protection configuration data: OsTask_WdgM_Cyclic */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_OsTask_WdgM_Cyclic =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Trusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_OsTask_WdgM_Cyclic
};

/*! Memory protection configuration data: StartApplication_MemoryViolation_Task */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_StartApplication_MemoryViolation_Task =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_NonTrusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_StartApplication_MemoryViolation_Task
};

/*! Memory protection configuration data: StartApplication_Trusted_Task */
CONST(Os_MpAccessRightsType, OS_CONST) OsCfg_Mp_StartApplication_Trusted_Task =
{
  /* .AppAccessRights    = */ &OsCfg_Hal_Mp_OsApplication_Trusted_Core0,
  /* .ThreadAccessRights = */ &OsCfg_Hal_Mp_StartApplication_Trusted_Task
};

#define OS_STOP_SEC_CORE0_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define OS_START_SEC_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! Memory protection configuration data: SystemMpu */
CONST(Os_MpSystemConfigType, OS_CONST) OsCfg_Mp_SystemMpu =
{
  /* .HwConfig = */ &OsCfg_Hal_Mp_SystemMpu
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
 *  END OF FILE: Os_MemoryProtection_Lcfg.c
 *********************************************************************************************************************/
