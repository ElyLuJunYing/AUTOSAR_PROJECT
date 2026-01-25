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
 *            Module: CanSM
 *           Program: MSR_Vector_SLP4
 *          Customer: Harman International (China) Holdings Co., Ltd.
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: FS32K148UAT0VLQR
 *    License Scope : The usage is restricted to CBD1800257_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: CanSM_Lcfg.c
 *   Generation Time: 2018-11-27 15:30:01
 *           Project: TsiStandard - Version 1
 *          Delivery: CBD1800257_D01
 *      Tool Version: DaVinci Configurator  5.18.37 SP1
 *
 *
 *********************************************************************************************************************/




#define CANSM_LCFG_C


 /**********************************************************************************************************************
 *  Includes
 **********************************************************************************************************************/

#include "CanSM_EcuM.h"



/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CanSM_ChannelVarRecord
**********************************************************************************************************************/
#define CANSM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(CanSM_ChannelVarRecordType, CANSM_VAR_NOINIT) CanSM_ChannelVarRecord[1];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define CANSM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */



/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA
**********************************************************************************************************************/


/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTIONS
**********************************************************************************************************************/




 /**********************************************************************************************************************
 *  VAR DATA PROTOTYPES
 **********************************************************************************************************************/






/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 **********************************************************************************************************************/

 /* -----------------------------------------------
 BusOffIndicationFct  Begin
 ----------------------------------------------- */

#define CANSM_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_MemMap */

CONST(CanSM_BusOffBeginIndicationFctPtrType, CANSM_CONST) CanSM_BusOffBeginIndicationFctPtr = NmOsek_CanSM_BusOffBegin;  /* PRQA S 1533 */ /* MD_CANSM_Rule8.9 */

#define CANSM_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_MemMap */


 /* -----------------------------------------------
 BusOffIndicationFct  End
 ----------------------------------------------- */

#define CANSM_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_MemMap */

CONST(CanSM_BusOffEndIndicationFctPtrType, CANSM_CONST) CanSM_BusOffEndIndicationFctPtr = NmOsek_CanSM_BusOffEnd;   /* PRQA S 1505 */ /* MD_MSR_Rule8.7 */

#define CANSM_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_MemMap */







