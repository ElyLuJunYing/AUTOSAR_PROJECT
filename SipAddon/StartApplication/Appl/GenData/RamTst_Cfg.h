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
 *              File: RamTst_Cfg.h
 *   Generation Time: 2018-11-27 15:30:01
 *           Project: TsiStandard - Version 1
 *          Delivery: CBD1800257_D01
 *      Tool Version: DaVinci Configurator  5.18.37 SP1
 *
 *
 *********************************************************************************************************************/

#if !defined (RAMTST_CFG_H)
#define RAMTST_CFG_H


/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  VERSION IDENTIFICATION
 *********************************************************************************************************************/

#define RAMTST_CFG_MAJOR_VERSION	(4u) 
#define RAMTST_CFG_MINOR_VERSION	(00u) 
#define RAMTST_CFG_PATCH_VERSION	(00u) 



/**********************************************************************************************************************
 *  TEST ALGORITHMS
 *********************************************************************************************************************/

#define RAMTST_ABRAHAM_TEST_SELECTED            (STD_ON)
#define RAMTST_CHECKERBOARD_TEST_SELECTED     	(STD_ON)
#define RAMTST_GALPAT_TEST_SELECTED             (STD_ON)
#define RAMTST_MARCH_TEST_SELECTED              (STD_ON)
#define RAMTST_TRANSP_GALPAT_TEST_SELECTED      (STD_ON)
#define RAMTST_WALK_PATH_TEST_SELECTED          (STD_ON)



/**********************************************************************************************************************
 *  API CONFIGURATION
 *********************************************************************************************************************/

#define RAMTST_STOP_API                         (STD_ON)
#define RAMTST_ALLOW_API                        (STD_ON)
#define RAMTST_SUSPEND_API                      (STD_ON)
#define RAMTST_RESUME_API                       (STD_ON)
#define RAMTST_GETEXECUTIONSTATUS_API           (STD_ON)
#define RAMTST_GETTESTRESULT_API                (STD_ON)
#define RAMTST_GETTESTRESULTPERBLOCK_API        (STD_ON)
#define RAMTST_GETVERSIONINFO_API               (STD_OFF)
#define RAMTST_GETALGPARAMS_API                 (STD_ON)
#define RAMTST_GETTESTALGORITHM_API             (STD_ON)
#define RAMTST_GETNUMBEROFTESTEDCELLS_API       (STD_ON)
#define RAMTST_SELECTALGPARAMS_API              (STD_ON)
#define RAMTST_CHANGENUMBEROFTESTEDCELLS_API    (STD_ON)
#define RAMTST_RUNFULLTEST_API                  (STD_ON)
#define RAMTST_RUNPARTIALTEST_API               (STD_ON)



/**********************************************************************************************************************
 *  CONFIGURATION FOR DEVELOPMENT MODE
 *********************************************************************************************************************/

#define RAMTST_DEV_ERROR_DETECT                 (STD_ON)

#if (RAMTST_DEV_ERROR_DETECT == STD_ON)

  #define RAMTST_DEV_ERROR_REPORTING            (STD_ON)

#else

  #define RAMTST_DEV_ERROR_REPORTING            (STD_OFF)

#endif /* (RAMTST_DEV_ERROR_DETECT == STD_ON) */



/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
 
/* Data type used to identify a set of configuration parameters for a test algorithm */
typedef uint8 RamTst_AlgParamsIdType;

/* Data type used to identify or count RAM blocks given in the test configuration parameters */
typedef uint16 RamTst_NumberOfBlocksType;

/* Data type of number of tested RAM cells */
typedef uint32 RamTst_NumberOfTestedCellsType;

/* This type indicates the test algorithm */
typedef enum
{
  RAMTST_ALGORITHM_UNDEFINED = 0u,
  #if (STD_ON == RAMTST_ABRAHAM_TEST_SELECTED)
    RAMTST_ABRAHAM_TEST,
  #endif
  #if (STD_ON == RAMTST_CHECKERBOARD_TEST_SELECTED)
    RAMTST_CHECKERBOARD_TEST,
  #endif
  #if (STD_ON == RAMTST_GALPAT_TEST_SELECTED)
    RAMTST_GALPAT_TEST,
  #endif
  #if (STD_ON == RAMTST_MARCH_TEST_SELECTED)
    RAMTST_MARCH_TEST,
  #endif
  #if (STD_ON == RAMTST_TRANSP_GALPAT_TEST_SELECTED)
    RAMTST_TRANSP_GALPAT_TEST,
  #endif
  #if (STD_ON == RAMTST_WALK_PATH_TEST_SELECTED)
    RAMTST_WALK_PATH_TEST
  #endif
} RamTst_AlgorithmType;

/* This type indicates the size of blocks.
 * If the BlockParamsCongigType declared as an array, it is necessary that
 * the blocks are string together ( e.g.
 *  Block1: startadd 0x00
 *          stopadd 0x0F
 *  Block2: startadd 0x10
 *          stopadd 0xff )
 *
 *                                                                                    */
typedef struct{
  CONSTP2VAR(uint32, AUTOMATIC, RAMTST_APPL_DATA) RamTst_StartAddress_pu32;
  CONSTP2VAR(uint32, AUTOMATIC, RAMTST_APPL_DATA) RamTst_StopAddress_pu32;
  CONST(uint32, RAMTST_CONST) RamTst_FillPattern_u32;
  CONST(uint8, RAMTST_CONST) RamTst_TestPolicy_u8;
} RamTst_BlockParamsConfigType;


/* This type defines the information for an algoset
 * To calculate the value of MaxNumberOfTestedCells, sum all the cellnumbers of
 * the blocks configured for this AlgParamsConfigType. */
typedef struct{
  CONST(RamTst_NumberOfTestedCellsType, RAMTST_CONST) RamTst_NumberOfTestedCells_t;
  CONST(RamTst_NumberOfTestedCellsType, RAMTST_CONST) RamTst_MaxNumberOfTestedCells_t;
  P2CONST(RamTst_BlockParamsConfigType, AUTOMATIC, RAMTST_APPL_DATA) RamTst_ConfigBlocks_at;
  CONST(RamTst_NumberOfBlocksType, RAMTST_CONST) RamTst_NumberOfBlocks_t;
  CONST(RamTst_AlgorithmType, RAMTST_CONST) RamTst_Algorithm_t;
} RamTst_AlgParamsConfigType;

/*  */
typedef struct{
  P2CONST(RamTst_AlgParamsConfigType, AUTOMATIC, RAMTST_APPL_DATA) RamTst_AlgParams_at;
  /* The value for the minimal number of tested cells must be equal to the number of
   * bits in one address (e.g. TMS570: bits pro address is 32, than the minimal
   * number of tested must be 32).   */
  CONST(RamTst_NumberOfTestedCellsType, RAMTST_CONST) RamTst_MinNumberOfTestedCells_t;
  CONST(uint8, RAMTST_CONST) RamTst_NumberOfAlgParams_u8;
  CONST(uint8, RAMTST_CONST) RamTst_DefaultAlgId_u8;
  P2FUNC(void, RAMTST_CODE, RamTst_TestCompletedNotification_pt)(void);
  P2FUNC(void, RAMTST_CODE, RamTst_ErrorNotification_pt)(void);
} RamTst_ConfigType;



/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

#define RAMTST_START_SEC_CONST_PBCFG_ROOT
#include "MemMap.h"

/* Symbolic names for RamTst module */
/* Symbolic names for Test configuration RamTstAlgParams */ 
#define RamTstConf_RamTstAlgParams_RamTstAlgParams (0u) 
  #define RamTstConf_RamTstBlockParams_RamTstBlockParams (0u) 



extern CONST(RamTst_ConfigType, RAMTST_CONST) RamTst_Config_t;

#define RAMTST_STOP_SEC_CONST_PBCFG_ROOT
#include "MemMap.h"


#endif  /* RAMTST_CFG_H */



/**********************************************************************************************************************
 *  END OF FILE: RamTst_Cfg.h
 *********************************************************************************************************************/

