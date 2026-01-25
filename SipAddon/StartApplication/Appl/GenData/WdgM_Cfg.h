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
 *            Module: WdgM
 *           Program: MSR_Vector_SLP4
 *          Customer: Harman International (China) Holdings Co., Ltd.
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: FS32K148UAT0VLQR
 *    License Scope : The usage is restricted to CBD1800257_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: WdgM_Cfg.h
 *   Generation Time: 2018-11-27 15:30:01
 *           Project: TsiStandard - Version 1
 *          Delivery: CBD1800257_D01
 *      Tool Version: DaVinci Configurator  5.18.37 SP1
 *
 *
 *********************************************************************************************************************/

#if !defined (WDGM_CFG_H)
# define WDGM_CFG_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
# include "WdgM_Types.h"


/**********************************************************************************************************************
 *  VERSION INFORMATION AND CHECK
 *********************************************************************************************************************/

#define WDGM_CFG_MAJOR_VERSION (2u) 
#define WDGM_CFG_MINOR_VERSION (2u) 
#define WDGM_CFG_PATCH_VERSION (1u) 

/* Check the version of WdgM Types header file */
#if ( (WDGM_TYPES_MAJOR_VERSION != (5u)) \
   || (WDGM_TYPES_MINOR_VERSION != (3u)) )
# error "Version numbers of WdgM_Cfg.h and WdgM_Types.h are inconsistent!"
#endif

# define WDGM_NR_OF_CHECKPOINTS           (2u) 
# define WDGM_NR_OF_ENTITIES              (2u) 
# define WDGM_NR_OF_ALLOWED_CALLERS       (1u) 
# define WDGM_NR_OF_GLOBAL_TRANSITIONS    (0u) 
# define WDGM_NR_OF_LOCAL_TRANSITIONS     (0u) 
# define WDGM_NR_OF_WATCHDOGS_CORE0       (1u) 
# define WDGM_NR_OF_TRIGGER_MODES_CORE0   (1u) 

/* Checkpoints for supervised entity 'WdgMSupervisedEntity_Dummy' */ 
# define WdgMConf_WdgMCheckpoint_WdgMCheckpoint_Dummy (0u) 
/* Checkpoints for supervised entity 'WdgMSupervisedEntity_StartApplication' */ 
# define WdgMConf_WdgMCheckpoint_WdgMCheckpoint_StartApplication (0u) 
 

# define WdgMConf_WdgMSupervisedEntity_WdgMSupervisedEntity_Dummy (0u) 
# define WdgMConf_WdgMSupervisedEntity_WdgMSupervisedEntity_StartApplication (1u) 


#define WDGM_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONST(WdgM_ConfigType, WDGM_CONST) WdgMConfig_Mode0_core0; 

#define WDGM_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */




#endif /* WDGM_CFG_H*/

/**********************************************************************************************************************
 *  END OF FILE: WdgM_Cfg.h
 *********************************************************************************************************************/

