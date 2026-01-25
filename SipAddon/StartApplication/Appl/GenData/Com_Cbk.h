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
 *              File: Com_Cbk.h
 *   Generation Time: 2018-11-27 15:30:01
 *           Project: TsiStandard - Version 1
 *          Delivery: CBD1800257_D01
 *      Tool Version: DaVinci Configurator  5.18.37 SP1
 *
 *
 *********************************************************************************************************************/


#if !defined (COM_CBK_H)
# define COM_CBK_H

/**********************************************************************************************************************
  MISRA / PClint JUSTIFICATIONS
**********************************************************************************************************************/

/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/
#include "Com_Cot.h"

/**********************************************************************************************************************
  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/



/**
 * \defgroup ComHandleIdsComRxPdu Handle IDs of handle space ComRxPdu.
 * \brief Rx Pdus
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define ComConf_ComIPdu_msg_RxCycle100_0_oCAN_1e247d16_Rx             0u
#define ComConf_ComIPdu_msg_RxCycle500_20_oCAN_a691adb3_Rx            1u
#define ComConf_ComIPdu_msg_RxCycle_E2eProf1C_500_10_oCAN_e8110737_Rx 2u
#define ComConf_ComIPdu_msg_RxEvent_20_oCAN_a1df81ad_Rx               3u
#define ComConf_ComIPdu_msg_StartAppl_Rx_MyECU_oCAN_0da3c1e2_Rx       4u
/**\} */

/**
 * \defgroup ComHandleIdsComTxPdu Handle IDs of handle space ComTxPdu.
 * \brief Tx Pdus
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define ComConf_ComIPdu_ComIPdu_NmOsek_UserData                       0u
#define ComConf_ComIPdu_msg_StartAppl_Tx_MyECU_oCAN_ad461e3f_Tx       1u
#define ComConf_ComIPdu_msg_TxCycle10_0_oCAN_85bf3e37_Tx              2u
#define ComConf_ComIPdu_msg_TxCycle1000_10_oCAN_d74aed68_Tx           3u
#define ComConf_ComIPdu_msg_TxCycle_E2eProf1C_500_30_oCAN_eeefc687_Tx 4u
#define ComConf_ComIPdu_msg_TxEvent_10_oCAN_b2cd4fc2_Tx               5u
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
#define COM_START_SEC_CODE
#include "MemMap.h"    /* PRQA S 5087 1 */ /*MD_MSR_MemMap */
/**********************************************************************************************************************
  Com_RxIndication
**********************************************************************************************************************/
/** \brief    This function is called by the lower layer after an I-PDU has been received.
    \param    RxPduId      ID of AUTOSAR COM I-PDU that has been received. Identifies the data that has been received.
                              Range: 0..(maximum number of I-PDU IDs received by AUTOSAR COM) - 1
    \param    PduInfoPtr      Payload information of the received I-PDU (pointer to data and data length).
    \return   none
    \context  The function can be called on interrupt and task level. It is not allowed to use CAT1 interrupts with Rte (BSW00326]). Due to this, the interrupt context shall be configured to a CAT2 interrupt if an Rte is used. 
    \synchronous TRUE
    \reentrant   TRUE, for different Handles
    \trace    SPEC-2737026
    \note     The function is called by the lower layer.
**********************************************************************************************************************/
FUNC(void, COM_CODE) Com_RxIndication(PduIdType RxPduId, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr);


/**********************************************************************************************************************
  Com_TriggerTransmit
**********************************************************************************************************************/
/** \brief    This function is called by the lower layer when an AUTOSAR COM I-PDU shall be transmitted.
              Within this function, AUTOSAR COM shall copy the contents of its I-PDU transmit buffer
              to the L-PDU buffer given by SduPtr.
              Use case:
              This function is used e.g. by the LIN Master for sending out a LIN frame. In this case, the trigger transmit
              can be initiated by the Master schedule table itself or a received LIN header.
              This function is also used by the FlexRay Interface for requesting PDUs to be sent in static part
              (synchronous to the FlexRay global time). Once the I-PDU has been successfully sent by the lower layer
              (PDU-Router), the lower layer must call Com_TxConfirmation().
    \param          TxPduId       ID of AUTOSAR COM I-PDU that is requested to be transmitted by AUTOSAR COM.
    \param[in,out]  PduInfoPtr    Contains a pointer to a buffer (SduDataPtr) where the SDU
                                  data shall be copied to, and the available buffer size in SduLengh.
                                  On return, the service will indicate the length of the copied SDU
                                  data in SduLength.
    \return         E_OK          SDU has been copied and SduLength indicates the number of copied bytes.
    \return         E_NOT_OK      No data has been copied, because
                                  Com is not initialized
                                  or TxPduId is not valid
                                  or PduInfoPtr is NULL_PTR
                                  or SduDataPtr is NULL_PTR
                                  or SduLength is too small.
    \context  TASK|ISR2
    \synchronous TRUE
    \reentrant   TRUE, for different Handles
    \trace    SPEC-2737022, SPEC-2737023, SPEC-2737024
    \note     The function is called by the lower layer.
**********************************************************************************************************************/
FUNC(Std_ReturnType, COM_CODE) Com_TriggerTransmit(PduIdType TxPduId, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_VAR) PduInfoPtr);


#define COM_STOP_SEC_CODE
#include "MemMap.h"    /* PRQA S 5087 1 */ /* MD_MSR_MemMap */

#endif  /* COM_CBK_H */
/**********************************************************************************************************************
  END OF FILE: Com_Cbk.h
**********************************************************************************************************************/

