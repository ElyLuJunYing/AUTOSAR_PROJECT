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
 *              File: PduR_Cfg.h
 *   Generation Time: 2018-11-27 15:30:02
 *           Project: TsiStandard - Version 1
 *          Delivery: CBD1800257_D01
 *      Tool Version: DaVinci Configurator  5.18.37 SP1
 *
 *
 *********************************************************************************************************************/

#if !defined (PDUR_CFG_H)
# define PDUR_CFG_H

/**********************************************************************************************************************
 * MISRA JUSTIFICATION
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "PduR_Types.h"

/**********************************************************************************************************************
 * GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
#ifndef PDUR_USE_DUMMY_STATEMENT
#define PDUR_USE_DUMMY_STATEMENT STD_ON /* /MICROSAR/EcuC/EcucGeneral/DummyStatement */
#endif
#ifndef PDUR_DUMMY_STATEMENT
#define PDUR_DUMMY_STATEMENT(v) (v)=(v) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */  /* /MICROSAR/vSet/vSetGeneral/vSetDummyStatementKind */
#endif
#ifndef PDUR_DUMMY_STATEMENT_CONST
#define PDUR_DUMMY_STATEMENT_CONST(v) (void)(v) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */  /* /MICROSAR/vSet/vSetGeneral/vSetDummyStatementKind */
#endif
#ifndef PDUR_ATOMIC_BIT_ACCESS_IN_BITFIELD
#define PDUR_ATOMIC_BIT_ACCESS_IN_BITFIELD STD_OFF /* /MICROSAR/EcuC/EcucGeneral/AtomicBitAccessInBitfield */
#endif
#ifndef PDUR_ATOMIC_VARIABLE_ACCESS
#define PDUR_ATOMIC_VARIABLE_ACCESS 32u /* /MICROSAR/EcuC/EcucGeneral/AtomicVariableAccess */
#endif
#ifndef PDUR_PROCESSOR_S32K148
#define PDUR_PROCESSOR_S32K148
#endif
#ifndef PDUR_COMP_GREENHILLS
#define PDUR_COMP_GREENHILLS
#endif
#ifndef PDUR_GEN_GENERATOR_MSR
#define PDUR_GEN_GENERATOR_MSR
#endif
#ifndef PDUR_CPUTYPE_BITORDER_LSB2MSB
#define PDUR_CPUTYPE_BITORDER_LSB2MSB /* /MICROSAR/vSet/vSetPlatform/vSetBitOrder */
#endif
#ifndef PDUR_CONFIGURATION_VARIANT_PRECOMPILE
#define PDUR_CONFIGURATION_VARIANT_PRECOMPILE 1
#endif
#ifndef PDUR_CONFIGURATION_VARIANT_LINKTIME
#define PDUR_CONFIGURATION_VARIANT_LINKTIME 2
#endif
#ifndef PDUR_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE
#define PDUR_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE 3
#endif
#ifndef PDUR_CONFIGURATION_VARIANT
#define PDUR_CONFIGURATION_VARIANT PDUR_CONFIGURATION_VARIANT_PRECOMPILE
#endif
#ifndef PDUR_POSTBUILD_VARIANT_SUPPORT
#define PDUR_POSTBUILD_VARIANT_SUPPORT STD_OFF
#endif



#define PDUR_DEV_ERROR_DETECT STD_ON  /**< /ActiveEcuC/PduR/PduRGeneral[0:PduRSafeBswChecks] || /ActiveEcuC/PduR/PduRGeneral[0:PduRDevErrorDetect] */
#define PDUR_DEV_ERROR_REPORT STD_ON  /**< /ActiveEcuC/PduR/PduRGeneral[0:PduRDevErrorDetect] */

#define PDUR_METADATA_SUPPORT STD_OFF  /**< /ActiveEcuC/PduR/PduRGeneral[0:PduRMetaDataSupport] */
#define PDUR_VERSION_INFO_API STD_OFF  /**< /ActiveEcuC/PduR/PduRGeneral[0:PduRVersionInfoApi] */

#define PDUR_ERROR_NOTIFICATION STD_OFF

#define PDUR_MAIN_FUNCTION STD_OFF

#define PDUR_MULTICORE STD_OFF /**< /ActiveEcuC/PduR/PduRGeneral[0:PduRSupportMulticore] */

#define PduR_PBConfigIdType uint32

 
 /*  DET Error define list  */ 
#define PDUR_FCT_CANIFRXIND 0x01u 
#define PDUR_FCT_CANIFTX 0x09u 
#define PDUR_FCT_CANIFTXCFM 0x02u 
#define PDUR_FCT_CANTPRXIND 0x05u 
#define PDUR_FCT_CANTPTX 0x09u 
#define PDUR_FCT_CANTPTXCFM 0x08u 
#define PDUR_FCT_CANTPSOR 0x06u 
#define PDUR_FCT_CANTPCPYRX 0x04u 
#define PDUR_FCT_CANTPCPYTX 0x07u 
#define PDUR_FCT_COMTX 0x89u 
#define PDUR_FCT_DCMTX 0x99u 
#define PDUR_FCT_DCMCTX 0x9Au 
#define PDUR_FCT_DCMCTX 0x9Au 
#define PDUR_FCT_CDD_COMTX 0xC9u 
#define PDUR_FCT_NMOSEKRXIND 0xE1u 
#define PDUR_FCT_NMOSEKTX 0xE9u 
#define PDUR_FCT_NMOSEKTXCFM 0xE2u 
#define PDUR_FCT_NMOSEKTT 0xE3u 
 /*   PduR_CanIfIfRxIndication  PduR_CanIfTransmit  PduR_CanIfTxConfirmation  PduR_CanTpTpRxIndication  PduR_CanTpTransmit  PduR_CanTpTxConfirmation  PduR_CanTpStartOfReception  PduR_CanTpCopyRxData  PduR_CanTpCopyTxData  PduR_ComTransmit  PduR_DcmTransmit  PduR_DcmCancelTransmit  PduR_DcmCancelTransmit  PduR_Cdd_ComTransmit  PduR_NmOsekIfRxIndication  PduR_NmOsekTransmit  PduR_NmOsekTxConfirmation  PduR_NmOsekTriggerTransmit  */ 



/**
 * \defgroup PduRHandleIdsIfRxDest Handle IDs of handle space IfRxDest.
 * \brief Communication interface Rx destination PDUs
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define PduRConf_PduRDestPdu_PduRDestPdu                              7u
#define PduRConf_PduRDestPdu_PduRDestPdu_1                            6u
#define PduRConf_PduRDestPdu_PduRDestPdu_2                            0u
#define PduRConf_PduRDestPdu_msg_RxCycle100_0_oCAN_c71398f9_Rx_9e00b2d3_Rx 1u
#define PduRConf_PduRDestPdu_msg_RxCycle500_20_oCAN_266969e8_Rx_b1d1dd8a_Rx 2u
#define PduRConf_PduRDestPdu_msg_RxCycle_E2eProf1C_500_10_oCAN_23e9789c_Rx_01c8980f_Rx 3u
#define PduRConf_PduRDestPdu_msg_RxEvent_20_oCAN_13517c6b_Rx_37e6280b_Rx 4u
#define PduRConf_PduRDestPdu_msg_StartAppl_Rx_MyECU_oCAN_fe93a56e_Rx_7a86d966_Rx 5u
/**\} */

/**
 * \defgroup PduRHandleIdsIfRxSrc Handle IDs of handle space IfRxSrc.
 * \brief Communication interface Rx source PDUs
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define PduRConf_PduRSrcPdu_PduRSrcPdu                                7u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_2                              0u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_3                              6u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_7a86d966                       5u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_9e00b2d3                       1u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_01c8980f                       3u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_37e6280b                       4u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_b1d1dd8a                       2u
/**\} */

/**
 * \defgroup PduRHandleIdsIfTpTxSrc Handle IDs of handle space IfTpTxSrc.
 * \brief Communication interface and transport protocol Tx PDUs
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define PduRConf_PduRSrcPdu_PduRSrcPdu_1                              7u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_2e41d513                       2u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_4                              6u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_5                              0u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_704563f1                       3u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_36788591                       5u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_c3d2922e                       4u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_cd5f4416                       1u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_ec58e685                       9u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_f3446321                       8u
/**\} */

/**
 * \defgroup PduRHandleIdsIfTxDest Handle IDs of handle space IfTxDest.
 * \brief Communication interface Tx destination PDUs
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define PduRConf_PduRDestPdu_PduRDestPdu_3                            6u
#define PduRConf_PduRDestPdu_PduRDestPdu_4                            0u
#define PduRConf_PduRDestPdu_PduRDestPdu_001                          7u
#define PduRConf_PduRDestPdu_msg_StartAppl_Tx_MyECU_oCAN_c14d78df_Tx  1u
#define PduRConf_PduRDestPdu_msg_TxCycle10_0_oCAN_2d7b6a87_Tx         2u
#define PduRConf_PduRDestPdu_msg_TxCycle1000_10_oCAN_6dd6f284_Tx      3u
#define PduRConf_PduRDestPdu_msg_TxCycle_E2eProf1C_500_30_oCAN_995018f6_Tx 4u
#define PduRConf_PduRDestPdu_msg_TxEvent_10_oCAN_b9443fef_Tx          5u
#define PduRConf_PduRDestPdu_msg_diag_Uudt_Response_MyECU_oCAN_e0fa8c3a_Tx 8u
/**\} */

/**
 * \defgroup PduRHandleIdsTpRxDest Handle IDs of handle space TpRxDest.
 * \brief Transport protocol Rx destination PDUs
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define PduRConf_PduRDestPdu_msg_diag_RequestGlobal_oCAN_e06c7e2d_Rx_c958f031_Rx 0u
#define PduRConf_PduRDestPdu_msg_diag_Request_MyECU_oCAN_ca029ee7_Rx_9fd2cbe7_Rx 1u
/**\} */

/**
 * \defgroup PduRHandleIdsTpRxSrc Handle IDs of handle space TpRxSrc.
 * \brief Transport protocol Rx source PDUs
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define PduRConf_PduRSrcPdu_PduRSrcPdu_9fd2cbe7                       1u
#define PduRConf_PduRSrcPdu_PduRSrcPdu_c958f031                       0u
/**\} */

/**
 * \defgroup PduRHandleIdsTpTxDest Handle IDs of handle space TpTxDest.
 * \brief Transport protocol Tx PDUs
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define PduRConf_PduRDestPdu_msg_diag_Response_MyECU_oCAN_84acb98b_Tx 0u
/**\} */


/* User Config File Start */

/* User Config File End */


/**********************************************************************************************************************
 * GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

#endif  /* PDUR_CFG_H */
/**********************************************************************************************************************
 * END OF FILE: PduR_Cfg.h
 *********************************************************************************************************************/

