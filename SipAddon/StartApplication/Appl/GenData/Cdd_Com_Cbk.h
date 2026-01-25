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
 *            Module: Cdd
 *           Program: MSR_Vector_SLP4
 *          Customer: Harman International (China) Holdings Co., Ltd.
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: FS32K148UAT0VLQR
 *    License Scope : The usage is restricted to CBD1800257_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Cdd_Com_Cbk.h
 *   Generation Time: 2018-11-27 15:30:02
 *           Project: TsiStandard - Version 1
 *          Delivery: CBD1800257_D01
 *      Tool Version: DaVinci Configurator  5.18.37 SP1
 *
 *
 *********************************************************************************************************************/



#if !defined (CDD_COM_CBK_H)
# define CDD_COM_CBK_H

/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/
# include "ComStack_Types.h"



/**********************************************************************************************************************
  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
#ifndef CDD_COM_USE_DUMMY_STATEMENT
#define CDD_COM_USE_DUMMY_STATEMENT STD_ON /* /MICROSAR/EcuC/EcucGeneral/DummyStatement */
#endif
#ifndef CDD_COM_DUMMY_STATEMENT
#define CDD_COM_DUMMY_STATEMENT(v) (v)=(v) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */  /* /MICROSAR/vSet/vSetGeneral/vSetDummyStatementKind */
#endif
#ifndef CDD_COM_DUMMY_STATEMENT_CONST
#define CDD_COM_DUMMY_STATEMENT_CONST(v) (void)(v) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */  /* /MICROSAR/vSet/vSetGeneral/vSetDummyStatementKind */
#endif
#ifndef CDD_COM_ATOMIC_BIT_ACCESS_IN_BITFIELD
#define CDD_COM_ATOMIC_BIT_ACCESS_IN_BITFIELD STD_OFF /* /MICROSAR/EcuC/EcucGeneral/AtomicBitAccessInBitfield */
#endif
#ifndef CDD_COM_ATOMIC_VARIABLE_ACCESS
#define CDD_COM_ATOMIC_VARIABLE_ACCESS 32u /* /MICROSAR/EcuC/EcucGeneral/AtomicVariableAccess */
#endif
#ifndef CDD_COM_PROCESSOR_S32K148
#define CDD_COM_PROCESSOR_S32K148
#endif
#ifndef CDD_COM_COMP_GREENHILLS
#define CDD_COM_COMP_GREENHILLS
#endif
#ifndef CDD_COM_GEN_GENERATOR_MSR
#define CDD_COM_GEN_GENERATOR_MSR
#endif
#ifndef CDD_COM_CPUTYPE_BITORDER_LSB2MSB
#define CDD_COM_CPUTYPE_BITORDER_LSB2MSB /* /MICROSAR/vSet/vSetPlatform/vSetBitOrder */
#endif
#ifndef CDD_COM_CONFIGURATION_VARIANT_PRECOMPILE
#define CDD_COM_CONFIGURATION_VARIANT_PRECOMPILE 1
#endif
#ifndef CDD_COM_CONFIGURATION_VARIANT_LINKTIME
#define CDD_COM_CONFIGURATION_VARIANT_LINKTIME 2
#endif
#ifndef CDD_COM_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE
#define CDD_COM_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE 3
#endif
#ifndef CDD_COM_CONFIGURATION_VARIANT
#define CDD_COM_CONFIGURATION_VARIANT CDD_COM_CONFIGURATION_VARIANT_PRECOMPILE
#endif
#ifndef CDD_COM_POSTBUILD_VARIANT_SUPPORT
#define CDD_COM_POSTBUILD_VARIANT_SUPPORT STD_OFF
#endif


#define CDD_COM_COMIF  STD_OFF
#define CDD_COM_COMIF_RX  STD_OFF
#define CDD_COM_COMIF_TX  STD_OFF
#define CDD_COM_COMIF_TRIGGERTRANSMIT  STD_OFF

#define CDD_COM_PDUR_UL_COMIF  STD_ON
#define CDD_COM_PDUR_UL_COMIF_TRIGGERTRANSMIT  STD_OFF

#define CDD_COM_PDUR_UL_COMTP  STD_OFF

#define CDD_COM_PDUR_LL_COMIF  STD_OFF
#define CDD_COM_PDUR_LL_COMIF_TRIGGERTRANSMIT  STD_OFF

#define CDD_COM_PDUR_LL_COMTP  STD_OFF

#define CDD_COM_SOADUL_COMIF_RX  STD_OFF
#define CDD_COM_SOADUL_COMIF_TRIGGERTRANSMIT  STD_OFF
#define CDD_COM_SOADUL_COMIF_TXCONFIRMATION   STD_OFF

#define CDD_COM_SOADUL_COMTP_RX  STD_OFF
#define CDD_COM_SOADUL_COMTP_TX  STD_OFF





/**
 * \defgroup Cdd_ComHandleIdsPduRUpperLayerRx Handle IDs of handle space PduRUpperLayerRx.
 * \brief CddPduRUpperLayerContribution Rx PDUs
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define Cdd_ComConf_CddPduRUpperLayerRxPdu_GlobalTimeMaster_oCAN_48f281bc_Rx 1
#define Cdd_ComConf_CddPduRUpperLayerRxPdu_msg_XCP_Request_MyECU_oCAN_24ce420e_Rx 0
#define Cdd_ComConf_CddPduRUpperLayerRxPdu_msg_diag_Request_MyECU_Slave3_oCAN_87f08505_Rx 2
/**\} */

/**
 * \defgroup Cdd_ComHandleIdsPduRUpperLayerTx Handle IDs of handle space PduRUpperLayerTx.
 * \brief CddPduRUpperLayerContribution Tx PDUs
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define Cdd_ComConf_CddPduRUpperLayerTxPdu_msg_XCP_Response_MyECU_oCAN_5d942f8b_Tx 0
#define Cdd_ComConf_CddPduRUpperLayerTxPdu_msg_diag_Response_MyECU_Slave3_oCAN_659398e3_Tx 1
/**\} */

/**********************************************************************************************************************
  GLOBAL FUNCTION MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/
# define CDD_COM_START_SEC_CODE
/*lint -save -esym(961, 19.1) */
# include "MemMap.h"    /* PRQA S 5087 */       /* MD_MSR_MemMap */
/*lint -restore */



/*! \defgroup ProvidedCddCdd_ComUpperLayerComIf2PduR Provided Cdd_Com communication interface to PduR
    \brief    These services have to be provided by the Cdd_Com if the CDD is an upper layer for the PduR. */
/*\{*/

/**********************************************************************************************************************
  Cdd_Com_RxIndication
**********************************************************************************************************************/
/*! \brief         The function is called to indicate the complete reception of a RX I-PDU.
    \param[in]     RxPduId      id of the IF CddPduRUpperLayerRxPdu.
    \param[in]     PduInfoPtr   Payload information of the received I-PDU (pointer to data and data length).
    \return        none
    \pre           The Cdd_Com is initialized and active.
    \context       The function can be called in interrupt and on task level and should not to interrupted by another
                   Cdd_Com_RxIndication call for the same RxPduId.
    \note          The function is called by the PduR.
**********************************************************************************************************************/
FUNC(void, CDD_COM_CODE) Cdd_Com_RxIndication(PduIdType RxPduId, P2CONST(PduInfoType, AUTOMATIC, CDD_COM_APPL_DATA) PduInfoPtr);

/**********************************************************************************************************************
  Cdd_Com_TxConfirmation
**********************************************************************************************************************/
/*! \brief         The function is called to confirm the complete transmission of a TX I-PDU.
    \param[in]     TxPduId      id of the IF CddPduRUpperLayerTxPdu.
    \return        none
    \pre           The Cdd_Com is initialized and active.
    \context       The function can be called in interrupt and on task level and should not to interrupted by another
                   Cdd_Com_TxConfirmation call for the same TxPduId.
    \note          The function is called by the PduR.
**********************************************************************************************************************/
FUNC(void, CDD_COM_CODE) Cdd_Com_TxConfirmation(PduIdType TxPduId);

#if (CDD_COM_PDUR_UL_COMIF_TRIGGERTRANSMIT == STD_ON)
/**********************************************************************************************************************
  Cdd_Com_TriggerTransmit
**********************************************************************************************************************/
/*! \brief         The function is calledto request the TX I-PDU data before transmission.
    \param[in]     TxPduId      id of the IF CddPduRUpperLayerTxPdu.
    \param[in,out] PduInfoPtr   Contains a pointer to a buffer (SduDataPtr) to where the SDU
                                data shall be copied, and the available buffer size in SduLengh.
                                On return, the service will indicate the length of the copied SDU
                                data in SduLength.
    \return        E_OK         SDU has been copied and SduLength indicates the number of copied bytes.
    \return        E_NOT_OK     No data has been copied, because
                                Cdd is not initialized
                                or TxPduId is not valid
                                or PduInfoPtr is NULL_PTR
                                or SduDataPtr is NULL_PTR
                                or SduLength is too small.
    \pre           The Cdd_Com is initialized and active.
    \context       The function can be called in interrupt and on task level and should not to interrupted by another
                   Cdd_Com_TriggerTransmit call for the same TxPduId.
    \note          The function is called by the PduR.
**********************************************************************************************************************/
FUNC(Std_ReturnType, CDD_COM_CODE) Cdd_Com_TriggerTransmit(PduIdType TxPduId, P2VAR(PduInfoType, AUTOMATIC, CDD_COM_APPL_DATA) PduInfoPtr);
#endif

/*\}*/




# define CDD_COM_STOP_SEC_CODE
/*lint -save -esym(961, 19.1) */
# include "MemMap.h"    /* PRQA S 5087 */       /* MD_MSR_MemMap */
/*lint -restore */

#endif  /* CDD_COM_CBK_H */
/**********************************************************************************************************************
  END OF FILE: Cdd_Com_Cbk.h
**********************************************************************************************************************/


