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
 *            Module: NmOsek
 *           Program: MSR_Vector_SLP4
 *          Customer: Harman International (China) Holdings Co., Ltd.
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: FS32K148UAT0VLQR
 *    License Scope : The usage is restricted to CBD1800257_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: NmOsek_Cfg.c
 *   Generation Time: 2018-11-27 15:30:02
 *           Project: TsiStandard - Version 1
 *          Delivery: CBD1800257_D01
 *      Tool Version: DaVinci Configurator  5.18.37 SP1
 *
 *
 *********************************************************************************************************************/

#define NMOSEK_CFG_SOURCE

/* PRQA S 0779 EOF */ /* MD_CSL_0779 */
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "NmOsek.h"
#include "ComM.h"
#include "CanIf.h"
#include "PduR_NmOsek.h"
#include "NmOsek_Cbk.h"



/**********************************************************************************************************************
 *  LOCAL CONSTANT MACROS
 *********************************************************************************************************************/
#if !defined (STATIC)
# define STATIC static
#endif

#if !defined (NMOSEK_LOCAL)
# define NMOSEK_LOCAL static
#endif

#if !defined (NMOSEK_LOCAL_INLINE)
# define NMOSEK_LOCAL_INLINE LOCAL_INLINE
#endif




/**********************************************************************************************************************
 *  LOCAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  LOCAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  LOCAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/






/**********************************************************************************************************************
 *  LOCAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA
**********************************************************************************************************************/




/**********************************************************************************************************************
 *  GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  NmOsek_ChannelConfig
**********************************************************************************************************************/
/** 
  \var    NmOsek_ChannelConfig
  \brief  Contains parameters of /MICROSAR/NmOsek/NmOsekGlobalConfig/NmOsekChannelConfig.
  \details
  Element                 Description
  ComMNetworkHandleRef    Contains values of DefinitionRef: /MICROSAR/NmOsek/NmOsekGlobalConfig/NmOsekChannelConfig/NmOsekComMNetworkHandleRef.
  LimpHomeTime            Contains values of DefinitionRef: /MICROSAR/NmOsek/NmOsekGlobalConfig/NmOsekChannelConfig/NmOsekLimpHomeTime.
  RingMaxTime             Contains values of DefinitionRef: /MICROSAR/NmOsek/NmOsekGlobalConfig/NmOsekChannelConfig/NmOsekRingMaxTime.
  RingTypTime             Contains values of DefinitionRef: /MICROSAR/NmOsek/NmOsekGlobalConfig/NmOsekChannelConfig/NmOsekRingTypTime.
  WaitBusSleepTime        Contains values of DefinitionRef: /MICROSAR/NmOsek/NmOsekGlobalConfig/NmOsekChannelConfig/NmOsekWaitBusSleepTime.
*/ 
#define NMOSEK_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(NmOsek_ChannelConfigType, NMOSEK_CONST) NmOsek_ChannelConfig[1] = {
    /* Index    ComMNetworkHandleRef                  LimpHomeTime  RingMaxTime  RingTypTime  WaitBusSleepTime        Referable Keys */
  { /*     0 */ ComMConf_ComMChannel_CN_CAN_fe6ecc87,         100u,         25u,          9u,             150u }   /* [/ActiveEcuC/NmOsek/NmOsekGlobalConfig/NmOsekChannelConfig, /ActiveEcuC/NmOsek/NmOsekGlobalConfig] */
};
#define NMOSEK_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  NmOsek_PbChannelConfig
**********************************************************************************************************************/
/** 
  \var    NmOsek_PbChannelConfig
  \details
  Element                           Description
  AwakeTxUserDataPduId              Awake TX PDU ID passed to PduR_NmOsekTriggerTransmit()
  MaskedBits                        contains bitcoded the boolean data of NmOsek_RxMessageDataUsedOfPbChannelConfig, NmOsek_RxMessageData_UserDataUsedOfPbChannelConfig, NmOsek_TxMessageDataUsedOfPbChannelConfig, NmOsek_TxMessageData_UserDataUsedOfPbChannelConfig
  NodeId                            Node Identifier of local node
  RangeMask                         Range Mask for the reception (CanIfRxPduCanIdRangeUpperCanId - CanIfRxPduCanIdRangeLowerCanId)
  RxMessageDataEndIdx               the end index of the 0:n relation pointing to NmOsek_RxMessageData
  RxMessageDataLength               the number of relations pointing to NmOsek_RxMessageData
  RxMessageDataStartIdx             the start index of the 0:n relation pointing to NmOsek_RxMessageData
  RxMessageData_DestIdIdx           the index of the 1:1 relation pointing to NmOsek_RxMessageData
  RxMessageData_OpCodeIdx           the index of the 1:1 relation pointing to NmOsek_RxMessageData
  RxMessageData_SleepIdx            the index of the 1:1 relation pointing to NmOsek_RxMessageData
  RxMessageData_UserDataEndIdx      the end index of the 0:n relation pointing to NmOsek_RxMessageData
  RxMessageData_UserDataLength      the number of relations pointing to NmOsek_RxMessageData
  RxMessageData_UserDataStartIdx    the start index of the 0:n relation pointing to NmOsek_RxMessageData
  TxMessageDataEndIdx               the end index of the 0:n relation pointing to NmOsek_TxMessageData
  TxMessageDataLength               the number of relations pointing to NmOsek_TxMessageData
  TxMessageDataStartIdx             the start index of the 0:n relation pointing to NmOsek_TxMessageData
  TxMessageData_DestIdIdx           the index of the 1:1 relation pointing to NmOsek_TxMessageData
  TxMessageData_OpCodeIdx           the index of the 1:1 relation pointing to NmOsek_TxMessageData
  TxMessageData_SleepIdx            the index of the 1:1 relation pointing to NmOsek_TxMessageData
  TxMessageData_UserDataEndIdx      the end index of the 0:n relation pointing to NmOsek_TxMessageData
  TxMessageData_UserDataLength      the number of relations pointing to NmOsek_TxMessageData
  TxMessageData_UserDataStartIdx    the start index of the 0:n relation pointing to NmOsek_TxMessageData
  TxPduId                           Lower layer TX PDU ID passed to CanIf_Transmit()
  WakeUpTxUserDataPduId             Wake-up TX PDU ID passed to PduR_NmOsekTriggerTransmit()
*/ 
#define NMOSEK_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(NmOsek_PbChannelConfigType, NMOSEK_CONST) NmOsek_PbChannelConfig[1] = {
    /* Index    AwakeTxUserDataPduId                MaskedBits  NodeId  RangeMask  RxMessageDataEndIdx  RxMessageDataLength  RxMessageDataStartIdx  RxMessageData_DestIdIdx  RxMessageData_OpCodeIdx  RxMessageData_SleepIdx  RxMessageData_UserDataEndIdx  RxMessageData_UserDataLength  RxMessageData_UserDataStartIdx  TxMessageDataEndIdx  TxMessageDataLength  TxMessageDataStartIdx  TxMessageData_DestIdIdx  TxMessageData_OpCodeIdx  TxMessageData_SleepIdx  TxMessageData_UserDataEndIdx  TxMessageData_UserDataLength  TxMessageData_UserDataStartIdx  TxPduId                                WakeUpTxUserDataPduId              */
  { /*     0 */ PduRConf_PduRDestPdu_PduRDestPdu_4,      0x0Fu,  0x00u,     0xFFu,                  8u,                  8u,                    0u,                      0u,                      1u,                     1u,                           8u,                           6u,                             2u,                  8u,                  8u,                    0u,                      0u,                      1u,                     1u,                           8u,                           6u,                             2u, CanIfConf_CanIfTxPduCfg_CanIfTxPduCfg, PduRConf_PduRDestPdu_PduRDestPdu_4 }
};
#define NMOSEK_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  NmOsek_Action
**********************************************************************************************************************/
/** 
  \var    NmOsek_Action
  \brief  Action state
*/ 
#define NMOSEK_START_SEC_VAR_NO_INIT_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(NmOsek_ActionType, NMOSEK_VAR_NO_INIT) NmOsek_Action[1];
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/NmOsek/NmOsekGlobalConfig/NmOsekChannelConfig, /ActiveEcuC/NmOsek/NmOsekGlobalConfig] */

#define NMOSEK_STOP_SEC_VAR_NO_INIT_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  NmOsek_CanIsBusOff
**********************************************************************************************************************/
/** 
  \var    NmOsek_CanIsBusOff
  \brief  BusOff Notification flag
*/ 
#define NMOSEK_START_SEC_VAR_NO_INIT_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(NmOsek_CanIsBusOffType, NMOSEK_VAR_NO_INIT) NmOsek_CanIsBusOff[1];
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/NmOsek/NmOsekGlobalConfig/NmOsekChannelConfig, /ActiveEcuC/NmOsek/NmOsekGlobalConfig] */

#define NMOSEK_STOP_SEC_VAR_NO_INIT_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  NmOsek_DesiredNmState
**********************************************************************************************************************/
/** 
  \var    NmOsek_DesiredNmState
  \brief  Desired NM state for each channel
*/ 
#define NMOSEK_START_SEC_VAR_NO_INIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Nm_StateType, NMOSEK_VAR_NO_INIT) NmOsek_DesiredNmState[1];
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/NmOsek/NmOsekGlobalConfig/NmOsekChannelConfig, /ActiveEcuC/NmOsek/NmOsekGlobalConfig] */

#define NMOSEK_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  NmOsek_InternalState
**********************************************************************************************************************/
/** 
  \var    NmOsek_InternalState
  \brief  Current NM state for each channel
*/ 
#define NMOSEK_START_SEC_VAR_NO_INIT_16
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(NmOsek_InternalStateType, NMOSEK_VAR_NO_INIT) NmOsek_InternalState[1];
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/NmOsek/NmOsekGlobalConfig/NmOsekChannelConfig, /ActiveEcuC/NmOsek/NmOsekGlobalConfig] */

#define NMOSEK_STOP_SEC_VAR_NO_INIT_16
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  NmOsek_LogicalSuccessor
**********************************************************************************************************************/
/** 
  \var    NmOsek_LogicalSuccessor
  \brief  Logical Successor
*/ 
#define NMOSEK_START_SEC_VAR_NO_INIT_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(NmOsek_LogicalSuccessorType, NMOSEK_VAR_NO_INIT) NmOsek_LogicalSuccessor[1];
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/NmOsek/NmOsekGlobalConfig/NmOsekChannelConfig, /ActiveEcuC/NmOsek/NmOsekGlobalConfig] */

#define NMOSEK_STOP_SEC_VAR_NO_INIT_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  NmOsek_NmState
**********************************************************************************************************************/
/** 
  \var    NmOsek_NmState
  \brief  Current NM state for each channel
*/ 
#define NMOSEK_START_SEC_VAR_NO_INIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Nm_StateType, NMOSEK_VAR_NO_INIT) NmOsek_NmState[1];
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/NmOsek/NmOsekGlobalConfig/NmOsekChannelConfig, /ActiveEcuC/NmOsek/NmOsekGlobalConfig] */

#define NMOSEK_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  NmOsek_RemoteSleepState
**********************************************************************************************************************/
/** 
  \var    NmOsek_RemoteSleepState
  \brief  Current gateway NM state for each channel
*/ 
#define NMOSEK_START_SEC_VAR_NO_INIT_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(NmOsek_RemoteSleepStateType, NMOSEK_VAR_NO_INIT) NmOsek_RemoteSleepState[1];
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/NmOsek/NmOsekGlobalConfig/NmOsekChannelConfig, /ActiveEcuC/NmOsek/NmOsekGlobalConfig] */

#define NMOSEK_STOP_SEC_VAR_NO_INIT_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  NmOsek_RxMessageData
**********************************************************************************************************************/
/** 
  \var    NmOsek_RxMessageData
  \brief  Rx NM message data buffer
*/ 
#define NMOSEK_START_SEC_VAR_NO_INIT_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(NmOsek_RxMessageDataType, NMOSEK_VAR_NO_INIT) NmOsek_RxMessageData[8];
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/NmOsek/NmOsekGlobalConfig/NmOsekChannelConfig, /ActiveEcuC/NmOsek/NmOsekGlobalConfig/NmOsekChannelConfig_DestId] */
  /*     1 */  /* [/ActiveEcuC/NmOsek/NmOsekGlobalConfig/NmOsekChannelConfig, /ActiveEcuC/NmOsek/NmOsekGlobalConfig/NmOsekChannelConfig_OpCode, /ActiveEcuC/NmOsek/NmOsekGlobalConfig/NmOsekChannelConfig_Sleep] */
  /*     2 */  /* [/ActiveEcuC/NmOsek/NmOsekGlobalConfig/NmOsekChannelConfig, /ActiveEcuC/NmOsek/NmOsekGlobalConfig/NmOsekChannelConfig_UserData] */
  /*     3 */  /* [/ActiveEcuC/NmOsek/NmOsekGlobalConfig/NmOsekChannelConfig, /ActiveEcuC/NmOsek/NmOsekGlobalConfig/NmOsekChannelConfig_UserData] */
  /*     4 */  /* [/ActiveEcuC/NmOsek/NmOsekGlobalConfig/NmOsekChannelConfig, /ActiveEcuC/NmOsek/NmOsekGlobalConfig/NmOsekChannelConfig_UserData] */
  /*     5 */  /* [/ActiveEcuC/NmOsek/NmOsekGlobalConfig/NmOsekChannelConfig, /ActiveEcuC/NmOsek/NmOsekGlobalConfig/NmOsekChannelConfig_UserData] */
  /*     6 */  /* [/ActiveEcuC/NmOsek/NmOsekGlobalConfig/NmOsekChannelConfig, /ActiveEcuC/NmOsek/NmOsekGlobalConfig/NmOsekChannelConfig_UserData] */
  /*     7 */  /* [/ActiveEcuC/NmOsek/NmOsekGlobalConfig/NmOsekChannelConfig, /ActiveEcuC/NmOsek/NmOsekGlobalConfig/NmOsekChannelConfig_UserData] */

#define NMOSEK_STOP_SEC_VAR_NO_INIT_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  NmOsek_RxNmMsgSourceAddr
**********************************************************************************************************************/
/** 
  \var    NmOsek_RxNmMsgSourceAddr
  \brief  Source node ID of last received NM message
*/ 
#define NMOSEK_START_SEC_VAR_NO_INIT_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(NmOsek_RxNmMsgSourceAddrType, NMOSEK_VAR_NO_INIT) NmOsek_RxNmMsgSourceAddr[1];
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/NmOsek/NmOsekGlobalConfig/NmOsekChannelConfig, /ActiveEcuC/NmOsek/NmOsekGlobalConfig] */

#define NMOSEK_STOP_SEC_VAR_NO_INIT_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  NmOsek_RxTxCnt
**********************************************************************************************************************/
/** 
  \var    NmOsek_RxTxCnt
  \brief  RX/TX Counter
*/ 
#define NMOSEK_START_SEC_VAR_NO_INIT_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(NmOsek_RxTxCntType, NMOSEK_VAR_NO_INIT) NmOsek_RxTxCnt[1];
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/NmOsek/NmOsekGlobalConfig/NmOsekChannelConfig, /ActiveEcuC/NmOsek/NmOsekGlobalConfig] */

#define NMOSEK_STOP_SEC_VAR_NO_INIT_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  NmOsek_TimeoutTimer
**********************************************************************************************************************/
/** 
  \var    NmOsek_TimeoutTimer
  \brief  Timer for NM Algorithm
*/ 
#define NMOSEK_START_SEC_VAR_NO_INIT_16
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(NmOsek_TimeoutTimerType, NMOSEK_VAR_NO_INIT) NmOsek_TimeoutTimer[1];
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/NmOsek/NmOsekGlobalConfig/NmOsekChannelConfig, /ActiveEcuC/NmOsek/NmOsekGlobalConfig] */

#define NMOSEK_STOP_SEC_VAR_NO_INIT_16
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  NmOsek_TxMessageData
**********************************************************************************************************************/
/** 
  \var    NmOsek_TxMessageData
  \brief  Tx NM message data buffer
*/ 
#define NMOSEK_START_SEC_VAR_NO_INIT_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(NmOsek_TxMessageDataType, NMOSEK_VAR_NO_INIT) NmOsek_TxMessageData[8];
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/NmOsek/NmOsekGlobalConfig/NmOsekChannelConfig, /ActiveEcuC/NmOsek/NmOsekGlobalConfig/NmOsekChannelConfig_DestId] */
  /*     1 */  /* [/ActiveEcuC/NmOsek/NmOsekGlobalConfig/NmOsekChannelConfig, /ActiveEcuC/NmOsek/NmOsekGlobalConfig/NmOsekChannelConfig_OpCode, /ActiveEcuC/NmOsek/NmOsekGlobalConfig/NmOsekChannelConfig_Sleep] */
  /*     2 */  /* [/ActiveEcuC/NmOsek/NmOsekGlobalConfig/NmOsekChannelConfig, /ActiveEcuC/NmOsek/NmOsekGlobalConfig/NmOsekChannelConfig_UserData] */
  /*     3 */  /* [/ActiveEcuC/NmOsek/NmOsekGlobalConfig/NmOsekChannelConfig, /ActiveEcuC/NmOsek/NmOsekGlobalConfig/NmOsekChannelConfig_UserData] */
  /*     4 */  /* [/ActiveEcuC/NmOsek/NmOsekGlobalConfig/NmOsekChannelConfig, /ActiveEcuC/NmOsek/NmOsekGlobalConfig/NmOsekChannelConfig_UserData] */
  /*     5 */  /* [/ActiveEcuC/NmOsek/NmOsekGlobalConfig/NmOsekChannelConfig, /ActiveEcuC/NmOsek/NmOsekGlobalConfig/NmOsekChannelConfig_UserData] */
  /*     6 */  /* [/ActiveEcuC/NmOsek/NmOsekGlobalConfig/NmOsekChannelConfig, /ActiveEcuC/NmOsek/NmOsekGlobalConfig/NmOsekChannelConfig_UserData] */
  /*     7 */  /* [/ActiveEcuC/NmOsek/NmOsekGlobalConfig/NmOsekChannelConfig, /ActiveEcuC/NmOsek/NmOsekGlobalConfig/NmOsekChannelConfig_UserData] */

#define NMOSEK_STOP_SEC_VAR_NO_INIT_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  NmOsek_TxRequest
**********************************************************************************************************************/
/** 
  \var    NmOsek_TxRequest
  \brief  TX request flag
*/ 
#define NMOSEK_START_SEC_VAR_NO_INIT_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(NmOsek_TxRequestType, NMOSEK_VAR_NO_INIT) NmOsek_TxRequest[1];
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/NmOsek/NmOsekGlobalConfig/NmOsekChannelConfig, /ActiveEcuC/NmOsek/NmOsekGlobalConfig] */

#define NMOSEK_STOP_SEC_VAR_NO_INIT_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */





/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 *********************************************************************************************************************/



 
/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/
#define NMOSEK_START_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
/**********************************************************************************************************************
 * NmOsek_RxIndication_0()
 *********************************************************************************************************************/
FUNC(void, NMOSEK_CODE) NmOsek_RxIndication_0(VAR(PduIdType, AUTOMATIC) nmOsekRxPduId,
                                            P2CONST(uint8, AUTOMATIC, NMOSEK_APPL_VAR) canSduPtr,
                                            CONST(Can_IdType, AUTOMATIC) canId)
{
  NmOsek_RxIndication(0u, canSduPtr, canId); /* SBSW_NMOSEK_RXINDICATION_CALL */
  NMOSEK_DUMMY_STATEMENT(nmOsekRxPduId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
}


/**********************************************************************************************************************
 * NmOsek_TxConfirmation_0()
 *********************************************************************************************************************/
FUNC(void, NMOSEK_CODE) NmOsek_TxConfirmation_0(VAR(PduIdType, AUTOMATIC) nmOsekTxPduId)
{
  NmOsek_TxConfirmation(0u);
  NMOSEK_DUMMY_STATEMENT(nmOsekTxPduId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
}
#define NMOSEK_STOP_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */





