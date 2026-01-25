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
 *            Module: PduR
 *           Program: MSR_Vector_SLP4
 *          Customer: Harman International (China) Holdings Co., Ltd.
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: FS32K148UAT0VLQR
 *    License Scope : The usage is restricted to CBD1800257_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: PduR_Lcfg.c
 *   Generation Time: 2018-11-27 15:30:02
 *           Project: TsiStandard - Version 1
 *          Delivery: CBD1800257_D01
 *      Tool Version: DaVinci Configurator  5.18.37 SP1
 *
 *
 *********************************************************************************************************************/

#define PDUR_LCFG_SOURCE

/**********************************************************************************************************************
 * MISRA / PCLINT JUSTIFICATION
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "PduR.h"
#include "PduR_Fm.h"
#include "PduR_Sm.h"
#include "PduR_RmIf.h"
#include "PduR_RmTp.h"
#include "PduR_RmTp_TxInst.h"
#include "SchM_PduR.h"
#if(PDUR_DEV_ERROR_REPORT == STD_ON)
# include "Det.h"
#endif

/* Include headers with callbacks */
#include "PduR_CanIf.h"
#include "PduR_CanTp.h"
#include "PduR_Com.h"
#include "PduR_Dcm.h"
#include "PduR_Cdd_Com.h"
#include "PduR_NmOsek.h"


/**********************************************************************************************************************
 * LOCAL CONSTANT MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * LOCAL FUNCTION MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * LOCAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * LOCAL DATA PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
/* Exclusive Area Wrapper functions */
static FUNC(void, PDUR_CODE) PduR_SchM_Enter_PduR_PDUR_EXCLUSIVE_AREA_0(void);
static FUNC(void, PDUR_CODE) PduR_SchM_Exit_PduR_PDUR_EXCLUSIVE_AREA_0(void);
  
/**********************************************************************************************************************
 * LOCAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * GLOBAL DATA
 *********************************************************************************************************************/
/* \trace SPEC-663, SPEC-661 */

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  PduR_ExclusiveAreaRom
**********************************************************************************************************************/
/** 
  \var    PduR_ExclusiveAreaRom
  \brief  PduR Exclusive Area Locks
  \details
  Element    Description
  Lock       Lock function
  Unlock     Unlock function
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(PduR_ExclusiveAreaRomType, PDUR_CONST) PduR_ExclusiveAreaRom[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    Lock                                        Unlock                                           Referable Keys */
  { /*     0 */ PduR_SchM_Enter_PduR_PDUR_EXCLUSIVE_AREA_0, PduR_SchM_Exit_PduR_PDUR_EXCLUSIVE_AREA_0 }   /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRLock_PduRExclusiveArea] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  PduR_IfRoutingStateTable
**********************************************************************************************************************/
/** 
  \var    PduR_IfRoutingStateTable
  \brief  Contains state transition for Communication Interface routings
  \details
  Element                                   Description
  NextState_For_Init_If_Routing_State   
  NextState_For_Wait_For_RxIndication   
  NextState_For_Wait_For_TriggerTransmit
  NextState_For_Wait_For_TxConfirmation 
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(PduR_IfRoutingStateTableType, PDUR_CONST) PduR_IfRoutingStateTable[4] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    NextState_For_Init_If_Routing_State                                                     NextState_For_Wait_For_RxIndication                                                     NextState_For_Wait_For_TriggerTransmit                                                     NextState_For_Wait_For_TxConfirmation                                                    */
  { /*     0 */    PDUR_WAIT_FOR_RXINDICATION_NEXTSTATE_FOR_INIT_IF_ROUTING_STATEOFIFROUTINGSTATETABLE,    PDUR_WAIT_FOR_RXINDICATION_NEXTSTATE_FOR_WAIT_FOR_RXINDICATIONOFIFROUTINGSTATETABLE,                                                                                        0u,                                                                                       0u },
  { /*     1 */ PDUR_WAIT_FOR_TRIGGERTRANSMIT_NEXTSTATE_FOR_INIT_IF_ROUTING_STATEOFIFROUTINGSTATETABLE, PDUR_WAIT_FOR_TRIGGERTRANSMIT_NEXTSTATE_FOR_WAIT_FOR_RXINDICATIONOFIFROUTINGSTATETABLE, PDUR_WAIT_FOR_TRIGGERTRANSMIT_NEXTSTATE_FOR_WAIT_FOR_TRIGGERTRANSMITOFIFROUTINGSTATETABLE,                                                                                       0u },
  { /*     2 */    PDUR_WAIT_FOR_RXINDICATION_NEXTSTATE_FOR_INIT_IF_ROUTING_STATEOFIFROUTINGSTATETABLE, PDUR_WAIT_FOR_TRIGGERTRANSMIT_NEXTSTATE_FOR_WAIT_FOR_RXINDICATIONOFIFROUTINGSTATETABLE,  PDUR_WAIT_FOR_TXCONFIRMATION_NEXTSTATE_FOR_WAIT_FOR_TRIGGERTRANSMITOFIFROUTINGSTATETABLE, PDUR_WAIT_FOR_TRIGGERTRANSMIT_NEXTSTATE_FOR_WAIT_FOR_TXCONFIRMATIONOFIFROUTINGSTATETABLE },
  { /*     3 */    PDUR_WAIT_FOR_RXINDICATION_NEXTSTATE_FOR_INIT_IF_ROUTING_STATEOFIFROUTINGSTATETABLE,  PDUR_WAIT_FOR_TXCONFIRMATION_NEXTSTATE_FOR_WAIT_FOR_RXINDICATIONOFIFROUTINGSTATETABLE,                                                                                        0u,  PDUR_WAIT_FOR_TXCONFIRMATION_NEXTSTATE_FOR_WAIT_FOR_TXCONFIRMATIONOFIFROUTINGSTATETABLE }
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  PduR_MmRom
**********************************************************************************************************************/
/** 
  \var    PduR_MmRom
  \brief  Module manager: Contains all function pointers of the bordering modules.
  \details
  Element                       Description
  MaskedBits                    contains bitcoded the boolean data of PduR_IfCancelTransmitSupportedOfMmRom, PduR_LoIfOfMmRom, PduR_LoTpOfMmRom, PduR_RmGDestRomUsedOfMmRom, PduR_TpCancelTransmitSupportedOfMmRom, PduR_UpIfOfMmRom, PduR_UpTpOfMmRom
  RmGDestRomEndIdx              the end index of the 0:n relation pointing to PduR_RmGDestRom
  RmGDestRomStartIdx            the start index of the 0:n relation pointing to PduR_RmGDestRom
  LoIfCancelTransmitFctPtr      Lower layer cancel transmit function pointers.
  LoTpCancelTransmitFctPtr      Lower layer cancel transmit function pointers.
  UpTpCopyRxDataFctPtr          Transport protocol CopyRxData function pointers
  UpTpCopyTxDataFctPtr          Transport protocol CopyTxData function pointers
  UpIfRxIndicationFctPtr        Upper layer communication interface Rx indication function pointers.
  UpIfTxConfirmationFctPtr      Upper layer communication interface Tx confimation function pointers
  UpTpStartOfReceptionFctPtr    Transport protocol StartOfReception function pointers
  UpTpTpRxIndicationFctPtr      Transport protocol TpRxIndication function pointers
  UpTpTpTxConfirmationFctPtr    Transport protocol TpTxConfimation function pointers
  LoIfTransmitFctPtr            Lower layer If transmit function pointers
  LoTpTransmitFctPtr            Lower layer Tp transmit function pointers
  UpIfTriggerTransmitFctPtr     Upper layer trigger transmit function pointers
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(PduR_MmRomType, PDUR_CONST) PduR_MmRom[6] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    MaskedBits  RmGDestRomEndIdx  RmGDestRomStartIdx  LoIfCancelTransmitFctPtr  LoTpCancelTransmitFctPtr  UpTpCopyRxDataFctPtr  UpTpCopyTxDataFctPtr  UpIfRxIndicationFctPtr  UpIfTxConfirmationFctPtr  UpTpStartOfReceptionFctPtr  UpTpTpRxIndicationFctPtr  UpTpTpTxConfirmationFctPtr  LoIfTransmitFctPtr  LoTpTransmitFctPtr  UpIfTriggerTransmitFctPtr        Comment                          Referable Keys */
  { /*     0 */      0x68u,               8u,                 0u, CanIf_CancelTransmit    , NULL_PTR                , NULL_PTR            , NULL_PTR            , NULL_PTR              , NULL_PTR                , NULL_PTR                  , NULL_PTR                , NULL_PTR                  , CanIf_Transmit    , NULL_PTR          , NULL_PTR                  },  /* [BswModule: CanIf]   */  /* [/ActiveEcuC/PduR/CanIf, /ActiveEcuC/PduR] */
  { /*     1 */      0x1Cu,               9u,                 8u, NULL_PTR                , CanTp_CancelTransmit    , NULL_PTR            , NULL_PTR            , NULL_PTR              , NULL_PTR                , NULL_PTR                  , NULL_PTR                , NULL_PTR                  , NULL_PTR          , CanTp_Transmit    , NULL_PTR                  },  /* [BswModule: CanTp]   */  /* [/ActiveEcuC/PduR/CanTp, /ActiveEcuC/PduR] */
  { /*     2 */      0x0Au,              12u,                 9u, NULL_PTR                , NULL_PTR                , NULL_PTR            , NULL_PTR            , Cdd_Com_RxIndication  , Cdd_Com_TxConfirmation  , NULL_PTR                  , NULL_PTR                , NULL_PTR                  , NULL_PTR          , NULL_PTR          , NULL_PTR                  },  /* [BswModule: Cdd_Com] */  /* [/ActiveEcuC/PduR/Cdd_Com, /ActiveEcuC/PduR] */
  { /*     3 */      0x0Au,              17u,                12u, NULL_PTR                , NULL_PTR                , NULL_PTR            , NULL_PTR            , Com_RxIndication      , NULL_PTR                , NULL_PTR                  , NULL_PTR                , NULL_PTR                  , NULL_PTR          , NULL_PTR          , Com_TriggerTransmit       },  /* [BswModule: Com]     */  /* [/ActiveEcuC/PduR/Com, /ActiveEcuC/PduR] */
  { /*     4 */      0x0Bu,              19u,                17u, NULL_PTR                , NULL_PTR                , Dcm_CopyRxData      , Dcm_CopyTxData      , NULL_PTR              , Dcm_TxConfirmation      , Dcm_StartOfReception      , Dcm_TpRxIndication      , Dcm_TpTxConfirmation      , NULL_PTR          , NULL_PTR          , NULL_PTR                  },  /* [BswModule: Dcm]     */  /* [/ActiveEcuC/PduR/Dcm, /ActiveEcuC/PduR] */
  { /*     5 */      0x28u,              20u,                19u, NULL_PTR                , NULL_PTR                , NULL_PTR            , NULL_PTR            , NULL_PTR              , NULL_PTR                , NULL_PTR                  , NULL_PTR                , NULL_PTR                  , NmOsek_Transmit   , NULL_PTR          , NULL_PTR                  }   /* [BswModule: NmOsek]  */  /* [/ActiveEcuC/PduR/NmOsek, /ActiveEcuC/PduR] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  PduR_RmDestRom
**********************************************************************************************************************/
/** 
  \var    PduR_RmDestRom
  \brief  PduR RoutiongPathManager destPdu Table
  \details
  Element          Description
  RmGDestRomIdx    the index of the 1:1 relation pointing to PduR_RmGDestRom
  RmSrcRomIdx      the index of the 1:1 relation pointing to PduR_RmSrcRom
  RoutingType      Type of the Routing (API Forwarding, Gateway).
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(PduR_RmDestRomType, PDUR_CONST) PduR_RmDestRom[20] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    RmGDestRomIdx  RmSrcRomIdx  RoutingType                                                 Comment                                                                              Referable Keys */
  { /*     0 */           11u,          7u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: PduRDestPdu]                                               */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_diag_Request_MyECU_Slave3_oCAN_87f08505_Rx/PduRSrcPdu, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_diag_Request_MyECU_Slave3_oCAN_87f08505_Rx/PduRDestPdu] */
  { /*     1 */           14u,          3u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: msg_RxCycle_E2eProf1C_500_10_oCAN_23e9789c_Rx_01c8980f_Rx] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_RxCycle_E2eProf1C_500_10_oCAN_23e9789c_Rx/PduRSrcPdu_01c8980f, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_RxCycle_E2eProf1C_500_10_oCAN_23e9789c_Rx/msg_RxCycle_E2eProf1C_500_10_oCAN_23e9789c_Rx_01c8980f_Rx] */
  { /*     2 */            6u,         17u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: PduRDestPdu_001]                                           */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_diag_Response_MyECU_Slave3_oCAN_659398e3_Tx/PduRSrcPdu_1, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_diag_Response_MyECU_Slave3_oCAN_659398e3_Tx/PduRDestPdu_001] */
  { /*     3 */            9u,          0u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: PduRDestPdu_2]                                             */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/GlobalTimeMaster_oCAN_48f281bc_Rx/PduRSrcPdu_2, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/GlobalTimeMaster_oCAN_48f281bc_Rx/PduRDestPdu_2] */
  { /*     4 */            2u,         12u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: msg_TxCycle10_0_oCAN_2d7b6a87_Tx]                          */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_TxCycle10_0_oCAN_85bf3e37_Tx/PduRSrcPdu_2e41d513, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_TxCycle10_0_oCAN_85bf3e37_Tx/msg_TxCycle10_0_oCAN_2d7b6a87_Tx] */
  { /*     5 */           10u,          6u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: PduRDestPdu_1]                                             */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_XCP_Request_MyECU_oCAN_24ce420e_Rx/PduRSrcPdu_3, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_XCP_Request_MyECU_oCAN_24ce420e_Rx/PduRDestPdu_1] */
  { /*     6 */            4u,         15u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: msg_TxEvent_10_oCAN_b9443fef_Tx]                           */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_TxEvent_10_oCAN_b2cd4fc2_Tx/PduRSrcPdu_36788591, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_TxEvent_10_oCAN_b2cd4fc2_Tx/msg_TxEvent_10_oCAN_b9443fef_Tx] */
  { /*     7 */           15u,          4u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: msg_RxEvent_20_oCAN_13517c6b_Rx_37e6280b_Rx]               */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_RxEvent_20_oCAN_13517c6b_Rx/PduRSrcPdu_37e6280b, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_RxEvent_20_oCAN_13517c6b_Rx/msg_RxEvent_20_oCAN_13517c6b_Rx_37e6280b_Rx] */
  { /*     8 */            5u,         16u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: PduRDestPdu_3]                                             */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_XCP_Response_MyECU_oCAN_5d942f8b_Tx/PduRSrcPdu_4, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_XCP_Response_MyECU_oCAN_5d942f8b_Tx/PduRDestPdu_3] */
  { /*     9 */           19u,         10u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: PduRDestPdu_4]                                             */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath/PduRSrcPdu_5, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath/PduRDestPdu_4] */
  { /*    10 */            1u,         13u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: msg_TxCycle1000_10_oCAN_6dd6f284_Tx]                       */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_TxCycle1000_10_oCAN_d74aed68_Tx/PduRSrcPdu_704563f1, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_TxCycle1000_10_oCAN_d74aed68_Tx/msg_TxCycle1000_10_oCAN_6dd6f284_Tx] */
  { /*    11 */           16u,          5u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: msg_StartAppl_Rx_MyECU_oCAN_fe93a56e_Rx_7a86d966_Rx]       */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_StartAppl_Rx_MyECU_oCAN_fe93a56e_Rx/PduRSrcPdu_7a86d966, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_StartAppl_Rx_MyECU_oCAN_fe93a56e_Rx/msg_StartAppl_Rx_MyECU_oCAN_fe93a56e_Rx_7a86d966_Rx] */
  { /*    12 */           12u,          1u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: msg_RxCycle100_0_oCAN_c71398f9_Rx_9e00b2d3_Rx]             */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_RxCycle100_0_oCAN_c71398f9_Rx/PduRSrcPdu_9e00b2d3, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_RxCycle100_0_oCAN_c71398f9_Rx/msg_RxCycle100_0_oCAN_c71398f9_Rx_9e00b2d3_Rx] */
  { /*    13 */           18u,          9u, PDUR_TP_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: msg_diag_Request_MyECU_oCAN_ca029ee7_Rx_9fd2cbe7_Rx]       */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_diag_Request_MyECU_oCAN_ca029ee7_Rx/PduRSrcPdu_9fd2cbe7, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_diag_Request_MyECU_oCAN_ca029ee7_Rx/msg_diag_Request_MyECU_oCAN_ca029ee7_Rx_9fd2cbe7_Rx] */
  { /*    14 */           13u,          2u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: msg_RxCycle500_20_oCAN_266969e8_Rx_b1d1dd8a_Rx]            */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_RxCycle500_20_oCAN_266969e8_Rx/PduRSrcPdu_b1d1dd8a, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_RxCycle500_20_oCAN_266969e8_Rx/msg_RxCycle500_20_oCAN_266969e8_Rx_b1d1dd8a_Rx] */
  { /*    15 */            3u,         14u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: msg_TxCycle_E2eProf1C_500_30_oCAN_995018f6_Tx]             */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_TxCycle_E2eProf1C_500_30_oCAN_eeefc687_Tx/PduRSrcPdu_c3d2922e, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_TxCycle_E2eProf1C_500_30_oCAN_eeefc687_Tx/msg_TxCycle_E2eProf1C_500_30_oCAN_995018f6_Tx] */
  { /*    16 */           17u,          8u, PDUR_TP_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: msg_diag_RequestGlobal_oCAN_e06c7e2d_Rx_c958f031_Rx]       */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_diag_RequestGlobal_oCAN_e06c7e2d_Rx/PduRSrcPdu_c958f031, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_diag_RequestGlobal_oCAN_e06c7e2d_Rx/msg_diag_RequestGlobal_oCAN_e06c7e2d_Rx_c958f031_Rx] */
  { /*    17 */            0u,         11u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: msg_StartAppl_Tx_MyECU_oCAN_c14d78df_Tx]                   */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_StartAppl_Tx_MyECU_oCAN_ad461e3f_Tx/PduRSrcPdu_cd5f4416, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_StartAppl_Tx_MyECU_oCAN_ad461e3f_Tx/msg_StartAppl_Tx_MyECU_oCAN_c14d78df_Tx] */
  { /*    18 */            7u,         19u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: msg_diag_Uudt_Response_MyECU_oCAN_e0fa8c3a_Tx]             */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_diag_Uudt_Response_MyECU_oCAN_f130d337_Tx/PduRSrcPdu_ec58e685, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_diag_Uudt_Response_MyECU_oCAN_f130d337_Tx/msg_diag_Uudt_Response_MyECU_oCAN_e0fa8c3a_Tx] */
  { /*    19 */            8u,         18u, PDUR_TP_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM }   /* [PduRDestPdu: msg_diag_Response_MyECU_oCAN_84acb98b_Tx]                  */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_diag_Response_MyECU_oCAN_06426912_Tx/PduRSrcPdu_f3446321, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_diag_Response_MyECU_oCAN_06426912_Tx/msg_diag_Response_MyECU_oCAN_84acb98b_Tx] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  PduR_RmGDestRom
**********************************************************************************************************************/
/** 
  \var    PduR_RmGDestRom
  \brief  PduR RoutiongPathManager global destPdu Table
  \details
  Element                  Description
  DestHnd                  handle to be used as parameter for the StartOfReception, CopyRxData, Transmit or RxIndication function call.
  Direction                Direction of this Pdu: Rx or Tx
  MmRomIdx                 the index of the 1:1 relation pointing to PduR_MmRom
  PduRDestPduProcessing    Is Processing Type of destination PDU.
  RmDestRomIdx             the index of the 0:1 relation pointing to PduR_RmDestRom
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(PduR_RmGDestRomType, PDUR_CONST) PduR_RmGDestRom[20] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    DestHnd                                                                            Direction                      MmRomIdx  PduRDestPduProcessing                             RmDestRomIdx        Comment                                                                            Referable Keys */
  { /*     0 */                   CanIfConf_CanIfTxPduCfg_msg_StartAppl_Tx_MyECU_oCAN_b6f80cd2_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,       0u, PDUR_IMMEDIATE_PDURDESTPDUPROCESSINGOFRMGDESTROM,          17u },  /* [Globale PduRDestPdu: msg_StartAppl_Tx_MyECU_oCAN_c14d78df_Tx]         */  /* [/ActiveEcuC/EcuC/EcucPduCollection/msg_StartAppl_Tx_MyECU_oCAN_c14d78df_Tx, /ActiveEcuC/PduR/CanIf] */
  { /*     1 */                       CanIfConf_CanIfTxPduCfg_msg_TxCycle1000_10_oCAN_fd90faa0_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,       0u, PDUR_IMMEDIATE_PDURDESTPDUPROCESSINGOFRMGDESTROM,          10u },  /* [Globale PduRDestPdu: msg_TxCycle1000_10_oCAN_6dd6f284_Tx]             */  /* [/ActiveEcuC/EcuC/EcucPduCollection/msg_TxCycle1000_10_oCAN_6dd6f284_Tx, /ActiveEcuC/PduR/CanIf] */
  { /*     2 */                          CanIfConf_CanIfTxPduCfg_msg_TxCycle10_0_oCAN_9c370e88_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,       0u, PDUR_IMMEDIATE_PDURDESTPDUPROCESSINGOFRMGDESTROM,           4u },  /* [Globale PduRDestPdu: msg_TxCycle10_0_oCAN_2d7b6a87_Tx]                */  /* [/ActiveEcuC/EcuC/EcucPduCollection/msg_TxCycle10_0_oCAN_2d7b6a87_Tx, /ActiveEcuC/PduR/CanIf] */
  { /*     3 */             CanIfConf_CanIfTxPduCfg_msg_TxCycle_E2eProf1C_500_30_oCAN_f209e413_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,       0u, PDUR_IMMEDIATE_PDURDESTPDUPROCESSINGOFRMGDESTROM,          15u },  /* [Globale PduRDestPdu: msg_TxCycle_E2eProf1C_500_30_oCAN_995018f6_Tx]   */  /* [/ActiveEcuC/EcuC/EcucPduCollection/msg_TxCycle_E2eProf1C_500_30_oCAN_995018f6_Tx, /ActiveEcuC/PduR/CanIf] */
  { /*     4 */                           CanIfConf_CanIfTxPduCfg_msg_TxEvent_10_oCAN_b963731b_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,       0u, PDUR_IMMEDIATE_PDURDESTPDUPROCESSINGOFRMGDESTROM,           6u },  /* [Globale PduRDestPdu: msg_TxEvent_10_oCAN_b9443fef_Tx]                 */  /* [/ActiveEcuC/EcuC/EcucPduCollection/msg_TxEvent_10_oCAN_b9443fef_Tx, /ActiveEcuC/PduR/CanIf] */
  { /*     5 */                   CanIfConf_CanIfTxPduCfg_msg_XCP_Response_MyECU_oCAN_7223ed6d_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,       0u, PDUR_IMMEDIATE_PDURDESTPDUPROCESSINGOFRMGDESTROM,           8u },  /* [Globale PduRDestPdu: msg_XCP_Response_MyECU_oCAN_5d942f8b_Tx]         */  /* [/ActiveEcuC/EcuC/EcucPduCollection/msg_XCP_Response_MyECU_oCAN_5d942f8b_Tx, /ActiveEcuC/PduR/CanIf] */
  { /*     6 */           CanIfConf_CanIfTxPduCfg_msg_diag_Response_MyECU_Slave3_oCAN_df0f7cb5_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,       0u, PDUR_IMMEDIATE_PDURDESTPDUPROCESSINGOFRMGDESTROM,           2u },  /* [Globale PduRDestPdu: msg_diag_Response_MyECU_Slave3_oCAN_659398e3_Tx] */  /* [/ActiveEcuC/EcuC/EcucPduCollection/msg_diag_Response_MyECU_Slave3_oCAN_659398e3_Tx, /ActiveEcuC/PduR/CanIf] */
  { /*     7 */             CanIfConf_CanIfTxPduCfg_msg_diag_Uudt_Response_MyECU_oCAN_6917a2df_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,       0u, PDUR_IMMEDIATE_PDURDESTPDUPROCESSINGOFRMGDESTROM,          18u },  /* [Globale PduRDestPdu: msg_diag_Uudt_Response_MyECU_oCAN_e0fa8c3a_Tx]   */  /* [/ActiveEcuC/EcuC/EcucPduCollection/msg_diag_Uudt_Response_MyECU_oCAN_e0fa8c3a_Tx, /ActiveEcuC/PduR/CanIf] */
  { /*     8 */                                        CanTpConf_CanTpTxNSdu_CanTpTxNSdu_dab96b77, PDUR_TX_DIRECTIONOFRMGDESTROM,       1u, PDUR_IMMEDIATE_PDURDESTPDUPROCESSINGOFRMGDESTROM,          19u },  /* [Globale PduRDestPdu: msg_diag_Response_MyECU_oCAN_84acb98b_Tx]        */  /* [/ActiveEcuC/EcuC/EcucPduCollection/msg_diag_Response_MyECU_oCAN_84acb98b_Tx, /ActiveEcuC/PduR/CanTp] */
  { /*     9 */              Cdd_ComConf_CddPduRUpperLayerRxPdu_GlobalTimeMaster_oCAN_48f281bc_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,       2u, PDUR_IMMEDIATE_PDURDESTPDUPROCESSINGOFRMGDESTROM,           3u },  /* [Globale PduRDestPdu: GlobalTimeMaster_oCAN_48f281bc_Rx]               */  /* [/ActiveEcuC/EcuC/EcucPduCollection/GlobalTimeMaster_oCAN_48f281bc_Rx, /ActiveEcuC/PduR/Cdd_Com] */
  { /*    10 */         Cdd_ComConf_CddPduRUpperLayerRxPdu_msg_XCP_Request_MyECU_oCAN_24ce420e_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,       2u, PDUR_IMMEDIATE_PDURDESTPDUPROCESSINGOFRMGDESTROM,           5u },  /* [Globale PduRDestPdu: msg_XCP_Request_MyECU_oCAN_24ce420e_Rx]          */  /* [/ActiveEcuC/EcuC/EcucPduCollection/msg_XCP_Request_MyECU_oCAN_24ce420e_Rx, /ActiveEcuC/PduR/Cdd_Com] */
  { /*    11 */ Cdd_ComConf_CddPduRUpperLayerRxPdu_msg_diag_Request_MyECU_Slave3_oCAN_87f08505_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,       2u, PDUR_IMMEDIATE_PDURDESTPDUPROCESSINGOFRMGDESTROM,           0u },  /* [Globale PduRDestPdu: msg_diag_Request_MyECU_Slave3_oCAN_87f08505_Rx]  */  /* [/ActiveEcuC/EcuC/EcucPduCollection/msg_diag_Request_MyECU_Slave3_oCAN_87f08505_Rx, /ActiveEcuC/PduR/Cdd_Com] */
  { /*    12 */                                 ComConf_ComIPdu_msg_RxCycle100_0_oCAN_1e247d16_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,       3u, PDUR_IMMEDIATE_PDURDESTPDUPROCESSINGOFRMGDESTROM,          12u },  /* [Globale PduRDestPdu: msg_RxCycle100_0_oCAN_1e247d16_Rx]               */  /* [/ActiveEcuC/EcuC/EcucPduCollection/msg_RxCycle100_0_oCAN_1e247d16_Rx, /ActiveEcuC/PduR/Com] */
  { /*    13 */                                ComConf_ComIPdu_msg_RxCycle500_20_oCAN_a691adb3_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,       3u, PDUR_IMMEDIATE_PDURDESTPDUPROCESSINGOFRMGDESTROM,          14u },  /* [Globale PduRDestPdu: msg_RxCycle500_20_oCAN_a691adb3_Rx]              */  /* [/ActiveEcuC/EcuC/EcucPduCollection/msg_RxCycle500_20_oCAN_a691adb3_Rx, /ActiveEcuC/PduR/Com] */
  { /*    14 */                     ComConf_ComIPdu_msg_RxCycle_E2eProf1C_500_10_oCAN_e8110737_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,       3u, PDUR_IMMEDIATE_PDURDESTPDUPROCESSINGOFRMGDESTROM,           1u },  /* [Globale PduRDestPdu: msg_RxCycle_E2eProf1C_500_10_oCAN_e8110737_Rx]   */  /* [/ActiveEcuC/EcuC/EcucPduCollection/msg_RxCycle_E2eProf1C_500_10_oCAN_e8110737_Rx, /ActiveEcuC/PduR/Com] */
  { /*    15 */                                   ComConf_ComIPdu_msg_RxEvent_20_oCAN_a1df81ad_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,       3u, PDUR_IMMEDIATE_PDURDESTPDUPROCESSINGOFRMGDESTROM,           7u },  /* [Globale PduRDestPdu: msg_RxEvent_20_oCAN_a1df81ad_Rx]                 */  /* [/ActiveEcuC/EcuC/EcucPduCollection/msg_RxEvent_20_oCAN_a1df81ad_Rx, /ActiveEcuC/PduR/Com] */
  { /*    16 */                           ComConf_ComIPdu_msg_StartAppl_Rx_MyECU_oCAN_0da3c1e2_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,       3u, PDUR_IMMEDIATE_PDURDESTPDUPROCESSINGOFRMGDESTROM,          11u },  /* [Globale PduRDestPdu: msg_StartAppl_Rx_MyECU_oCAN_0da3c1e2_Rx]         */  /* [/ActiveEcuC/EcuC/EcucPduCollection/msg_StartAppl_Rx_MyECU_oCAN_0da3c1e2_Rx, /ActiveEcuC/PduR/Com] */
  { /*    17 */         DcmConf_DcmDslProtocolRx_msg_diag_RequestGlobal_oCAN_2eba11fb_Rx_1026d879, PDUR_RX_DIRECTIONOFRMGDESTROM,       4u, PDUR_IMMEDIATE_PDURDESTPDUPROCESSINGOFRMGDESTROM,          16u },  /* [Globale PduRDestPdu: msg_diag_RequestGlobal_oCAN_2eba11fb_Rx]         */  /* [/ActiveEcuC/EcuC/EcucPduCollection/msg_diag_RequestGlobal_oCAN_2eba11fb_Rx, /ActiveEcuC/PduR/Dcm] */
  { /*    18 */         DcmConf_DcmDslProtocolRx_msg_diag_Request_MyECU_oCAN_cd2e72ff_Rx_db217017, PDUR_RX_DIRECTIONOFRMGDESTROM,       4u, PDUR_IMMEDIATE_PDURDESTPDUPROCESSINGOFRMGDESTROM,          13u },  /* [Globale PduRDestPdu: msg_diag_Request_MyECU_oCAN_cd2e72ff_Rx]         */  /* [/ActiveEcuC/EcuC/EcucPduCollection/msg_diag_Request_MyECU_oCAN_cd2e72ff_Rx, /ActiveEcuC/PduR/Dcm] */
  { /*    19 */                                NmOsekConf_NmOsekUserDataTxPdu_NmOsekUserDataTxPdu, PDUR_TX_DIRECTIONOFRMGDESTROM,       5u, PDUR_IMMEDIATE_PDURDESTPDUPROCESSINGOFRMGDESTROM,           9u }   /* [Globale PduRDestPdu: Pdu_NmOsekUserDataTxPdu]                         */  /* [/ActiveEcuC/EcuC/EcucPduCollection/Pdu_NmOsekUserDataTxPdu, /ActiveEcuC/PduR/NmOsek] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  PduR_RmSrcRom
**********************************************************************************************************************/
/** 
  \var    PduR_RmSrcRom
  \brief  PduR RoutiongManager SrcPdu Table
  \details
  Element              Description
  MaskedBits           contains bitcoded the boolean data of PduR_TriggerTransmitSupportedOfRmSrcRom, PduR_TxConfirmationSupportedOfRmSrcRom
  MmRomIdx             the index of the 1:1 relation pointing to PduR_MmRom
  RmDestRomLength      the number of relations pointing to PduR_RmDestRom
  RmDestRomStartIdx    the start index of the 1:n relation pointing to PduR_RmDestRom
  SrcHnd               handle to be used as parameter for the TxConfirmation or TriggerTransmit function call.
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(PduR_RmSrcRomType, PDUR_CONST) PduR_RmSrcRom[20] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    MaskedBits  MmRomIdx  RmDestRomLength  RmDestRomStartIdx  SrcHnd                                                                                    Comment                                       Referable Keys */
  { /*     0 */      0x00u,       0u,              1u,                3u,                                                           PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_2]        */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/GlobalTimeMaster_oCAN_48f281bc_Rx/PduRSrcPdu_2] */
  { /*     1 */      0x00u,       0u,              1u,               12u,                                                           PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_9e00b2d3] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_RxCycle100_0_oCAN_c71398f9_Rx/PduRSrcPdu_9e00b2d3] */
  { /*     2 */      0x00u,       0u,              1u,               14u,                                                           PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_b1d1dd8a] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_RxCycle500_20_oCAN_266969e8_Rx/PduRSrcPdu_b1d1dd8a] */
  { /*     3 */      0x00u,       0u,              1u,                1u,                                                           PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_01c8980f] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_RxCycle_E2eProf1C_500_10_oCAN_23e9789c_Rx/PduRSrcPdu_01c8980f] */
  { /*     4 */      0x00u,       0u,              1u,                7u,                                                           PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_37e6280b] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_RxEvent_20_oCAN_13517c6b_Rx/PduRSrcPdu_37e6280b] */
  { /*     5 */      0x00u,       0u,              1u,               11u,                                                           PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_7a86d966] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_StartAppl_Rx_MyECU_oCAN_fe93a56e_Rx/PduRSrcPdu_7a86d966] */
  { /*     6 */      0x00u,       0u,              1u,                5u,                                                           PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_3]        */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_XCP_Request_MyECU_oCAN_24ce420e_Rx/PduRSrcPdu_3] */
  { /*     7 */      0x00u,       0u,              1u,                0u,                                                           PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu]          */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_diag_Request_MyECU_Slave3_oCAN_87f08505_Rx/PduRSrcPdu] */
  { /*     8 */      0x00u,       1u,              1u,               16u,                                                           PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_c958f031] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_diag_RequestGlobal_oCAN_e06c7e2d_Rx/PduRSrcPdu_c958f031] */
  { /*     9 */      0x00u,       1u,              1u,               13u,                                                           PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_9fd2cbe7] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_diag_Request_MyECU_oCAN_ca029ee7_Rx/PduRSrcPdu_9fd2cbe7] */
  { /*    10 */      0x02u,       3u,              1u,                9u,                                            ComConf_ComIPdu_ComIPdu_NmOsek_UserData },  /* [PduRSrcPdu: PduRSrcPdu_5]        */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath/PduRSrcPdu_5] */
  { /*    11 */      0x00u,       3u,              1u,               17u,                                                           PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_cd5f4416] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_StartAppl_Tx_MyECU_oCAN_ad461e3f_Tx/PduRSrcPdu_cd5f4416] */
  { /*    12 */      0x00u,       3u,              1u,                4u,                                                           PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_2e41d513] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_TxCycle10_0_oCAN_85bf3e37_Tx/PduRSrcPdu_2e41d513] */
  { /*    13 */      0x00u,       3u,              1u,               10u,                                                           PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_704563f1] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_TxCycle1000_10_oCAN_d74aed68_Tx/PduRSrcPdu_704563f1] */
  { /*    14 */      0x00u,       3u,              1u,               15u,                                                           PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_c3d2922e] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_TxCycle_E2eProf1C_500_30_oCAN_eeefc687_Tx/PduRSrcPdu_c3d2922e] */
  { /*    15 */      0x00u,       3u,              1u,                6u,                                                           PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_36788591] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_TxEvent_10_oCAN_b2cd4fc2_Tx/PduRSrcPdu_36788591] */
  { /*    16 */      0x01u,       2u,              1u,                8u,         Cdd_ComConf_CddPduRUpperLayerTxPdu_msg_XCP_Response_MyECU_oCAN_5d942f8b_Tx },  /* [PduRSrcPdu: PduRSrcPdu_4]        */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_XCP_Response_MyECU_oCAN_5d942f8b_Tx/PduRSrcPdu_4] */
  { /*    17 */      0x01u,       2u,              1u,                2u, Cdd_ComConf_CddPduRUpperLayerTxPdu_msg_diag_Response_MyECU_Slave3_oCAN_659398e3_Tx },  /* [PduRSrcPdu: PduRSrcPdu_1]        */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_diag_Response_MyECU_Slave3_oCAN_659398e3_Tx/PduRSrcPdu_1] */
  { /*    18 */      0x00u,       4u,              1u,               19u,         DcmConf_DcmDslProtocolTx_msg_diag_Response_MyECU_oCAN_06426912_Tx_5d336398 },  /* [PduRSrcPdu: PduRSrcPdu_f3446321] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_diag_Response_MyECU_oCAN_06426912_Tx/PduRSrcPdu_f3446321] */
  { /*    19 */      0x01u,       4u,              1u,               18u,                          DcmConf_DcmDslPeriodicConnection_DcmDslPeriodicConnection }   /* [PduRSrcPdu: PduRSrcPdu_ec58e685] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_diag_Uudt_Response_MyECU_oCAN_f130d337_Tx/PduRSrcPdu_ec58e685] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  PduR_RmTransmitFctPtr
**********************************************************************************************************************/
/** 
  \var    PduR_RmTransmitFctPtr
  \brief  Internal routing manager Transmit functions.
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(PduR_RmTransmitFctPtrType, PDUR_CONST) PduR_RmTransmitFctPtr[2] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     RmTransmitFctPtr                    Referable Keys */
  /*     0 */ PduR_RmIf_RxIndication_MultiIf ,  /* [PduR_RmIf_RxIndication_MultiIf] */
  /*     1 */ PduR_RmTp_Transmit_MultiDest      /* [PduR_RmTp_Transmit_MultiDest] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  PduR_Tx2Lo
**********************************************************************************************************************/
/** 
  \var    PduR_Tx2Lo
  \brief  Contains all informations to route a Pdu from a upper layer to a lower layer module, or to cancel a transmission
  \details
  Element                Description
  MaskedBits             contains bitcoded the boolean data of PduR_CancelTransmitUsedOfTx2Lo, PduR_RmSrcRomUsedOfTx2Lo
  RmTransmitFctPtrIdx    the index of the 1:1 relation pointing to PduR_RmTransmitFctPtr
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(PduR_Tx2LoType, PDUR_CONST) PduR_Tx2Lo[10] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    MaskedBits  RmTransmitFctPtrIdx        Referable Keys */
  { /*     0 */      0x01u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath/PduRSrcPdu_5] */
  { /*     1 */      0x01u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_StartAppl_Tx_MyECU_oCAN_ad461e3f_Tx/PduRSrcPdu_cd5f4416] */
  { /*     2 */      0x01u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_TxCycle10_0_oCAN_85bf3e37_Tx/PduRSrcPdu_2e41d513] */
  { /*     3 */      0x01u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_TxCycle1000_10_oCAN_d74aed68_Tx/PduRSrcPdu_704563f1] */
  { /*     4 */      0x01u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_TxCycle_E2eProf1C_500_30_oCAN_eeefc687_Tx/PduRSrcPdu_c3d2922e] */
  { /*     5 */      0x01u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_TxEvent_10_oCAN_b2cd4fc2_Tx/PduRSrcPdu_36788591] */
  { /*     6 */      0x01u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_XCP_Response_MyECU_oCAN_5d942f8b_Tx/PduRSrcPdu_4] */
  { /*     7 */      0x01u,                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_diag_Response_MyECU_Slave3_oCAN_659398e3_Tx/PduRSrcPdu_1] */
  { /*     8 */      0x03u,                  1u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_diag_Response_MyECU_oCAN_06426912_Tx/PduRSrcPdu_f3446321] */
  { /*     9 */      0x03u,                  0u }   /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_diag_Uudt_Response_MyECU_oCAN_f130d337_Tx/PduRSrcPdu_ec58e685] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  PduR_TxIf2Up
**********************************************************************************************************************/
/** 
  \var    PduR_TxIf2Up
  \brief  This table contains all routing information to perform the Tx handling of an interface routing. Used in the &lt;LLIf&gt;_TriggerTransmit and &lt;LLIf&gt;_TxConfirmation
  \details
  Element               Description
  TxConfirmationUsed    True, if the any of the source PduRDestPdus use a TxConfirmation.
  RmGDestRomIdx         the index of the 1:1 relation pointing to PduR_RmGDestRom
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(PduR_TxIf2UpType, PDUR_CONST) PduR_TxIf2Up[9] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    TxConfirmationUsed  RmGDestRomIdx        Referable Keys */
  { /*     0 */              FALSE,           19u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/Pdu_NmOsekUserDataTxPdu] */
  { /*     1 */              FALSE,            0u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/msg_StartAppl_Tx_MyECU_oCAN_c14d78df_Tx] */
  { /*     2 */              FALSE,            2u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/msg_TxCycle10_0_oCAN_2d7b6a87_Tx] */
  { /*     3 */              FALSE,            1u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/msg_TxCycle1000_10_oCAN_6dd6f284_Tx] */
  { /*     4 */              FALSE,            3u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/msg_TxCycle_E2eProf1C_500_30_oCAN_995018f6_Tx] */
  { /*     5 */              FALSE,            4u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/msg_TxEvent_10_oCAN_b9443fef_Tx] */
  { /*     6 */               TRUE,            5u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/msg_XCP_Response_MyECU_oCAN_5d942f8b_Tx] */
  { /*     7 */               TRUE,            6u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/msg_diag_Response_MyECU_Slave3_oCAN_659398e3_Tx] */
  { /*     8 */               TRUE,            7u }   /* [/ActiveEcuC/EcuC/EcucPduCollection/msg_diag_Uudt_Response_MyECU_oCAN_e0fa8c3a_Tx] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  PduR_Initialized
**********************************************************************************************************************/
/** 
  \var    PduR_Initialized
  \brief  Initialization state of PduR. TRUE, if PduR_Init() has been called, else FALSE
*/ 
#define PDUR_START_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(PduR_InitializedType, PDUR_VAR_ZERO_INIT) PduR_Initialized = FALSE;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define PDUR_STOP_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA
**********************************************************************************************************************/


#define PDUR_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#include "MemMap.h"    /* PRQA S 5087 */        /* MD_MSR_MemMap */

#if(PDUR_USE_INIT_POINTER == STD_ON)
P2CONST(PduR_PBConfigType, PDUR_VAR_ZERO_INIT, PDUR_PBCFG) PduR_ConfigDataPtr = (const PduR_PBConfigType *) NULL_PTR;
#endif

#define PDUR_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
#include "MemMap.h"    /* PRQA S 5087 */        /* MD_MSR_MemMap */
  
/**********************************************************************************************************************
 * LOCAL FUNCTIONS
 *********************************************************************************************************************/
/* Exclusive Area Wrapper functions */

/**********************************************************************************************************************
 * PduR_SchM_Enter_PduR_PDUR_EXCLUSIVE_AREA_0
 *********************************************************************************************************************/
/*!
 * \internal
 * -  enter the EA  
 * \endinternal
 *********************************************************************************************************************/
static FUNC(void, PDUR_CODE) PduR_SchM_Enter_PduR_PDUR_EXCLUSIVE_AREA_0(void)
{
  SchM_Enter_PduR_PDUR_EXCLUSIVE_AREA_0();
}


/**********************************************************************************************************************
 * PduR_SchM_Exit_PduR_PDUR_EXCLUSIVE_AREA_0
 *********************************************************************************************************************/
/*!
 * \internal
 * -  exit the EA  
 * \endinternal
 *********************************************************************************************************************/
static FUNC(void, PDUR_CODE) PduR_SchM_Exit_PduR_PDUR_EXCLUSIVE_AREA_0(void)
{
  SchM_Exit_PduR_PDUR_EXCLUSIVE_AREA_0();
}

  
/**********************************************************************************************************************
  GLOBAL FUNCTIONS
**********************************************************************************************************************/
#define PDUR_START_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_MemMap */
#include "MemMap.h"

/* Upper Layer Interface APIs */

/**********************************************************************************************************************
 * PduR_ComTransmit
 *********************************************************************************************************************/
/*!
 * \internal
 * - call upper layer Transmit function. 
 * \endinternal
 *********************************************************************************************************************/
FUNC(Std_ReturnType, PDUR_CODE) PduR_ComTransmit(PduIdType id, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info) /* COV_PDUR_WRAPPER_FUNC */
{
  Std_ReturnType retVal = E_NOT_OK;        /* PRQA S 2981 */ /* MD_MSR_RetVal */
  
#if (PDUR_TX2LO == STD_ON) /* COV_PDUR_RX_OR_TX_ONLY_CONFIG */
  retVal = PduR_UpTransmit(id, info); /* SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ONLY */
#else
  PduR_Det_ReportError(PDUR_FCT_TX, PDUR_E_PDU_ID_INVALID);
#endif

  PDUR_DUMMY_STATEMENT(id);     /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(info);   /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */

  return retVal;
}


/**********************************************************************************************************************
 * PduR_DcmTransmit
 *********************************************************************************************************************/
/*!
 * \internal
 * - call upper layer Transmit function. 
 * \endinternal
 *********************************************************************************************************************/
FUNC(Std_ReturnType, PDUR_CODE) PduR_DcmTransmit(PduIdType id, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info) /* COV_PDUR_WRAPPER_FUNC */
{
  Std_ReturnType retVal = E_NOT_OK;        /* PRQA S 2981 */ /* MD_MSR_RetVal */
  
#if (PDUR_TX2LO == STD_ON) /* COV_PDUR_RX_OR_TX_ONLY_CONFIG */
  retVal = PduR_UpTransmit(id, info); /* SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ONLY */
#else
  PduR_Det_ReportError(PDUR_FCT_TX, PDUR_E_PDU_ID_INVALID);
#endif

  PDUR_DUMMY_STATEMENT(id);     /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(info);   /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */

  return retVal;
}


/**********************************************************************************************************************
 * PduR_Cdd_ComTransmit
 *********************************************************************************************************************/
/*!
 * \internal
 * - call upper layer Transmit function. 
 * \endinternal
 *********************************************************************************************************************/
FUNC(Std_ReturnType, PDUR_CODE) PduR_Cdd_ComTransmit(PduIdType id, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info) /* COV_PDUR_WRAPPER_FUNC */
{
  Std_ReturnType retVal = E_NOT_OK;        /* PRQA S 2981 */ /* MD_MSR_RetVal */
  
#if (PDUR_TX2LO == STD_ON) /* COV_PDUR_RX_OR_TX_ONLY_CONFIG */
  retVal = PduR_UpTransmit(id, info); /* SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ONLY */
#else
  PduR_Det_ReportError(PDUR_FCT_TX, PDUR_E_PDU_ID_INVALID);
#endif

  PDUR_DUMMY_STATEMENT(id);     /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(info);   /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */

  return retVal;
}


/* Communication Interface APIs */

/**********************************************************************************************************************
 * PduR_CanIfRxIndication
 *********************************************************************************************************************/
/*!
 * \internal
 * -  call internal general IfRxIndication function.  
 * \endinternal
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_CanIfRxIndication(PduIdType RxPduId, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info) /* COV_PDUR_WRAPPER_FUNC */
{
#if (PDUR_RXIF2DEST == STD_ON) /* COV_PDUR_RX_OR_TX_ONLY_CONFIG */
  PduR_LoIfRxIndication(RxPduId, info);  /* SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ONLY */
#else
  PduR_Det_ReportError(PDUR_FCT_IFRXIND, PDUR_E_PDU_ID_INVALID);
#endif
  PDUR_DUMMY_STATEMENT(RxPduId);        /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(info);   		/* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
}


/**********************************************************************************************************************
 * PduR_CanIfTxConfirmation
 *********************************************************************************************************************/
/*!
 * \internal
 * - call internal general communication interface TxConfirmation function.
 * \endinternal
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_CanIfTxConfirmation(PduIdType TxPduId) /* COV_PDUR_WRAPPER_FUNC */
{
  PduR_LoIfTxConfirmation(TxPduId);
}



/**********************************************************************************************************************
 * PduR_NmOsekRxIndication
 *********************************************************************************************************************/
/*!
 * \internal
 * -  call internal general IfRxIndication function.  
 * \endinternal
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_NmOsekRxIndication(PduIdType RxPduId, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info) /* COV_PDUR_WRAPPER_FUNC */
{
#if (PDUR_RXIF2DEST == STD_ON) /* COV_PDUR_RX_OR_TX_ONLY_CONFIG */
  PduR_LoIfRxIndication(RxPduId, info);  /* SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ONLY */
#else
  PduR_Det_ReportError(PDUR_FCT_IFRXIND, PDUR_E_PDU_ID_INVALID);
#endif
  PDUR_DUMMY_STATEMENT(RxPduId);        /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(info);   		/* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
}



/**********************************************************************************************************************
 * PduR_NmOsekTriggerTransmit
 *********************************************************************************************************************/
/*!
 * \internal
 * - call internal general TriggerTransmit function.  
 * \endinternal
 *********************************************************************************************************************/
FUNC(Std_ReturnType, PDUR_CODE) PduR_NmOsekTriggerTransmit(PduIdType TxPduId, P2VAR(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info)
{
  return PduR_LoIfTriggerTransmit(TxPduId, info); /* SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ONLY */
}


/* Transport Protocol APIs */

/**********************************************************************************************************************
 * PduR_CanTpStartOfReception
 *********************************************************************************************************************/
 /*!
 * \internal
 * - call transport protocoll StartOfReception function.  
 * \endinternal
 *********************************************************************************************************************/
FUNC(BufReq_ReturnType, PDUR_CODE) PduR_CanTpStartOfReception(PduIdType id, P2VAR(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info, PduLengthType TpSduLength, P2VAR(PduLengthType, AUTOMATIC, PDUR_APPL_DATA) bufferSizePtr) /* COV_PDUR_WRAPPER_FUNC */
{
  BufReq_ReturnType retVal = BUFREQ_E_NOT_OK;        /* PRQA S 2981 */ /* MD_MSR_RetVal */

#if (PDUR_RXTP2DEST == STD_ON) /* COV_PDUR_RX_OR_TX_ONLY_CONFIG */
  retVal = PduR_LoTpStartOfReception(id, info, TpSduLength, bufferSizePtr); /* SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ONLY */
#else
  PduR_Det_ReportError(PDUR_FCT_SOR, PDUR_E_PDU_ID_INVALID);
#endif

  PDUR_DUMMY_STATEMENT(id);     		/* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(info);   		/* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(TpSduLength);    /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(bufferSizePtr);  /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */

  return retVal;
}


/**********************************************************************************************************************
 * PduR_CanTpCopyRxData
 *********************************************************************************************************************/
/*!
 * \internal
 * - call internal general CopyRxData.
 * \endinternal
 *********************************************************************************************************************/
FUNC(BufReq_ReturnType, PDUR_CODE) PduR_CanTpCopyRxData(PduIdType id, P2VAR(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info, P2VAR(PduLengthType, AUTOMATIC, PDUR_APPL_DATA) bufferSizePtr) /* COV_PDUR_WRAPPER_FUNC */
{
  BufReq_ReturnType retVal = BUFREQ_E_NOT_OK;        /* PRQA S 2981 */ /* MD_MSR_RetVal */
  
#if (PDUR_RXTP2DEST == STD_ON) /* COV_PDUR_RX_OR_TX_ONLY_CONFIG */
  retVal = PduR_LoTpCopyRxData(id, info, bufferSizePtr); /* SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ONLY */
#else
  PduR_Det_ReportError(PDUR_FCT_CPYRX, PDUR_E_PDU_ID_INVALID);
#endif

  PDUR_DUMMY_STATEMENT(id);     		/* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(info);  			/* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(bufferSizePtr);  /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  
  return retVal;
}


/**********************************************************************************************************************
 * PduR_CanTpCopyTxData
 *********************************************************************************************************************/
/*!
 * \internal
 * - call internal general CopyTxData.
 * \endinternal
 *********************************************************************************************************************/
FUNC(BufReq_ReturnType, PDUR_CODE) PduR_CanTpCopyTxData(PduIdType id, P2VAR(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info, P2VAR(RetryInfoType, AUTOMATIC, PDUR_APPL_DATA) retry, P2VAR(PduLengthType, AUTOMATIC, PDUR_APPL_DATA) availableDataPtr) /* COV_PDUR_WRAPPER_FUNC */
{
  BufReq_ReturnType retVal = BUFREQ_E_NOT_OK;        /* PRQA S 2981 */ /* MD_MSR_RetVal */
  
#if(PDUR_TXTP2SRC == STD_ON) /* COV_PDUR_RX_OR_TX_ONLY_CONFIG */
  retVal = PduR_LoTpCopyTxData(id, info, retry, availableDataPtr); /* SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ONLY */
#else
  PduR_Det_ReportError(PDUR_FCT_CPYTX, PDUR_E_PDU_ID_INVALID);
#endif

  PDUR_DUMMY_STATEMENT(id);     				/* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(info);  					/* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(retry);  				/* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(availableDataPtr);       /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  
  return retVal;
}


/**********************************************************************************************************************
 * PduR_CanTpRxIndication
 *********************************************************************************************************************/
/*!
 * \internal
 * - call Tp RxIndication function.
 * \endinternal
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_CanTpRxIndication(PduIdType id, Std_ReturnType result) /* COV_PDUR_WRAPPER_FUNC */
{
#if (PDUR_RXTP2DEST == STD_ON) /* COV_PDUR_RX_OR_TX_ONLY_CONFIG */
  PduR_LoTpRxIndication(id, result);
#else
  PduR_Det_ReportError(PDUR_FCT_TPRXIND, PDUR_E_PDU_ID_INVALID);
#endif

  PDUR_DUMMY_STATEMENT(id);     /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(result); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
}


/**********************************************************************************************************************
 * PduR_CanTpTxConfirmation
 *********************************************************************************************************************/
/*!
 * \internal
 * - call Tp TxConfirmation function 
 * \endinternal
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_CanTpTxConfirmation(PduIdType id, Std_ReturnType result) /* COV_PDUR_WRAPPER_FUNC */
{
#if (PDUR_TXTP2SRC == STD_ON) /* COV_PDUR_RX_OR_TX_ONLY_CONFIG */
  PduR_LoTpTxConfirmation(id, result);
#else
  PduR_Det_ReportError(PDUR_FCT_TPTXCFM, PDUR_E_PDU_ID_INVALID);
#endif

  PDUR_DUMMY_STATEMENT(id);     /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(result); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
}


/* CancelReceive global without UseTag API */

/* ChangeParameter global without UseTag  API */

/* Communication Interface / Transport Protocol APIs */

/* Communication Interface / Transport Protocol APIs */

/**********************************************************************************************************************
 * PduR_DcmCancelTransmit
 *********************************************************************************************************************/
/*!
 * \internal
 * - call internal general CancelTransmit function.
 * \endinternal
 *********************************************************************************************************************/
FUNC(Std_ReturnType, PDUR_CODE) PduR_DcmCancelTransmit(PduIdType id)
{
  return PduR_CancelTransmit(id); /* SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ONLY */
}


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL FUNCTIONS
**********************************************************************************************************************/


#define PDUR_STOP_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_MemMap */
#include "MemMap.h"

/* SBSW_JUSTIFICATION_BEGIN

  \ID SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ID_AND_PTR
    \DESCRIPTION    The API is called with an Id and a pointer.
                    The API call is forwarded using a function pointer which is read using ComStackLib macros.
                    
    \COUNTERMEASURE \N The function pointer is read using the passed Id (and ComStackLib macros). 
                       The Id is a SNV provided by the lower layer. 
                       It is checked at runtime if it is in the valid range.
                       The pointer is provided by the lower layer and is assumed to be valid. It is passed as is to the corresponding function. 

  \ID SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ID_ONLY
    \DESCRIPTION    The API is called with an Id.
                    The API call is forwarded using a function pointer which is read using ComStackLib macros.
                    
    \COUNTERMEASURE \R The function pointer is read using the passed Id (and ComStackLib macros). 
                       The Id is a SNV provided by the lower layer. 
                       It is checked at runtime if it is in the valid range.
                       
  \ID SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ONLY
    \DESCRIPTION    The API call is forwarded to an internal function.
    \COUNTERMEASURE \N The parameter are checked in the called function.

 SBSW_JUSTIFICATION_END */
 
 /* COV_JUSTIFICATION_BEGIN
 
  \ID COV_PDUR_WRAPPER_FUNC
    \ACCEPT X
    \REASON Each neighbouring module call the same internal function. The call is covered by an other module. 
    
  \ID COV_PDUR_RX_OR_TX_ONLY_CONFIG
    \ACCEPT TX
    \REASON The API is mandatory if this Bsw module exists. In case of Rx or Tx only configs the API call is not forwarded to the internal function. 
 
 COV_JUSTIFICATION_END */
 

/**********************************************************************************************************************
 * END OF FILE: PduR_Lcfg.c
 *********************************************************************************************************************/

