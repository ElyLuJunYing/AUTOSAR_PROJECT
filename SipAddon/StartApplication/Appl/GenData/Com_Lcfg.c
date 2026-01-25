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
 *            Module: Com
 *           Program: MSR_Vector_SLP4
 *          Customer: Harman International (China) Holdings Co., Ltd.
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: FS32K148UAT0VLQR
 *    License Scope : The usage is restricted to CBD1800257_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Com_Lcfg.c
 *   Generation Time: 2018-11-27 15:30:03
 *           Project: TsiStandard - Version 1
 *          Delivery: CBD1800257_D01
 *      Tool Version: DaVinci Configurator  5.18.37 SP1
 *
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
  MISRA / PClint JUSTIFICATIONS
**********************************************************************************************************************/
/* PRQA  S 1881 EOF */ /* MD_MSR_AutosarBoolean */
/* PRQA  S 1882 EOF */ /* MD_MSR_AutosarBoolean */

/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/
#define V_IL_ASRCOMCFG5_LCFG_SOURCE

#include "Com.h"

#include "Com_Lcfg.h"

#include "Rte_Cbk.h"

#include "SchM_Com.h"

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
  Com_ConstValueUInt16
**********************************************************************************************************************/
/** 
  \var    Com_ConstValueUInt16
  \brief  Optimized array of commonly used values like initial or invalid values. (UINT16)
*/ 
#define COM_START_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_ConstValueUInt16Type, COM_CONST) Com_ConstValueUInt16[3] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     ConstValueUInt16      Referable Keys */
  /*     0 */           0x0032u,  /* [/ActiveEcuC/Com/ComConfig/Signal_Rx11bit_OnWrite_omsg_RxEvent_20_oCAN_e14fb9df_RxInitValue] */
  /*     1 */           0x0019u,  /* [/ActiveEcuC/Com/ComConfig/Signal_Rx15bit_OnWrite_omsg_RxEvent_20_oCAN_3a85fa13_RxInitValue] */
  /*     2 */           0x8000u   /* [/ActiveEcuC/Com/ComConfig/Signal_Rx16bit_Cyclic_omsg_RxCycle500_20_oCAN_300c1427_RxInitValue] */
};
#define COM_STOP_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_ConstValueUInt32
**********************************************************************************************************************/
/** 
  \var    Com_ConstValueUInt32
  \brief  Optimized array of commonly used values like initial or invalid values. (UINT32)
*/ 
#define COM_START_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_ConstValueUInt32Type, COM_CONST) Com_ConstValueUInt32[2] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     ConstValueUInt32      Referable Keys */
  /*     0 */       0x00000000u,  /* [/ActiveEcuC/Com/ComConfig/SG_RgRx_Prof1C_RxCycle_omsg_RxCycle_E2eProf1C_500_10_oCAN_430c5af9_Rx/SigRx_Prof1C_Sig32Bit_omsg_RxCycle_E2eProf1C_500_10_oCAN_f0dd3f4d_RxInitValue] */
  /*     1 */       0x00000001u   /* [/ActiveEcuC/Com/ComConfig/Signal_Rx20bit_Cyclic_omsg_RxCycle500_20_oCAN_983b15aa_RxInitValue] */
};
#define COM_STOP_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_ConstValueUInt8
**********************************************************************************************************************/
/** 
  \var    Com_ConstValueUInt8
  \brief  Optimized array of commonly used values like initial or invalid values. (BOOLEAN, UINT8)
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_ConstValueUInt8Type, COM_CONST) Com_ConstValueUInt8[2] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     ConstValueUInt8      Referable Keys */
  /*     0 */            0x0Fu,  /* [/ActiveEcuC/Com/ComConfig/Signal_Rx8bit_Cyclic_omsg_RxCycle500_20_oCAN_f9e4bcc4_RxInitValue] */
  /*     1 */            0x00u   /* [/ActiveEcuC/Com/ComConfig/SG_RgRx_Prof1C_RxCycle_omsg_RxCycle_E2eProf1C_500_10_oCAN_430c5af9_Rx/SigRx_Prof1C_CRC_omsg_RxCycle_E2eProf1C_500_10_oCAN_d6a2f34d_RxInitValue, /ActiveEcuC/Com/ComConfig/SG_RgRx_Prof1C_RxCycle_omsg_RxCycle_E2eProf1C_500_10_oCAN_430c5af9_Rx/SigRx_Prof1C_DataId_HiByte_LoNib_omsg_RxCycle_E2eProf1C_500_10_oCAN_bdeb2c98_RxInitValue, /ActiveEcuC/Com/ComConfig/SG_RgRx_Prof1C_RxCycle_omsg_RxCycle_E2eProf1C_500_10_oCAN_430c5af9_Rx/SigRx_Prof1C_SQ_omsg_RxCycle_E2eProf1C_500_10_oCAN_263a4149_RxInitValue, /ActiveEcuC/Com/ComConfig/SG_RgRx_Prof1C_RxCycle_omsg_RxCycle_E2eProf1C_500_10_oCAN_430c5af9_Rx/SigRx_Prof1C_Sig3Bit_omsg_RxCycle_E2eProf1C_500_10_oCAN_95ddcbc9_RxInitValue, /ActiveEcuC/Com/ComConfig/SG_RgRx_Prof1C_RxCycle_omsg_RxCycle_E2eProf1C_500_10_oCAN_430c5af9_Rx/SigRx_Prof1C_Sig4Bit_omsg_RxCycle_E2eProf1C_500_10_oCAN_a713ffd7_RxInitValue, /ActiveEcuC/Com/ComConfig/Signal_RearInteriorLight_omsg_RxCycle100_0_oCAN_44115c66_RxInitValue, /ActiveEcuC/Com/ComConfig/Signal_RearLeftDoor_omsg_RxCycle100_0_oCAN_47d3a185_RxInitValue, /ActiveEcuC/Com/ComConfig/Signal_RearRightDoor_omsg_RxCycle100_0_oCAN_cbde8ce7_RxInitValue, /ActiveEcuC/Com/ComConfig/Signal_StartAppl_RxCtrl_MyECU_omsg_StartAppl_Rx_MyECU_oCAN_09591065_RxInitValue, /ActiveEcuC/Com/ComConfig/Signal_StartAppl_RxData_MyECU_omsg_StartAppl_Rx_MyECU_oCAN_315f9453_RxInitValue] */
};
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_PduGrpVector
**********************************************************************************************************************/
/** 
  \var    Com_PduGrpVector
  \brief  Contains an I-PDU-Group vector for each I-PDU, mapping the I-PDU to the corresponding I-PDU-Groups.
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_PduGrpVectorType, COM_CONST) Com_PduGrpVector[2] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     PduGrpVector      Referable Keys */
  /*     0 */         0x02u,  /* [/ActiveEcuC/Com/ComConfig/msg_StartAppl_Tx_MyECU_oCAN_ad461e3f_Tx, /ActiveEcuC/Com/ComConfig/msg_TxCycle1000_10_oCAN_d74aed68_Tx, /ActiveEcuC/Com/ComConfig/msg_TxCycle10_0_oCAN_85bf3e37_Tx, /ActiveEcuC/Com/ComConfig/msg_TxCycle_E2eProf1C_500_30_oCAN_eeefc687_Tx, /ActiveEcuC/Com/ComConfig/msg_TxEvent_10_oCAN_b2cd4fc2_Tx] */
  /*     1 */         0x01u   /* [/ActiveEcuC/Com/ComConfig/msg_RxCycle100_0_oCAN_1e247d16_Rx, /ActiveEcuC/Com/ComConfig/msg_RxCycle500_20_oCAN_a691adb3_Rx, /ActiveEcuC/Com/ComConfig/msg_RxCycle_E2eProf1C_500_10_oCAN_e8110737_Rx, /ActiveEcuC/Com/ComConfig/msg_RxEvent_20_oCAN_a1df81ad_Rx, /ActiveEcuC/Com/ComConfig/msg_StartAppl_Rx_MyECU_oCAN_0da3c1e2_Rx] */
};
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxAccessInfo
**********************************************************************************************************************/
/** 
  \var    Com_RxAccessInfo
  \brief  Contains all signal layout information necessary for signal access within an I-PDU.
  \details
  Element                   Description
  InitValueUsed             TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_ConstValueUInt8,Com_ConstValueUInt16,Com_ConstValueUInt32,Com_ConstValueUInt64,Com_ConstValueSInt8,Com_ConstValueSInt16,Com_ConstValueSInt32,Com_ConstValueSInt64,Com_ConstValueFloat32,Com_ConstValueFloat64
  ShdBufferUsed             TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_RxSigBufferUInt8,Com_RxSigBufferUInt16,Com_RxSigBufferUInt32,Com_RxSigBufferUInt64,Com_RxSigBufferZeroBit,Com_RxSigBufferSInt8,Com_RxSigBufferSInt16,Com_RxSigBufferSInt32,Com_RxSigBufferSInt64,Com_RxSigBufferFloat32,Com_RxSigBufferFloat64
  ApplType                  Application data type.
  BitLength                 Bit length of the signal or group signal.
  BitPosition               Little endian bit position of the signal or group signal within the I-PDU.
  BufferIdx                 the index of the 0:1 relation pointing to Com_RxSigBufferUInt8,Com_RxSigBufferUInt16,Com_RxSigBufferUInt32,Com_RxSigBufferUInt64,Com_RxSigBufferZeroBit,Com_RxSigBufferSInt8,Com_RxSigBufferSInt16,Com_RxSigBufferSInt32,Com_RxSigBufferSInt64,Com_RxSigBufferFloat32,Com_RxSigBufferFloat64
  BusAcc                    BUS access algorithm for signal or group signal packing / un-packing.
  ByteLength                Byte length of the signal or group signal.
  InitValueIdx              the index of the 0:1 relation pointing to Com_ConstValueUInt8,Com_ConstValueUInt16,Com_ConstValueUInt32,Com_ConstValueUInt64,Com_ConstValueSInt8,Com_ConstValueSInt16,Com_ConstValueSInt32,Com_ConstValueSInt64,Com_ConstValueFloat32,Com_ConstValueFloat64
  RxPduInfoIdx              the index of the 1:1 relation pointing to Com_RxPduInfo
  ShdBufferIdx              the index of the 0:1 relation pointing to Com_RxSigBufferUInt8,Com_RxSigBufferUInt16,Com_RxSigBufferUInt32,Com_RxSigBufferUInt64,Com_RxSigBufferZeroBit,Com_RxSigBufferSInt8,Com_RxSigBufferSInt16,Com_RxSigBufferSInt32,Com_RxSigBufferSInt64,Com_RxSigBufferFloat32,Com_RxSigBufferFloat64
  StartByteInPduPosition    Start Byte position of the signal or group signal within the I-PDU.
  TmpBufferIdx              the index of the 0:1 relation pointing to Com_TmpRxShdBufferUInt8,Com_TmpRxShdBufferUInt16,Com_TmpRxShdBufferUInt32,Com_TmpRxShdBufferUInt64,Com_TmpRxShdBufferSInt8,Com_TmpRxShdBufferSInt16,Com_TmpRxShdBufferSInt32,Com_TmpRxShdBufferSInt64,Com_TmpRxShdBufferFloat32,Com_TmpRxShdBufferFloat64
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_RxAccessInfoType, COM_CONST) Com_RxAccessInfo[16] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    InitValueUsed  ShdBufferUsed  ApplType                           BitLength  BitPosition  BufferIdx  BusAcc                              ByteLength  InitValueIdx  RxPduInfoIdx  ShdBufferIdx                       StartByteInPduPosition  TmpBufferIdx                             Referable Keys */
  { /*     0 */          TRUE,          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,          0u,        0u,      COM_BYTE_BUSACCOFRXACCESSINFO,         1u,           1u,           2u,                                1u,                     0u,                                0u },  /* [/ActiveEcuC/Com/ComConfig/SG_RgRx_Prof1C_RxCycle_omsg_RxCycle_E2eProf1C_500_10_oCAN_430c5af9_Rx/SigRx_Prof1C_CRC_omsg_RxCycle_E2eProf1C_500_10_oCAN_d6a2f34d_Rx, /ActiveEcuC/Com/ComConfig/msg_RxCycle_E2eProf1C_500_10_oCAN_e8110737_Rx, /ActiveEcuC/Com/ComConfig/SG_RgRx_Prof1C_RxCycle_omsg_RxCycle_E2eProf1C_500_10_oCAN_430c5af9_Rx] */
  { /*     1 */          TRUE,          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        4u,         12u,        2u,      COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           1u,           2u,                                3u,                     1u,                                1u },  /* [/ActiveEcuC/Com/ComConfig/SG_RgRx_Prof1C_RxCycle_omsg_RxCycle_E2eProf1C_500_10_oCAN_430c5af9_Rx/SigRx_Prof1C_DataId_HiByte_LoNib_omsg_RxCycle_E2eProf1C_500_10_oCAN_bdeb2c98_Rx, /ActiveEcuC/Com/ComConfig/msg_RxCycle_E2eProf1C_500_10_oCAN_e8110737_Rx, /ActiveEcuC/Com/ComConfig/SG_RgRx_Prof1C_RxCycle_omsg_RxCycle_E2eProf1C_500_10_oCAN_430c5af9_Rx] */
  { /*     2 */          TRUE,          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        4u,          8u,        4u,      COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           1u,           2u,                                5u,                     1u,                                3u },  /* [/ActiveEcuC/Com/ComConfig/SG_RgRx_Prof1C_RxCycle_omsg_RxCycle_E2eProf1C_500_10_oCAN_430c5af9_Rx/SigRx_Prof1C_SQ_omsg_RxCycle_E2eProf1C_500_10_oCAN_263a4149_Rx, /ActiveEcuC/Com/ComConfig/msg_RxCycle_E2eProf1C_500_10_oCAN_e8110737_Rx, /ActiveEcuC/Com/ComConfig/SG_RgRx_Prof1C_RxCycle_omsg_RxCycle_E2eProf1C_500_10_oCAN_430c5af9_Rx] */
  { /*     3 */          TRUE,          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        3u,         21u,        6u,      COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           1u,           2u,                                7u,                     2u,                                2u },  /* [/ActiveEcuC/Com/ComConfig/SG_RgRx_Prof1C_RxCycle_omsg_RxCycle_E2eProf1C_500_10_oCAN_430c5af9_Rx/SigRx_Prof1C_Sig3Bit_omsg_RxCycle_E2eProf1C_500_10_oCAN_95ddcbc9_Rx, /ActiveEcuC/Com/ComConfig/msg_RxCycle_E2eProf1C_500_10_oCAN_e8110737_Rx, /ActiveEcuC/Com/ComConfig/SG_RgRx_Prof1C_RxCycle_omsg_RxCycle_E2eProf1C_500_10_oCAN_430c5af9_Rx] */
  { /*     4 */          TRUE,          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        4u,         16u,        8u,      COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           1u,           2u,                                9u,                     2u,                                4u },  /* [/ActiveEcuC/Com/ComConfig/SG_RgRx_Prof1C_RxCycle_omsg_RxCycle_E2eProf1C_500_10_oCAN_430c5af9_Rx/SigRx_Prof1C_Sig4Bit_omsg_RxCycle_E2eProf1C_500_10_oCAN_a713ffd7_Rx, /ActiveEcuC/Com/ComConfig/msg_RxCycle_E2eProf1C_500_10_oCAN_e8110737_Rx, /ActiveEcuC/Com/ComConfig/SG_RgRx_Prof1C_RxCycle_omsg_RxCycle_E2eProf1C_500_10_oCAN_430c5af9_Rx] */
  { /*     5 */          TRUE,          TRUE, COM_UINT32_APPLTYPEOFRXACCESSINFO,       32u,         24u,        0u,     COM_NBYTE_BUSACCOFRXACCESSINFO,         4u,           0u,           2u,                                1u,                     3u,                                0u },  /* [/ActiveEcuC/Com/ComConfig/SG_RgRx_Prof1C_RxCycle_omsg_RxCycle_E2eProf1C_500_10_oCAN_430c5af9_Rx/SigRx_Prof1C_Sig32Bit_omsg_RxCycle_E2eProf1C_500_10_oCAN_f0dd3f4d_Rx, /ActiveEcuC/Com/ComConfig/msg_RxCycle_E2eProf1C_500_10_oCAN_e8110737_Rx, /ActiveEcuC/Com/ComConfig/SG_RgRx_Prof1C_RxCycle_omsg_RxCycle_E2eProf1C_500_10_oCAN_430c5af9_Rx] */
  { /*     6 */          TRUE,         FALSE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        1u,          0u,       10u,      COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           1u,           0u, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     0u, COM_NO_TMPBUFFERIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/Signal_RearInteriorLight_omsg_RxCycle100_0_oCAN_44115c66_Rx, /ActiveEcuC/Com/ComConfig/msg_RxCycle100_0_oCAN_1e247d16_Rx] */
  { /*     7 */          TRUE,         FALSE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        1u,          1u,       11u,      COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           1u,           0u, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     0u, COM_NO_TMPBUFFERIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/Signal_RearLeftDoor_omsg_RxCycle100_0_oCAN_47d3a185_Rx, /ActiveEcuC/Com/ComConfig/msg_RxCycle100_0_oCAN_1e247d16_Rx] */
  { /*     8 */          TRUE,         FALSE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        1u,          2u,       12u,      COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           1u,           0u, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     0u, COM_NO_TMPBUFFERIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/Signal_RearRightDoor_omsg_RxCycle100_0_oCAN_cbde8ce7_Rx, /ActiveEcuC/Com/ComConfig/msg_RxCycle100_0_oCAN_1e247d16_Rx] */
  { /*     9 */          TRUE,         FALSE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,          0u,       13u,      COM_BYTE_BUSACCOFRXACCESSINFO,         1u,           0u,           1u, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     0u, COM_NO_TMPBUFFERIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/Signal_Rx8bit_Cyclic_omsg_RxCycle500_20_oCAN_f9e4bcc4_Rx, /ActiveEcuC/Com/ComConfig/msg_RxCycle500_20_oCAN_a691adb3_Rx] */
  { /*    10 */          TRUE,         FALSE, COM_UINT16_APPLTYPEOFRXACCESSINFO,       11u,          0u,        0u, COM_NBITNBYTE_BUSACCOFRXACCESSINFO,         1u,           0u,           3u, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     0u, COM_NO_TMPBUFFERIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/Signal_Rx11bit_OnWrite_omsg_RxEvent_20_oCAN_e14fb9df_Rx, /ActiveEcuC/Com/ComConfig/msg_RxEvent_20_oCAN_a1df81ad_Rx] */
  { /*    11 */          TRUE,         FALSE, COM_UINT16_APPLTYPEOFRXACCESSINFO,       15u,         12u,        1u, COM_NBITNBYTE_BUSACCOFRXACCESSINFO,         1u,           1u,           3u, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     1u, COM_NO_TMPBUFFERIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/Signal_Rx15bit_OnWrite_omsg_RxEvent_20_oCAN_3a85fa13_Rx, /ActiveEcuC/Com/ComConfig/msg_RxEvent_20_oCAN_a1df81ad_Rx] */
  { /*    12 */          TRUE,         FALSE, COM_UINT16_APPLTYPEOFRXACCESSINFO,       16u,         32u,        2u,     COM_NBYTE_BUSACCOFRXACCESSINFO,         2u,           2u,           1u, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     4u, COM_NO_TMPBUFFERIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/Signal_Rx16bit_Cyclic_omsg_RxCycle500_20_oCAN_300c1427_Rx, /ActiveEcuC/Com/ComConfig/msg_RxCycle500_20_oCAN_a691adb3_Rx] */
  { /*    13 */          TRUE,         FALSE, COM_UINT32_APPLTYPEOFRXACCESSINFO,       20u,          8u,        2u, COM_NBITNBYTE_BUSACCOFRXACCESSINFO,         2u,           1u,           1u, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     1u, COM_NO_TMPBUFFERIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/Signal_Rx20bit_Cyclic_omsg_RxCycle500_20_oCAN_983b15aa_Rx, /ActiveEcuC/Com/ComConfig/msg_RxCycle500_20_oCAN_a691adb3_Rx] */
  { /*    14 */          TRUE,         FALSE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,          0u,       14u,      COM_BYTE_BUSACCOFRXACCESSINFO,         1u,           1u,           4u, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     0u, COM_NO_TMPBUFFERIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/Signal_StartAppl_RxCtrl_MyECU_omsg_StartAppl_Rx_MyECU_oCAN_09591065_Rx, /ActiveEcuC/Com/ComConfig/msg_StartAppl_Rx_MyECU_oCAN_0da3c1e2_Rx] */
  { /*    15 */          TRUE,         FALSE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,          8u,       15u,      COM_BYTE_BUSACCOFRXACCESSINFO,         1u,           1u,           4u, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     1u, COM_NO_TMPBUFFERIDXOFRXACCESSINFO }   /* [/ActiveEcuC/Com/ComConfig/Signal_StartAppl_RxData_MyECU_omsg_StartAppl_Rx_MyECU_oCAN_315f9453_Rx, /ActiveEcuC/Com/ComConfig/msg_StartAppl_Rx_MyECU_oCAN_0da3c1e2_Rx] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxAccessInfoInd
**********************************************************************************************************************/
/** 
  \var    Com_RxAccessInfoInd
  \brief  the indexes of the 1:1 sorted relation pointing to Com_RxAccessInfo
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_RxAccessInfoIndType, COM_CONST) Com_RxAccessInfoInd[16] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     RxAccessInfoInd      Referable Keys */
  /*     0 */               6u,  /* [/ActiveEcuC/Com/ComConfig/msg_RxCycle100_0_oCAN_1e247d16_Rx] */
  /*     1 */               7u,  /* [/ActiveEcuC/Com/ComConfig/msg_RxCycle100_0_oCAN_1e247d16_Rx] */
  /*     2 */               8u,  /* [/ActiveEcuC/Com/ComConfig/msg_RxCycle100_0_oCAN_1e247d16_Rx] */
  /*     3 */               9u,  /* [/ActiveEcuC/Com/ComConfig/msg_RxCycle500_20_oCAN_a691adb3_Rx] */
  /*     4 */              12u,  /* [/ActiveEcuC/Com/ComConfig/msg_RxCycle500_20_oCAN_a691adb3_Rx] */
  /*     5 */              13u,  /* [/ActiveEcuC/Com/ComConfig/msg_RxCycle500_20_oCAN_a691adb3_Rx] */
  /*     6 */               0u,  /* [/ActiveEcuC/Com/ComConfig/msg_RxCycle_E2eProf1C_500_10_oCAN_e8110737_Rx] */
  /*     7 */               1u,  /* [/ActiveEcuC/Com/ComConfig/msg_RxCycle_E2eProf1C_500_10_oCAN_e8110737_Rx] */
  /*     8 */               2u,  /* [/ActiveEcuC/Com/ComConfig/msg_RxCycle_E2eProf1C_500_10_oCAN_e8110737_Rx] */
  /*     9 */               3u,  /* [/ActiveEcuC/Com/ComConfig/msg_RxCycle_E2eProf1C_500_10_oCAN_e8110737_Rx] */
  /*    10 */               4u,  /* [/ActiveEcuC/Com/ComConfig/msg_RxCycle_E2eProf1C_500_10_oCAN_e8110737_Rx] */
  /*    11 */               5u,  /* [/ActiveEcuC/Com/ComConfig/msg_RxCycle_E2eProf1C_500_10_oCAN_e8110737_Rx] */
  /*    12 */              10u,  /* [/ActiveEcuC/Com/ComConfig/msg_RxEvent_20_oCAN_a1df81ad_Rx] */
  /*    13 */              11u,  /* [/ActiveEcuC/Com/ComConfig/msg_RxEvent_20_oCAN_a1df81ad_Rx] */
  /*    14 */              14u,  /* [/ActiveEcuC/Com/ComConfig/msg_StartAppl_Rx_MyECU_oCAN_0da3c1e2_Rx] */
  /*    15 */              15u   /* [/ActiveEcuC/Com/ComConfig/msg_StartAppl_Rx_MyECU_oCAN_0da3c1e2_Rx] */
};
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxCbkFuncPtr
**********************************************************************************************************************/
/** 
  \var    Com_RxCbkFuncPtr
  \brief  Function pointer table containing configured notification and invalid notifications function pointer for signals and signal groups.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(ComRxCbkType, COM_CONST) Com_RxCbkFuncPtr[2] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     RxCbkFuncPtr                                                                           Referable Keys */
  /*     0 */ Rte_COMCbk_Signal_StartAppl_RxCtrl_MyECU_omsg_StartAppl_Rx_MyECU_oCAN_09591065_Rx ,  /* [/ActiveEcuC/Com/ComConfig/Signal_StartAppl_RxCtrl_MyECU_omsg_StartAppl_Rx_MyECU_oCAN_09591065_RxAck] */
  /*     1 */ Rte_COMCbk_Signal_StartAppl_RxData_MyECU_omsg_StartAppl_Rx_MyECU_oCAN_315f9453_Rx    /* [/ActiveEcuC/Com/ComConfig/Signal_StartAppl_RxData_MyECU_omsg_StartAppl_Rx_MyECU_oCAN_315f9453_RxAck] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxPduGrpInfo
**********************************************************************************************************************/
/** 
  \var    Com_RxPduGrpInfo
  \brief  Contains all I-PDU-Group relevant information for Rx I-PDUs.
  \details
  Element                 Description
  PduGrpVectorStartIdx    the start index of the 0:n relation pointing to Com_PduGrpVector
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_RxPduGrpInfoType, COM_CONST) Com_RxPduGrpInfo[5] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    PduGrpVectorStartIdx */
  { /*     0 */                   1u },
  { /*     1 */                   1u },
  { /*     2 */                   1u },
  { /*     3 */                   1u },
  { /*     4 */                   1u }
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxPduInfo
**********************************************************************************************************************/
/** 
  \var    Com_RxPduInfo
  \brief  Contains all relevant common information for Rx I-PDUs.
  \details
  Element                    Description
  RxAccessInfoIndUsed        TRUE, if the 0:n relation has 1 relation pointing to Com_RxAccessInfoInd
  RxSigInfoUsed              TRUE, if the 0:n relation has 1 relation pointing to Com_RxSigInfo
  RxAccessInfoIndEndIdx      the end index of the 0:n relation pointing to Com_RxAccessInfoInd
  RxAccessInfoIndStartIdx    the start index of the 0:n relation pointing to Com_RxAccessInfoInd
  RxDefPduBufferEndIdx       the end index of the 0:n relation pointing to Com_RxDefPduBuffer
  RxDefPduBufferStartIdx     the start index of the 0:n relation pointing to Com_RxDefPduBuffer
  RxSigGrpInfoIndEndIdx      the end index of the 0:n relation pointing to Com_RxSigGrpInfoInd
  RxSigGrpInfoIndStartIdx    the start index of the 0:n relation pointing to Com_RxSigGrpInfoInd
  RxSigInfoEndIdx            the end index of the 0:n relation pointing to Com_RxSigInfo
  RxSigInfoStartIdx          the start index of the 0:n relation pointing to Com_RxSigInfo
  Type                       Defines whether rx Pdu is a NORMAL or TP IPdu.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_RxPduInfoType, COM_CONST) Com_RxPduInfo[5] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    RxAccessInfoIndUsed  RxSigInfoUsed  RxAccessInfoIndEndIdx  RxAccessInfoIndStartIdx  RxDefPduBufferEndIdx  RxDefPduBufferStartIdx  RxSigGrpInfoIndEndIdx                    RxSigGrpInfoIndStartIdx                    RxSigInfoEndIdx                    RxSigInfoStartIdx                    Type                              Referable Keys */
  { /*     0 */                TRUE,          TRUE,                    3u,                      0u,                   1u,                     0u, COM_NO_RXSIGGRPINFOINDENDIDXOFRXPDUINFO, COM_NO_RXSIGGRPINFOINDSTARTIDXOFRXPDUINFO,                                3u,                                  0u, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/msg_RxCycle100_0_oCAN_1e247d16_Rx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN_Rx_63a3e3ce] */
  { /*     1 */                TRUE,          TRUE,                    6u,                      3u,                   7u,                     1u, COM_NO_RXSIGGRPINFOINDENDIDXOFRXPDUINFO, COM_NO_RXSIGGRPINFOINDSTARTIDXOFRXPDUINFO,                                6u,                                  3u, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/msg_RxCycle500_20_oCAN_a691adb3_Rx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN_Rx_63a3e3ce] */
  { /*     2 */                TRUE,         FALSE,                   12u,                      6u,                  15u,                     7u,                                      1u,                                        0u, COM_NO_RXSIGINFOENDIDXOFRXPDUINFO, COM_NO_RXSIGINFOSTARTIDXOFRXPDUINFO, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/msg_RxCycle_E2eProf1C_500_10_oCAN_e8110737_Rx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN_Rx_63a3e3ce] */
  { /*     3 */                TRUE,          TRUE,                   14u,                     12u,                  19u,                    15u, COM_NO_RXSIGGRPINFOINDENDIDXOFRXPDUINFO, COM_NO_RXSIGGRPINFOINDSTARTIDXOFRXPDUINFO,                                8u,                                  6u, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/msg_RxEvent_20_oCAN_a1df81ad_Rx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN_Rx_63a3e3ce] */
  { /*     4 */                TRUE,          TRUE,                   16u,                     14u,                  27u,                    19u, COM_NO_RXSIGGRPINFOINDENDIDXOFRXPDUINFO, COM_NO_RXSIGGRPINFOINDSTARTIDXOFRXPDUINFO,                               10u,                                  8u, COM_NORMAL_TYPEOFRXPDUINFO }   /* [/ActiveEcuC/Com/ComConfig/msg_StartAppl_Rx_MyECU_oCAN_0da3c1e2_Rx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN_Rx_63a3e3ce] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxSigGrpInfo
**********************************************************************************************************************/
/** 
  \var    Com_RxSigGrpInfo
  \brief  Contains all relevant information for Rx signal groups.
  \details
  Element              Description
  ShdBufferRequired
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_RxSigGrpInfoType, COM_CONST) Com_RxSigGrpInfo[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    ShdBufferRequired        Referable Keys */
  { /*     0 */              TRUE }   /* [/ActiveEcuC/Com/ComConfig/msg_RxCycle_E2eProf1C_500_10_oCAN_e8110737_Rx, /ActiveEcuC/Com/ComConfig/SG_RgRx_Prof1C_RxCycle_omsg_RxCycle_E2eProf1C_500_10_oCAN_430c5af9_Rx] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxSigInfo
**********************************************************************************************************************/
/** 
  \var    Com_RxSigInfo
  \brief  Contains all relevant information for Rx signals.
  \details
  Element               Description
  RxAccessInfoIdx       the index of the 1:1 relation pointing to Com_RxAccessInfo
  RxCbkFuncPtrAckIdx    the index of the 0:1 relation pointing to Com_RxCbkFuncPtr
  SignalProcessing  
  ValidDlc              Minimum length of PDU required to completely receive the signal or signal group.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_RxSigInfoType, COM_CONST) Com_RxSigInfo[10] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    RxAccessInfoIdx  RxCbkFuncPtrAckIdx                    SignalProcessing                          ValidDlc        Referable Keys */
  { /*     0 */              6u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1u },  /* [/ActiveEcuC/Com/ComConfig/msg_RxCycle100_0_oCAN_1e247d16_Rx] */
  { /*     1 */              7u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1u },  /* [/ActiveEcuC/Com/ComConfig/msg_RxCycle100_0_oCAN_1e247d16_Rx] */
  { /*     2 */              8u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1u },  /* [/ActiveEcuC/Com/ComConfig/msg_RxCycle100_0_oCAN_1e247d16_Rx] */
  { /*     3 */             12u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       6u },  /* [/ActiveEcuC/Com/ComConfig/msg_RxCycle500_20_oCAN_a691adb3_Rx] */
  { /*     4 */             13u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       4u },  /* [/ActiveEcuC/Com/ComConfig/msg_RxCycle500_20_oCAN_a691adb3_Rx] */
  { /*     5 */              9u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1u },  /* [/ActiveEcuC/Com/ComConfig/msg_RxCycle500_20_oCAN_a691adb3_Rx] */
  { /*     6 */             10u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       2u },  /* [/ActiveEcuC/Com/ComConfig/msg_RxEvent_20_oCAN_a1df81ad_Rx] */
  { /*     7 */             11u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       4u },  /* [/ActiveEcuC/Com/ComConfig/msg_RxEvent_20_oCAN_a1df81ad_Rx] */
  { /*     8 */             14u,                                   0u, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1u },  /* [/ActiveEcuC/Com/ComConfig/msg_StartAppl_Rx_MyECU_oCAN_0da3c1e2_Rx] */
  { /*     9 */             15u,                                   1u, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       2u }   /* [/ActiveEcuC/Com/ComConfig/msg_StartAppl_Rx_MyECU_oCAN_0da3c1e2_Rx] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxModeFalse
**********************************************************************************************************************/
/** 
  \var    Com_TxModeFalse
  \brief  Contains all relevant information for transmission mode false.
  \details
  Element       Description
  Direct        TRUE if transmission mode contains a direct part.
  TimeOffset    Initial time offset factor for cyclic transmission.
  TimePeriod    Cycle time factor.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_TxModeFalseType, COM_CONST) Com_TxModeFalse[6] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    Direct  TimeOffset  TimePeriod        Referable Keys */
  { /*     0 */  FALSE,         1u,         0u },  /* [/ActiveEcuC/Com/ComConfig/ComIPdu_NmOsek_UserData] */
  { /*     1 */  FALSE,         1u,         5u },  /* [/ActiveEcuC/Com/ComConfig/msg_StartAppl_Tx_MyECU_oCAN_ad461e3f_Tx] */
  { /*     2 */  FALSE,         1u,         1u },  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle10_0_oCAN_85bf3e37_Tx] */
  { /*     3 */  FALSE,         2u,       100u },  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle1000_10_oCAN_d74aed68_Tx] */
  { /*     4 */  FALSE,         4u,        50u },  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle_E2eProf1C_500_30_oCAN_eeefc687_Tx] */
  { /*     5 */   TRUE,         1u,         0u }   /* [/ActiveEcuC/Com/ComConfig/msg_TxEvent_10_oCAN_b2cd4fc2_Tx] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxModeInfo
**********************************************************************************************************************/
/** 
  \var    Com_TxModeInfo
  \brief  Contains all relevant information for transmission mode handling.
  \details
  Element     Description
  InitMode    Initial transmission mode selector of the Tx I-PDU.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_TxModeInfoType, COM_CONST) Com_TxModeInfo[6] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    InitMode        Referable Keys */
  { /*     0 */     TRUE },  /* [/ActiveEcuC/Com/ComConfig/ComIPdu_NmOsek_UserData] */
  { /*     1 */     TRUE },  /* [/ActiveEcuC/Com/ComConfig/msg_StartAppl_Tx_MyECU_oCAN_ad461e3f_Tx] */
  { /*     2 */     TRUE },  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle10_0_oCAN_85bf3e37_Tx] */
  { /*     3 */     TRUE },  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle1000_10_oCAN_d74aed68_Tx] */
  { /*     4 */     TRUE },  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle_E2eProf1C_500_30_oCAN_eeefc687_Tx] */
  { /*     5 */     TRUE }   /* [/ActiveEcuC/Com/ComConfig/msg_TxEvent_10_oCAN_b2cd4fc2_Tx] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxModeTrue
**********************************************************************************************************************/
/** 
  \var    Com_TxModeTrue
  \brief  Contains all relevant information for transmission mode true.
  \details
  Element       Description
  Direct        TRUE if transmission mode contains a direct part.
  TimeOffset    Initial time offset factor for cyclic transmission.
  TimePeriod    Cycle time factor.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_TxModeTrueType, COM_CONST) Com_TxModeTrue[6] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    Direct  TimeOffset  TimePeriod        Referable Keys */
  { /*     0 */  FALSE,         1u,         0u },  /* [/ActiveEcuC/Com/ComConfig/ComIPdu_NmOsek_UserData] */
  { /*     1 */  FALSE,         1u,         5u },  /* [/ActiveEcuC/Com/ComConfig/msg_StartAppl_Tx_MyECU_oCAN_ad461e3f_Tx] */
  { /*     2 */  FALSE,         1u,         1u },  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle10_0_oCAN_85bf3e37_Tx] */
  { /*     3 */  FALSE,         2u,       100u },  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle1000_10_oCAN_d74aed68_Tx] */
  { /*     4 */  FALSE,         4u,        50u },  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle_E2eProf1C_500_30_oCAN_eeefc687_Tx] */
  { /*     5 */   TRUE,         1u,         0u }   /* [/ActiveEcuC/Com/ComConfig/msg_TxEvent_10_oCAN_b2cd4fc2_Tx] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxPduGrpInfo
**********************************************************************************************************************/
/** 
  \var    Com_TxPduGrpInfo
  \brief  Contains all I-PDU-Group relevant information for Tx I-PDUs.
  \details
  Element                 Description
  PduGrpVectorEndIdx      the end index of the 0:n relation pointing to Com_PduGrpVector
  PduGrpVectorStartIdx    the start index of the 0:n relation pointing to Com_PduGrpVector
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_TxPduGrpInfoType, COM_CONST) Com_TxPduGrpInfo[6] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    PduGrpVectorEndIdx                       PduGrpVectorStartIdx                      */
  { /*     0 */ COM_NO_PDUGRPVECTORENDIDXOFTXPDUGRPINFO, COM_NO_PDUGRPVECTORSTARTIDXOFTXPDUGRPINFO },
  { /*     1 */                                      1u,                                        0u },
  { /*     2 */                                      1u,                                        0u },
  { /*     3 */                                      1u,                                        0u },
  { /*     4 */                                      1u,                                        0u },
  { /*     5 */                                      1u,                                        0u }
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxPduInfo
**********************************************************************************************************************/
/** 
  \var    Com_TxPduInfo
  \brief  Contains all relevant information for Tx I-PDUs.
  \details
  Element                    Description
  TxPduInitValueUsed         TRUE, if the 0:n relation has 1 relation pointing to Com_TxPduInitValue
  MetaDataLength             Length of MetaData.
  TxBufferLength             the number of relations pointing to Com_TxBuffer
  TxPduInitValueEndIdx       the end index of the 0:n relation pointing to Com_TxPduInitValue
  TxPduInitValueStartIdx     the start index of the 0:n relation pointing to Com_TxPduInitValue
  TxSigGrpInfoIndEndIdx      the end index of the 0:n relation pointing to Com_TxSigGrpInfoInd
  TxSigGrpInfoIndStartIdx    the start index of the 0:n relation pointing to Com_TxSigGrpInfoInd
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_TxPduInfoType, COM_CONST) Com_TxPduInfo[6] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    TxPduInitValueUsed  MetaDataLength  TxBufferLength  TxPduInitValueEndIdx  TxPduInitValueStartIdx  TxSigGrpInfoIndEndIdx                    TxSigGrpInfoIndStartIdx                          Referable Keys */
  { /*     0 */               TRUE,             0u,             6u,                   6u,                     0u, COM_NO_TXSIGGRPINFOINDENDIDXOFTXPDUINFO, COM_NO_TXSIGGRPINFOINDSTARTIDXOFTXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/ComIPdu_NmOsek_UserData] */
  { /*     1 */               TRUE,             0u,             8u,                  14u,                     6u, COM_NO_TXSIGGRPINFOINDENDIDXOFTXPDUINFO, COM_NO_TXSIGGRPINFOINDSTARTIDXOFTXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/msg_StartAppl_Tx_MyECU_oCAN_ad461e3f_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN_Tx_35f94448] */
  { /*     2 */               TRUE,             0u,             7u,                  21u,                    14u, COM_NO_TXSIGGRPINFOINDENDIDXOFTXPDUINFO, COM_NO_TXSIGGRPINFOINDSTARTIDXOFTXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle10_0_oCAN_85bf3e37_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN_Tx_35f94448] */
  { /*     3 */               TRUE,             0u,             2u,                  23u,                    21u, COM_NO_TXSIGGRPINFOINDENDIDXOFTXPDUINFO, COM_NO_TXSIGGRPINFOINDSTARTIDXOFTXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle1000_10_oCAN_d74aed68_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN_Tx_35f94448] */
  { /*     4 */               TRUE,             0u,             8u,                  31u,                    23u,                                      1u,                                        0u },  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle_E2eProf1C_500_30_oCAN_eeefc687_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN_Tx_35f94448] */
  { /*     5 */               TRUE,             0u,             7u,                  38u,                    31u, COM_NO_TXSIGGRPINFOINDENDIDXOFTXPDUINFO, COM_NO_TXSIGGRPINFOINDSTARTIDXOFTXPDUINFO }   /* [/ActiveEcuC/Com/ComConfig/msg_TxEvent_10_oCAN_b2cd4fc2_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN_Tx_35f94448] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxPduInitValue
**********************************************************************************************************************/
/** 
  \var    Com_TxPduInitValue
  \brief  Initial values used for Tx I-PDU buffer initialization.
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_TxPduInitValueType, COM_CONST) Com_TxPduInitValue[38] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     TxPduInitValue      Referable Keys */
  /*     0 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/ComIPdu_NmOsek_UserData] */
  /*     1 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/ComIPdu_NmOsek_UserData] */
  /*     2 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/ComIPdu_NmOsek_UserData] */
  /*     3 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/ComIPdu_NmOsek_UserData] */
  /*     4 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/ComIPdu_NmOsek_UserData] */
  /*     5 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/ComIPdu_NmOsek_UserData] */
  /*     6 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/msg_StartAppl_Tx_MyECU_oCAN_ad461e3f_Tx] */
  /*     7 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/msg_StartAppl_Tx_MyECU_oCAN_ad461e3f_Tx] */
  /*     8 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/msg_StartAppl_Tx_MyECU_oCAN_ad461e3f_Tx] */
  /*     9 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/msg_StartAppl_Tx_MyECU_oCAN_ad461e3f_Tx] */
  /*    10 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/msg_StartAppl_Tx_MyECU_oCAN_ad461e3f_Tx] */
  /*    11 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/msg_StartAppl_Tx_MyECU_oCAN_ad461e3f_Tx] */
  /*    12 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/msg_StartAppl_Tx_MyECU_oCAN_ad461e3f_Tx] */
  /*    13 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/msg_StartAppl_Tx_MyECU_oCAN_ad461e3f_Tx] */
  /*    14 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle10_0_oCAN_85bf3e37_Tx] */
  /*    15 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle10_0_oCAN_85bf3e37_Tx] */
  /*    16 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle10_0_oCAN_85bf3e37_Tx] */
  /*    17 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle10_0_oCAN_85bf3e37_Tx] */
  /*    18 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle10_0_oCAN_85bf3e37_Tx] */
  /*    19 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle10_0_oCAN_85bf3e37_Tx] */
  /*    20 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle10_0_oCAN_85bf3e37_Tx] */
  /*    21 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle1000_10_oCAN_d74aed68_Tx] */
  /*    22 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle1000_10_oCAN_d74aed68_Tx] */
  /*    23 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle_E2eProf1C_500_30_oCAN_eeefc687_Tx] */
  /*    24 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle_E2eProf1C_500_30_oCAN_eeefc687_Tx] */
  /*    25 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle_E2eProf1C_500_30_oCAN_eeefc687_Tx] */
  /*    26 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle_E2eProf1C_500_30_oCAN_eeefc687_Tx] */
  /*    27 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle_E2eProf1C_500_30_oCAN_eeefc687_Tx] */
  /*    28 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle_E2eProf1C_500_30_oCAN_eeefc687_Tx] */
  /*    29 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle_E2eProf1C_500_30_oCAN_eeefc687_Tx] */
  /*    30 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle_E2eProf1C_500_30_oCAN_eeefc687_Tx] */
  /*    31 */           0x1Fu,  /* [/ActiveEcuC/Com/ComConfig/msg_TxEvent_10_oCAN_b2cd4fc2_Tx] */
  /*    32 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/msg_TxEvent_10_oCAN_b2cd4fc2_Tx] */
  /*    33 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/msg_TxEvent_10_oCAN_b2cd4fc2_Tx] */
  /*    34 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/msg_TxEvent_10_oCAN_b2cd4fc2_Tx] */
  /*    35 */           0x3Fu,  /* [/ActiveEcuC/Com/ComConfig/msg_TxEvent_10_oCAN_b2cd4fc2_Tx] */
  /*    36 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/msg_TxEvent_10_oCAN_b2cd4fc2_Tx] */
  /*    37 */           0x00u   /* [/ActiveEcuC/Com/ComConfig/msg_TxEvent_10_oCAN_b2cd4fc2_Tx] */
};
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxSigGrpInfo
**********************************************************************************************************************/
/** 
  \var    Com_TxSigGrpInfo
  \brief  Contains all relevant information for Tx Signal Groups.
  \details
  Element             Description
  TxSigGrpMaskUsed    TRUE, if the 0:n relation has 1 relation pointing to Com_TxSigGrpMask
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_TxSigGrpInfoType, COM_CONST) Com_TxSigGrpInfo[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    TxSigGrpMaskUsed        Referable Keys */
  { /*     0 */             TRUE }   /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle_E2eProf1C_500_30_oCAN_eeefc687_Tx, /ActiveEcuC/Com/ComConfig/SG_SgTx_Prof1C_TxCycle_omsg_TxCycle_E2eProf1C_500_30_oCAN_9bfb2a76_Tx/SigTx_Prof1C_SQ_omsg_TxCycle_E2eProf1C_500_30_oCAN_8ca3bde6_Tx, /ActiveEcuC/Com/ComConfig/SG_SgTx_Prof1C_TxCycle_omsg_TxCycle_E2eProf1C_500_30_oCAN_9bfb2a76_Tx/SigTx_Prof1C_Sig8Bit_omsg_TxCycle_E2eProf1C_500_30_oCAN_f6b84f66_Tx, /ActiveEcuC/Com/ComConfig/SG_SgTx_Prof1C_TxCycle_omsg_TxCycle_E2eProf1C_500_30_oCAN_9bfb2a76_Tx/SigTx_Prof1C_CRC_omsg_TxCycle_E2eProf1C_500_30_oCAN_5df85835_Tx, /ActiveEcuC/Com/ComConfig/SG_SgTx_Prof1C_TxCycle_omsg_TxCycle_E2eProf1C_500_30_oCAN_9bfb2a76_Tx/SigTx_Prof1C_Sig2Bit_omsg_TxCycle_E2eProf1C_500_30_oCAN_72710fbf_Tx, /ActiveEcuC/Com/ComConfig/SG_SgTx_Prof1C_TxCycle_omsg_TxCycle_E2eProf1C_500_30_oCAN_9bfb2a76_Tx/SigTx_Prof1C_DataId_HiByte_LoNib_omsg_TxCycle_E2eProf1C_500_30_oCAN_2f490cd4_Tx, /ActiveEcuC/Com/ComConfig/SG_SgTx_Prof1C_TxCycle_omsg_TxCycle_E2eProf1C_500_30_oCAN_9bfb2a76_Tx/SigTx_Prof1C_Sig16Bit_omsg_TxCycle_E2eProf1C_500_30_oCAN_4f2c5310_Tx, /ActiveEcuC/Com/ComConfig/SG_SgTx_Prof1C_TxCycle_omsg_TxCycle_E2eProf1C_500_30_oCAN_9bfb2a76_Tx/SigTx_Prof1C_Sig4Bit_omsg_TxCycle_E2eProf1C_500_30_oCAN_0e363008_Tx] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxSigGrpMask
**********************************************************************************************************************/
/** 
  \var    Com_TxSigGrpMask
  \brief  Signal group mask needed to copy interlaced signal groups to the Tx PDU buffer.
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_TxSigGrpMaskType, COM_CONST) Com_TxSigGrpMask[7] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     TxSigGrpMask      Referable Keys */
  /*     0 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_SgTx_Prof1C_TxCycle_omsg_TxCycle_E2eProf1C_500_30_oCAN_9bfb2a76_Tx] */
  /*     1 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_SgTx_Prof1C_TxCycle_omsg_TxCycle_E2eProf1C_500_30_oCAN_9bfb2a76_Tx] */
  /*     2 */         0x0Fu,  /* [/ActiveEcuC/Com/ComConfig/SG_SgTx_Prof1C_TxCycle_omsg_TxCycle_E2eProf1C_500_30_oCAN_9bfb2a76_Tx] */
  /*     3 */         0xC0u,  /* [/ActiveEcuC/Com/ComConfig/SG_SgTx_Prof1C_TxCycle_omsg_TxCycle_E2eProf1C_500_30_oCAN_9bfb2a76_Tx] */
  /*     4 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_SgTx_Prof1C_TxCycle_omsg_TxCycle_E2eProf1C_500_30_oCAN_9bfb2a76_Tx] */
  /*     5 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_SgTx_Prof1C_TxCycle_omsg_TxCycle_E2eProf1C_500_30_oCAN_9bfb2a76_Tx] */
  /*     6 */         0xFFu   /* [/ActiveEcuC/Com/ComConfig/SG_SgTx_Prof1C_TxCycle_omsg_TxCycle_E2eProf1C_500_30_oCAN_9bfb2a76_Tx] */
};
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxSigInfo
**********************************************************************************************************************/
/** 
  \var    Com_TxSigInfo
  \brief  Contains all relevant information for Tx signals and group signals.
  \details
  Element                   Description
  ApplType                  Application data type.
  BitLength                 Bit length of the signal or group signal.
  BitPosition               Little endian bit position of the signal or group signal within the I-PDU.
  BusAcc                    BUS access algorithm for signal or group signal packing / un-packing.
  ByteLength                Byte length of the signal or group signal.
  StartByteInPduPosition    Start Byte position of the signal or group signal within the I-PDU.
  TxBufferEndIdx            the end index of the 0:n relation pointing to Com_TxBuffer
  TxBufferStartIdx          the start index of the 0:n relation pointing to Com_TxBuffer
  TxPduInfoIdx              the index of the 1:1 relation pointing to Com_TxPduInfo
  TxSigGrpInfoIdx           the index of the 0:1 relation pointing to Com_TxSigGrpInfo
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_TxSigInfoType, COM_CONST) Com_TxSigInfo[16] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    ApplType                        BitLength  BitPosition  BusAcc                           ByteLength  StartByteInPduPosition  TxBufferEndIdx  TxBufferStartIdx  TxPduInfoIdx  TxSigGrpInfoIdx                          Referable Keys */
  { /*     0 */ COM_UINT64_APPLTYPEOFTXSIGINFO,       48u,          0u, COM_NBITNBYTE_BUSACCOFTXSIGINFO,         6u,                     0u,             6u,               0u,           0u, COM_NO_TXSIGGRPINFOIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/ComSignal_NmOsek_UserData, /ActiveEcuC/Com/ComConfig/ComIPdu_NmOsek_UserData] */
  { /*     1 */  COM_UINT8_APPLTYPEOFTXSIGINFO,        8u,          0u,      COM_BYTE_BUSACCOFTXSIGINFO,         1u,                     0u,            39u,              38u,           4u,                                0u },  /* [/ActiveEcuC/Com/ComConfig/SG_SgTx_Prof1C_TxCycle_omsg_TxCycle_E2eProf1C_500_30_oCAN_9bfb2a76_Tx/SigTx_Prof1C_CRC_omsg_TxCycle_E2eProf1C_500_30_oCAN_5df85835_Tx, /ActiveEcuC/Com/ComConfig/msg_TxCycle_E2eProf1C_500_30_oCAN_eeefc687_Tx] */
  { /*     2 */  COM_UINT8_APPLTYPEOFTXSIGINFO,        4u,         12u,      COM_NBIT_BUSACCOFTXSIGINFO,         0u,                     1u,            40u,              39u,           4u,                                0u },  /* [/ActiveEcuC/Com/ComConfig/SG_SgTx_Prof1C_TxCycle_omsg_TxCycle_E2eProf1C_500_30_oCAN_9bfb2a76_Tx/SigTx_Prof1C_DataId_HiByte_LoNib_omsg_TxCycle_E2eProf1C_500_30_oCAN_2f490cd4_Tx, /ActiveEcuC/Com/ComConfig/msg_TxCycle_E2eProf1C_500_30_oCAN_eeefc687_Tx] */
  { /*     3 */  COM_UINT8_APPLTYPEOFTXSIGINFO,        4u,          8u,      COM_NBIT_BUSACCOFTXSIGINFO,         0u,                     1u,            40u,              39u,           4u,                                0u },  /* [/ActiveEcuC/Com/ComConfig/SG_SgTx_Prof1C_TxCycle_omsg_TxCycle_E2eProf1C_500_30_oCAN_9bfb2a76_Tx/SigTx_Prof1C_SQ_omsg_TxCycle_E2eProf1C_500_30_oCAN_8ca3bde6_Tx, /ActiveEcuC/Com/ComConfig/msg_TxCycle_E2eProf1C_500_30_oCAN_eeefc687_Tx] */
  { /*     4 */  COM_UINT8_APPLTYPEOFTXSIGINFO,        2u,         30u,      COM_NBIT_BUSACCOFTXSIGINFO,         0u,                     3u,            42u,              41u,           4u,                                0u },  /* [/ActiveEcuC/Com/ComConfig/SG_SgTx_Prof1C_TxCycle_omsg_TxCycle_E2eProf1C_500_30_oCAN_9bfb2a76_Tx/SigTx_Prof1C_Sig2Bit_omsg_TxCycle_E2eProf1C_500_30_oCAN_72710fbf_Tx, /ActiveEcuC/Com/ComConfig/msg_TxCycle_E2eProf1C_500_30_oCAN_eeefc687_Tx] */
  { /*     5 */  COM_UINT8_APPLTYPEOFTXSIGINFO,        4u,         16u,      COM_NBIT_BUSACCOFTXSIGINFO,         0u,                     2u,            41u,              40u,           4u,                                0u },  /* [/ActiveEcuC/Com/ComConfig/SG_SgTx_Prof1C_TxCycle_omsg_TxCycle_E2eProf1C_500_30_oCAN_9bfb2a76_Tx/SigTx_Prof1C_Sig4Bit_omsg_TxCycle_E2eProf1C_500_30_oCAN_0e363008_Tx, /ActiveEcuC/Com/ComConfig/msg_TxCycle_E2eProf1C_500_30_oCAN_eeefc687_Tx] */
  { /*     6 */  COM_UINT8_APPLTYPEOFTXSIGINFO,        8u,         48u,      COM_BYTE_BUSACCOFTXSIGINFO,         1u,                     6u,            45u,              44u,           4u,                                0u },  /* [/ActiveEcuC/Com/ComConfig/SG_SgTx_Prof1C_TxCycle_omsg_TxCycle_E2eProf1C_500_30_oCAN_9bfb2a76_Tx/SigTx_Prof1C_Sig8Bit_omsg_TxCycle_E2eProf1C_500_30_oCAN_f6b84f66_Tx, /ActiveEcuC/Com/ComConfig/msg_TxCycle_E2eProf1C_500_30_oCAN_eeefc687_Tx] */
  { /*     7 */ COM_UINT16_APPLTYPEOFTXSIGINFO,       16u,         32u,     COM_NBYTE_BUSACCOFTXSIGINFO,         2u,                     4u,            44u,              42u,           4u,                                0u },  /* [/ActiveEcuC/Com/ComConfig/SG_SgTx_Prof1C_TxCycle_omsg_TxCycle_E2eProf1C_500_30_oCAN_9bfb2a76_Tx/SigTx_Prof1C_Sig16Bit_omsg_TxCycle_E2eProf1C_500_30_oCAN_4f2c5310_Tx, /ActiveEcuC/Com/ComConfig/msg_TxCycle_E2eProf1C_500_30_oCAN_eeefc687_Tx] */
  { /*     8 */  COM_UINT8_APPLTYPEOFTXSIGINFO,        8u,          0u,      COM_BYTE_BUSACCOFTXSIGINFO,         1u,                     0u,             7u,               6u,           1u, COM_NO_TXSIGGRPINFOIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/Signal_StartAppl_TxCtrl_MyECU_omsg_StartAppl_Tx_MyECU_oCAN_b45ea6bd_Tx, /ActiveEcuC/Com/ComConfig/msg_StartAppl_Tx_MyECU_oCAN_ad461e3f_Tx] */
  { /*     9 */  COM_UINT8_APPLTYPEOFTXSIGINFO,        8u,          8u,      COM_BYTE_BUSACCOFTXSIGINFO,         1u,                     1u,             8u,               7u,           1u, COM_NO_TXSIGGRPINFOIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/Signal_StartAppl_TxData_MyECU_omsg_StartAppl_Tx_MyECU_oCAN_8c58228b_Tx, /ActiveEcuC/Com/ComConfig/msg_StartAppl_Tx_MyECU_oCAN_ad461e3f_Tx] */
  { /*    10 */  COM_UINT8_APPLTYPEOFTXSIGINFO,        4u,         10u,      COM_NBIT_BUSACCOFTXSIGINFO,         0u,                     1u,            23u,              22u,           3u, COM_NO_TXSIGGRPINFOIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/Signal_Tx4bit_Cyclic_omsg_TxCycle1000_10_oCAN_ca549591_Tx, /ActiveEcuC/Com/ComConfig/msg_TxCycle1000_10_oCAN_d74aed68_Tx] */
  { /*    11 */ COM_UINT16_APPLTYPEOFTXSIGINFO,       10u,          0u, COM_NBITNBYTE_BUSACCOFTXSIGINFO,         1u,                     0u,            23u,              21u,           3u, COM_NO_TXSIGGRPINFOIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/Signal_Tx10bit_Cyclic_omsg_TxCycle1000_10_oCAN_9539efc7_Tx, /ActiveEcuC/Com/ComConfig/msg_TxCycle1000_10_oCAN_d74aed68_Tx] */
  { /*    12 */ COM_UINT32_APPLTYPEOFTXSIGINFO,       24u,         32u,     COM_NBYTE_BUSACCOFTXSIGINFO,         3u,                     4u,            21u,              18u,           2u, COM_NO_TXSIGGRPINFOIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/Signal_Tx24bit_Cyclic_omsg_TxCycle10_0_oCAN_393dd5fe_Tx, /ActiveEcuC/Com/ComConfig/msg_TxCycle10_0_oCAN_85bf3e37_Tx] */
  { /*    13 */ COM_UINT32_APPLTYPEOFTXSIGINFO,       24u,         32u,     COM_NBYTE_BUSACCOFTXSIGINFO,         3u,                     4u,            38u,              35u,           5u, COM_NO_TXSIGGRPINFOIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/Signal_Tx24bit_OnWrite_omsg_TxEvent_10_oCAN_bb23a029_Tx, /ActiveEcuC/Com/ComConfig/msg_TxEvent_10_oCAN_b2cd4fc2_Tx] */
  { /*    14 */ COM_UINT32_APPLTYPEOFTXSIGINFO,       32u,          0u,     COM_NBYTE_BUSACCOFTXSIGINFO,         4u,                     0u,            18u,              14u,           2u, COM_NO_TXSIGGRPINFOIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/Signal_Tx32bit_Cyclic_omsg_TxCycle10_0_oCAN_ab90e6e2_Tx, /ActiveEcuC/Com/ComConfig/msg_TxCycle10_0_oCAN_85bf3e37_Tx] */
  { /*    15 */ COM_UINT32_APPLTYPEOFTXSIGINFO,       32u,          0u,     COM_NBYTE_BUSACCOFTXSIGINFO,         4u,                     0u,            35u,              31u,           5u, COM_NO_TXSIGGRPINFOIDXOFTXSIGINFO }   /* [/ActiveEcuC/Com/ComConfig/Signal_Tx32bit_OnWrite_omsg_TxEvent_10_oCAN_298e9335_Tx, /ActiveEcuC/Com/ComConfig/msg_TxEvent_10_oCAN_b2cd4fc2_Tx] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_CurrentTxMode
**********************************************************************************************************************/
/** 
  \var    Com_CurrentTxMode
  \brief  Current transmission mode state of all Tx I-PDUs.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_CurrentTxModeType, COM_VAR_NOINIT) Com_CurrentTxMode[6];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/ComIPdu_NmOsek_UserData] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/msg_StartAppl_Tx_MyECU_oCAN_ad461e3f_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN_Tx_35f94448] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle10_0_oCAN_85bf3e37_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN_Tx_35f94448] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle1000_10_oCAN_d74aed68_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN_Tx_35f94448] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle_E2eProf1C_500_30_oCAN_eeefc687_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN_Tx_35f94448] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/msg_TxEvent_10_oCAN_b2cd4fc2_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN_Tx_35f94448] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_CycleTimeCnt
**********************************************************************************************************************/
/** 
  \var    Com_CycleTimeCnt
  \brief  Current counter value of cyclic transmission.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_CycleTimeCntType, COM_VAR_NOINIT) Com_CycleTimeCnt[6];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/ComIPdu_NmOsek_UserData] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/msg_StartAppl_Tx_MyECU_oCAN_ad461e3f_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN_Tx_35f94448] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle10_0_oCAN_85bf3e37_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN_Tx_35f94448] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle1000_10_oCAN_d74aed68_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN_Tx_35f94448] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle_E2eProf1C_500_30_oCAN_eeefc687_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN_Tx_35f94448] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/msg_TxEvent_10_oCAN_b2cd4fc2_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN_Tx_35f94448] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_CyclicSendRequest
**********************************************************************************************************************/
/** 
  \var    Com_CyclicSendRequest
  \brief  Cyclic send request flag used to indicate cyclic transmission mode for all Tx I-PDU.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_CyclicSendRequestType, COM_VAR_NOINIT) Com_CyclicSendRequest[6];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/ComIPdu_NmOsek_UserData] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/msg_StartAppl_Tx_MyECU_oCAN_ad461e3f_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN_Tx_35f94448] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle10_0_oCAN_85bf3e37_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN_Tx_35f94448] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle1000_10_oCAN_d74aed68_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN_Tx_35f94448] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle_E2eProf1C_500_30_oCAN_eeefc687_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN_Tx_35f94448] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/msg_TxEvent_10_oCAN_b2cd4fc2_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN_Tx_35f94448] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_DelayTimeCnt
**********************************************************************************************************************/
/** 
  \var    Com_DelayTimeCnt
  \brief  Current counter value of minimum delay counter.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_DelayTimeCntType, COM_VAR_NOINIT) Com_DelayTimeCnt[6];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/ComIPdu_NmOsek_UserData] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/msg_StartAppl_Tx_MyECU_oCAN_ad461e3f_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN_Tx_35f94448] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle10_0_oCAN_85bf3e37_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN_Tx_35f94448] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle1000_10_oCAN_d74aed68_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN_Tx_35f94448] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle_E2eProf1C_500_30_oCAN_eeefc687_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN_Tx_35f94448] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/msg_TxEvent_10_oCAN_b2cd4fc2_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN_Tx_35f94448] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_GatewayProcessingISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_GatewayProcessingISRLockCounterType, COM_VAR_NOINIT) Com_GatewayProcessingISRLockCounter;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_HandleRxPduDeferred
**********************************************************************************************************************/
/** 
  \var    Com_HandleRxPduDeferred
  \brief  Array indicating received Rx I-PDUs to be processed deferred within the next call of Com_MainfunctionRx().
*/ 
#define COM_START_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_HandleRxPduDeferredUType, COM_VAR_NOINIT) Com_HandleRxPduDeferred;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/msg_RxCycle100_0_oCAN_1e247d16_Rx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/msg_RxCycle500_20_oCAN_a691adb3_Rx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/msg_RxCycle_E2eProf1C_500_10_oCAN_e8110737_Rx] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/msg_RxEvent_20_oCAN_a1df81ad_Rx] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/msg_StartAppl_Rx_MyECU_oCAN_0da3c1e2_Rx] */

#define COM_STOP_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_Initialized
**********************************************************************************************************************/
/** 
  \var    Com_Initialized
  \brief  Initialization state of Com. TRUE, if Com_Init() has been called, else FALSE.
*/ 
#define COM_START_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_InitializedType, COM_VAR_ZERO_INIT) Com_Initialized = FALSE;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define COM_STOP_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RepCnt
**********************************************************************************************************************/
/** 
  \var    Com_RepCnt
  \brief  Current repetition counter value for replication of transmission requests plus one initial transmit.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_RepCntType, COM_VAR_NOINIT) Com_RepCnt[6];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/ComIPdu_NmOsek_UserData] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/msg_StartAppl_Tx_MyECU_oCAN_ad461e3f_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN_Tx_35f94448] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle10_0_oCAN_85bf3e37_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN_Tx_35f94448] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle1000_10_oCAN_d74aed68_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN_Tx_35f94448] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle_E2eProf1C_500_30_oCAN_eeefc687_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN_Tx_35f94448] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/msg_TxEvent_10_oCAN_b2cd4fc2_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN_Tx_35f94448] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RepCycleCnt
**********************************************************************************************************************/
/** 
  \var    Com_RepCycleCnt
  \brief  Current counter value of repetition period for replication of transmission requests.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_RepCycleCntType, COM_VAR_NOINIT) Com_RepCycleCnt[6];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/ComIPdu_NmOsek_UserData] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/msg_StartAppl_Tx_MyECU_oCAN_ad461e3f_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN_Tx_35f94448] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle10_0_oCAN_85bf3e37_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN_Tx_35f94448] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle1000_10_oCAN_d74aed68_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN_Tx_35f94448] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle_E2eProf1C_500_30_oCAN_eeefc687_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN_Tx_35f94448] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/msg_TxEvent_10_oCAN_b2cd4fc2_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN_Tx_35f94448] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxDeadlineMonitoringISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_RxDeadlineMonitoringISRLockCounterType, COM_VAR_NOINIT) Com_RxDeadlineMonitoringISRLockCounter;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxDefPduBuffer
**********************************************************************************************************************/
/** 
  \var    Com_RxDefPduBuffer
  \brief  Rx I-PDU buffer for deferred signal processing.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_RxDefPduBufferUType, COM_VAR_NOINIT) Com_RxDefPduBuffer;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/msg_RxCycle100_0_oCAN_1e247d16_Rx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/msg_RxCycle500_20_oCAN_a691adb3_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/msg_RxCycle500_20_oCAN_a691adb3_Rx] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/msg_RxCycle500_20_oCAN_a691adb3_Rx] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/msg_RxCycle_E2eProf1C_500_10_oCAN_e8110737_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/msg_RxCycle_E2eProf1C_500_10_oCAN_e8110737_Rx] */
  /*    14 */  /* [/ActiveEcuC/Com/ComConfig/msg_RxCycle_E2eProf1C_500_10_oCAN_e8110737_Rx] */
  /*    15 */  /* [/ActiveEcuC/Com/ComConfig/msg_RxEvent_20_oCAN_a1df81ad_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/msg_RxEvent_20_oCAN_a1df81ad_Rx] */
  /*    18 */  /* [/ActiveEcuC/Com/ComConfig/msg_RxEvent_20_oCAN_a1df81ad_Rx] */
  /*    19 */  /* [/ActiveEcuC/Com/ComConfig/msg_StartAppl_Rx_MyECU_oCAN_0da3c1e2_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/msg_StartAppl_Rx_MyECU_oCAN_0da3c1e2_Rx] */
  /*    26 */  /* [/ActiveEcuC/Com/ComConfig/msg_StartAppl_Rx_MyECU_oCAN_0da3c1e2_Rx] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxDeferredFctPtrCache
**********************************************************************************************************************/
/** 
  \var    Com_RxDeferredFctPtrCache
  \brief  Cache for deferred Rx (invalid) notification.
*/ 
#define COM_START_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_RxDeferredFctPtrCacheType, COM_VAR_NOINIT) Com_RxDeferredFctPtrCache[1];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define COM_STOP_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxDeferredProcessingISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_RxDeferredProcessingISRLockCounterType, COM_VAR_NOINIT) Com_RxDeferredProcessingISRLockCounter;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxDlMonDivisorCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_RxDlMonDivisorCounterType, COM_VAR_NOINIT) Com_RxDlMonDivisorCounter;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxIPduGroupISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_RxIPduGroupISRLockCounterType, COM_VAR_NOINIT) Com_RxIPduGroupISRLockCounter;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxPduGrpActive
**********************************************************************************************************************/
/** 
  \var    Com_RxPduGrpActive
  \brief  Rx I-PDU based state (started/stopped) of the corresponding I-PDU-Group.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_RxPduGrpActiveType, COM_VAR_NOINIT) Com_RxPduGrpActive[5];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/msg_RxCycle100_0_oCAN_1e247d16_Rx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN_Rx_63a3e3ce] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/msg_RxCycle500_20_oCAN_a691adb3_Rx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN_Rx_63a3e3ce] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/msg_RxCycle_E2eProf1C_500_10_oCAN_e8110737_Rx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN_Rx_63a3e3ce] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/msg_RxEvent_20_oCAN_a1df81ad_Rx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN_Rx_63a3e3ce] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/msg_StartAppl_Rx_MyECU_oCAN_0da3c1e2_Rx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN_Rx_63a3e3ce] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxSigBufferUInt16
**********************************************************************************************************************/
/** 
  \var    Com_RxSigBufferUInt16
  \brief  Rx Signal and Group Signal Buffer. (UINT16)
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_RxSigBufferUInt16Type, COM_VAR_NOINIT) Com_RxSigBufferUInt16[3];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/Signal_Rx11bit_OnWrite_omsg_RxEvent_20_oCAN_e14fb9df_Rx, /ActiveEcuC/Com/ComConfig/Signal_Rx11bit_OnWrite_omsg_RxEvent_20_oCAN_e14fb9df_Rx_RxSignalBufferRouting] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/Signal_Rx15bit_OnWrite_omsg_RxEvent_20_oCAN_3a85fa13_Rx, /ActiveEcuC/Com/ComConfig/Signal_Rx15bit_OnWrite_omsg_RxEvent_20_oCAN_3a85fa13_Rx_RxSignalBufferRouting] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/Signal_Rx16bit_Cyclic_omsg_RxCycle500_20_oCAN_300c1427_Rx, /ActiveEcuC/Com/ComConfig/Signal_Rx16bit_Cyclic_omsg_RxCycle500_20_oCAN_300c1427_Rx_RxSignalBufferRouting] */

#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxSigBufferUInt32
**********************************************************************************************************************/
/** 
  \var    Com_RxSigBufferUInt32
  \brief  Rx Signal and Group Signal Buffer. (UINT32)
*/ 
#define COM_START_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_RxSigBufferUInt32Type, COM_VAR_NOINIT) Com_RxSigBufferUInt32[3];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/SG_RgRx_Prof1C_RxCycle_omsg_RxCycle_E2eProf1C_500_10_oCAN_430c5af9_Rx/SigRx_Prof1C_Sig32Bit_omsg_RxCycle_E2eProf1C_500_10_oCAN_f0dd3f4d_Rx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/SG_RgRx_Prof1C_RxCycle_omsg_RxCycle_E2eProf1C_500_10_oCAN_430c5af9_Rx/SigRx_Prof1C_Sig32Bit_omsg_RxCycle_E2eProf1C_500_10_oCAN_f0dd3f4d_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/SG_RgRx_Prof1C_RxCycle_omsg_RxCycle_E2eProf1C_500_10_oCAN_430c5af9_Rx/SigRx_Prof1C_Sig32Bit_omsg_RxCycle_E2eProf1C_500_10_oCAN_f0dd3f4d_Rx_RxSignalBufferRouting] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/Signal_Rx20bit_Cyclic_omsg_RxCycle500_20_oCAN_983b15aa_Rx, /ActiveEcuC/Com/ComConfig/Signal_Rx20bit_Cyclic_omsg_RxCycle500_20_oCAN_983b15aa_Rx_RxSignalBufferRouting] */

#define COM_STOP_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxSigBufferUInt8
**********************************************************************************************************************/
/** 
  \var    Com_RxSigBufferUInt8
  \brief  Rx Signal and Group Signal Buffer. (BOOLEAN, UINT8)
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_RxSigBufferUInt8Type, COM_VAR_NOINIT) Com_RxSigBufferUInt8[16];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/SG_RgRx_Prof1C_RxCycle_omsg_RxCycle_E2eProf1C_500_10_oCAN_430c5af9_Rx/SigRx_Prof1C_CRC_omsg_RxCycle_E2eProf1C_500_10_oCAN_d6a2f34d_Rx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/SG_RgRx_Prof1C_RxCycle_omsg_RxCycle_E2eProf1C_500_10_oCAN_430c5af9_Rx/SigRx_Prof1C_CRC_omsg_RxCycle_E2eProf1C_500_10_oCAN_d6a2f34d_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/SG_RgRx_Prof1C_RxCycle_omsg_RxCycle_E2eProf1C_500_10_oCAN_430c5af9_Rx/SigRx_Prof1C_CRC_omsg_RxCycle_E2eProf1C_500_10_oCAN_d6a2f34d_Rx_RxSignalBufferRouting] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/SG_RgRx_Prof1C_RxCycle_omsg_RxCycle_E2eProf1C_500_10_oCAN_430c5af9_Rx/SigRx_Prof1C_DataId_HiByte_LoNib_omsg_RxCycle_E2eProf1C_500_10_oCAN_bdeb2c98_Rx] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/SG_RgRx_Prof1C_RxCycle_omsg_RxCycle_E2eProf1C_500_10_oCAN_430c5af9_Rx/SigRx_Prof1C_DataId_HiByte_LoNib_omsg_RxCycle_E2eProf1C_500_10_oCAN_bdeb2c98_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/SG_RgRx_Prof1C_RxCycle_omsg_RxCycle_E2eProf1C_500_10_oCAN_430c5af9_Rx/SigRx_Prof1C_DataId_HiByte_LoNib_omsg_RxCycle_E2eProf1C_500_10_oCAN_bdeb2c98_Rx_RxSignalBufferRouting] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/SG_RgRx_Prof1C_RxCycle_omsg_RxCycle_E2eProf1C_500_10_oCAN_430c5af9_Rx/SigRx_Prof1C_SQ_omsg_RxCycle_E2eProf1C_500_10_oCAN_263a4149_Rx] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/SG_RgRx_Prof1C_RxCycle_omsg_RxCycle_E2eProf1C_500_10_oCAN_430c5af9_Rx/SigRx_Prof1C_SQ_omsg_RxCycle_E2eProf1C_500_10_oCAN_263a4149_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/SG_RgRx_Prof1C_RxCycle_omsg_RxCycle_E2eProf1C_500_10_oCAN_430c5af9_Rx/SigRx_Prof1C_SQ_omsg_RxCycle_E2eProf1C_500_10_oCAN_263a4149_Rx_RxSignalBufferRouting] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/SG_RgRx_Prof1C_RxCycle_omsg_RxCycle_E2eProf1C_500_10_oCAN_430c5af9_Rx/SigRx_Prof1C_Sig3Bit_omsg_RxCycle_E2eProf1C_500_10_oCAN_95ddcbc9_Rx] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/SG_RgRx_Prof1C_RxCycle_omsg_RxCycle_E2eProf1C_500_10_oCAN_430c5af9_Rx/SigRx_Prof1C_Sig3Bit_omsg_RxCycle_E2eProf1C_500_10_oCAN_95ddcbc9_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/SG_RgRx_Prof1C_RxCycle_omsg_RxCycle_E2eProf1C_500_10_oCAN_430c5af9_Rx/SigRx_Prof1C_Sig3Bit_omsg_RxCycle_E2eProf1C_500_10_oCAN_95ddcbc9_Rx_RxSignalBufferRouting] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/SG_RgRx_Prof1C_RxCycle_omsg_RxCycle_E2eProf1C_500_10_oCAN_430c5af9_Rx/SigRx_Prof1C_Sig4Bit_omsg_RxCycle_E2eProf1C_500_10_oCAN_a713ffd7_Rx] */
  /*     9 */  /* [/ActiveEcuC/Com/ComConfig/SG_RgRx_Prof1C_RxCycle_omsg_RxCycle_E2eProf1C_500_10_oCAN_430c5af9_Rx/SigRx_Prof1C_Sig4Bit_omsg_RxCycle_E2eProf1C_500_10_oCAN_a713ffd7_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/SG_RgRx_Prof1C_RxCycle_omsg_RxCycle_E2eProf1C_500_10_oCAN_430c5af9_Rx/SigRx_Prof1C_Sig4Bit_omsg_RxCycle_E2eProf1C_500_10_oCAN_a713ffd7_Rx_RxSignalBufferRouting] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/Signal_RearInteriorLight_omsg_RxCycle100_0_oCAN_44115c66_Rx, /ActiveEcuC/Com/ComConfig/Signal_RearInteriorLight_omsg_RxCycle100_0_oCAN_44115c66_Rx_RxSignalBufferRouting] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/Signal_RearLeftDoor_omsg_RxCycle100_0_oCAN_47d3a185_Rx, /ActiveEcuC/Com/ComConfig/Signal_RearLeftDoor_omsg_RxCycle100_0_oCAN_47d3a185_Rx_RxSignalBufferRouting] */
  /*    12 */  /* [/ActiveEcuC/Com/ComConfig/Signal_RearRightDoor_omsg_RxCycle100_0_oCAN_cbde8ce7_Rx, /ActiveEcuC/Com/ComConfig/Signal_RearRightDoor_omsg_RxCycle100_0_oCAN_cbde8ce7_Rx_RxSignalBufferRouting] */
  /*    13 */  /* [/ActiveEcuC/Com/ComConfig/Signal_Rx8bit_Cyclic_omsg_RxCycle500_20_oCAN_f9e4bcc4_Rx, /ActiveEcuC/Com/ComConfig/Signal_Rx8bit_Cyclic_omsg_RxCycle500_20_oCAN_f9e4bcc4_Rx_RxSignalBufferRouting] */
  /*    14 */  /* [/ActiveEcuC/Com/ComConfig/Signal_StartAppl_RxCtrl_MyECU_omsg_StartAppl_Rx_MyECU_oCAN_09591065_Rx, /ActiveEcuC/Com/ComConfig/Signal_StartAppl_RxCtrl_MyECU_omsg_StartAppl_Rx_MyECU_oCAN_09591065_Rx_RxSignalBufferRouting] */
  /*    15 */  /* [/ActiveEcuC/Com/ComConfig/Signal_StartAppl_RxData_MyECU_omsg_StartAppl_Rx_MyECU_oCAN_315f9453_Rx, /ActiveEcuC/Com/ComConfig/Signal_StartAppl_RxData_MyECU_omsg_StartAppl_Rx_MyECU_oCAN_315f9453_Rx_RxSignalBufferRouting] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_SigGrpEventFlag
**********************************************************************************************************************/
/** 
  \var    Com_SigGrpEventFlag
  \brief  Flag is set if a group signal write access caused a triggered event.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_SigGrpEventFlagType, COM_VAR_NOINIT) Com_SigGrpEventFlag[1];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TmpRxShdBufferUInt32
**********************************************************************************************************************/
/** 
  \var    Com_TmpRxShdBufferUInt32
  \brief  Temporary Rx Group Signal Shadow Buffer. (UINT32)
*/ 
#define COM_START_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_TmpRxShdBufferUInt32UType, COM_VAR_NOINIT) Com_TmpRxShdBufferUInt32;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/SG_RgRx_Prof1C_RxCycle_omsg_RxCycle_E2eProf1C_500_10_oCAN_430c5af9_Rx/SigRx_Prof1C_Sig32Bit_omsg_RxCycle_E2eProf1C_500_10_oCAN_f0dd3f4d_Rx] */

#define COM_STOP_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TmpRxShdBufferUInt8
**********************************************************************************************************************/
/** 
  \var    Com_TmpRxShdBufferUInt8
  \brief  Temporary Rx Group Signal Shadow Buffer. (BOOLEAN, UINT8)
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_TmpRxShdBufferUInt8UType, COM_VAR_NOINIT) Com_TmpRxShdBufferUInt8;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/SG_RgRx_Prof1C_RxCycle_omsg_RxCycle_E2eProf1C_500_10_oCAN_430c5af9_Rx/SigRx_Prof1C_CRC_omsg_RxCycle_E2eProf1C_500_10_oCAN_d6a2f34d_Rx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/SG_RgRx_Prof1C_RxCycle_omsg_RxCycle_E2eProf1C_500_10_oCAN_430c5af9_Rx/SigRx_Prof1C_DataId_HiByte_LoNib_omsg_RxCycle_E2eProf1C_500_10_oCAN_bdeb2c98_Rx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/SG_RgRx_Prof1C_RxCycle_omsg_RxCycle_E2eProf1C_500_10_oCAN_430c5af9_Rx/SigRx_Prof1C_Sig3Bit_omsg_RxCycle_E2eProf1C_500_10_oCAN_95ddcbc9_Rx] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/SG_RgRx_Prof1C_RxCycle_omsg_RxCycle_E2eProf1C_500_10_oCAN_430c5af9_Rx/SigRx_Prof1C_SQ_omsg_RxCycle_E2eProf1C_500_10_oCAN_263a4149_Rx] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/SG_RgRx_Prof1C_RxCycle_omsg_RxCycle_E2eProf1C_500_10_oCAN_430c5af9_Rx/SigRx_Prof1C_Sig4Bit_omsg_RxCycle_E2eProf1C_500_10_oCAN_a713ffd7_Rx] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TransmitRequest
**********************************************************************************************************************/
/** 
  \var    Com_TransmitRequest
  \brief  Transmit request flag used for decoupled Tx I-PDU tranmission.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_TransmitRequestType, COM_VAR_NOINIT) Com_TransmitRequest[6];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/ComIPdu_NmOsek_UserData] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/msg_StartAppl_Tx_MyECU_oCAN_ad461e3f_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN_Tx_35f94448] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle10_0_oCAN_85bf3e37_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN_Tx_35f94448] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle1000_10_oCAN_d74aed68_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN_Tx_35f94448] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle_E2eProf1C_500_30_oCAN_eeefc687_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN_Tx_35f94448] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/msg_TxEvent_10_oCAN_b2cd4fc2_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN_Tx_35f94448] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxBuffer
**********************************************************************************************************************/
/** 
  \var    Com_TxBuffer
  \brief  Shared uint8 buffer for Tx I-PDUs and ComSignalGroup shadow buffer.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_TxBufferType, COM_VAR_NOINIT) Com_TxBuffer[45];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/ComIPdu_NmOsek_UserData, /ActiveEcuC/Com/ComConfig/ComSignal_NmOsek_UserData] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/ComIPdu_NmOsek_UserData, /ActiveEcuC/Com/ComConfig/ComSignal_NmOsek_UserData] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/ComIPdu_NmOsek_UserData, /ActiveEcuC/Com/ComConfig/ComSignal_NmOsek_UserData] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/msg_StartAppl_Tx_MyECU_oCAN_ad461e3f_Tx, /ActiveEcuC/Com/ComConfig/Signal_StartAppl_TxCtrl_MyECU_omsg_StartAppl_Tx_MyECU_oCAN_b45ea6bd_Tx] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/msg_StartAppl_Tx_MyECU_oCAN_ad461e3f_Tx, /ActiveEcuC/Com/ComConfig/Signal_StartAppl_TxData_MyECU_omsg_StartAppl_Tx_MyECU_oCAN_8c58228b_Tx] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/msg_StartAppl_Tx_MyECU_oCAN_ad461e3f_Tx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/msg_StartAppl_Tx_MyECU_oCAN_ad461e3f_Tx] */
  /*    13 */  /* [/ActiveEcuC/Com/ComConfig/msg_StartAppl_Tx_MyECU_oCAN_ad461e3f_Tx] */
  /*    14 */  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle10_0_oCAN_85bf3e37_Tx, /ActiveEcuC/Com/ComConfig/Signal_Tx32bit_Cyclic_omsg_TxCycle10_0_oCAN_ab90e6e2_Tx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle10_0_oCAN_85bf3e37_Tx, /ActiveEcuC/Com/ComConfig/Signal_Tx32bit_Cyclic_omsg_TxCycle10_0_oCAN_ab90e6e2_Tx] */
  /*    17 */  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle10_0_oCAN_85bf3e37_Tx, /ActiveEcuC/Com/ComConfig/Signal_Tx32bit_Cyclic_omsg_TxCycle10_0_oCAN_ab90e6e2_Tx] */
  /*    18 */  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle10_0_oCAN_85bf3e37_Tx, /ActiveEcuC/Com/ComConfig/Signal_Tx24bit_Cyclic_omsg_TxCycle10_0_oCAN_393dd5fe_Tx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle10_0_oCAN_85bf3e37_Tx, /ActiveEcuC/Com/ComConfig/Signal_Tx24bit_Cyclic_omsg_TxCycle10_0_oCAN_393dd5fe_Tx] */
  /*    20 */  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle10_0_oCAN_85bf3e37_Tx, /ActiveEcuC/Com/ComConfig/Signal_Tx24bit_Cyclic_omsg_TxCycle10_0_oCAN_393dd5fe_Tx] */
  /*    21 */  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle1000_10_oCAN_d74aed68_Tx, /ActiveEcuC/Com/ComConfig/Signal_Tx10bit_Cyclic_omsg_TxCycle1000_10_oCAN_9539efc7_Tx] */
  /*    22 */  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle1000_10_oCAN_d74aed68_Tx, /ActiveEcuC/Com/ComConfig/Signal_Tx4bit_Cyclic_omsg_TxCycle1000_10_oCAN_ca549591_Tx, /ActiveEcuC/Com/ComConfig/Signal_Tx10bit_Cyclic_omsg_TxCycle1000_10_oCAN_9539efc7_Tx] */
  /*    23 */  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle_E2eProf1C_500_30_oCAN_eeefc687_Tx, /ActiveEcuC/Com/ComConfig/SG_SgTx_Prof1C_TxCycle_omsg_TxCycle_E2eProf1C_500_30_oCAN_9bfb2a76_TxSigGrpInTxIPDU] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle_E2eProf1C_500_30_oCAN_eeefc687_Tx, /ActiveEcuC/Com/ComConfig/SG_SgTx_Prof1C_TxCycle_omsg_TxCycle_E2eProf1C_500_30_oCAN_9bfb2a76_TxSigGrpInTxIPDU] */
  /*    29 */  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle_E2eProf1C_500_30_oCAN_eeefc687_Tx, /ActiveEcuC/Com/ComConfig/SG_SgTx_Prof1C_TxCycle_omsg_TxCycle_E2eProf1C_500_30_oCAN_9bfb2a76_TxSigGrpInTxIPDU] */
  /*    30 */  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle_E2eProf1C_500_30_oCAN_eeefc687_Tx] */
  /*    31 */  /* [/ActiveEcuC/Com/ComConfig/msg_TxEvent_10_oCAN_b2cd4fc2_Tx, /ActiveEcuC/Com/ComConfig/Signal_Tx32bit_OnWrite_omsg_TxEvent_10_oCAN_298e9335_Tx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/msg_TxEvent_10_oCAN_b2cd4fc2_Tx, /ActiveEcuC/Com/ComConfig/Signal_Tx32bit_OnWrite_omsg_TxEvent_10_oCAN_298e9335_Tx] */
  /*    34 */  /* [/ActiveEcuC/Com/ComConfig/msg_TxEvent_10_oCAN_b2cd4fc2_Tx, /ActiveEcuC/Com/ComConfig/Signal_Tx32bit_OnWrite_omsg_TxEvent_10_oCAN_298e9335_Tx] */
  /*    35 */  /* [/ActiveEcuC/Com/ComConfig/msg_TxEvent_10_oCAN_b2cd4fc2_Tx, /ActiveEcuC/Com/ComConfig/Signal_Tx24bit_OnWrite_omsg_TxEvent_10_oCAN_bb23a029_Tx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/msg_TxEvent_10_oCAN_b2cd4fc2_Tx, /ActiveEcuC/Com/ComConfig/Signal_Tx24bit_OnWrite_omsg_TxEvent_10_oCAN_bb23a029_Tx] */
  /*    37 */  /* [/ActiveEcuC/Com/ComConfig/msg_TxEvent_10_oCAN_b2cd4fc2_Tx, /ActiveEcuC/Com/ComConfig/Signal_Tx24bit_OnWrite_omsg_TxEvent_10_oCAN_bb23a029_Tx] */
  /*    38 */  /* [/ActiveEcuC/Com/ComConfig/SG_SgTx_Prof1C_TxCycle_omsg_TxCycle_E2eProf1C_500_30_oCAN_9bfb2a76_Tx, /ActiveEcuC/Com/ComConfig/SG_SgTx_Prof1C_TxCycle_omsg_TxCycle_E2eProf1C_500_30_oCAN_9bfb2a76_Tx/SigTx_Prof1C_CRC_omsg_TxCycle_E2eProf1C_500_30_oCAN_5df85835_Tx] */
  /*    39 */  /* [/ActiveEcuC/Com/ComConfig/SG_SgTx_Prof1C_TxCycle_omsg_TxCycle_E2eProf1C_500_30_oCAN_9bfb2a76_Tx, /ActiveEcuC/Com/ComConfig/SG_SgTx_Prof1C_TxCycle_omsg_TxCycle_E2eProf1C_500_30_oCAN_9bfb2a76_Tx/SigTx_Prof1C_SQ_omsg_TxCycle_E2eProf1C_500_30_oCAN_8ca3bde6_Tx, /ActiveEcuC/Com/ComConfig/SG_SgTx_Prof1C_TxCycle_omsg_TxCycle_E2eProf1C_500_30_oCAN_9bfb2a76_Tx/SigTx_Prof1C_DataId_HiByte_LoNib_omsg_TxCycle_E2eProf1C_500_30_oCAN_2f490cd4_Tx] */
  /*    40 */  /* [/ActiveEcuC/Com/ComConfig/SG_SgTx_Prof1C_TxCycle_omsg_TxCycle_E2eProf1C_500_30_oCAN_9bfb2a76_Tx, /ActiveEcuC/Com/ComConfig/SG_SgTx_Prof1C_TxCycle_omsg_TxCycle_E2eProf1C_500_30_oCAN_9bfb2a76_Tx/SigTx_Prof1C_Sig4Bit_omsg_TxCycle_E2eProf1C_500_30_oCAN_0e363008_Tx] */
  /*    41 */  /* [/ActiveEcuC/Com/ComConfig/SG_SgTx_Prof1C_TxCycle_omsg_TxCycle_E2eProf1C_500_30_oCAN_9bfb2a76_Tx, /ActiveEcuC/Com/ComConfig/SG_SgTx_Prof1C_TxCycle_omsg_TxCycle_E2eProf1C_500_30_oCAN_9bfb2a76_Tx/SigTx_Prof1C_Sig2Bit_omsg_TxCycle_E2eProf1C_500_30_oCAN_72710fbf_Tx] */
  /*    42 */  /* [/ActiveEcuC/Com/ComConfig/SG_SgTx_Prof1C_TxCycle_omsg_TxCycle_E2eProf1C_500_30_oCAN_9bfb2a76_Tx, /ActiveEcuC/Com/ComConfig/SG_SgTx_Prof1C_TxCycle_omsg_TxCycle_E2eProf1C_500_30_oCAN_9bfb2a76_Tx/SigTx_Prof1C_Sig16Bit_omsg_TxCycle_E2eProf1C_500_30_oCAN_4f2c5310_Tx] */
  /*    43 */  /* [/ActiveEcuC/Com/ComConfig/SG_SgTx_Prof1C_TxCycle_omsg_TxCycle_E2eProf1C_500_30_oCAN_9bfb2a76_Tx, /ActiveEcuC/Com/ComConfig/SG_SgTx_Prof1C_TxCycle_omsg_TxCycle_E2eProf1C_500_30_oCAN_9bfb2a76_Tx/SigTx_Prof1C_Sig16Bit_omsg_TxCycle_E2eProf1C_500_30_oCAN_4f2c5310_Tx] */
  /*    44 */  /* [/ActiveEcuC/Com/ComConfig/SG_SgTx_Prof1C_TxCycle_omsg_TxCycle_E2eProf1C_500_30_oCAN_9bfb2a76_Tx, /ActiveEcuC/Com/ComConfig/SG_SgTx_Prof1C_TxCycle_omsg_TxCycle_E2eProf1C_500_30_oCAN_9bfb2a76_Tx/SigTx_Prof1C_Sig8Bit_omsg_TxCycle_E2eProf1C_500_30_oCAN_f6b84f66_Tx] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxCycleCounterDivisorCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_TxCycleCounterDivisorCounterType, COM_VAR_NOINIT) Com_TxCycleCounterDivisorCounter;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxCyclicProcessingISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_TxCyclicProcessingISRLockCounterType, COM_VAR_NOINIT) Com_TxCyclicProcessingISRLockCounter;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxDeadlineMonitoringISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_TxDeadlineMonitoringISRLockCounterType, COM_VAR_NOINIT) Com_TxDeadlineMonitoringISRLockCounter;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxDlMonDivisorCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_TxDlMonDivisorCounterType, COM_VAR_NOINIT) Com_TxDlMonDivisorCounter;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxIPduGroupISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_TxIPduGroupISRLockCounterType, COM_VAR_NOINIT) Com_TxIPduGroupISRLockCounter;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxPduGrpActive
**********************************************************************************************************************/
/** 
  \var    Com_TxPduGrpActive
  \brief  Tx I-PDU based state (started/stopped) of the corresponding I-PDU-Group.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_TxPduGrpActiveType, COM_VAR_NOINIT) Com_TxPduGrpActive[6];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/ComIPdu_NmOsek_UserData] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/msg_StartAppl_Tx_MyECU_oCAN_ad461e3f_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN_Tx_35f94448] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle10_0_oCAN_85bf3e37_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN_Tx_35f94448] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle1000_10_oCAN_d74aed68_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN_Tx_35f94448] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle_E2eProf1C_500_30_oCAN_eeefc687_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN_Tx_35f94448] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/msg_TxEvent_10_oCAN_b2cd4fc2_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN_Tx_35f94448] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxProcessingISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_TxProcessingISRLockCounterType, COM_VAR_NOINIT) Com_TxProcessingISRLockCounter;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxSduLength
**********************************************************************************************************************/
/** 
  \var    Com_TxSduLength
  \brief  This var Array contains the Com Ipdu Length.
*/ 
#define COM_START_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_TxSduLengthType, COM_VAR_NOINIT) Com_TxSduLength[6];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/ComIPdu_NmOsek_UserData] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/msg_StartAppl_Tx_MyECU_oCAN_ad461e3f_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN_Tx_35f94448] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle10_0_oCAN_85bf3e37_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN_Tx_35f94448] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle1000_10_oCAN_d74aed68_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN_Tx_35f94448] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/msg_TxCycle_E2eProf1C_500_30_oCAN_eeefc687_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN_Tx_35f94448] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/msg_TxEvent_10_oCAN_b2cd4fc2_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN_Tx_35f94448] */

#define COM_STOP_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
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
  END OF FILE: Com_Lcfg.c
**********************************************************************************************************************/

