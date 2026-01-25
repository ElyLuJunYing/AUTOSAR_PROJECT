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
 *              File: RamTst_Lcfg.c
 *   Generation Time: 2018-11-27 15:30:01
 *           Project: TsiStandard - Version 1
 *          Delivery: CBD1800257_D01
 *      Tool Version: DaVinci Configurator  5.18.37 SP1
 *
 *
 *********************************************************************************************************************/

/* Justification for module-specific MISRA deviations:

  MD_RamTst_306:
    Reason:     Cast of integral type to pointer necessary for addressing the RAM areas to test
    Risk:       The result of the pointer cast is implementation defined
    Prevention: Correctness has been verified during the component test

*/

#define RAMTST_LCFG_SOURCE


/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
 
#include "Std_Types.h"
#include "RamTst.h"
#include "Appl_RamTst.h" 



/**********************************************************************************************************************
 *  VERSION CHECK
 *********************************************************************************************************************/
 
#define RAMTST_CFG_C_MAJOR_VERSION	(4u) 
#define RAMTST_CFG_C_MINOR_VERSION	(00u) 
#define RAMTST_CFG_C_PATCH_VERSION	(00u) 

#if (  (RAMTST_SW_MAJOR_VERSION != (2u)) \
    || (RAMTST_SW_MINOR_VERSION != (2u)))
  #error "Version numbers of RamTst_Lcfg.c and RamTst.h are inconsistent!"
#endif

#if (  (RAMTST_CFG_MAJOR_VERSION != (RAMTST_CFG_C_MAJOR_VERSION)) \
    || (RAMTST_CFG_MINOR_VERSION != (RAMTST_CFG_C_MINOR_VERSION)))
  #error "Version numbers of RamTst_Lcfg.c and RamTst_Cfg.h are inconsistent!"
#endif



/**********************************************************************************************************************
 *  GLOBAL DATA
 **********************************************************************************************************************/

#define RAMTST_START_SEC_CONST_PBCFG
#include "MemMap.h"

/* RamTst_Block_ParameterSets */
/* Block configurations of 'RamTstAlgParams': */ 
static CONST(RamTst_BlockParamsConfigType, RAMTST_PBCFG) RamTst_BlockConfig_RamTstAlgParams[] = 
{
  { /*  Block configuration 'RamTstBlockParams':  */ 
     /*  Start address:  */ (CONSTP2VAR(uint32, AUTOMATIC, RAMTST_APPL_DATA)) 0x00000000uL /* PRQA S 306 */ /* MD_RamTst_306 */, 
     /*  End address:    */ (CONSTP2VAR(uint32, AUTOMATIC, RAMTST_APPL_DATA)) 0xFFFFFFFFuL /* PRQA S 306 */ /* MD_RamTst_306 */, 
     /*  Fill pattern:   */ 0x00000000uL, 
     /*  Test policy:    */ RAMTST_NON_DESTRUCTIVE
  }
}; 



/* RamTst Algorithm ParameterSet */
static CONST(RamTst_AlgParamsConfigType, RAMTST_PBCFG) RamTst_AlgParamsConfig[] =
{
  { /*  Test configuration 'RamTstAlgParams':  */ 
     /*  Number of tested cells:      */ 32uL, 
     /*  Max number of tested cells:  */ 128uL, 
     /*  Pointer to block configs:    */ RamTst_BlockConfig_RamTstAlgParams, 
     /*  Number of blocks:            */ 1u, 
     /*  Test algorithm:              */ RAMTST_CHECKERBOARD_TEST
  }
};


#define RAMTST_STOP_SEC_CONST_PBCFG
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define RAMTST_START_SEC_CONST_PBCFG_ROOT
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 *  MAIN CONFIGURATION
 **********************************************************************************************************************/

/* This is the main configuration structure, that contains pointers to all configuration arrays and the amount of
 * channels for each measurement mode. */

/* RamTst Config */
CONST(RamTst_ConfigType, RAMTST_PBCFG) RamTst_Config_t = 
{
   /*  Pointer to test configs:      */ RamTst_AlgParamsConfig, 
   /*  Min Number of tested cells:   */ 32uL, 
   /*  Number of test configs:       */ 1u, 
   /*  Default test configuration:   */ RamTstConf_RamTstAlgParams_RamTstAlgParams, 
   /*  Test completed notification:  */ NULL_PTR, 
   /*  Test error notification:      */ NULL_PTR
};


#define RAMTST_STOP_SEC_CONST_PBCFG_ROOT
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  END OF FILE: RamTst_Lcfg.c
 *********************************************************************************************************************/

