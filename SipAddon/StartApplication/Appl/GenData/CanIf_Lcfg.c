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
 *            Module: CanIf
 *           Program: MSR_Vector_SLP4
 *          Customer: Harman International (China) Holdings Co., Ltd.
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: FS32K148UAT0VLQR
 *    License Scope : The usage is restricted to CBD1800257_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: CanIf_Lcfg.c
 *   Generation Time: 2018-11-27 15:30:02
 *           Project: TsiStandard - Version 1
 *          Delivery: CBD1800257_D01
 *      Tool Version: DaVinci Configurator  5.18.37 SP1
 *
 *
 *********************************************************************************************************************/

#define CANIF_LCFG_SOURCE

/* PRQA S 0850 EOF */ /* MD_MSR_19.8 */
/* PRQA S 0857 EOF */ /* MD_CanIf_1.1_NumberOfMacroDefinitions */
/* PRQA S 0779 EOF */ /* MD_CanIf_5.1 */
/* PRQA S 0777 EOF */ /* MD_CanIf_5.1 */
/* PRQA S 1330, 1334 EOF */ /* MD_CanIf_16.4, MD_CanIf_16.4 */

/**********************************************************************************************************************
  \file  Includes
**********************************************************************************************************************/
/** 
  \brief  Required external files.
*/ 

#include "CanIf_Cfg.h"

 /*  CanTp Header Files  */ 
#include "CanTp_Cfg.h"
#include "CanTp_Cbk.h"
 /*  PduR Header Files  */ 
#include "PduR_Cfg.h"
#include "PduR_CanIf.h"
 /*  CanSM Header Files  */ 
#include "CanSM_Cbk.h"

#define CANIF_START_SEC_APPL_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/**********************************************************************************************************************
  \var  Prototypes of callback functions
**********************************************************************************************************************/

/** 
  \brief  Tx confirmation functions.
*/

FUNC(void, CANIF_APPL_CODE) NmOsek_TxConfirmation_0(PduIdType CanTxPduId); /* PRQA S 3408, 3451 */ /* MD_CanIf_8.8_CanIf_Lcfg.c, MD_CanIf_8.8_CanIf_Lcfg.c */


/** 
  \brief  Rx indication functions.
*/

FUNC(void, CANIF_APPL_CODE) NmOsek_RxIndication_0(PduIdType CanRxPduId, P2CONST(uint8, AUTOMATIC, CANIF_APPL_VAR) CanSduPtr, Can_IdType CanId); /* PRQA S 3408, 3451 */ /* MD_CanIf_8.8_CanIf_Lcfg.c, MD_CanIf_8.8_CanIf_Lcfg.c */




#define CANIF_STOP_SEC_APPL_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/**********************************************************************************************************************
  ComStackLib
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
  CanIf_BusOffNotificationFctPtr
**********************************************************************************************************************/
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanIf_BusOffNotificationFctType, CANIF_CONST) CanIf_BusOffNotificationFctPtr = CanSM_ControllerBusOff;
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_CanIfCtrlId2MappedTxBuffersConfig
**********************************************************************************************************************/
/** 
  \var    CanIf_CanIfCtrlId2MappedTxBuffersConfig
  \brief  CAN controller configuration - mapped Tx-buffer(s).
  \details
  Element                          Description
  MappedTxBuffersConfigEndIdx      the end index of the 1:n relation pointing to CanIf_MappedTxBuffersConfig
  MappedTxBuffersConfigStartIdx    the start index of the 1:n relation pointing to CanIf_MappedTxBuffersConfig
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanIf_CanIfCtrlId2MappedTxBuffersConfigType, CANIF_CONST) CanIf_CanIfCtrlId2MappedTxBuffersConfig[1] = {
    /* Index    MappedTxBuffersConfigEndIdx                                                                    MappedTxBuffersConfigStartIdx                                                                          Referable Keys */
  { /*     0 */                         1uL  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_CAN_d43e43a4 */,                           0uL  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_CAN_d43e43a4 */ }   /* [/ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_CAN_d43e43a4] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_CtrlModeIndicationFctPtr
**********************************************************************************************************************/
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanIf_CtrlModeIndicationFctType, CANIF_CONST) CanIf_CtrlModeIndicationFctPtr = CanSM_ControllerModeIndication;
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_MailBoxConfig
**********************************************************************************************************************/
/** 
  \var    CanIf_MailBoxConfig
  \brief  Mailbox table.
  \details
  Element                 Description
  CtrlStatesIdx           the index of the 1:1 relation pointing to CanIf_CtrlStates
  PduIdFirst              "First" PDU mapped to mailbox.
  PduIdLast               "Last" PDU mapped to mailbox.
  TxBufferCfgIdx          the index of the 0:1 relation pointing to CanIf_TxBufferPrioByCanIdByteQueueConfig
  TxBufferHandlingType
  MailBoxType             Type of mailbox: Rx-/Tx- BasicCAN/FullCAN/unused.
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanIf_MailBoxConfigType, CANIF_CONST) CanIf_MailBoxConfig[2] = {
    /* Index    CtrlStatesIdx                                                                    PduIdFirst                           PduIdLast                           TxBufferCfgIdx                                                                              TxBufferHandlingType                     MailBoxType                    Referable Keys */
  { /*     0 */           0uL  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_CAN_d43e43a4 */,         0u  /* Unused, TxPduId 0 */,        0u  /* Unused, TxPduId 9 */,                                    0uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_346f2748 */, CANIF_TXBUFFER_HANDLINGTYPE_PRIOBYCANID, CANIF_TxBasicCANMailbox },  /* [/ActiveEcuC/Can/CanConfigSet/CN_CAN_fe6ecc87_Tx] */
  { /*     1 */           0uL  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_CAN_d43e43a4 */,         1u  /* RxPduId */          ,       10u  /* RxPduId  */         , CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex1 */                                , CANIF_TXBUFFER_HANDLINGTYPE_NONE       , CANIF_RxBasicCANMailbox }   /* [/ActiveEcuC/Can/CanConfigSet/CN_CAN_23287e84_Rx] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_MappedTxBuffersConfig
**********************************************************************************************************************/
/** 
  \var    CanIf_MappedTxBuffersConfig
  \brief  Mapped Tx-buffer(s)
  \details
  Element             Description
  MailBoxConfigIdx    the index of the 1:1 relation pointing to CanIf_MailBoxConfig
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanIf_MappedTxBuffersConfigType, CANIF_CONST) CanIf_MappedTxBuffersConfig[1] = {
    /* Index    MailBoxConfigIdx                                                               Referable Keys */
  { /*     0 */              0uL  /* /ActiveEcuC/Can/CanConfigSet/CN_CAN_fe6ecc87_Tx */ }   /* [/ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_CAN_d43e43a4] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_RxIndicationFctList
**********************************************************************************************************************/
/** 
  \var    CanIf_RxIndicationFctList
  \brief  Rx indication functions table.
  \details
  Element               Description
  RxIndicationFct       Rx indication function.
  RxIndicationLayout    Layout of Rx indication function.
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanIf_RxIndicationFctListType, CANIF_CONST) CanIf_RxIndicationFctList[4] = {
    /* Index    RxIndicationFct                                               RxIndicationLayout                                                            Referable Keys */
  { /*     0 */  { (CanIf_SimpleRxIndicationFctType)NULL_PTR }              , CanIf_SimpleRxIndicationLayout    /* PRQA S 313 */ /* MD_CanIf_11.1 */ },  /* [NULL_PTR] */
  { /*     1 */  { (CanIf_SimpleRxIndicationFctType)CanTp_RxIndication }    , CanIf_AdvancedRxIndicationLayout  /* PRQA S 313 */ /* MD_CanIf_11.1 */ },  /* [CanTp_RxIndication] */
  { /*     2 */  { (CanIf_SimpleRxIndicationFctType)NmOsek_RxIndication_0 } , CanIf_NmOsekRxIndicationLayout    /* PRQA S 313 */ /* MD_CanIf_11.1 */ },  /* [NmOsek_RxIndication_0] */
  { /*     3 */  { (CanIf_SimpleRxIndicationFctType)PduR_CanIfRxIndication }, CanIf_AdvancedRxIndicationLayout  /* PRQA S 313 */ /* MD_CanIf_11.1 */ }   /* [PduR_CanIfRxIndication] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_RxPduConfig
**********************************************************************************************************************/
/** 
  \var    CanIf_RxPduConfig
  \brief  Rx-PDU configuration table.
  \details
  Element                   Description
  RxPduMask                 Rx-PDU: CAN identifier mask.
  UpperPduId                PDU ID defined by upper layer.
  RxPduCanId                Rx-PDU: CAN identifier.
  Dlc                       Data length code.
  RxIndicationFctListIdx    the index of the 1:1 relation pointing to CanIf_RxIndicationFctList
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanIf_RxPduConfigType, CANIF_CONST) CanIf_RxPduConfig[11] = {
    /* Index    RxPduMask                                                                  UpperPduId                                                               RxPduCanId                                                                                 Dlc  RxIndicationFctListIdx                                      Comment                                                                         Referable Keys */
  { /*     0 */ 0x600004FFuL  /* Upper CanId of range: NmOsekRxPdu_NmOsekChannelConfig */, CanIfRxPduHnd_NmOsekRxPdu_NmOsekChannelConfig  /* CanIf internal one */, 0x00000400uL  /* Lower CanId of range: NmOsekRxPdu_NmOsekChannelConfig, 2.0- or FD-PDU */,  8u,                    2uL  /* NmOsek_RxIndication_0 */  },  /* [PDU: NmOsekRxPdu_NmOsekChannelConfig, Lower CanId of range: 0x400] */  /* [CanIfConf_CanIfRxPduCfg_NmOsekRxPdu_NmOsekChannelConfig] */
  { /*     1 */ 0x000007FFuL  /* msg_XCP_Request_MyECU_oCAN_3fb53b34_Rx */               , PduRConf_PduRSrcPdu_PduRSrcPdu_3                                       , 0x00000703uL  /* msg_XCP_Request_MyECU_oCAN_3fb53b34_Rx, 2.0- or FD-PDU */               ,  8u,                    3uL  /* PduR_CanIfRxIndication */ },  /* [PDU: msg_XCP_Request_MyECU_oCAN_3fb53b34_Rx, CanId: 0x703]         */  /* [CanIfConf_CanIfRxPduCfg_msg_XCP_Request_MyECU_oCAN_3fb53b34_Rx] */
  { /*     2 */ 0x000007FFuL  /* msg_diag_RequestGlobal_Tp_oCAN_37844e48_Rx */           , CanTpConf_CanTpRxNPdu_CanTpRxNPdu_e872022a                             , 0x00000614uL  /* msg_diag_RequestGlobal_Tp_oCAN_37844e48_Rx, 2.0- or FD-PDU */           ,  8u,                    1uL  /* CanTp_RxIndication */     },  /* [PDU: msg_diag_RequestGlobal_Tp_oCAN_37844e48_Rx, CanId: 0x614]     */  /* [CanIfConf_CanIfRxPduCfg_msg_diag_RequestGlobal_Tp_oCAN_37844e48_Rx] */
  { /*     3 */ 0x000007FFuL  /* msg_diag_Request_MyECU_Slave3_oCAN_b0f04ace_Rx */       , PduRConf_PduRSrcPdu_PduRSrcPdu                                         , 0x00000611uL  /* msg_diag_Request_MyECU_Slave3_oCAN_b0f04ace_Rx, 2.0- or FD-PDU */       ,  8u,                    0uL  /* NULL_PTR */               },  /* [PDU: msg_diag_Request_MyECU_Slave3_oCAN_b0f04ace_Rx, CanId: 0x611] */  /* [CanIfConf_CanIfRxPduCfg_msg_diag_Request_MyECU_Slave3_oCAN_b0f04ace_Rx] */
  { /*     4 */ 0x000007FFuL  /* msg_diag_Request_MyECU_Tp_oCAN_0b2d11a0_Rx */           , CanTpConf_CanTpRxNPdu_CanTpRxNPdu_29945216                             , 0x00000610uL  /* msg_diag_Request_MyECU_Tp_oCAN_0b2d11a0_Rx, 2.0- or FD-PDU */           ,  8u,                    1uL  /* CanTp_RxIndication */     },  /* [PDU: msg_diag_Request_MyECU_Tp_oCAN_0b2d11a0_Rx, CanId: 0x610]     */  /* [CanIfConf_CanIfRxPduCfg_msg_diag_Request_MyECU_Tp_oCAN_0b2d11a0_Rx] */
  { /*     5 */ 0x000007FFuL  /* msg_StartAppl_Rx_MyECU_oCAN_2369e80d_Rx */              , PduRConf_PduRSrcPdu_PduRSrcPdu_7a86d966                                , 0x00000501uL  /* msg_StartAppl_Rx_MyECU_oCAN_2369e80d_Rx, 2.0- or FD-PDU */              ,  8u,                    3uL  /* PduR_CanIfRxIndication */ },  /* [PDU: msg_StartAppl_Rx_MyECU_oCAN_2369e80d_Rx, CanId: 0x501]        */  /* [CanIfConf_CanIfRxPduCfg_msg_StartAppl_Rx_MyECU_oCAN_2369e80d_Rx] */
  { /*     6 */ 0x000007FFuL  /* GlobalTimeMaster_oCAN_aa79fe59_Rx */                    , PduRConf_PduRSrcPdu_PduRSrcPdu_2                                       , 0x00000380uL  /* GlobalTimeMaster_oCAN_aa79fe59_Rx, 2.0- or FD-PDU */                    ,  8u,                    0uL  /* NULL_PTR */               },  /* [PDU: GlobalTimeMaster_oCAN_aa79fe59_Rx, CanId: 0x380]              */  /* [CanIfConf_CanIfRxPduCfg_GlobalTimeMaster_oCAN_aa79fe59_Rx] */
  { /*     7 */ 0x000007FFuL  /* msg_RxEvent_20_oCAN_8771683b_Rx */                      , PduRConf_PduRSrcPdu_PduRSrcPdu_37e6280b                                , 0x00000310uL  /* msg_RxEvent_20_oCAN_8771683b_Rx, 2.0- or FD-PDU */                      ,  4u,                    3uL  /* PduR_CanIfRxIndication */ },  /* [PDU: msg_RxEvent_20_oCAN_8771683b_Rx, CanId: 0x310]                */  /* [CanIfConf_CanIfRxPduCfg_msg_RxEvent_20_oCAN_8771683b_Rx] */
  { /*     8 */ 0x000007FFuL  /* msg_RxCycle100_0_oCAN_e369bba0_Rx */                    , PduRConf_PduRSrcPdu_PduRSrcPdu_9e00b2d3                                , 0x00000210uL  /* msg_RxCycle100_0_oCAN_e369bba0_Rx, 2.0- or FD-PDU */                    ,  1u,                    3uL  /* PduR_CanIfRxIndication */ },  /* [PDU: msg_RxCycle100_0_oCAN_e369bba0_Rx, CanId: 0x210]              */  /* [CanIfConf_CanIfRxPduCfg_msg_RxCycle100_0_oCAN_e369bba0_Rx] */
  { /*     9 */ 0x000007FFuL  /* msg_RxCycle_E2eProf1C_500_10_oCAN_223145ae_Rx */        , PduRConf_PduRSrcPdu_PduRSrcPdu_01c8980f                                , 0x00000120uL  /* msg_RxCycle_E2eProf1C_500_10_oCAN_223145ae_Rx, 2.0- or FD-PDU */        ,  8u,                    3uL  /* PduR_CanIfRxIndication */ },  /* [PDU: msg_RxCycle_E2eProf1C_500_10_oCAN_223145ae_Rx, CanId: 0x120]  */  /* [CanIfConf_CanIfRxPduCfg_msg_RxCycle_E2eProf1C_500_10_oCAN_223145ae_Rx] */
  { /*    10 */ 0x000007FFuL  /* msg_RxCycle500_20_oCAN_a62cdda0_Rx */                   , PduRConf_PduRSrcPdu_PduRSrcPdu_b1d1dd8a                                , 0x00000110uL  /* msg_RxCycle500_20_oCAN_a62cdda0_Rx, 2.0- or FD-PDU */                   ,  6u,                    3uL  /* PduR_CanIfRxIndication */ }   /* [PDU: msg_RxCycle500_20_oCAN_a62cdda0_Rx, CanId: 0x110]             */  /* [CanIfConf_CanIfRxPduCfg_msg_RxCycle500_20_oCAN_a62cdda0_Rx] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxBufferPrioByCanIdByteQueueConfig
**********************************************************************************************************************/
/** 
  \var    CanIf_TxBufferPrioByCanIdByteQueueConfig
  \brief  Tx-buffer: PRIO_BY_CANID as BYTE_QUEUE
  \details
  Element                                             Description
  TxBufferPrioByCanIdBaseIdx                          the index of the 1:1 relation pointing to CanIf_TxBufferPrioByCanIdBase
  TxBufferPrioByCanIdByteQueueMappedTxPdusEndIdx      the end index of the 1:n relation pointing to CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdus
  TxBufferPrioByCanIdByteQueueMappedTxPdusLength      the number of relations pointing to CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdus
  TxBufferPrioByCanIdByteQueueMappedTxPdusStartIdx    the start index of the 1:n relation pointing to CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdus
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanIf_TxBufferPrioByCanIdByteQueueConfigType, CANIF_CONST) CanIf_TxBufferPrioByCanIdByteQueueConfig[1] = {
    /* Index    TxBufferPrioByCanIdBaseIdx                                                      TxBufferPrioByCanIdByteQueueMappedTxPdusEndIdx                                                      TxBufferPrioByCanIdByteQueueMappedTxPdusLength                                                      TxBufferPrioByCanIdByteQueueMappedTxPdusStartIdx                                                            Referable Keys */
  { /*     0 */                        0uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_346f2748 */,                                           10uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_346f2748 */,                                           10uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_346f2748 */,                                              0uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_346f2748 */ }   /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_346f2748] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdus
**********************************************************************************************************************/
/** 
  \var    CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdus
  \brief  Tx-buffer: PRIO_BY_CANID as BYTE_QUEUE: Mapped Tx-PDUs
  \details
  Element           Description
  TxPduConfigIdx    the index of the 1:1 relation pointing to CanIf_TxPduConfig
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdusType, CANIF_CONST) CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdus[10] = {
    /* Index    TxPduConfigIdx                                                                                              Referable Keys */
  { /*     0 */            0uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/msg_XCP_Response_MyECU_oCAN_7223ed6d_Tx */         },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_346f2748] */
  { /*     1 */            1uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/msg_diag_Uudt_Response_MyECU_oCAN_6917a2df_Tx */   },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_346f2748] */
  { /*     2 */            2uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/msg_diag_Response_MyECU_Slave3_oCAN_df0f7cb5_Tx */ },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_346f2748] */
  { /*     3 */            3uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/msg_diag_Response_MyECU_Tp_oCAN_ee3092c6_Tx */     },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_346f2748] */
  { /*     4 */            4uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/msg_StartAppl_Tx_MyECU_oCAN_b6f80cd2_Tx */         },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_346f2748] */
  { /*     5 */            5uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/CanIfTxPduCfg */                                   },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_346f2748] */
  { /*     6 */            6uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/msg_TxCycle_E2eProf1C_500_30_oCAN_f209e413_Tx */   },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_346f2748] */
  { /*     7 */            7uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/msg_TxCycle1000_10_oCAN_fd90faa0_Tx */             },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_346f2748] */
  { /*     8 */            8uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/msg_TxCycle10_0_oCAN_9c370e88_Tx */                },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_346f2748] */
  { /*     9 */            9uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/msg_TxEvent_10_oCAN_b963731b_Tx */                 }   /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_346f2748] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxConfirmationFctList
**********************************************************************************************************************/
/** 
  \var    CanIf_TxConfirmationFctList
  \brief  Tx confirmation functions table.
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanIf_TxConfirmationFctType, CANIF_CONST) CanIf_TxConfirmationFctList[4] = {
  /* Index     TxConfirmationFctList                      Referable Keys */
  /*     0 */ (CanIf_TxConfirmationFctType)NULL_PTR ,  /* [NULL_PTR] */
  /*     1 */ CanTp_TxConfirmation                  ,  /* [CanTp_TxConfirmation] */
  /*     2 */ NmOsek_TxConfirmation_0               ,  /* [NmOsek_TxConfirmation_0] */
  /*     3 */ PduR_CanIfTxConfirmation                 /* [PduR_CanIfTxConfirmation] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxPduConfig
**********************************************************************************************************************/
/** 
  \var    CanIf_TxPduConfig
  \brief  Tx-PDUs - configuration.
  \details
  Element                     Description
  UpperLayerTxPduId           Upper layer handle ID (8bit / 16bit).
  CanId                       CAN identifier (16bit / 32bit).
  CtrlStatesIdx               the index of the 1:1 relation pointing to CanIf_CtrlStates
  Dlc                         Data length code.
  MailBoxConfigIdx            the index of the 1:1 relation pointing to CanIf_MailBoxConfig
  TxConfirmationFctListIdx    the index of the 1:1 relation pointing to CanIf_TxConfirmationFctList
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanIf_TxPduConfigType, CANIF_CONST) CanIf_TxPduConfig[10] = {
    /* Index    UpperLayerTxPduId                                                                             CanId         CtrlStatesIdx                                                                    Dlc  MailBoxConfigIdx                                                         TxConfirmationFctListIdx                                        Comment                                                            Referable Keys */
  { /*     0 */ PduRConf_PduRDestPdu_PduRDestPdu_3                                                          , 0x00000704uL,           0uL  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_CAN_d43e43a4 */,  8u,              0uL  /* /ActiveEcuC/Can/CanConfigSet/CN_CAN_fe6ecc87_Tx */,                      3uL  /* PduR_CanIfTxConfirmation */ },  /* [PDU: msg_XCP_Response_MyECU_oCAN_7223ed6d_Tx]         */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/msg_XCP_Response_MyECU_oCAN_7223ed6d_Tx] */
  { /*     1 */ PduRConf_PduRDestPdu_msg_diag_Uudt_Response_MyECU_oCAN_e0fa8c3a_Tx                          , 0x00000616uL,           0uL  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_CAN_d43e43a4 */,  8u,              0uL  /* /ActiveEcuC/Can/CanConfigSet/CN_CAN_fe6ecc87_Tx */,                      3uL  /* PduR_CanIfTxConfirmation */ },  /* [PDU: msg_diag_Uudt_Response_MyECU_oCAN_6917a2df_Tx]   */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/msg_diag_Uudt_Response_MyECU_oCAN_6917a2df_Tx] */
  { /*     2 */ PduRConf_PduRDestPdu_PduRDestPdu_001                                                        , 0x00000613uL,           0uL  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_CAN_d43e43a4 */,  8u,              0uL  /* /ActiveEcuC/Can/CanConfigSet/CN_CAN_fe6ecc87_Tx */,                      3uL  /* PduR_CanIfTxConfirmation */ },  /* [PDU: msg_diag_Response_MyECU_Slave3_oCAN_df0f7cb5_Tx] */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/msg_diag_Response_MyECU_Slave3_oCAN_df0f7cb5_Tx] */
  { /*     3 */ CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_29945216                                              , 0x00000612uL,           0uL  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_CAN_d43e43a4 */,  8u,              0uL  /* /ActiveEcuC/Can/CanConfigSet/CN_CAN_fe6ecc87_Tx */,                      1uL  /* CanTp_TxConfirmation */     },  /* [PDU: msg_diag_Response_MyECU_Tp_oCAN_ee3092c6_Tx]     */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/msg_diag_Response_MyECU_Tp_oCAN_ee3092c6_Tx] */
  { /*     4 */ PduRConf_PduRDestPdu_msg_StartAppl_Tx_MyECU_oCAN_c14d78df_Tx                                , 0x00000500uL,           0uL  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_CAN_d43e43a4 */,  8u,              0uL  /* /ActiveEcuC/Can/CanConfigSet/CN_CAN_fe6ecc87_Tx */,                      0uL  /* NULL_PTR */                 },  /* [PDU: msg_StartAppl_Tx_MyECU_oCAN_b6f80cd2_Tx]         */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/msg_StartAppl_Tx_MyECU_oCAN_b6f80cd2_Tx] */
  { /*     5 */ CanIfTxPduHnd_CanIfTxPduCfg                                         /* CanIf internal one */, 0x00000405uL,           0uL  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_CAN_d43e43a4 */,  8u,              0uL  /* /ActiveEcuC/Can/CanConfigSet/CN_CAN_fe6ecc87_Tx */,                      2uL  /* NmOsek_TxConfirmation_0 */  },  /* [PDU: CanIfTxPduCfg]                                   */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CanIfTxPduCfg] */
  { /*     6 */ PduRConf_PduRDestPdu_msg_TxCycle_E2eProf1C_500_30_oCAN_995018f6_Tx                          , 0x00000378uL,           0uL  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_CAN_d43e43a4 */,  8u,              0uL  /* /ActiveEcuC/Can/CanConfigSet/CN_CAN_fe6ecc87_Tx */,                      0uL  /* NULL_PTR */                 },  /* [PDU: msg_TxCycle_E2eProf1C_500_30_oCAN_f209e413_Tx]   */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/msg_TxCycle_E2eProf1C_500_30_oCAN_f209e413_Tx] */
  { /*     7 */ PduRConf_PduRDestPdu_msg_TxCycle1000_10_oCAN_6dd6f284_Tx                                    , 0x00000368uL,           0uL  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_CAN_d43e43a4 */,  2u,              0uL  /* /ActiveEcuC/Can/CanConfigSet/CN_CAN_fe6ecc87_Tx */,                      0uL  /* NULL_PTR */                 },  /* [PDU: msg_TxCycle1000_10_oCAN_fd90faa0_Tx]             */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/msg_TxCycle1000_10_oCAN_fd90faa0_Tx] */
  { /*     8 */ PduRConf_PduRDestPdu_msg_TxCycle10_0_oCAN_2d7b6a87_Tx                                       , 0x00000268uL,           0uL  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_CAN_d43e43a4 */,  7u,              0uL  /* /ActiveEcuC/Can/CanConfigSet/CN_CAN_fe6ecc87_Tx */,                      0uL  /* NULL_PTR */                 },  /* [PDU: msg_TxCycle10_0_oCAN_9c370e88_Tx]                */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/msg_TxCycle10_0_oCAN_9c370e88_Tx] */
  { /*     9 */ PduRConf_PduRDestPdu_msg_TxEvent_10_oCAN_b9443fef_Tx                                        , 0x00000168uL,           0uL  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_CAN_d43e43a4 */,  7u,              0uL  /* /ActiveEcuC/Can/CanConfigSet/CN_CAN_fe6ecc87_Tx */,                      0uL  /* NULL_PTR */                 }   /* [PDU: msg_TxEvent_10_oCAN_b963731b_Tx]                 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/msg_TxEvent_10_oCAN_b963731b_Tx] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxPduQueueIndex
**********************************************************************************************************************/
/** 
  \var    CanIf_TxPduQueueIndex
  \brief  Indirection table: Tx-PDU handle ID to corresponding Tx buffer handle ID. NOTE: Only BasicCAN Tx-PDUs have a valid indirection into the Tx buffer.
  \details
  Element       Description
  TxQueueIdx    the index of the 0:1 relation pointing to CanIf_TxQueue
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(CanIf_TxPduQueueIndexType, CANIF_CONST) CanIf_TxPduQueueIndex[10] = {
    /* Index    TxQueueIdx                                                                                              Comment                                                                                      Referable Keys */
  { /*     0 */        0uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/msg_XCP_Response_MyECU_oCAN_7223ed6d_Tx */         },  /* [msg_XCP_Response_MyECU_oCAN_7223ed6d_Tx, BasicCAN TxPdu with Tx-buffer]         */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/msg_XCP_Response_MyECU_oCAN_7223ed6d_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_CAN_d43e43a4] */
  { /*     1 */        1uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/msg_diag_Uudt_Response_MyECU_oCAN_6917a2df_Tx */   },  /* [msg_diag_Uudt_Response_MyECU_oCAN_6917a2df_Tx, BasicCAN TxPdu with Tx-buffer]   */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/msg_diag_Uudt_Response_MyECU_oCAN_6917a2df_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_CAN_d43e43a4] */
  { /*     2 */        2uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/msg_diag_Response_MyECU_Slave3_oCAN_df0f7cb5_Tx */ },  /* [msg_diag_Response_MyECU_Slave3_oCAN_df0f7cb5_Tx, BasicCAN TxPdu with Tx-buffer] */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/msg_diag_Response_MyECU_Slave3_oCAN_df0f7cb5_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_CAN_d43e43a4] */
  { /*     3 */        3uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/msg_diag_Response_MyECU_Tp_oCAN_ee3092c6_Tx */     },  /* [msg_diag_Response_MyECU_Tp_oCAN_ee3092c6_Tx, BasicCAN TxPdu with Tx-buffer]     */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/msg_diag_Response_MyECU_Tp_oCAN_ee3092c6_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_CAN_d43e43a4] */
  { /*     4 */        4uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/msg_StartAppl_Tx_MyECU_oCAN_b6f80cd2_Tx */         },  /* [msg_StartAppl_Tx_MyECU_oCAN_b6f80cd2_Tx, BasicCAN TxPdu with Tx-buffer]         */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/msg_StartAppl_Tx_MyECU_oCAN_b6f80cd2_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_CAN_d43e43a4] */
  { /*     5 */        5uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/CanIfTxPduCfg */                                   },  /* [CanIfTxPduCfg, BasicCAN TxPdu with Tx-buffer]                                   */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CanIfTxPduCfg, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_CAN_d43e43a4] */
  { /*     6 */        6uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/msg_TxCycle_E2eProf1C_500_30_oCAN_f209e413_Tx */   },  /* [msg_TxCycle_E2eProf1C_500_30_oCAN_f209e413_Tx, BasicCAN TxPdu with Tx-buffer]   */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/msg_TxCycle_E2eProf1C_500_30_oCAN_f209e413_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_CAN_d43e43a4] */
  { /*     7 */        7uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/msg_TxCycle1000_10_oCAN_fd90faa0_Tx */             },  /* [msg_TxCycle1000_10_oCAN_fd90faa0_Tx, BasicCAN TxPdu with Tx-buffer]             */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/msg_TxCycle1000_10_oCAN_fd90faa0_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_CAN_d43e43a4] */
  { /*     8 */        8uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/msg_TxCycle10_0_oCAN_9c370e88_Tx */                },  /* [msg_TxCycle10_0_oCAN_9c370e88_Tx, BasicCAN TxPdu with Tx-buffer]                */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/msg_TxCycle10_0_oCAN_9c370e88_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_CAN_d43e43a4] */
  { /*     9 */        9uL  /* /ActiveEcuC/CanIf/CanIfInitCfg/msg_TxEvent_10_oCAN_b963731b_Tx */                 }   /* [msg_TxEvent_10_oCAN_b963731b_Tx, BasicCAN TxPdu with Tx-buffer]                 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/msg_TxEvent_10_oCAN_b963731b_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_CAN_d43e43a4] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_CtrlStates
**********************************************************************************************************************/
/** 
  \var    CanIf_CtrlStates
  \details
  Element     Description
  CtrlMode    Controller mode.
  PduMode     PDU mode state.
*/ 
#define CANIF_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(CanIf_CtrlStatesUType, CANIF_VAR_NOINIT) CanIf_CtrlStates;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_CAN_d43e43a4] */

#define CANIF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxBufferPrioByCanIdBase
**********************************************************************************************************************/
/** 
  \var    CanIf_TxBufferPrioByCanIdBase
  \brief  Variable declaration - Tx-buffer: PRIO_BY_CANID as byte/bit-queue. Stores at least the QueueCounter.
*/ 
#define CANIF_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(CanIf_TxBufferPrioByCanIdBaseUType, CANIF_VAR_NOINIT) CanIf_TxBufferPrioByCanIdBase;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_346f2748] */

#define CANIF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxQueue
**********************************************************************************************************************/
/** 
  \var    CanIf_TxQueue
  \brief  Variable declaration - Tx byte queue.
*/ 
#define CANIF_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(CanIf_TxQueueUType, CANIF_VAR_NOINIT) CanIf_TxQueue;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/msg_XCP_Response_MyECU_oCAN_7223ed6d_Tx] */
  /*     1 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/msg_diag_Uudt_Response_MyECU_oCAN_6917a2df_Tx] */
  /*     2 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/msg_diag_Response_MyECU_Slave3_oCAN_df0f7cb5_Tx] */
  /*     3 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/msg_diag_Response_MyECU_Tp_oCAN_ee3092c6_Tx] */
  /*     4 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/msg_StartAppl_Tx_MyECU_oCAN_b6f80cd2_Tx] */
  /*     5 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CanIfTxPduCfg] */
  /*     6 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/msg_TxCycle_E2eProf1C_500_30_oCAN_f209e413_Tx] */
  /*     7 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/msg_TxCycle1000_10_oCAN_fd90faa0_Tx] */
  /*     8 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/msg_TxCycle10_0_oCAN_9c370e88_Tx] */
  /*     9 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/msg_TxEvent_10_oCAN_b963731b_Tx] */

#define CANIF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA
**********************************************************************************************************************/



