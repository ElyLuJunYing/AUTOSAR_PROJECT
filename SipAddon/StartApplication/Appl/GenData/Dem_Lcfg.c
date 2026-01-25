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
 *            Module: Dem
 *           Program: MSR_Vector_SLP4
 *          Customer: Harman International (China) Holdings Co., Ltd.
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: FS32K148UAT0VLQR
 *    License Scope : The usage is restricted to CBD1800257_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Dem_Lcfg.c
 *   Generation Time: 2018-11-27 15:30:02
 *           Project: TsiStandard - Version 1
 *          Delivery: CBD1800257_D01
 *      Tool Version: DaVinci Configurator  5.18.37 SP1
 *
 *
 *********************************************************************************************************************/



/* configuration, interrupt handling implementations differ from the
 * source identification define used here. The naming
 * schemes for those files can be taken from this list:
 *
 * Dem.c:         DEM_SOURCE
 * Dem_Lcfg.c:    DEM_LCFG_SOURCE
 * Dem_PBcfg.c:   DEM_PBCFG_SOURCE */
#define DEM_LCFG_SOURCE


/**********************************************************************************************************************
  MISRA JUSTIFICATIONS
**********************************************************************************************************************/

/* PRQA S 0810 EOF */ /* MD_MSR_1.1_810 */                                      /* #include "..." causes nesting to exceed 8 levels - program is non-conforming. -- caused by #include'd files. */
/* PRQA S 0828 EOF */ /* MD_MSR_1.1_828 */                                      /* Maximum '#if...' nesting exceeds 8 levels - program is non-conforming -- caused by #include'd files. */
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */                                      /* Number of macro definitions exceeds 1024 - program is non-conforming -- caused by #include'd files. */
/* PRQA S 0779 EOF */ /* MD_DEM_5.1 */                                          /* Identifier does not differ in 32 significant characters -- caused by Autosar algorithm for unique symbolic names. */
/* PRQA S 0612 EOF */ /* MD_DEM_1.1_612 */                                      /* The size of an object exceeds 32767 bytes - program is non-conforming -- caused by large user configration. */


/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/

#include "Dem.h"
#include "Os.h"
#if (DEM_CFG_USE_NVM == STD_ON)
# include "NvM.h"                                                               /* get: symbolic names for NvM block IDs */
#endif
#if (DEM_CFG_SUPPORT_J1939 == STD_ON)
# include "J1939Nm.h"                                                           /* get: symbolic names for J1939Nm node IDs */
#endif
#if (DEM_CFG_USE_RTE == STD_ON)
/* DEM used with RTE */
# include "Rte_DemMaster_0.h"
#endif
#include "Dem_AdditionalIncludeCfg.h"                                           /* additional, configuration defined files */

/**********************************************************************************************************************
  LOCAL CONSTANT MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL FUNCTION MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/



/**********************************************************************************************************************
  LOCAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: LOCAL DATA
**********************************************************************************************************************/



/**********************************************************************************************************************
  GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  Dem_Cfg_CycleIdTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_CycleIdTable
  \details
  Element         Description
  UsedForAging    DemOperationCycle is target of any DemEventParameter/DemEventClass/DemAgingCycleRef
  OpCycleType     DemOperationCycleType of the DemOperationCycle: [DEM_CFG_OPCYC_IGNITION, DEM_CFG_OPCYC_OBD_DCY, DEM_CFG_OPCYC_OTHER, DEM_CFG_OPCYC_POWER, DEM_CFG_OPCYC_TIME, DEM_CFG_OPCYC_WARMUP, DEM_CFG_OPCYC_IGNITION_HYBRID, DEM_CFG_OPCYC_AGING]
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_CycleIdTableType, DEM_CONST) Dem_Cfg_CycleIdTable[2] = {
    /* Index    UsedForAging  OpCycleType                   Comment */
  { /*     0 */        FALSE, DEM_CFG_OPCYC_IGNITION },  /* [DemConf_DemOperationCycle_IgnitionCycle] */
  { /*     1 */         TRUE, DEM_CFG_OPCYC_POWER    }   /* [DemConf_DemOperationCycle_PowerCycle] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_DataCollectionTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_DataCollectionTable
  \details
  Element                                Description
  IdNumber                           
  CollectionSize                     
  DataElementTableCol2ElmtIndEndIdx      the end index of the 0:n relation pointing to Dem_Cfg_DataElementTableCol2ElmtInd
  DataElementTableCol2ElmtIndStartIdx    the start index of the 0:n relation pointing to Dem_Cfg_DataElementTableCol2ElmtInd
  MaskedBits                             contains bitcoded the boolean data of Dem_Cfg_DataElementTableCol2ElmtIndUsedOfDataCollectionTable, Dem_Cfg_UpdateOfDataCollectionTable
  StorageKind                        
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_DataCollectionTableType, DEM_CONST) Dem_Cfg_DataCollectionTable[4] = {
    /* Index    IdNumber  CollectionSize  DataElementTableCol2ElmtIndEndIdx                                  DataElementTableCol2ElmtIndStartIdx                                  MaskedBits  StorageKind                       Referable Keys */
  { /*     0 */  0x0000u,             0u, DEM_CFG_NO_DATAELEMENTTABLECOL2ELMTINDENDIDXOFDATACOLLECTIONTABLE, DEM_CFG_NO_DATAELEMENTTABLECOL2ELMTINDSTARTIDXOFDATACOLLECTIONTABLE,      0x00u, DEM_CFG_EREC_TYPE_GLOBAL   },  /* [#NoDataCollectionConfigured] */
  { /*     1 */  0x0001u,             1u,                                                                1u,                                                                  0u,      0x03u, DEM_CFG_EREC_TYPE_INTERNAL },  /* [#EdrOccurrenceCounter, Ext:ExtendedDataClass_83dcefb7] */
  { /*     2 */  0xF414u,             2u,                                                                2u,                                                                  1u,      0x02u, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDID_0xf414, Ffm:FreezeFrameClass_fb82c988] */
  { /*     3 */  0x0055u,             2u,                                                                3u,                                                                  2u,      0x02u, DEM_CFG_EREC_TYPE_USER     }   /* [#DidDemDidClass_StartApplication, Ffm:DemFreezeFrameClass_StartApplication] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_DataCollectionTableFfm2CollInd
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_DataCollectionTableFfm2CollInd
  \brief  the indexes of the 1:1 sorted relation pointing to Dem_Cfg_DataCollectionTable
*/ 
#define DEM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_DataCollectionTableFfm2CollIndType, DEM_CONST) Dem_Cfg_DataCollectionTableFfm2CollInd[2] = {
  /* Index     DataCollectionTableFfm2CollInd      Referable Keys */
  /*     0 */                              3u,  /* [Ffm:DemFreezeFrameClass_StartApplication] */
  /*     1 */                              2u   /* [Ffm:FreezeFrameClass_fb82c988] */
};
#define DEM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_DataElementTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_DataElementTable
  \details
  Element         Description
  ElementKind     DataElement kind, returned by Dem_Cfg_DataCallbackType()
  ElementSize     Size of data element in Byte.
  ReadDataFunc    C-function for getting the data. Its signature depends on ElementKind: With value(s) DEM_CFG_DATA_FROM_CBK_WITH_EVENTID use: Std_ReturnType (*)(uint8* Buffer, uint16 EventId); - and use: Std_ReturnType (*)(uint8* Buffer); with the other values DEM_CFG_DATA_FROM_CBK, DEM_CFG_DATA_FROM_SR_PORT_BOOLEAN, DEM_CFG_DATA_FROM_SR_PORT_SINT16, DEM_CFG_DATA_FROM_SR_PORT_SINT16_INTEL, DEM_CFG_DATA_FROM_SR_PORT_SINT32, DEM_CFG_DATA_FROM_SR_PORT_SINT32_INTEL, DEM_CFG_DATA_FROM_SR_PORT_SINT8, DEM_CFG_DATA_FROM_SR_PORT_SINT8_N, DEM_CFG_DATA_FROM_SR_PORT_UINT16, DEM_CFG_DATA_FROM_SR_PORT_UINT16_INTEL, DEM_CFG_DATA_FROM_SR_PORT_UINT32, DEM_CFG_DATA_FROM_SR_PORT_UINT32_INTEL, DEM_CFG_DATA_FROM_SR_PORT_UINT8, DEM_CFG_DATA_FROM_SR_PORT_UINT8_N.
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_DataElementTableType, DEM_CONST) Dem_Cfg_DataElementTable[4] = {
    /* Index    ElementKind                  ElementSize  ReadDataFunc                                                                                                                         Referable Keys */
  { /*     0 */ DEM_CFG_DATAELEMENT_INVALID,          0u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ NULL_PTR                                                          },  /* [#NoDataElementConfigured] */
  { /*     1 */ DEM_CFG_DATA_FROM_CBK      ,          2u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_PID_0x14_DID_Data_ReadData                    },  /* [#PID_0x14_DID_Data, DidDID_0xf414] */
  { /*     2 */ DEM_CFG_DATA_FROM_OCCCTR   ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ NULL_PTR                                                          },  /* [#OccurrenceCounter_Occurrence_Counter, EdrOccurrenceCounter] */
  { /*     3 */ DEM_CFG_DATA_FROM_CBK      ,          2u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DemDataElementClass_StartApplication_ReadData }   /* [#DemDataElementClass_StartApplication, DidDemDidClass_StartApplication] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_DataElementTableCol2ElmtInd
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_DataElementTableCol2ElmtInd
  \brief  the indexes of the 1:1 sorted relation pointing to Dem_Cfg_DataElementTable
*/ 
#define DEM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_DataElementTableCol2ElmtIndType, DEM_CONST) Dem_Cfg_DataElementTableCol2ElmtInd[3] = {
  /* Index     DataElementTableCol2ElmtInd      Referable Keys */
  /*     0 */                           2u,  /* [EdrOccurrenceCounter] */
  /*     1 */                           1u,  /* [DidDID_0xf414] */
  /*     2 */                           3u   /* [DidDemDidClass_StartApplication] */
};
#define DEM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_DebounceTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_DebounceTable
  \details
  Element                   Description
  DecrementStepSize         (-1) * DemDebounceCounterDecrementStepSize of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased
  FailedThreshold           DemDebounceCounterFailedThreshold of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased
  IncrementStepSize         DemDebounceCounterIncrementStepSize of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased
  PassedThreshold           DemDebounceCounterPassedThreshold of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased
  EventDebounceAlgorithm    Used DemEventParameter/DemEventClass/DemDebounceAlgorithmClass
  MaskedBits                contains bitcoded the boolean data of Dem_Cfg_DebounceContinuousOfDebounceTable, Dem_Cfg_EventDebounceBehaviorOfDebounceTable, Dem_Cfg_JumpDownOfDebounceTable, Dem_Cfg_JumpUpOfDebounceTable, Dem_Cfg_StorageOfDebounceTable
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_DebounceTableType, DEM_CONST) Dem_Cfg_DebounceTable[3] = {
    /* Index    DecrementStepSize  FailedThreshold  IncrementStepSize  PassedThreshold  EventDebounceAlgorithm                                                      MaskedBits        Referable Keys */
  { /*     0 */                -1,             127,                 1,            -128, DEM_CFG_DEM_CFG_DEBOUNCETYPE_COUNTER_EVENTDEBOUNCEALGORITHMOFDEBOUNCETABLE,      0x00u },  /* [DTC_0X908E87, DTC_0X909502, DTC_0X909602, DTC_0X919F11, DTC_0X919F12, DTC_0X919F13, DTC_0X91BA63, DTC_0X923816, DTC_0X923817, DTC_0X925211, DTC_0X925311, DTC_0X925411, DTC_0X93F511, DTC_0X93F512, DTC_0X93F513, DTC_0X93F611, DTC_0X93F612, DTC_0X93F613, DTC_0X9A0101, DTC_0X9A0111, DTC_0X9A0112, DTC_0X9A0113, DTC_0X9A011E, DTC_0X9A0125, DTC_0X9A0201, DTC_0X9A0211, DTC_0X9A0212, DTC_0X9A0213, DTC_0X9A021E, DTC_0X9A0225, DTC_0X9A0301, DTC_0X9A0311, DTC_0X9A0312, DTC_0X9A0313, DTC_0X9A031E, DTC_0X9A0325, DTC_0X9A0401, DTC_0X9A0411, DTC_0X9A0412, DTC_0X9A0413, DTC_0X9A041E, DTC_0X9A0425, DTC_0XA10602, DTC_0XA10604, DTC_0XA11204, DTC_0XC01988, DTC_0XC14687, DTC_0XC15502, DTC_0XC15582, DTC_0XC19887, DTC_0XC19988, DTC_0XC26402, DTC_0XD10017, DTC_0XD10116] */
  { /*     1 */                -1,             127,                 1,            -128, DEM_CFG_DEM_CFG_DEBOUNCETYPE_COUNTER_EVENTDEBOUNCEALGORITHMOFDEBOUNCETABLE,      0x06u },  /* [DEM_EVENT_StartApplication, DemEventParameter_Ramtst] */
  { /*     2 */                 0,               0,                 0,               0, DEM_CFG_DEM_CFG_DEBOUNCETYPE_INVALID_EVENTDEBOUNCEALGORITHMOFDEBOUNCETABLE,      0x00u }   /* [#EVENT_INVALID] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_DtcTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_DtcTable
  \details
  Element           Description
  UdsDtc        
  DtcSeverity   
  FunctionalUnit
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_DtcTableType, DEM_CONST) Dem_Cfg_DtcTable[56] = {
    /* Index    UdsDtc        DtcSeverity  FunctionalUnit        Referable Keys */
  { /*     0 */ 0x00FFFFFFuL,          0u,           255u },  /* [#NoUdsDtcConfigured, #NoObdDtcConfigured, #NoJ1939DtcConfigured] */
  { /*     1 */ 0x009A011EuL,         32u,             0u },  /* [DTCClass_DTC_0X9A011E] */
  { /*     2 */ 0x009A021EuL,         32u,             0u },  /* [DTCClass_DTC_0X9A021E] */
  { /*     3 */ 0x009A031EuL,         32u,             0u },  /* [DTCClass_DTC_0X9A031E] */
  { /*     4 */ 0x009A041EuL,         32u,             0u },  /* [DTCClass_DTC_0X9A041E] */
  { /*     5 */ 0x009A0101uL,         32u,             0u },  /* [DTCClass_DTC_0X9A0101] */
  { /*     6 */ 0x009A0111uL,         32u,             0u },  /* [DTCClass_DTC_0X9A0111] */
  { /*     7 */ 0x009A0112uL,         32u,             0u },  /* [DTCClass_DTC_0X9A0112] */
  { /*     8 */ 0x009A0113uL,         32u,             0u },  /* [DTCClass_DTC_0X9A0113] */
  { /*     9 */ 0x009A0125uL,         32u,             0u },  /* [DTCClass_DTC_0X9A0125] */
  { /*    10 */ 0x009A0201uL,         32u,             0u },  /* [DTCClass_DTC_0X9A0201] */
  { /*    11 */ 0x009A0211uL,         32u,             0u },  /* [DTCClass_DTC_0X9A0211] */
  { /*    12 */ 0x009A0212uL,         32u,             0u },  /* [DTCClass_DTC_0X9A0212] */
  { /*    13 */ 0x009A0213uL,         32u,             0u },  /* [DTCClass_DTC_0X9A0213] */
  { /*    14 */ 0x009A0225uL,         32u,             0u },  /* [DTCClass_DTC_0X9A0225] */
  { /*    15 */ 0x009A0301uL,         32u,             0u },  /* [DTCClass_DTC_0X9A0301] */
  { /*    16 */ 0x009A0311uL,         32u,             0u },  /* [DTCClass_DTC_0X9A0311] */
  { /*    17 */ 0x009A0312uL,         32u,             0u },  /* [DTCClass_DTC_0X9A0312] */
  { /*    18 */ 0x009A0313uL,         32u,             0u },  /* [DTCClass_DTC_0X9A0313] */
  { /*    19 */ 0x009A0325uL,         32u,             0u },  /* [DTCClass_DTC_0X9A0325] */
  { /*    20 */ 0x009A0401uL,         32u,             0u },  /* [DTCClass_DTC_0X9A0401] */
  { /*    21 */ 0x009A0411uL,         32u,             0u },  /* [DTCClass_DTC_0X9A0411] */
  { /*    22 */ 0x009A0412uL,         32u,             0u },  /* [DTCClass_DTC_0X9A0412] */
  { /*    23 */ 0x009A0413uL,         32u,             0u },  /* [DTCClass_DTC_0X9A0413] */
  { /*    24 */ 0x009A0425uL,         32u,             0u },  /* [DTCClass_DTC_0X9A0425] */
  { /*    25 */ 0x0091BA63uL,         64u,             0u },  /* [DTCClass_DTC_0X91BA63] */
  { /*    26 */ 0x0093F511uL,         64u,             0u },  /* [DTCClass_DTC_0X93F511] */
  { /*    27 */ 0x0093F512uL,         64u,             0u },  /* [DTCClass_DTC_0X93F512] */
  { /*    28 */ 0x0093F513uL,         64u,             0u },  /* [DTCClass_DTC_0X93F513] */
  { /*    29 */ 0x0093F611uL,         64u,             0u },  /* [DTCClass_DTC_0X93F611] */
  { /*    30 */ 0x0093F612uL,         64u,             0u },  /* [DTCClass_DTC_0X93F612] */
  { /*    31 */ 0x0093F613uL,         64u,             0u },  /* [DTCClass_DTC_0X93F613] */
  { /*    32 */ 0x00908E87uL,         64u,             0u },  /* [DTCClass_DTC_0X908E87] */
  { /*    33 */ 0x00919F11uL,         64u,             0u },  /* [DTCClass_DTC_0X919F11] */
  { /*    34 */ 0x00919F12uL,         64u,             0u },  /* [DTCClass_DTC_0X919F12] */
  { /*    35 */ 0x00919F13uL,         64u,             0u },  /* [DTCClass_DTC_0X919F13] */
  { /*    36 */ 0x00909502uL,         32u,             0u },  /* [DTCClass_DTC_0X909502] */
  { /*    37 */ 0x00909602uL,         32u,             0u },  /* [DTCClass_DTC_0X909602] */
  { /*    38 */ 0x00923816uL,         32u,             0u },  /* [DTCClass_DTC_0X923816] */
  { /*    39 */ 0x00923817uL,         32u,             0u },  /* [DTCClass_DTC_0X923817] */
  { /*    40 */ 0x00925202uL,         32u,             0u },  /* [DTCClass_DTC_0X925211] */
  { /*    41 */ 0x00925302uL,         32u,             0u },  /* [DTCClass_DTC_0X925311] */
  { /*    42 */ 0x00925402uL,         32u,             0u },  /* [DTCClass_DTC_0X925411] */
  { /*    43 */ 0x00A10602uL,         32u,             0u },  /* [DTCClass_DTC_0XA10602] */
  { /*    44 */ 0x00A10604uL,         32u,             0u },  /* [DTCClass_DTC_0XA10604] */
  { /*    45 */ 0x00A11204uL,         32u,             0u },  /* [DTCClass_DTC_0XA11204] */
  { /*    46 */ 0x00C01988uL,         32u,             0u },  /* [DTCClass_DTC_0XC01988] */
  { /*    47 */ 0x00C14687uL,        128u,             0u },  /* [DTCClass_DTC_0XC14687] */
  { /*    48 */ 0x00C15502uL,         64u,             0u },  /* [DTCClass_DTC_0XC15502] */
  { /*    49 */ 0x00C15582uL,        128u,             0u },  /* [DTCClass_DTC_0XC15582] */
    /* Index    UdsDtc        DtcSeverity  FunctionalUnit        Referable Keys */
  { /*    50 */ 0x00C19887uL,        128u,             0u },  /* [DTCClass_DTC_0XC19887] */
  { /*    51 */ 0x00C19988uL,         32u,             0u },  /* [DTCClass_DTC_0XC19988] */
  { /*    52 */ 0x00C26402uL,         64u,             0u },  /* [DTCClass_DTC_0XC26402] */
  { /*    53 */ 0x00D10017uL,        128u,             0u },  /* [DTCClass_DTC_0XD10017] */
  { /*    54 */ 0x00D10116uL,        128u,             0u },  /* [DTCClass_DTC_0XD10116] */
  { /*    55 */ 0x00482BFFuL,          0u,             0u }   /* [DemDTCClass_StartApplication] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_EnableConditionGroupTableInd
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_EnableConditionGroupTableInd
  \brief  the indexes of the 1:1 sorted relation pointing to Dem_Cfg_EnableConditionGroupTable
*/ 
#define DEM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_EnableConditionGroupTableIndType, DEM_CONST) Dem_Cfg_EnableConditionGroupTableInd[77] = {
  /* Index     EnableConditionGroupTableInd      Referable Keys */
  /*     0 */                            0u,  /* [__Internal_ControlDtcSetting] */
  /*     1 */                            5u,  /* [__Internal_ControlDtcSetting] */
  /*     2 */                            6u,  /* [__Internal_ControlDtcSetting] */
  /*     3 */                            4u,  /* [__Internal_ControlDtcSetting] */
  /*     4 */                            1u,  /* [__Internal_ControlDtcSetting] */
  /*     5 */                            2u,  /* [__Internal_ControlDtcSetting] */
  /*     6 */                            3u,  /* [__Internal_ControlDtcSetting] */
  /*     7 */                            3u,  /* [China] */
  /*     8 */                            3u,  /* [H9] */
  /*     9 */                            5u,  /* [HUT] */
  /*    10 */                            6u,  /* [HUT] */
  /*    11 */                            4u,  /* [HUT] */
  /*    12 */                            1u,  /* [HUT] */
  /*    13 */                            2u,  /* [HUT] */
  /*    14 */                            3u,  /* [HUT] */
  /*    15 */                            6u,  /* [IP] */
  /*    16 */                            5u,  /* [No] */
  /*    17 */                            1u,  /* [No] */
  /*    18 */                            2u,  /* [No] */
  /*    19 */                            5u,  /* [STATE_NORMAL] */
  /*    20 */                            6u,  /* [STATE_NORMAL] */
  /*    21 */                            4u,  /* [STATE_NORMAL] */
  /*    22 */                            1u,  /* [STATE_NORMAL] */
  /*    23 */                            2u,  /* [STATE_NORMAL] */
  /*    24 */                            3u,  /* [STATE_NORMAL] */
  /*    25 */                            5u,  /* [Start] */
  /*    26 */                            6u,  /* [Start] */
  /*    27 */                            4u,  /* [Start] */
  /*    28 */                            1u,  /* [Start] */
  /*    29 */                            2u,  /* [Start] */
  /*    30 */                            3u,  /* [Start] */
  /*    31 */                            3u,  /* [V51] */
  /*    32 */                            3u,  /* [Vechile] */
  /*    33 */                            1u,  /* [camer] */
  /*    34 */                            5u,  /* [completed] */
  /*    35 */                            6u,  /* [completed] */
  /*    36 */                            4u,  /* [completed] */
  /*    37 */                            1u,  /* [completed] */
  /*    38 */                            2u,  /* [completed] */
  /*    39 */                            3u,  /* [completed] */
  /*    40 */                            5u,  /* [diagnostic] */
  /*    41 */                            2u,  /* [display] */
  /*    42 */                            5u,  /* [fault] */
  /*    43 */                            1u,  /* [fault] */
  /*    44 */                            2u,  /* [fault] */
  /*    45 */                            5u,  /* [in] */
  /*    46 */                            6u,  /* [in] */
  /*    47 */                            4u,  /* [in] */
  /*    48 */                            1u,  /* [in] */
  /*    49 */                            2u,  /* [in] */
  /* Index     EnableConditionGroupTableInd      Referable Keys */
  /*    50 */                            3u,  /* [in] */
  /*    51 */                            5u,  /* [is] */
  /*    52 */                            6u,  /* [is] */
  /*    53 */                            4u,  /* [is] */
  /*    54 */                            1u,  /* [is] */
  /*    55 */                            2u,  /* [is] */
  /*    56 */                            3u,  /* [is] */
  /*    57 */                            6u,  /* [online] */
  /*    58 */                            3u,  /* [or] */
  /*    59 */                            1u,  /* [power] */
  /*    60 */                            2u,  /* [power] */
  /*    61 */                            5u,  /* [sequence] */
  /*    62 */                            6u,  /* [sequence] */
  /*    63 */                            4u,  /* [sequence] */
  /*    64 */                            1u,  /* [sequence] */
  /*    65 */                            2u,  /* [sequence] */
  /*    66 */                            3u,  /* [sequence] */
  /*    67 */                            1u,  /* [supply] */
  /*    68 */                            2u,  /* [supply] */
  /*    69 */                            5u,  /* [up] */
  /*    70 */                            6u,  /* [up] */
  /*    71 */                            4u,  /* [up] */
  /*    72 */                            1u,  /* [up] */
  /*    73 */                            2u,  /* [up] */
  /*    74 */                            3u,  /* [up] */
  /*    75 */                            3u,  /* [variant] */
  /*    76 */                            5u   /* [voltage] */
};
#define DEM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_EnableConditionTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_EnableConditionTable
  \brief  Map each EnableCondition(Id) to the referring EnableConditionGroups - this is reverse direction of the AUTOSAR configuration model.
  \details
  Element                                 Description
  EnableConditionGroupTableIndEndIdx      the end index of the 0:n relation pointing to Dem_Cfg_EnableConditionGroupTableInd
  EnableConditionGroupTableIndStartIdx    the start index of the 0:n relation pointing to Dem_Cfg_EnableConditionGroupTableInd
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_EnableConditionTableType, DEM_CONST) Dem_Cfg_EnableConditionTable[25] = {
    /* Index    EnableConditionGroupTableIndEndIdx  EnableConditionGroupTableIndStartIdx */
  { /*     0 */                                 7u,                                   0u },
  { /*     1 */                                 8u,                                   7u },
  { /*     2 */                                 9u,                                   8u },
  { /*     3 */                                15u,                                   9u },
  { /*     4 */                                16u,                                  15u },
  { /*     5 */                                19u,                                  16u },
  { /*     6 */                                25u,                                  19u },
  { /*     7 */                                31u,                                  25u },
  { /*     8 */                                32u,                                  31u },
  { /*     9 */                                33u,                                  32u },
  { /*    10 */                                34u,                                  33u },
  { /*    11 */                                40u,                                  34u },
  { /*    12 */                                41u,                                  40u },
  { /*    13 */                                42u,                                  41u },
  { /*    14 */                                45u,                                  42u },
  { /*    15 */                                51u,                                  45u },
  { /*    16 */                                57u,                                  51u },
  { /*    17 */                                58u,                                  57u },
  { /*    18 */                                59u,                                  58u },
  { /*    19 */                                61u,                                  59u },
  { /*    20 */                                67u,                                  61u },
  { /*    21 */                                69u,                                  67u },
  { /*    22 */                                75u,                                  69u },
  { /*    23 */                                76u,                                  75u },
  { /*    24 */                                77u,                                  76u }
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_EventTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_EventTable
  \details
  Element                         Description
  AgingCycleCounterThreshold      DemAgingCycleCounterThreshold of the DemEventParameter/DemEventClass, if AgingAllowedOfEventTable==FALSE we use '255' here, too.
  AgingCycleId                    DemOperationCycle (ID) referenced by DemEventParameter/DemEventClass/DemAgingCycleRef
  DtcTableIdx                     the index of the 1:1 relation pointing to Dem_Cfg_DtcTable
  EnableConditionGroupTableIdx    the index of the 1:1 relation pointing to Dem_Cfg_EnableConditionGroupTable
  EventPriority                   DemEventParameter/DemEventClass/DemEventPriority, values [1..255] for the configuration range [1..255].
  ExtendedDataTableIdx            the index of the 1:1 relation pointing to Dem_Cfg_ExtendedDataTable
  FreezeFrameNumTableEndIdx       the end index of the 0:n relation pointing to Dem_Cfg_FreezeFrameNumTable
  FreezeFrameNumTableStartIdx     the start index of the 0:n relation pointing to Dem_Cfg_FreezeFrameNumTable
  FreezeFrameTableStdFFIdx        the index of the 1:1 relation pointing to Dem_Cfg_FreezeFrameTable
  MaskedBits                      contains bitcoded the boolean data of Dem_Cfg_AgingAllowedOfEventTable, Dem_Cfg_EventLatchTFOfEventTable, Dem_Cfg_FreezeFrameNumTableUsedOfEventTable
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_EventTableType, DEM_CONST) Dem_Cfg_EventTable[57] = {
    /* Index    AgingCycleCounterThreshold  AgingCycleId                          DtcTableIdx  EnableConditionGroupTableIdx  EventPriority  ExtendedDataTableIdx  FreezeFrameNumTableEndIdx                         FreezeFrameNumTableStartIdx                         FreezeFrameTableStdFFIdx  MaskedBits        Referable Keys */
  { /*     0 */                        80u, DemConf_DemOperationCycle_PowerCycle,          1u,                           4u,            1u,                   1u,                                               1u,                                                 0u,                       2u,      0x05u },  /* [#EVENT_INVALID, Satellite#0] */
  { /*     1 */                        80u, DemConf_DemOperationCycle_PowerCycle,          1u,                           4u,            1u,                   1u,                                               1u,                                                 0u,                       2u,      0x05u },  /* [DTC_0X9A011E, Satellite#0] */
  { /*     2 */                        80u, DemConf_DemOperationCycle_PowerCycle,          2u,                           4u,            1u,                   1u,                                               1u,                                                 0u,                       2u,      0x05u },  /* [DTC_0X9A021E, Satellite#0] */
  { /*     3 */                        80u, DemConf_DemOperationCycle_PowerCycle,          3u,                           4u,            1u,                   1u,                                               1u,                                                 0u,                       2u,      0x05u },  /* [DTC_0X9A031E, Satellite#0] */
  { /*     4 */                        80u, DemConf_DemOperationCycle_PowerCycle,          4u,                           4u,            1u,                   1u,                                               1u,                                                 0u,                       2u,      0x05u },  /* [DTC_0X9A041E, Satellite#0] */
  { /*     5 */                        80u, DemConf_DemOperationCycle_PowerCycle,          5u,                           4u,            1u,                   1u,                                               1u,                                                 0u,                       2u,      0x05u },  /* [DTC_0X9A0101, Satellite#0] */
  { /*     6 */                        80u, DemConf_DemOperationCycle_PowerCycle,          6u,                           4u,            1u,                   1u,                                               1u,                                                 0u,                       2u,      0x05u },  /* [DTC_0X9A0111, Satellite#0] */
  { /*     7 */                        80u, DemConf_DemOperationCycle_PowerCycle,          7u,                           4u,            1u,                   1u,                                               1u,                                                 0u,                       2u,      0x05u },  /* [DTC_0X9A0112, Satellite#0] */
  { /*     8 */                        80u, DemConf_DemOperationCycle_PowerCycle,          8u,                           4u,            1u,                   1u,                                               1u,                                                 0u,                       2u,      0x05u },  /* [DTC_0X9A0113, Satellite#0] */
  { /*     9 */                        80u, DemConf_DemOperationCycle_PowerCycle,          9u,                           4u,            1u,                   1u,                                               1u,                                                 0u,                       2u,      0x05u },  /* [DTC_0X9A0125, Satellite#0] */
  { /*    10 */                        80u, DemConf_DemOperationCycle_PowerCycle,         10u,                           4u,            1u,                   1u,                                               1u,                                                 0u,                       2u,      0x05u },  /* [DTC_0X9A0201, Satellite#0] */
  { /*    11 */                        80u, DemConf_DemOperationCycle_PowerCycle,         11u,                           4u,            1u,                   1u,                                               1u,                                                 0u,                       2u,      0x05u },  /* [DTC_0X9A0211, Satellite#0] */
  { /*    12 */                        80u, DemConf_DemOperationCycle_PowerCycle,         12u,                           4u,            1u,                   1u,                                               1u,                                                 0u,                       2u,      0x05u },  /* [DTC_0X9A0212, Satellite#0] */
  { /*    13 */                        80u, DemConf_DemOperationCycle_PowerCycle,         13u,                           4u,            1u,                   1u,                                               1u,                                                 0u,                       2u,      0x05u },  /* [DTC_0X9A0213, Satellite#0] */
  { /*    14 */                        80u, DemConf_DemOperationCycle_PowerCycle,         14u,                           4u,            1u,                   1u,                                               1u,                                                 0u,                       2u,      0x05u },  /* [DTC_0X9A0225, Satellite#0] */
  { /*    15 */                        80u, DemConf_DemOperationCycle_PowerCycle,         15u,                           4u,            1u,                   1u,                                               1u,                                                 0u,                       2u,      0x05u },  /* [DTC_0X9A0301, Satellite#0] */
  { /*    16 */                        80u, DemConf_DemOperationCycle_PowerCycle,         16u,                           4u,            1u,                   1u,                                               1u,                                                 0u,                       2u,      0x05u },  /* [DTC_0X9A0311, Satellite#0] */
  { /*    17 */                        80u, DemConf_DemOperationCycle_PowerCycle,         17u,                           4u,            1u,                   1u,                                               1u,                                                 0u,                       2u,      0x05u },  /* [DTC_0X9A0312, Satellite#0] */
  { /*    18 */                        80u, DemConf_DemOperationCycle_PowerCycle,         18u,                           4u,            1u,                   1u,                                               1u,                                                 0u,                       2u,      0x05u },  /* [DTC_0X9A0313, Satellite#0] */
  { /*    19 */                        80u, DemConf_DemOperationCycle_PowerCycle,         19u,                           4u,            1u,                   1u,                                               1u,                                                 0u,                       2u,      0x05u },  /* [DTC_0X9A0325, Satellite#0] */
  { /*    20 */                        80u, DemConf_DemOperationCycle_PowerCycle,         20u,                           4u,            1u,                   1u,                                               1u,                                                 0u,                       2u,      0x05u },  /* [DTC_0X9A0401, Satellite#0] */
  { /*    21 */                        80u, DemConf_DemOperationCycle_PowerCycle,         21u,                           4u,            1u,                   1u,                                               1u,                                                 0u,                       2u,      0x05u },  /* [DTC_0X9A0411, Satellite#0] */
  { /*    22 */                        80u, DemConf_DemOperationCycle_PowerCycle,         22u,                           4u,            1u,                   1u,                                               1u,                                                 0u,                       2u,      0x05u },  /* [DTC_0X9A0412, Satellite#0] */
  { /*    23 */                        80u, DemConf_DemOperationCycle_PowerCycle,         23u,                           4u,            1u,                   1u,                                               1u,                                                 0u,                       2u,      0x05u },  /* [DTC_0X9A0413, Satellite#0] */
  { /*    24 */                        80u, DemConf_DemOperationCycle_PowerCycle,         24u,                           4u,            1u,                   1u,                                               1u,                                                 0u,                       2u,      0x05u },  /* [DTC_0X9A0425, Satellite#0] */
  { /*    25 */                        80u, DemConf_DemOperationCycle_PowerCycle,         25u,                           3u,            1u,                   1u,                                               1u,                                                 0u,                       2u,      0x05u },  /* [DTC_0X91BA63, Satellite#0] */
  { /*    26 */                        80u, DemConf_DemOperationCycle_PowerCycle,         26u,                           4u,            1u,                   1u,                                               1u,                                                 0u,                       2u,      0x05u },  /* [DTC_0X93F511, Satellite#0] */
  { /*    27 */                        80u, DemConf_DemOperationCycle_PowerCycle,         27u,                           4u,            1u,                   1u,                                               1u,                                                 0u,                       2u,      0x05u },  /* [DTC_0X93F512, Satellite#0] */
  { /*    28 */                        80u, DemConf_DemOperationCycle_PowerCycle,         28u,                           4u,            1u,                   1u,                                               1u,                                                 0u,                       2u,      0x05u },  /* [DTC_0X93F513, Satellite#0] */
  { /*    29 */                        80u, DemConf_DemOperationCycle_PowerCycle,         29u,                           4u,            1u,                   1u,                                               1u,                                                 0u,                       2u,      0x05u },  /* [DTC_0X93F611, Satellite#0] */
  { /*    30 */                        80u, DemConf_DemOperationCycle_PowerCycle,         30u,                           4u,            1u,                   1u,                                               1u,                                                 0u,                       2u,      0x05u },  /* [DTC_0X93F612, Satellite#0] */
  { /*    31 */                        80u, DemConf_DemOperationCycle_PowerCycle,         31u,                           4u,            1u,                   1u,                                               1u,                                                 0u,                       2u,      0x05u },  /* [DTC_0X93F613, Satellite#0] */
  { /*    32 */                        80u, DemConf_DemOperationCycle_PowerCycle,         32u,                           2u,            1u,                   1u,                                               1u,                                                 0u,                       2u,      0x05u },  /* [DTC_0X908E87, Satellite#0] */
  { /*    33 */                        80u, DemConf_DemOperationCycle_PowerCycle,         33u,                           4u,            1u,                   1u,                                               1u,                                                 0u,                       2u,      0x05u },  /* [DTC_0X919F11, Satellite#0] */
  { /*    34 */                        80u, DemConf_DemOperationCycle_PowerCycle,         34u,                           4u,            1u,                   1u,                                               1u,                                                 0u,                       2u,      0x05u },  /* [DTC_0X919F12, Satellite#0] */
  { /*    35 */                        80u, DemConf_DemOperationCycle_PowerCycle,         35u,                           4u,            1u,                   1u,                                               1u,                                                 0u,                       2u,      0x05u },  /* [DTC_0X919F13, Satellite#0] */
  { /*    36 */                        80u, DemConf_DemOperationCycle_PowerCycle,         36u,                           4u,            1u,                   1u,                                               1u,                                                 0u,                       2u,      0x05u },  /* [DTC_0X909502, Satellite#0] */
  { /*    37 */                        80u, DemConf_DemOperationCycle_PowerCycle,         37u,                           4u,            1u,                   1u,                                               1u,                                                 0u,                       2u,      0x05u },  /* [DTC_0X909602, Satellite#0] */
  { /*    38 */                        80u, DemConf_DemOperationCycle_PowerCycle,         38u,                           4u,            1u,                   1u,                                               1u,                                                 0u,                       2u,      0x05u },  /* [DTC_0X923816, Satellite#0] */
  { /*    39 */                        80u, DemConf_DemOperationCycle_PowerCycle,         39u,                           4u,            1u,                   1u,                                               1u,                                                 0u,                       2u,      0x05u },  /* [DTC_0X923817, Satellite#0] */
  { /*    40 */                        80u, DemConf_DemOperationCycle_PowerCycle,         40u,                           4u,            1u,                   1u,                                               1u,                                                 0u,                       2u,      0x05u },  /* [DTC_0X925211, Satellite#0] */
  { /*    41 */                        80u, DemConf_DemOperationCycle_PowerCycle,         41u,                           4u,            1u,                   1u,                                               1u,                                                 0u,                       2u,      0x05u },  /* [DTC_0X925311, Satellite#0] */
  { /*    42 */                        80u, DemConf_DemOperationCycle_PowerCycle,         42u,                           4u,            1u,                   1u,                                               1u,                                                 0u,                       2u,      0x05u },  /* [DTC_0X925411, Satellite#0] */
  { /*    43 */                        80u, DemConf_DemOperationCycle_PowerCycle,         43u,                           4u,            1u,                   1u,                                               1u,                                                 0u,                       2u,      0x05u },  /* [DTC_0XA10602, Satellite#0] */
  { /*    44 */                        80u, DemConf_DemOperationCycle_PowerCycle,         44u,                           4u,            1u,                   1u,                                               1u,                                                 0u,                       2u,      0x05u },  /* [DTC_0XA10604, Satellite#0] */
  { /*    45 */                        80u, DemConf_DemOperationCycle_PowerCycle,         45u,                           5u,            1u,                   1u,                                               1u,                                                 0u,                       2u,      0x05u },  /* [DTC_0XA11204, Satellite#0] */
  { /*    46 */                        80u, DemConf_DemOperationCycle_PowerCycle,         46u,                           5u,            1u,                   1u,                                               1u,                                                 0u,                       2u,      0x05u },  /* [DTC_0XC01988, Satellite#0] */
  { /*    47 */                        80u, DemConf_DemOperationCycle_PowerCycle,         47u,                           5u,            1u,                   1u,                                               1u,                                                 0u,                       2u,      0x05u },  /* [DTC_0XC14687, Satellite#0] */
  { /*    48 */                        80u, DemConf_DemOperationCycle_PowerCycle,         48u,                           6u,            1u,                   1u,                                               1u,                                                 0u,                       2u,      0x05u },  /* [DTC_0XC15502, Satellite#0] */
  { /*    49 */                        80u, DemConf_DemOperationCycle_PowerCycle,         49u,                           4u,            1u,                   1u,                                               1u,                                                 0u,                       2u,      0x05u },  /* [DTC_0XC15582, Satellite#0] */
    /* Index    AgingCycleCounterThreshold  AgingCycleId                          DtcTableIdx  EnableConditionGroupTableIdx  EventPriority  ExtendedDataTableIdx  FreezeFrameNumTableEndIdx                         FreezeFrameNumTableStartIdx                         FreezeFrameTableStdFFIdx  MaskedBits        Referable Keys */
  { /*    50 */                        80u, DemConf_DemOperationCycle_PowerCycle,         50u,                           5u,            1u,                   1u,                                               1u,                                                 0u,                       2u,      0x05u },  /* [DTC_0XC19887, Satellite#0] */
  { /*    51 */                        80u, DemConf_DemOperationCycle_PowerCycle,         51u,                           5u,            1u,                   1u,                                               1u,                                                 0u,                       2u,      0x05u },  /* [DTC_0XC19988, Satellite#0] */
  { /*    52 */                        80u, DemConf_DemOperationCycle_PowerCycle,         52u,                           1u,            1u,                   1u,                                               1u,                                                 0u,                       2u,      0x05u },  /* [DTC_0XC26402, Satellite#0] */
  { /*    53 */                        80u, DemConf_DemOperationCycle_PowerCycle,         53u,                           4u,            1u,                   1u,                                               1u,                                                 0u,                       2u,      0x05u },  /* [DTC_0XD10017, Satellite#0] */
  { /*    54 */                        80u, DemConf_DemOperationCycle_PowerCycle,         54u,                           4u,            1u,                   1u,                                               1u,                                                 0u,                       2u,      0x05u },  /* [DTC_0XD10116, Satellite#0] */
  { /*    55 */                       255u, /*no AgingCycle*/ 2U                ,          0u,                           0u,            2u,                   0u, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,                       0u,      0x00u },  /* [DemEventParameter_Ramtst, Satellite#0] */
  { /*    56 */                       255u, DemConf_DemOperationCycle_PowerCycle,         55u,                           0u,            2u,                   0u,                                               1u,                                                 0u,                       1u,      0x01u }   /* [DEM_EVENT_StartApplication, Satellite#0] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_ExtendedDataTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_ExtendedDataTable
  \details
  Element                                   Description
  DataCollectionTableEdr2CollIndEndIdx      the end index of the 0:n relation pointing to Dem_Cfg_DataCollectionTableEdr2CollInd
  DataCollectionTableEdr2CollIndStartIdx    the start index of the 0:n relation pointing to Dem_Cfg_DataCollectionTableEdr2CollInd
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_ExtendedDataTableType, DEM_CONST) Dem_Cfg_ExtendedDataTable[2] = {
    /* Index    DataCollectionTableEdr2CollIndEndIdx                                DataCollectionTableEdr2CollIndStartIdx                                      Referable Keys */
  { /*     0 */ DEM_CFG_NO_DATACOLLECTIONTABLEEDR2COLLINDENDIDXOFEXTENDEDDATATABLE, DEM_CFG_NO_DATACOLLECTIONTABLEEDR2COLLINDSTARTIDXOFEXTENDEDDATATABLE },  /* [#NoExtendedDataRecordConfigured, DemEventParameter_Ramtst, DEM_EVENT_StartApplication] */
  { /*     1 */                                                                 1u,                                                                   0u }   /* [#ExtendedDataClass_83dcefb7, #EVENT_INVALID, DTC_0X9A011E, DTC_0X9A021E, DTC_0X9A031E, DTC_0X9A041E, DTC_0X9A0101, DTC_0X9A0111, DTC_0X9A0112, DTC_0X9A0113, DTC_0X9A0125, DTC_0X9A0201, DTC_0X9A0211, DTC_0X9A0212, DTC_0X9A0213, DTC_0X9A0225, DTC_0X9A0301, DTC_0X9A0311, DTC_0X9A0312, DTC_0X9A0313, DTC_0X9A0325, DTC_0X9A0401, DTC_0X9A0411, DTC_0X9A0412, DTC_0X9A0413, DTC_0X9A0425, DTC_0X91BA63, DTC_0X93F511, DTC_0X93F512, DTC_0X93F513, DTC_0X93F611, DTC_0X93F612, DTC_0X93F613, DTC_0X908E87, DTC_0X919F11, DTC_0X919F12, DTC_0X919F13, DTC_0X909502, DTC_0X909602, DTC_0X923816, DTC_0X923817, DTC_0X925211, DTC_0X925311, DTC_0X925411, DTC_0XA10602, DTC_0XA10604, DTC_0XA11204, DTC_0XC01988, DTC_0XC14687, DTC_0XC15502, DTC_0XC15582, DTC_0XC19887, DTC_0XC19988, DTC_0XC26402, DTC_0XD10017, DTC_0XD10116] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_FreezeFrameTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_FreezeFrameTable
  \details
  Element                                   Description
  DataCollectionTableFfm2CollIndEndIdx      the end index of the 0:n relation pointing to Dem_Cfg_DataCollectionTableFfm2CollInd
  DataCollectionTableFfm2CollIndStartIdx    the start index of the 0:n relation pointing to Dem_Cfg_DataCollectionTableFfm2CollInd
  RecordSize                                Summarized size of did data that is stored in Dem_Cfg_PrimaryEntryType.SnapshotData[][] (i.e. typically without size of dids containing internal data elements).
  RecordSizeUds                             Summarized size of did data, did numbers and snapshot header (i.e. dynamical payload size of the uds response message).
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_FreezeFrameTableType, DEM_CONST) Dem_Cfg_FreezeFrameTable[3] = {
    /* Index    DataCollectionTableFfm2CollIndEndIdx                               DataCollectionTableFfm2CollIndStartIdx                               RecordSize  RecordSizeUds        Referable Keys */
  { /*     0 */ DEM_CFG_NO_DATACOLLECTIONTABLEFFM2COLLINDENDIDXOFFREEZEFRAMETABLE, DEM_CFG_NO_DATACOLLECTIONTABLEFFM2COLLINDSTARTIDXOFFREEZEFRAMETABLE,         0u,            0u },  /* [#NoFreezeFrameConfigured, DemEventParameter_Ramtst] */
  { /*     1 */                                                                1u,                                                                  0u,         2u,            6u },  /* [#DemFreezeFrameClass_StartApplication, DEM_EVENT_StartApplication] */
  { /*     2 */                                                                2u,                                                                  1u,         2u,            6u }   /* [#FreezeFrameClass_fb82c988, #EVENT_INVALID, DTC_0X9A011E, DTC_0X9A021E, DTC_0X9A031E, DTC_0X9A041E, DTC_0X9A0101, DTC_0X9A0111, DTC_0X9A0112, DTC_0X9A0113, DTC_0X9A0125, DTC_0X9A0201, DTC_0X9A0211, DTC_0X9A0212, DTC_0X9A0213, DTC_0X9A0225, DTC_0X9A0301, DTC_0X9A0311, DTC_0X9A0312, DTC_0X9A0313, DTC_0X9A0325, DTC_0X9A0401, DTC_0X9A0411, DTC_0X9A0412, DTC_0X9A0413, DTC_0X9A0425, DTC_0X91BA63, DTC_0X93F511, DTC_0X93F512, DTC_0X93F513, DTC_0X93F611, DTC_0X93F612, DTC_0X93F613, DTC_0X908E87, DTC_0X919F11, DTC_0X919F12, DTC_0X919F13, DTC_0X909502, DTC_0X909602, DTC_0X923816, DTC_0X923817, DTC_0X925211, DTC_0X925311, DTC_0X925411, DTC_0XA10602, DTC_0XA10604, DTC_0XA11204, DTC_0XC01988, DTC_0XC14687, DTC_0XC15502, DTC_0XC15582, DTC_0XC19887, DTC_0XC19988, DTC_0XC26402, DTC_0XD10017, DTC_0XD10116] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_MemoryBlockId
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_MemoryBlockId
  \brief  The array contains these items: Admin, Status, 8 * Primary
*/ 
#define DEM_START_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_MemoryBlockIdType, DEM_CONST) Dem_Cfg_MemoryBlockId[10] = {
  /* Index     MemoryBlockId                                                          Comment */
  /*     0 */ NvMConf_NvMBlockDescriptor_DemAdminDataBlock /*NvMBlockId=2*/     ,  /* [Dem_AdminData] */
  /*     1 */ NvMConf_NvMBlockDescriptor_DemStatusDataBlock /*NvMBlockId=6*/    ,  /* [Dem_StatusData] */
  /*     2 */ NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock0 /*NvMBlockId=7*/  ,  /* [Dem_PrimaryEntry0] */
  /*     3 */ NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock1 /*NvMBlockId=8*/  ,  /* [Dem_PrimaryEntry1] */
  /*     4 */ NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock2 /*NvMBlockId=9*/  ,  /* [Dem_PrimaryEntry2] */
  /*     5 */ NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock3 /*NvMBlockId=10*/ ,  /* [Dem_PrimaryEntry3] */
  /*     6 */ NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock4 /*NvMBlockId=11*/ ,  /* [Dem_PrimaryEntry4] */
  /*     7 */ NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock5 /*NvMBlockId=12*/ ,  /* [Dem_PrimaryEntry5] */
  /*     8 */ NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock6 /*NvMBlockId=13*/ ,  /* [Dem_PrimaryEntry6] */
  /*     9 */ NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock7 /*NvMBlockId=14*/    /* [Dem_PrimaryEntry7] */
};
#define DEM_STOP_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_MemoryBlockIdToMemoryEntryId
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_MemoryBlockIdToMemoryEntryId
  \brief  The array contains these items: Admin, Status, 8 * Primary
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_MemoryEntry_HandleType, DEM_CONST) Dem_Cfg_MemoryBlockIdToMemoryEntryId[10] = {
  /* Index     MemoryBlockIdToMemoryEntryId        Comment */
  /*     0 */ DEM_MEMORYENTRY_HANDLE_INVALID ,  /* [Dem_AdminData] */
  /*     1 */ DEM_MEMORYENTRY_HANDLE_INVALID ,  /* [Dem_StatusData] */
  /*     2 */ 0u                             ,  /* [Dem_PrimaryEntry0] */
  /*     3 */ 1u                             ,  /* [Dem_PrimaryEntry1] */
  /*     4 */ 2u                             ,  /* [Dem_PrimaryEntry2] */
  /*     5 */ 3u                             ,  /* [Dem_PrimaryEntry3] */
  /*     6 */ 4u                             ,  /* [Dem_PrimaryEntry4] */
  /*     7 */ 5u                             ,  /* [Dem_PrimaryEntry5] */
  /*     8 */ 6u                             ,  /* [Dem_PrimaryEntry6] */
  /*     9 */ 7u                                /* [Dem_PrimaryEntry7] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_MemoryDataPtr
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_MemoryDataPtr
  \brief  The array contains these items: Admin, Status, 8 * Primary
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_NvDataPtrType, DEM_CONST) Dem_Cfg_MemoryDataPtr[10] = {
  /* Index     MemoryDataPtr                                                                                  Comment */
  /*     0 */ (Dem_NvDataPtrType) &Dem_Cfg_GetAdminData()        /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_AdminData] */
  /*     1 */ (Dem_NvDataPtrType) &Dem_Cfg_GetStatusData()       /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_StatusData] */
  /*     2 */ (Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_0()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry0] */
  /*     3 */ (Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_1()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry1] */
  /*     4 */ (Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_2()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry2] */
  /*     5 */ (Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_3()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry3] */
  /*     6 */ (Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_4()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry4] */
  /*     7 */ (Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_5()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry5] */
  /*     8 */ (Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_6()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry6] */
  /*     9 */ (Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_7()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */   /* [Dem_PrimaryEntry7] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_MemoryDataSize
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_MemoryDataSize
  \brief  The array contains these items: Admin, Status, 8 * Primary
*/ 
#define DEM_START_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_MemoryDataSizeType, DEM_CONST) Dem_Cfg_MemoryDataSize[10] = {
  /* Index     MemoryDataSize                                                        Comment */
  /*     0 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetAdminData())      ,  /* [Dem_AdminData] */
  /*     1 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetStatusData())     ,  /* [Dem_StatusData] */
  /*     2 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_0()) ,  /* [Dem_PrimaryEntry0] */
  /*     3 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_1()) ,  /* [Dem_PrimaryEntry1] */
  /*     4 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_2()) ,  /* [Dem_PrimaryEntry2] */
  /*     5 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_3()) ,  /* [Dem_PrimaryEntry3] */
  /*     6 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_4()) ,  /* [Dem_PrimaryEntry4] */
  /*     7 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_5()) ,  /* [Dem_PrimaryEntry5] */
  /*     8 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_6()) ,  /* [Dem_PrimaryEntry6] */
  /*     9 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_7())    /* [Dem_PrimaryEntry7] */
};
#define DEM_STOP_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_MemoryEntry
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_MemoryEntry
  \brief  The array contains these items: 8 * Primary, ReadoutBuffer; size = DEM_CFG_GLOBAL_PRIMARY_SIZE + DEM_CFG_GLOBAL_SECONDARY_SIZE + DEM_CFG_NUMBER_OF_READOUTBUFFERS
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_SharedMemoryEntryPtrType, DEM_CONST) Dem_Cfg_MemoryEntry[9] = {
  /* Index     MemoryEntry                                                                     Comment */
  /*     0 */ &Dem_Cfg_GetPrimaryEntry_0()        /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry0] */
  /*     1 */ &Dem_Cfg_GetPrimaryEntry_1()        /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry1] */
  /*     2 */ &Dem_Cfg_GetPrimaryEntry_2()        /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry2] */
  /*     3 */ &Dem_Cfg_GetPrimaryEntry_3()        /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry3] */
  /*     4 */ &Dem_Cfg_GetPrimaryEntry_4()        /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry4] */
  /*     5 */ &Dem_Cfg_GetPrimaryEntry_5()        /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry5] */
  /*     6 */ &Dem_Cfg_GetPrimaryEntry_6()        /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry6] */
  /*     7 */ &Dem_Cfg_GetPrimaryEntry_7()        /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry7] */
  /*     8 */ &Dem_Cfg_GetReadoutBuffer(0).Data   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */   /* [Dem_Cfg_ReadoutBuffer[0].Data] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_MemoryEntryInit
**********************************************************************************************************************/
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_PrimaryEntryType, DEM_CONST) Dem_Cfg_MemoryEntryInit = { 0 };
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_TimeSeriesEntryInit
**********************************************************************************************************************/
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_TimeSeriesEntryType, DEM_CONST) Dem_Cfg_TimeSeriesEntryInit = { 0 };
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_AdminData
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_AdminDataType, DEM_NVM_DATA_NOINIT) Dem_Cfg_AdminData;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_ClearDTCTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_ClearDTCTable
  \brief  size = DEM_CFG_NUMBER_OF_CLEARDTCS
*/ 
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_ClearDTC_DataType, DEM_VAR_NOINIT) Dem_Cfg_ClearDTCTable[1];
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_CommitBuffer
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_CommitBufferType, DEM_VAR_NOINIT) Dem_Cfg_CommitBuffer;  /* PRQA S 0759 */ /* MD_MSR_18.4 */
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_DTCSelectorTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_DTCSelectorTable
  \brief  size = DEM_CFG_NUMBER_OF_DTCSELECTORS
*/ 
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_DTCSelector_DataType, DEM_VAR_NOINIT) Dem_Cfg_DTCSelectorTable[1];
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_EnableConditionGroupCounter
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_EnableConditionGroupCounter
  \brief  (DEM_CFG_SUPPORT_ENABLE_CONDITIONS == STD_ON) or there are internal EnableConditions. Table index: Condition group number. Table value: count of conditions in state 'enable'.
*/ 
#define DEM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_EnableConditionGroupCounterType, DEM_VAR_NOINIT) Dem_Cfg_EnableConditionGroupCounter[7];
  /* Index        Referable Keys  */
  /*     0 */  /* [##NoEnableConditionGroupConfigured, __Internal_ControlDtcSetting] */
  /*     1 */  /* [#EnableConditionGroup_2d4cad61, __Internal_ControlDtcSetting, HUT, No, STATE_NORMAL, Start, camer, completed, fault, in, is, power, sequence, supply, up] */
  /*     2 */  /* [#EnableConditionGroup_3e8e3f33, __Internal_ControlDtcSetting, HUT, No, STATE_NORMAL, Start, completed, display, fault, in, is, power, sequence, supply, up] */
  /*     3 */  /* [#EnableConditionGroup_5fbd712e, __Internal_ControlDtcSetting, China, H9, HUT, STATE_NORMAL, Start, V51, Vechile, completed, in, is, or, sequence, up, variant] */
  /*     4 */  /* [#EnableConditionGroup_b30aa5c2, __Internal_ControlDtcSetting, HUT, STATE_NORMAL, Start, completed, in, is, sequence, up] */
  /*     5 */  /* [#EnableConditionGroup_ce4d85f8, __Internal_ControlDtcSetting, HUT, No, STATE_NORMAL, Start, completed, diagnostic, fault, in, is, sequence, up, voltage] */
  /*     6 */  /* [#EnableConditionGroup_f70a9d46, __Internal_ControlDtcSetting, HUT, IP, STATE_NORMAL, Start, completed, in, is, online, sequence, up] */

#define DEM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_EnableConditionGroupState
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_EnableConditionGroupState
  \brief  (DEM_CFG_SUPPORT_ENABLE_CONDITIONS == STD_ON) or there are internal EnableConditions. Table index: Condition group number. Table value: count of conditions in state 'enable'.
*/ 
#define DEM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
volatile VAR(Dem_Cfg_EnableConditionGroupStateType, DEM_VAR_NOINIT) Dem_Cfg_EnableConditionGroupState[7];
  /* Index        Referable Keys  */
  /*     0 */  /* [##NoEnableConditionGroupConfigured, __Internal_ControlDtcSetting] */
  /*     1 */  /* [#EnableConditionGroup_2d4cad61, __Internal_ControlDtcSetting, HUT, No, STATE_NORMAL, Start, camer, completed, fault, in, is, power, sequence, supply, up] */
  /*     2 */  /* [#EnableConditionGroup_3e8e3f33, __Internal_ControlDtcSetting, HUT, No, STATE_NORMAL, Start, completed, display, fault, in, is, power, sequence, supply, up] */
  /*     3 */  /* [#EnableConditionGroup_5fbd712e, __Internal_ControlDtcSetting, China, H9, HUT, STATE_NORMAL, Start, V51, Vechile, completed, in, is, or, sequence, up, variant] */
  /*     4 */  /* [#EnableConditionGroup_b30aa5c2, __Internal_ControlDtcSetting, HUT, STATE_NORMAL, Start, completed, in, is, sequence, up] */
  /*     5 */  /* [#EnableConditionGroup_ce4d85f8, __Internal_ControlDtcSetting, HUT, No, STATE_NORMAL, Start, completed, diagnostic, fault, in, is, sequence, up, voltage] */
  /*     6 */  /* [#EnableConditionGroup_f70a9d46, __Internal_ControlDtcSetting, HUT, IP, STATE_NORMAL, Start, completed, in, is, online, sequence, up] */

#define DEM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_EnableConditionState
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_EnableConditionState
  \brief  (DEM_CFG_SUPPORT_ENABLE_CONDITIONS == STD_ON) or there are internal EnableConditions. Table index: Condition ID. Table value: current condition state '0' disable, '1' enable.
*/ 
#define DEM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_EnableConditionStateType, DEM_VAR_NOINIT) Dem_Cfg_EnableConditionState[25];
#define DEM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_EventDebounceValue
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_EventDebounceValue
  \brief  size = DEM_G_NUMBER_OF_EVENTS
*/ 
#define DEM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
volatile VAR(Dem_Cfg_EventDebounceValueType, DEM_VAR_NOINIT) Dem_Cfg_EventDebounceValue[57];
  /* Index        Referable Keys  */
  /*     0 */  /* [#EVENT_INVALID, Satellite#0] */
  /*     1 */  /* [DTC_0X9A011E, Satellite#0] */
  /*     2 */  /* [DTC_0X9A021E, Satellite#0] */
  /*     3 */  /* [DTC_0X9A031E, Satellite#0] */
  /*     4 */  /* [DTC_0X9A041E, Satellite#0] */
  /*     5 */  /* [DTC_0X9A0101, Satellite#0] */
  /*     6 */  /* [DTC_0X9A0111, Satellite#0] */
  /*     7 */  /* [DTC_0X9A0112, Satellite#0] */
  /*     8 */  /* [DTC_0X9A0113, Satellite#0] */
  /*     9 */  /* [DTC_0X9A0125, Satellite#0] */
  /*    10 */  /* [DTC_0X9A0201, Satellite#0] */
  /*    11 */  /* [DTC_0X9A0211, Satellite#0] */
  /*    12 */  /* [DTC_0X9A0212, Satellite#0] */
  /*    13 */  /* [DTC_0X9A0213, Satellite#0] */
  /*    14 */  /* [DTC_0X9A0225, Satellite#0] */
  /*    15 */  /* [DTC_0X9A0301, Satellite#0] */
  /*    16 */  /* [DTC_0X9A0311, Satellite#0] */
  /*    17 */  /* [DTC_0X9A0312, Satellite#0] */
  /*    18 */  /* [DTC_0X9A0313, Satellite#0] */
  /*    19 */  /* [DTC_0X9A0325, Satellite#0] */
  /*    20 */  /* [DTC_0X9A0401, Satellite#0] */
  /*    21 */  /* [DTC_0X9A0411, Satellite#0] */
  /*    22 */  /* [DTC_0X9A0412, Satellite#0] */
  /*    23 */  /* [DTC_0X9A0413, Satellite#0] */
  /*    24 */  /* [DTC_0X9A0425, Satellite#0] */
  /*    25 */  /* [DTC_0X91BA63, Satellite#0] */
  /*    26 */  /* [DTC_0X93F511, Satellite#0] */
  /*    27 */  /* [DTC_0X93F512, Satellite#0] */
  /*    28 */  /* [DTC_0X93F513, Satellite#0] */
  /*    29 */  /* [DTC_0X93F611, Satellite#0] */
  /*    30 */  /* [DTC_0X93F612, Satellite#0] */
  /*    31 */  /* [DTC_0X93F613, Satellite#0] */
  /*    32 */  /* [DTC_0X908E87, Satellite#0] */
  /*    33 */  /* [DTC_0X919F11, Satellite#0] */
  /*    34 */  /* [DTC_0X919F12, Satellite#0] */
  /*    35 */  /* [DTC_0X919F13, Satellite#0] */
  /*    36 */  /* [DTC_0X909502, Satellite#0] */
  /*    37 */  /* [DTC_0X909602, Satellite#0] */
  /*    38 */  /* [DTC_0X923816, Satellite#0] */
  /*    39 */  /* [DTC_0X923817, Satellite#0] */
  /*    40 */  /* [DTC_0X925211, Satellite#0] */
  /*    41 */  /* [DTC_0X925311, Satellite#0] */
  /*    42 */  /* [DTC_0X925411, Satellite#0] */
  /*    43 */  /* [DTC_0XA10602, Satellite#0] */
  /*    44 */  /* [DTC_0XA10604, Satellite#0] */
  /*    45 */  /* [DTC_0XA11204, Satellite#0] */
  /*    46 */  /* [DTC_0XC01988, Satellite#0] */
  /*    47 */  /* [DTC_0XC14687, Satellite#0] */
  /*    48 */  /* [DTC_0XC15502, Satellite#0] */
  /*    49 */  /* [DTC_0XC15582, Satellite#0] */
  /* Index        Referable Keys  */
  /*    50 */  /* [DTC_0XC19887, Satellite#0] */
  /*    51 */  /* [DTC_0XC19988, Satellite#0] */
  /*    52 */  /* [DTC_0XC26402, Satellite#0] */
  /*    53 */  /* [DTC_0XD10017, Satellite#0] */
  /*    54 */  /* [DTC_0XD10116, Satellite#0] */
  /*    55 */  /* [DemEventParameter_Ramtst, Satellite#0] */
  /*    56 */  /* [DEM_EVENT_StartApplication, Satellite#0] */

#define DEM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_EventInternalStatus
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_EventInternalStatus
  \brief  size = DEM_G_NUMBER_OF_EVENTS
*/ 
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
volatile VAR(Dem_Event_InternalStatusType, DEM_VAR_NOINIT) Dem_Cfg_EventInternalStatus[57];
  /* Index        Referable Keys  */
  /*     0 */  /* [#EVENT_INVALID, Satellite#0] */
  /*     1 */  /* [DTC_0X9A011E, Satellite#0] */
  /*     2 */  /* [DTC_0X9A021E, Satellite#0] */
  /*     3 */  /* [DTC_0X9A031E, Satellite#0] */
  /*     4 */  /* [DTC_0X9A041E, Satellite#0] */
  /*     5 */  /* [DTC_0X9A0101, Satellite#0] */
  /*     6 */  /* [DTC_0X9A0111, Satellite#0] */
  /*     7 */  /* [DTC_0X9A0112, Satellite#0] */
  /*     8 */  /* [DTC_0X9A0113, Satellite#0] */
  /*     9 */  /* [DTC_0X9A0125, Satellite#0] */
  /*    10 */  /* [DTC_0X9A0201, Satellite#0] */
  /*    11 */  /* [DTC_0X9A0211, Satellite#0] */
  /*    12 */  /* [DTC_0X9A0212, Satellite#0] */
  /*    13 */  /* [DTC_0X9A0213, Satellite#0] */
  /*    14 */  /* [DTC_0X9A0225, Satellite#0] */
  /*    15 */  /* [DTC_0X9A0301, Satellite#0] */
  /*    16 */  /* [DTC_0X9A0311, Satellite#0] */
  /*    17 */  /* [DTC_0X9A0312, Satellite#0] */
  /*    18 */  /* [DTC_0X9A0313, Satellite#0] */
  /*    19 */  /* [DTC_0X9A0325, Satellite#0] */
  /*    20 */  /* [DTC_0X9A0401, Satellite#0] */
  /*    21 */  /* [DTC_0X9A0411, Satellite#0] */
  /*    22 */  /* [DTC_0X9A0412, Satellite#0] */
  /*    23 */  /* [DTC_0X9A0413, Satellite#0] */
  /*    24 */  /* [DTC_0X9A0425, Satellite#0] */
  /*    25 */  /* [DTC_0X91BA63, Satellite#0] */
  /*    26 */  /* [DTC_0X93F511, Satellite#0] */
  /*    27 */  /* [DTC_0X93F512, Satellite#0] */
  /*    28 */  /* [DTC_0X93F513, Satellite#0] */
  /*    29 */  /* [DTC_0X93F611, Satellite#0] */
  /*    30 */  /* [DTC_0X93F612, Satellite#0] */
  /*    31 */  /* [DTC_0X93F613, Satellite#0] */
  /*    32 */  /* [DTC_0X908E87, Satellite#0] */
  /*    33 */  /* [DTC_0X919F11, Satellite#0] */
  /*    34 */  /* [DTC_0X919F12, Satellite#0] */
  /*    35 */  /* [DTC_0X919F13, Satellite#0] */
  /*    36 */  /* [DTC_0X909502, Satellite#0] */
  /*    37 */  /* [DTC_0X909602, Satellite#0] */
  /*    38 */  /* [DTC_0X923816, Satellite#0] */
  /*    39 */  /* [DTC_0X923817, Satellite#0] */
  /*    40 */  /* [DTC_0X925211, Satellite#0] */
  /*    41 */  /* [DTC_0X925311, Satellite#0] */
  /*    42 */  /* [DTC_0X925411, Satellite#0] */
  /*    43 */  /* [DTC_0XA10602, Satellite#0] */
  /*    44 */  /* [DTC_0XA10604, Satellite#0] */
  /*    45 */  /* [DTC_0XA11204, Satellite#0] */
  /*    46 */  /* [DTC_0XC01988, Satellite#0] */
  /*    47 */  /* [DTC_0XC14687, Satellite#0] */
  /*    48 */  /* [DTC_0XC15502, Satellite#0] */
  /*    49 */  /* [DTC_0XC15582, Satellite#0] */
  /* Index        Referable Keys  */
  /*    50 */  /* [DTC_0XC19887, Satellite#0] */
  /*    51 */  /* [DTC_0XC19988, Satellite#0] */
  /*    52 */  /* [DTC_0XC26402, Satellite#0] */
  /*    53 */  /* [DTC_0XD10017, Satellite#0] */
  /*    54 */  /* [DTC_0XD10116, Satellite#0] */
  /*    55 */  /* [DemEventParameter_Ramtst, Satellite#0] */
  /*    56 */  /* [DEM_EVENT_StartApplication, Satellite#0] */

#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_FilterInfoTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_FilterInfoTable
  \brief  size = DEM_CFG_NUMBER_OF_FILTER
*/ 
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_FilterData_InfoType, DEM_VAR_NOINIT) Dem_Cfg_FilterInfoTable[1];
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_FilterReportedEvents
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_FilterReportedEvents
  \brief  size = ceiling( DEM_G_NUMBER_OF_EVENTS / 8 )
*/ 
#define DEM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_FilterReportedEventsType, DEM_VAR_NOINIT) Dem_Cfg_FilterReportedEvents[8];
#define DEM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_FreezeFrameIteratorTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_FreezeFrameIteratorTable
  \brief  size = DEM_CFG_NUMBER_OF_FREEZEFRAMEITERATORS
*/ 
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_FreezeFrameIterator_FilterType, DEM_VAR_NOINIT) Dem_Cfg_FreezeFrameIteratorTable[1];
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_MemoryCommitNumber
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_MemoryCommitNumber
  \brief  The array contains these items: Admin, Status, 8 * Primary
*/ 
#define DEM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
volatile VAR(Dem_Cfg_MemoryCommitNumberType, DEM_VAR_NOINIT) Dem_Cfg_MemoryCommitNumber[10];
#define DEM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_MemoryStatus
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_MemoryStatus
  \brief  The array contains these items: Admin, Status, 8 * Primary
*/ 
#define DEM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_MemoryStatusType, DEM_VAR_NOINIT) Dem_Cfg_MemoryStatus[10];
#define DEM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryChronology
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_PrimaryChronology
  \brief  size = DEM_CFG_GLOBAL_PRIMARY_SIZE
*/ 
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_MemoryIndexType, DEM_VAR_NOINIT) Dem_Cfg_PrimaryChronology[8];
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_0
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_0;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_1
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_1;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_2
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_2;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_3
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_3;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_4
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_4;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_5
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_5;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_6
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_6;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_7
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_7;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_ReadoutBuffer
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_ReadoutBufferEntryType, DEM_VAR_NOINIT) Dem_Cfg_ReadoutBuffer[1];
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_ReportedEventsOfFilter
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_ReportedEventsOfFilter
  \brief  size = DEM_CFG_NUMBER_OF_FILTER
*/ 
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_ReportedEventsType, DEM_VAR_NOINIT) Dem_Cfg_ReportedEventsOfFilter[1];
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SatelliteInfo0
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_SatelliteInfo0
  \brief  Buffer for satellite data on OsApplication "0"
*/ 
#define DEM_START_SEC_0_VAR_ZERO_INIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_SatelliteInfoType0, DEM_VAR_ZERO_INIT) Dem_Cfg_SatelliteInfo0 = {0uL};
#define DEM_STOP_SEC_0_VAR_ZERO_INIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_StatusData
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_StatusDataType, DEM_NVM_DATA_NOINIT) Dem_Cfg_StatusData;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA
**********************************************************************************************************************/



/**********************************************************************************************************************
  LOCAL FUNCTION PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL FUNCTIONS
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL FUNCTIONS
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTIONS
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL FUNCTIONS
**********************************************************************************************************************/



/**********************************************************************************************************************
  END OF FILE: Dem_Lcfg.c     [Vector, VARIANT-PRE-COMPILE, 13.03.00.101592]
**********************************************************************************************************************/

