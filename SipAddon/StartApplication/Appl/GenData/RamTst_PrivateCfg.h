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
 *            Module: RamTst
 *           Program: MSR_Vector_SLP4
 *          Customer: Harman International (China) Holdings Co., Ltd.
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: FS32K148UAT0VLQR
 *    License Scope : The usage is restricted to CBD1800257_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: RamTst_PrivateCfg.h
 *   Generation Time: 2018-11-27 15:30:01
 *           Project: TsiStandard - Version 1
 *          Delivery: CBD1800257_D01
 *      Tool Version: DaVinci Configurator  5.18.37 SP1
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  MISRA DEVIATIONS
 * -------------------------------------------------------------------------------------------------------------------
 * MD_RamTst_3453:
 *   Reason:
 *   Risk:       No type checking in function like macros
 *   Prevention: Component test
 *********************************************************************************************************************/

#if !defined(RAMTST_PRIVATE_CFG_H)
#define RAMTST_PRIVATE_CFG_H


/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  VERSION IDENTIFICATION
 *********************************************************************************************************************/

#define RAMTST_PRIVATE_CFG_MAJOR_VERSION	(4u) 
#define RAMTST_PRIVATE_CFG_MINOR_VERSION	(00u) 
#define RAMTST_PRIVATE_CFG_PATCH_VERSION	(00u) 


#ifndef RAMTST_PRIVATE_CFG_INCLUDE
  #error "RamTst_PrivateCfg.h must not be included outside of RamTst scope"
#endif


/* ----- Include file for development error reporting --------------------- */
#include "Det.h" 


/* ----- Development error reporting function ----------------------------- */
#define RamTst_DetReportError(RamTst_FunctionId, RamTst_ErrorCode) \
  ( (void) Det_ReportError((RAMTST_MODULE_ID), (RAMTST_INSTANCE_ID), (RamTst_FunctionId), (RamTst_ErrorCode)) ) /* PRQA S 3453 */ /* MD_RamTst_3453 */ 


/* ----- Include file for production error reporting ---------------------- */
#include "Dem.h"

/* ----- DEM Error Codes -------------------------------------------------- */
#if(defined DEM_AR_RELEASE_MAJOR_VERSION && DEM_AR_RELEASE_MAJOR_VERSION == (0x04))
  #if(DEM_AR_RELEASE_MINOR_VERSION == 0 && DEM_AR_RELEASE_REVISION_VERSION < (0x03))
    /* Prefixing for AUTOSAR versions 4.0 Rev 1 and 4.0 Rev 2 */
    #define RAMTST_E_RAM_FAILURE                    (Dem_DemEventParameter_Ramtst)
  #else
    /* Prefixing for AUTOSAR versions 4.0 Rev 3 and later */
    #define RAMTST_E_RAM_FAILURE                    (DemConf_DemEventParameter_DemEventParameter_Ramtst)
  #endif
#else
  /* Prefixing for AUTOSAR version 3.2 Rev 1 */
  #define RAMTST_E_RAM_FAILURE                      (Dem_RAMTST_E_RAM_FAILURE)
#endif
/* ----- Production error reporting function ------------------------------ */
#define RamTst_DemReportError(EventId, EventStatus)\
  ( (void) Dem_ReportErrorStatus(EventId, EventStatus)) /* PRQA S 3453 */ /* MD_RamTst_3453 */


/* ----- Include file(s) for interrupt locking ---------------------------- */
#include "SchM_RamTst.h"


/* ----- Interrupt locking macros ----------------------------------------- */
#define RamTst_EnterCritical()  SchM_Enter_RamTst_RAMTST_EXCLUSIVE_AREA_0()
#define RamTst_ExitCritical()   SchM_Exit_RamTst_RAMTST_EXCLUSIVE_AREA_0()


#endif  /* RAMTST__PRIVATE_CFG_H */

/**********************************************************************************************************************
 *  END OF FILE: RamTst_PrivateCfg.h
 *********************************************************************************************************************/

