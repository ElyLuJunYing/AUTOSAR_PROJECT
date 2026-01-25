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
 *              File: NmOsek_Cfg.h
 *   Generation Time: 2018-11-27 15:30:02
 *           Project: TsiStandard - Version 1
 *          Delivery: CBD1800257_D01
 *      Tool Version: DaVinci Configurator  5.18.37 SP1
 *
 *
 *********************************************************************************************************************/


#if !defined (NMOSEK_CFG_H)
#define NMOSEK_CFG_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "ComStack_Types.h"
#include "NmStack_Types.h"
#include "Can.h"


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
#ifndef NMOSEK_USE_DUMMY_STATEMENT
#define NMOSEK_USE_DUMMY_STATEMENT STD_ON /* /MICROSAR/EcuC/EcucGeneral/DummyStatement */
#endif
#ifndef NMOSEK_DUMMY_STATEMENT
#define NMOSEK_DUMMY_STATEMENT(v) (v)=(v) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */  /* /MICROSAR/vSet/vSetGeneral/vSetDummyStatementKind */
#endif
#ifndef NMOSEK_DUMMY_STATEMENT_CONST
#define NMOSEK_DUMMY_STATEMENT_CONST(v) (void)(v) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */  /* /MICROSAR/vSet/vSetGeneral/vSetDummyStatementKind */
#endif
#ifndef NMOSEK_ATOMIC_BIT_ACCESS_IN_BITFIELD
#define NMOSEK_ATOMIC_BIT_ACCESS_IN_BITFIELD STD_OFF /* /MICROSAR/EcuC/EcucGeneral/AtomicBitAccessInBitfield */
#endif
#ifndef NMOSEK_ATOMIC_VARIABLE_ACCESS
#define NMOSEK_ATOMIC_VARIABLE_ACCESS 32u /* /MICROSAR/EcuC/EcucGeneral/AtomicVariableAccess */
#endif
#ifndef NMOSEK_PROCESSOR_S32K148
#define NMOSEK_PROCESSOR_S32K148
#endif
#ifndef NMOSEK_COMP_GREENHILLS
#define NMOSEK_COMP_GREENHILLS
#endif
#ifndef NMOSEK_GEN_GENERATOR_MSR
#define NMOSEK_GEN_GENERATOR_MSR
#endif
#ifndef NMOSEK_CPUTYPE_BITORDER_LSB2MSB
#define NMOSEK_CPUTYPE_BITORDER_LSB2MSB /* /MICROSAR/vSet/vSetPlatform/vSetBitOrder */
#endif
#ifndef NMOSEK_CONFIGURATION_VARIANT_PRECOMPILE
#define NMOSEK_CONFIGURATION_VARIANT_PRECOMPILE 1
#endif
#ifndef NMOSEK_CONFIGURATION_VARIANT_LINKTIME
#define NMOSEK_CONFIGURATION_VARIANT_LINKTIME 2
#endif
#ifndef NMOSEK_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE
#define NMOSEK_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE 3
#endif
#ifndef NMOSEK_CONFIGURATION_VARIANT
#define NMOSEK_CONFIGURATION_VARIANT NMOSEK_CONFIGURATION_VARIANT_PRECOMPILE
#endif
#ifndef NMOSEK_POSTBUILD_VARIANT_SUPPORT
#define NMOSEK_POSTBUILD_VARIANT_SUPPORT STD_OFF
#endif


/* Advanced settings */
#ifndef NMOSEK_DEV_ERROR_DETECT
#define NMOSEK_DEV_ERROR_DETECT STD_ON
#endif
#ifndef NMOSEK_DEV_ERROR_REPORT
#define NMOSEK_DEV_ERROR_REPORT STD_ON
#endif
#define NMOSEK_FAST_BUSOFF_RECOVERY                                   STD_OFF
#define NMOSEK_ALL_LIMP_HOME_SHORT_NUMBER_GREATER_THAN_ONE            STD_ON
#define NMOSEK_TYPE_VECTOR_OSEK
#define NMOSEK_MAX_NUMBER_OF_NMOSEK_CHANNELS                          1u
#define NMOSEK_ONLY_VALID_USER_DATA_TX_PDU_IDS                        STD_ON

/* Node Id Optimization */
#define NMOSEK_NO_OPTIMIZATION                                        0u
#define NMOSEK_LOWEST_NODE_ID_IN_RANGE                                1u
#define NMOSEK_HIGHEST_NODE_ID_IN_RANGE                               2u
#define NMOSEK_NODE_ID_OPTIMIZATION                                   NMOSEK_LOWEST_NODE_ID_IN_RANGE

/* Nm Configuration settings */
#define NMOSEK_NM_PASSIVE_MODE_ENABLED                                STD_OFF
#define NMOSEK_NM_COM_USER_DATA_SUPPORT                               STD_ON
#define NMOSEK_NM_REMOTE_SLEEP_IND_ENABLED                            STD_ON
#define NMOSEK_NM_STATE_CHANGE_IND_ENABLED                            STD_OFF
#define NMOSEK_NM_COM_CONTROL_ENABLED                                 STD_OFF
#define NMOSEK_NM_NODE_ID_ENABLED                                     STD_ON
#define NMOSEK_NM_USER_DATA_ENABLED                                   STD_ON
#define NMOSEK_NM_NODE_DETECTION_ENABLED                              STD_OFF
#define NMOSEK_NM_BUS_SYNCHRONIZATION_ENABLED                         STD_OFF
#define NMOSEK_NM_BUS_NM_SPECIFIC_PDU_RX_INDICATION_ENABLED           STD_OFF
#define NMOSEK_NM_PDU_RX_INDICATION_ENABLED                           STD_OFF

/* Microsar Define Block for Boolean and Integers */
#define NMOSEK_USE_NM_NODE_LIST                                       STD_OFF 
#define NMOSEK_NUMBER_OF_NM_CONFIG_NODES                              32uL 
#define NMOSEK_TOKEN_MONITORING                                       STD_OFF 
#define NMOSEK_VERSION_INFO_API                                       STD_OFF 
#define NMOSEK_INSTANCE_ID                                            0uL 
#define NMOSEK_BUS_OFF_NOTIFICATION_ENABLED                           STD_ON 
#define NMOSEK_LAST_BYTE_OF_CAN_ID_AS_NODE_ID_ENABLED                 STD_OFF 
#define NMOSEK_RESET_TMAX_IN_LHPREP_SLEEP_ON_RX_RING_ENABLED          STD_ON 
#define NMOSEK_NMRESET_IGNORE_RX_EXCEPT_ALIVE_ENABLED                 STD_OFF 
#define NMOSEK_LEAVE_LHONLY_ON_RX_INDICATION_ENABLED                  STD_OFF 
#define NMOSEK_WBSTRANSITION_ON_RING_MSG_ONLY_ENABLED                 STD_OFF 
#define NMOSEK_FIRST_MESSAGE_SHALL_BE_NM_MESSAGE                      STD_OFF 
#define NMOSEK_TX_DEADLINE_MONITORING_IN_COM_ENABLED                  STD_OFF 
#define NMOSEK_SAFE_BSW_CHECKS                                        STD_OFF 

/* Symbolic Name Define Block */
#define NmOsekConf_NmOsekUserDataTxPdu_NmOsekUserDataTxPdu            0x00000000uL 



/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  NmOsekPCDataSwitches  NmOsek Data Switches  (PRE_COMPILE)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define NMOSEK_ACTION                                                 STD_ON
#define NMOSEK_ANYCHANNELINLIMPHOME                                   STD_OFF  /**< Deactivateable: 'NmOsek_AnyChannelInLimpHome' Reason: 'Synchronization Point is turned OFF for each NmOsek channel in a coordination cluster OR Coordinator Support is turned OFF in Nm OR Wait Bus Sleep Extensions are turned OFF in NmOsek' */
#define NMOSEK_BUSOFFCOUNTER                                          STD_OFF  /**< Deactivateable: 'NmOsek_BusOffCounter' Reason: 'Fast BusOff Recovery is OFF (CanSMBorTimeL1 == CanSMBorTimeL2 for all channels)' */
#define NMOSEK_BUSOFFNOTIFICATIONENABLEDOFGLOBALCONFIG                STD_ON
#define NMOSEK_CANISBUSOFF                                            STD_ON
#define NMOSEK_CHANNELCONFIG                                          STD_ON
#define NMOSEK_ANYCHANNELINLIMPHOMEIDXOFCHANNELCONFIG                 STD_OFF  /**< Deactivateable: 'NmOsek_ChannelConfig.AnyChannelInLimpHomeIdx' Reason: 'Synchronization Point is turned OFF for each NmOsek channel in a coordination cluster OR Coordinator Support is turned OFF in Nm OR Wait Bus Sleep Extensions are turned OFF in NmOsek' */
#define NMOSEK_ANYCHANNELINLIMPHOMEUSEDOFCHANNELCONFIG                STD_OFF  /**< Deactivateable: 'NmOsek_ChannelConfig.AnyChannelInLimpHomeUsed' Reason: 'Synchronization Point is turned OFF for each NmOsek channel in a coordination cluster OR Coordinator Support is turned OFF in Nm OR Wait Bus Sleep Extensions are turned OFF in NmOsek' */
#define NMOSEK_COMMNETWORKHANDLEREFOFCHANNELCONFIG                    STD_ON
#define NMOSEK_LIMPHOMESHORTNUMBEROFCHANNELCONFIG                     STD_OFF  /**< Deactivateable: 'NmOsek_ChannelConfig.LimpHomeShortNumber' Reason: 'CanSM Bor Time L1 is always equal to CanSM Bor Time L2 or BusOff Notification Enabled is turned OFF' */
#define NMOSEK_LIMPHOMESHORTTIMEOFCHANNELCONFIG                       STD_OFF  /**< Deactivateable: 'NmOsek_ChannelConfig.LimpHomeShortTime' Reason: 'CanSM Bor Time L1 is always equal to CanSM Bor Time L2 or BusOff Notification Enabled is turned OFF' */
#define NMOSEK_LIMPHOMETIMEOFCHANNELCONFIG                            STD_ON
#define NMOSEK_NODECONFIGENDIDXOFCHANNELCONFIG                        STD_OFF  /**< Deactivateable: 'NmOsek_ChannelConfig.NodeConfigEndIdx' Reason: 'Use Nm Node List is OFF' */
#define NMOSEK_NODECONFIGSTARTIDXOFCHANNELCONFIG                      STD_OFF  /**< Deactivateable: 'NmOsek_ChannelConfig.NodeConfigStartIdx' Reason: 'Use Nm Node List is OFF' */
#define NMOSEK_NODEIDOFFSETOFCHANNELCONFIG                            STD_OFF  /**< Deactivateable: 'NmOsek_ChannelConfig.NodeIdOffset' Reason: 'Last Byte of CAN ID is not used as Node Id' */
#define NMOSEK_NODESPECNOHIBYTEOFCHANNELCONFIG                        STD_OFF  /**< Deactivateable: 'NmOsek_ChannelConfig.NodeSpecNoHiByte' Reason: 'Node Spec No Enabled is OFF' */
#define NMOSEK_NODESPECNOLOBYTEOFCHANNELCONFIG                        STD_OFF  /**< Deactivateable: 'NmOsek_ChannelConfig.NodeSpecNoLoByte' Reason: 'Node Spec No Enabled is OFF' */
#define NMOSEK_RINGMAXTIMEOFCHANNELCONFIG                             STD_ON
#define NMOSEK_RINGTYPTIMEOFCHANNELCONFIG                             STD_ON
#define NMOSEK_SYNCPOINTINTALLINNORMALOFCHANNELCONFIG                 STD_OFF  /**< Deactivateable: 'NmOsek_ChannelConfig.SyncPointIntAllInNormal' Reason: 'Wait Bus Sleep Extensions are turned OFF in NmOsek OR Coordinator Support Enabled is OFF in Nm' */
#define NMOSEK_SYNCPOINTINTMODLHSHORTTIMEOFCHANNELCONFIG              STD_OFF  /**< Deactivateable: 'NmOsek_ChannelConfig.SyncPointIntModLHShortTime' Reason: 'CanSM Bor Time L1 is always equal to CanSM Bor Time L2 OR Coordinator Support Enabled is OFF in Nm' */
#define NMOSEK_SYNCPOINTINTMODLHTIMEOFCHANNELCONFIG                   STD_OFF  /**< Deactivateable: 'NmOsek_ChannelConfig.SyncPointIntModLHTime' Reason: 'Coordinator Support Enabled is OFF' */
#define NMOSEK_SYNCPOINTNETWORKRELEASEINTERVALOFCHANNELCONFIG         STD_OFF  /**< Deactivateable: 'NmOsek_ChannelConfig.SyncPointNetworkReleaseInterval' Reason: 'Coordinator Support Enabled is OFF' */
#define NMOSEK_SYNCHRONIZINGNETWORKOFCHANNELCONFIG                    STD_OFF  /**< Deactivateable: 'NmOsek_ChannelConfig.SynchronizingNetwork' Reason: 'Coordinator Support Enabled is OFF' */
#define NMOSEK_TXCONFIRMATIONTIMEOUTTIMEOFCHANNELCONFIG               STD_OFF  /**< Deactivateable: 'NmOsek_ChannelConfig.TxConfirmationTimeoutTime' Reason: '('Tx Confirmation Timeout Time' is not defined in any NmOsekChannelConfig container and the Implementation Variant of NmOsek is VARIANT-PRE-COMPILE or VARIANT-POST-BUILD-SELECTABLE) or (Passive Mode Enabled is turned ON in Nm) or (Tx Deadline Monitoring In Com Enabled is turned ON and Wake Up Frame Enabled is turned OFF)' */
#define NMOSEK_WAITBUSSLEEPTIMEOFCHANNELCONFIG                        STD_ON
#define NMOSEK_DESIREDNMSTATE                                         STD_ON
#define NMOSEK_EXPECTEDCOMPATIBILITYVERSION                           STD_OFF  /**< Deactivateable: 'NmOsek_ExpectedCompatibilityVersion' Reason: 'Variant is not VARIANT-POST-BUILD-LOADABLE' */
#define NMOSEK_FINALMAGICNUMBER                                       STD_OFF  /**< Deactivateable: 'NmOsek_FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define NMOSEK_FIRSTMESSAGESHALLBENMMESSAGEOFGLOBALCONFIG             STD_ON
#define NMOSEK_FIRSTTXCONFORRXIND                                     STD_OFF  /**< Deactivateable: 'NmOsek_FirstTxConfOrRxInd' Reason: 'First Message Shall be Nm Message is turned OFF' */
#define NMOSEK_GENERATORCOMPATIBILITYVERSION                          STD_OFF  /**< Deactivateable: 'NmOsek_GeneratorCompatibilityVersion' Reason: 'Variant is not VARIANT-POST-BUILD-LOADABLE' */
#define NMOSEK_INITDATAHASHCODE                                       STD_OFF  /**< Deactivateable: 'NmOsek_InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define NMOSEK_INSTANCEIDOFGLOBALCONFIG                               STD_ON
#define NMOSEK_INTERNALSTATE                                          STD_ON
#define NMOSEK_LASTBYTEOFCANIDASNODEIDENABLEDOFGLOBALCONFIG           STD_ON
#define NMOSEK_LEAVELHONLYONRXINDICATIONENABLEDOFGLOBALCONFIG         STD_ON
#define NMOSEK_LOGICALSUCCESSOR                                       STD_ON
#define NMOSEK_MSGTIMEOUTTIMER                                        STD_OFF  /**< Deactivateable: 'NmOsek_MsgTimeoutTimer' Reason: '('Tx Confirmation Timeout Time' is not defined in any NmOsekChannelConfig container and the Implementation Variant of NmOsek is VARIANT-PRE-COMPILE or VARIANT-POST-BUILD-SELECTABLE) or (Passive Mode Enabled is turned ON in Nm) or (Tx Deadline Monitoring In Com Enabled is turned ON)' */
#define NMOSEK_NMRESETIGNORERXEXCEPTALIVEENABLEDOFGLOBALCONFIG        STD_ON
#define NMOSEK_NMSTATE                                                STD_ON
#define NMOSEK_NODECONFIG                                             STD_OFF  /**< Deactivateable: 'NmOsek_NodeConfig' Reason: 'Use Nm Node List is OFF' */
#define NMOSEK_NUMBEROFNMCONFIGNODESOFGLOBALCONFIG                    STD_ON
#define NMOSEK_PBCHANNELCONFIG                                        STD_ON
#define NMOSEK_AWAKETXUSERDATACOMIPDUIDOFPBCHANNELCONFIG              STD_OFF  /**< Deactivateable: 'NmOsek_PbChannelConfig.AwakeTxUserDataComIpduId' Reason: 'Not more than one Tx User Data Pdus have been found or NmPassiveModeEnabled is ON or NmComUserDataSupport is OFF or TxDeadlineMonitoringInComEnabled is OFF' */
#define NMOSEK_AWAKETXUSERDATAPDUIDOFPBCHANNELCONFIG                  STD_ON
#define NMOSEK_CONFIRMTXUSERDATAPDUOFPBCHANNELCONFIG                  STD_OFF  /**< Deactivateable: 'NmOsek_PbChannelConfig.ConfirmTxUserDataPdu' Reason: 'NmPassiveModeEnabled is ON or NmComUserDataSupport is OFF or PduRTxConfirmation is OFF for NmOsek' */
#define NMOSEK_MASKEDBITSOFPBCHANNELCONFIG                            STD_ON
#define NMOSEK_NODEIDOFPBCHANNELCONFIG                                STD_ON
#define NMOSEK_RANGEMASKOFPBCHANNELCONFIG                             STD_ON
#define NMOSEK_RXMESSAGEDATAENDIDXOFPBCHANNELCONFIG                   STD_ON
#define NMOSEK_RXMESSAGEDATALENGTHOFPBCHANNELCONFIG                   STD_ON
#define NMOSEK_RXMESSAGEDATASTARTIDXOFPBCHANNELCONFIG                 STD_ON
#define NMOSEK_RXMESSAGEDATAUSEDOFPBCHANNELCONFIG                     STD_ON
#define NMOSEK_RXMESSAGEDATA_DESTIDIDXOFPBCHANNELCONFIG               STD_ON
#define NMOSEK_RXMESSAGEDATA_NODSPNENDIDXOFPBCHANNELCONFIG            STD_OFF  /**< Deactivateable: 'NmOsek_PbChannelConfig.RxMessageData_NodSpNEndIdx' Reason: 'the optional indirection is deactivated because RxMessageData_NodSpNUsedOfPbChannelConfig is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define NMOSEK_RXMESSAGEDATA_NODSPNLENGTHOFPBCHANNELCONFIG            STD_OFF  /**< Deactivateable: 'NmOsek_PbChannelConfig.RxMessageData_NodSpNLength' Reason: 'the optional indirection is deactivated because RxMessageData_NodSpNUsedOfPbChannelConfig is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define NMOSEK_RXMESSAGEDATA_NODSPNSTARTIDXOFPBCHANNELCONFIG          STD_OFF  /**< Deactivateable: 'NmOsek_PbChannelConfig.RxMessageData_NodSpNStartIdx' Reason: 'the optional indirection is deactivated because RxMessageData_NodSpNUsedOfPbChannelConfig is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define NMOSEK_RXMESSAGEDATA_NODSPNUSEDOFPBCHANNELCONFIG              STD_OFF  /**< Deactivateable: 'NmOsek_PbChannelConfig.RxMessageData_NodSpNUsed' Reason: 'the optional indirection is deactivated because RxMessageData_NodSpNUsedOfPbChannelConfig is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define NMOSEK_RXMESSAGEDATA_OPCODEIDXOFPBCHANNELCONFIG               STD_ON
#define NMOSEK_RXMESSAGEDATA_SLEEPIDXOFPBCHANNELCONFIG                STD_ON
#define NMOSEK_RXMESSAGEDATA_USERDATAENDIDXOFPBCHANNELCONFIG          STD_ON
#define NMOSEK_RXMESSAGEDATA_USERDATALENGTHOFPBCHANNELCONFIG          STD_ON
#define NMOSEK_RXMESSAGEDATA_USERDATASTARTIDXOFPBCHANNELCONFIG        STD_ON
#define NMOSEK_RXMESSAGEDATA_USERDATAUSEDOFPBCHANNELCONFIG            STD_ON
#define NMOSEK_RXMESSAGEDATA_WUP_INITIDXOFPBCHANNELCONFIG             STD_OFF  /**< Deactivateable: 'NmOsek_PbChannelConfig.RxMessageData_Wup_InitIdx' Reason: 'the optional indirection is deactivated because RxMessageData_Wup_InitUsedOfPbChannelConfig is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define NMOSEK_RXMESSAGEDATA_WUP_INITUSEDOFPBCHANNELCONFIG            STD_OFF  /**< Deactivateable: 'NmOsek_PbChannelConfig.RxMessageData_Wup_InitUsed' Reason: 'the optional indirection is deactivated because RxMessageData_Wup_InitUsedOfPbChannelConfig is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define NMOSEK_TXMESSAGEDATAENDIDXOFPBCHANNELCONFIG                   STD_ON
#define NMOSEK_TXMESSAGEDATALENGTHOFPBCHANNELCONFIG                   STD_ON
#define NMOSEK_TXMESSAGEDATASTARTIDXOFPBCHANNELCONFIG                 STD_ON
#define NMOSEK_TXMESSAGEDATAUSEDOFPBCHANNELCONFIG                     STD_ON
#define NMOSEK_TXMESSAGEDATA_DESTIDIDXOFPBCHANNELCONFIG               STD_ON
#define NMOSEK_TXMESSAGEDATA_NODSPNENDIDXOFPBCHANNELCONFIG            STD_OFF  /**< Deactivateable: 'NmOsek_PbChannelConfig.TxMessageData_NodSpNEndIdx' Reason: 'the optional indirection is deactivated because TxMessageData_NodSpNUsedOfPbChannelConfig is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define NMOSEK_TXMESSAGEDATA_NODSPNLENGTHOFPBCHANNELCONFIG            STD_OFF  /**< Deactivateable: 'NmOsek_PbChannelConfig.TxMessageData_NodSpNLength' Reason: 'the optional indirection is deactivated because TxMessageData_NodSpNUsedOfPbChannelConfig is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define NMOSEK_TXMESSAGEDATA_NODSPNSTARTIDXOFPBCHANNELCONFIG          STD_OFF  /**< Deactivateable: 'NmOsek_PbChannelConfig.TxMessageData_NodSpNStartIdx' Reason: 'the optional indirection is deactivated because TxMessageData_NodSpNUsedOfPbChannelConfig is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define NMOSEK_TXMESSAGEDATA_NODSPNUSEDOFPBCHANNELCONFIG              STD_OFF  /**< Deactivateable: 'NmOsek_PbChannelConfig.TxMessageData_NodSpNUsed' Reason: 'the optional indirection is deactivated because TxMessageData_NodSpNUsedOfPbChannelConfig is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define NMOSEK_TXMESSAGEDATA_OPCODEIDXOFPBCHANNELCONFIG               STD_ON
#define NMOSEK_TXMESSAGEDATA_SLEEPIDXOFPBCHANNELCONFIG                STD_ON
#define NMOSEK_TXMESSAGEDATA_USERDATAENDIDXOFPBCHANNELCONFIG          STD_ON
#define NMOSEK_TXMESSAGEDATA_USERDATALENGTHOFPBCHANNELCONFIG          STD_ON
#define NMOSEK_TXMESSAGEDATA_USERDATASTARTIDXOFPBCHANNELCONFIG        STD_ON
#define NMOSEK_TXMESSAGEDATA_USERDATAUSEDOFPBCHANNELCONFIG            STD_ON
#define NMOSEK_TXMESSAGEDATA_WUP_INITIDXOFPBCHANNELCONFIG             STD_OFF  /**< Deactivateable: 'NmOsek_PbChannelConfig.TxMessageData_Wup_InitIdx' Reason: 'the optional indirection is deactivated because TxMessageData_Wup_InitUsedOfPbChannelConfig is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define NMOSEK_TXMESSAGEDATA_WUP_INITUSEDOFPBCHANNELCONFIG            STD_OFF  /**< Deactivateable: 'NmOsek_PbChannelConfig.TxMessageData_Wup_InitUsed' Reason: 'the optional indirection is deactivated because TxMessageData_Wup_InitUsedOfPbChannelConfig is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define NMOSEK_TXPDUIDOFPBCHANNELCONFIG                               STD_ON
#define NMOSEK_WAKEUPTXUSERDATACOMIPDUIDOFPBCHANNELCONFIG             STD_OFF  /**< Deactivateable: 'NmOsek_PbChannelConfig.WakeUpTxUserDataComIpduId' Reason: 'NmPassiveModeEnabled is ON or NmComUserDataSupport is OFF or TxDeadlineMonitoringInComEnabled is OFF' */
#define NMOSEK_WAKEUPTXUSERDATAPDUIDOFPBCHANNELCONFIG                 STD_ON
#define NMOSEK_PERIODICMSGTIMER                                       STD_OFF  /**< Deactivateable: 'NmOsek_PeriodicMsgTimer' Reason: 'Wake Up Frame Enabled is OFF' */
#define NMOSEK_PREPSENDSLEEPACK                                       STD_OFF  /**< Deactivateable: 'NmOsek_PrepSendSleepAck' Reason: 'Passive Mode Enabled is ON in NM or Sleepack Notification Enabled is OFF' */
#define NMOSEK_PREVIOUSNMSTATE                                        STD_OFF  /**< Deactivateable: 'NmOsek_PreviousNmState' Reason: 'State Change Ind Enabled is OFF in Nm' */
#define NMOSEK_REMOTESLEEPSTATE                                       STD_ON
#define NMOSEK_RESETTMAXINLHPREPSLEEPONRXRINGENABLEDOFGLOBALCONFIG    STD_ON
#define NMOSEK_RINGCYCLETIMER                                         STD_OFF  /**< Deactivateable: 'NmOsek_RingCycleTimer' Reason: 'Synchronization Point is turned OFF for each NmOsek channel in a coordination cluster OR Coordinator Support is turned OFF in Nm' */
#define NMOSEK_RXMESSAGEDATA                                          STD_ON
#define NMOSEK_RXNMMSGSOURCEADDR                                      STD_ON
#define NMOSEK_RXTXCNT                                                STD_ON
#define NMOSEK_SAMSGREQSTATE                                          STD_OFF  /**< Deactivateable: 'NmOsek_SAMsgReqState' Reason: 'Skipped Alive Message Request Enabled is OFF' */
#define NMOSEK_SAMSGREQTIMER                                          STD_OFF  /**< Deactivateable: 'NmOsek_SAMsgReqTimer' Reason: 'Skipped Alive Message Request Enabled is OFF' */
#define NMOSEK_SAFEBSWCHECKSOFGLOBALCONFIG                            STD_ON
#define NMOSEK_SENDWAKEUPFRAME                                        STD_OFF  /**< Deactivateable: 'NmOsek_SendWakeUpFrame' Reason: 'Wake Up Frame Enabled is OFF' */
#define NMOSEK_SIZEOFACTION                                           STD_ON
#define NMOSEK_SIZEOFCANISBUSOFF                                      STD_ON
#define NMOSEK_SIZEOFCHANNELCONFIG                                    STD_ON
#define NMOSEK_SIZEOFDESIREDNMSTATE                                   STD_ON
#define NMOSEK_SIZEOFINTERNALSTATE                                    STD_ON
#define NMOSEK_SIZEOFLOGICALSUCCESSOR                                 STD_ON
#define NMOSEK_SIZEOFNMSTATE                                          STD_ON
#define NMOSEK_SIZEOFPBCHANNELCONFIG                                  STD_ON
#define NMOSEK_SIZEOFREMOTESLEEPSTATE                                 STD_ON
#define NMOSEK_SIZEOFRXMESSAGEDATA                                    STD_ON
#define NMOSEK_SIZEOFRXNMMSGSOURCEADDR                                STD_ON
#define NMOSEK_SIZEOFRXTXCNT                                          STD_ON
#define NMOSEK_SIZEOFTIMEOUTTIMER                                     STD_ON
#define NMOSEK_SIZEOFTXMESSAGEDATA                                    STD_ON
#define NMOSEK_SIZEOFTXREQUEST                                        STD_ON
#define NMOSEK_SYNCPOINTTIMER                                         STD_OFF  /**< Deactivateable: 'NmOsek_SyncPointTimer' Reason: 'Synchronization Point is turned OFF for each NmOsek channel in a coordination cluster OR Coordinator Support is turned OFF in Nm' */
#define NMOSEK_SYSTONMCHANNELIND                                      STD_OFF  /**< Deactivateable: 'NmOsek_SysToNmChannelInd' Reason: 'Channel Optimization is ON or each NmOsek internal channel index matches the corresponding ComMChannel Id' */
#define NMOSEK_TIMEOUTTIMER                                           STD_ON
#define NMOSEK_TOKENMONITORINGOFGLOBALCONFIG                          STD_ON
#define NMOSEK_TXDEADLINEMONITORINGINCOMENABLEDOFGLOBALCONFIG         STD_ON
#define NMOSEK_TXMESSAGEDATA                                          STD_ON
#define NMOSEK_TXREQUEST                                              STD_ON
#define NMOSEK_USENMNODELISTOFGLOBALCONFIG                            STD_ON
#define NMOSEK_VERSIONINFOAPIOFGLOBALCONFIG                           STD_ON
#define NMOSEK_WBSTRANSITIONONRINGMSGONLYENABLEDOFGLOBALCONFIG        STD_ON
#define NMOSEK_PCCONFIG                                               STD_ON
#define NMOSEK_ACTIONOFPCCONFIG                                       STD_ON
#define NMOSEK_BUSOFFNOTIFICATIONENABLEDOFGLOBALCONFIGOFPCCONFIG      STD_ON
#define NMOSEK_CANISBUSOFFOFPCCONFIG                                  STD_ON
#define NMOSEK_CHANNELCONFIGOFPCCONFIG                                STD_ON
#define NMOSEK_DESIREDNMSTATEOFPCCONFIG                               STD_ON
#define NMOSEK_EXPECTEDCOMPATIBILITYVERSIONOFPCCONFIG                 STD_OFF  /**< Deactivateable: 'NmOsek_PCConfig.ExpectedCompatibilityVersion' Reason: 'Variant is not VARIANT-POST-BUILD-LOADABLE' */
#define NMOSEK_FINALMAGICNUMBEROFPCCONFIG                             STD_OFF  /**< Deactivateable: 'NmOsek_PCConfig.FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define NMOSEK_FIRSTMESSAGESHALLBENMMESSAGEOFGLOBALCONFIGOFPCCONFIG   STD_ON
#define NMOSEK_GENERATORCOMPATIBILITYVERSIONOFPCCONFIG                STD_OFF  /**< Deactivateable: 'NmOsek_PCConfig.GeneratorCompatibilityVersion' Reason: 'Variant is not VARIANT-POST-BUILD-LOADABLE' */
#define NMOSEK_INITDATAHASHCODEOFPCCONFIG                             STD_OFF  /**< Deactivateable: 'NmOsek_PCConfig.InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define NMOSEK_INSTANCEIDOFGLOBALCONFIGOFPCCONFIG                     STD_ON
#define NMOSEK_INTERNALSTATEOFPCCONFIG                                STD_ON
#define NMOSEK_LASTBYTEOFCANIDASNODEIDENABLEDOFGLOBALCONFIGOFPCCONFIG STD_ON
#define NMOSEK_LEAVELHONLYONRXINDICATIONENABLEDOFGLOBALCONFIGOFPCCONFIG STD_ON
#define NMOSEK_LOGICALSUCCESSOROFPCCONFIG                             STD_ON
#define NMOSEK_NMRESETIGNORERXEXCEPTALIVEENABLEDOFGLOBALCONFIGOFPCCONFIG STD_ON
#define NMOSEK_NMSTATEOFPCCONFIG                                      STD_ON
#define NMOSEK_NUMBEROFNMCONFIGNODESOFGLOBALCONFIGOFPCCONFIG          STD_ON
#define NMOSEK_PBCHANNELCONFIGOFPCCONFIG                              STD_ON
#define NMOSEK_REMOTESLEEPSTATEOFPCCONFIG                             STD_ON
#define NMOSEK_RESETTMAXINLHPREPSLEEPONRXRINGENABLEDOFGLOBALCONFIGOFPCCONFIG STD_ON
#define NMOSEK_RXMESSAGEDATAOFPCCONFIG                                STD_ON
#define NMOSEK_RXNMMSGSOURCEADDROFPCCONFIG                            STD_ON
#define NMOSEK_RXTXCNTOFPCCONFIG                                      STD_ON
#define NMOSEK_SAFEBSWCHECKSOFGLOBALCONFIGOFPCCONFIG                  STD_ON
#define NMOSEK_SIZEOFACTIONOFPCCONFIG                                 STD_ON
#define NMOSEK_SIZEOFCANISBUSOFFOFPCCONFIG                            STD_ON
#define NMOSEK_SIZEOFCHANNELCONFIGOFPCCONFIG                          STD_ON
#define NMOSEK_SIZEOFDESIREDNMSTATEOFPCCONFIG                         STD_ON
#define NMOSEK_SIZEOFINTERNALSTATEOFPCCONFIG                          STD_ON
#define NMOSEK_SIZEOFLOGICALSUCCESSOROFPCCONFIG                       STD_ON
#define NMOSEK_SIZEOFNMSTATEOFPCCONFIG                                STD_ON
#define NMOSEK_SIZEOFPBCHANNELCONFIGOFPCCONFIG                        STD_ON
#define NMOSEK_SIZEOFREMOTESLEEPSTATEOFPCCONFIG                       STD_ON
#define NMOSEK_SIZEOFRXMESSAGEDATAOFPCCONFIG                          STD_ON
#define NMOSEK_SIZEOFRXNMMSGSOURCEADDROFPCCONFIG                      STD_ON
#define NMOSEK_SIZEOFRXTXCNTOFPCCONFIG                                STD_ON
#define NMOSEK_SIZEOFTIMEOUTTIMEROFPCCONFIG                           STD_ON
#define NMOSEK_SIZEOFTXMESSAGEDATAOFPCCONFIG                          STD_ON
#define NMOSEK_SIZEOFTXREQUESTOFPCCONFIG                              STD_ON
#define NMOSEK_TIMEOUTTIMEROFPCCONFIG                                 STD_ON
#define NMOSEK_TOKENMONITORINGOFGLOBALCONFIGOFPCCONFIG                STD_ON
#define NMOSEK_TXDEADLINEMONITORINGINCOMENABLEDOFGLOBALCONFIGOFPCCONFIG STD_ON
#define NMOSEK_TXMESSAGEDATAOFPCCONFIG                                STD_ON
#define NMOSEK_TXREQUESTOFPCCONFIG                                    STD_ON
#define NMOSEK_USENMNODELISTOFGLOBALCONFIGOFPCCONFIG                  STD_ON
#define NMOSEK_VERSIONINFOAPIOFGLOBALCONFIGOFPCCONFIG                 STD_ON
#define NMOSEK_WBSTRANSITIONONRINGMSGONLYENABLEDOFGLOBALCONFIGOFPCCONFIG STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  NmOsekPCMinNumericValueDefines  NmOsek Min Numeric Value Defines (PRE_COMPILE)
  \brief  These defines are used to implement against the minimum value in numerical based data.
  \{
*/ 
#define NMOSEK_MIN_ACTION                                             0u
#define NMOSEK_MIN_ANYCHANNELINLIMPHOME                               0u
#define NMOSEK_MIN_BUSOFFCOUNTER                                      0u
#define NMOSEK_MIN_INTERNALSTATE                                      0u
#define NMOSEK_MIN_LOGICALSUCCESSOR                                   0u
#define NMOSEK_MIN_MSGTIMEOUTTIMER                                    0u
#define NMOSEK_MIN_NODECONFIG                                         0u
#define NMOSEK_MIN_PERIODICMSGTIMER                                   0u
#define NMOSEK_MIN_REMOTESLEEPSTATE                                   0u
#define NMOSEK_MIN_RINGCYCLETIMER                                     0u
#define NMOSEK_MIN_RXMESSAGEDATA                                      0u
#define NMOSEK_MIN_RXNMMSGSOURCEADDR                                  0u
#define NMOSEK_MIN_RXTXCNT                                            0u
#define NMOSEK_MIN_SAMSGREQSTATE                                      0u
#define NMOSEK_MIN_SAMSGREQTIMER                                      0u
#define NMOSEK_MIN_SYNCPOINTTIMER                                     0u
#define NMOSEK_MIN_TIMEOUTTIMER                                       0u
#define NMOSEK_MIN_TXMESSAGEDATA                                      0u
/** 
  \}
*/ 

/** 
  \defgroup  NmOsekPCMaxNumericValueDefines  NmOsek Max Numeric Value Defines (PRE_COMPILE)
  \brief  These defines are used to implement against the maximum value in numerical based data.
  \{
*/ 
#define NMOSEK_MAX_ACTION                                             255u
#define NMOSEK_MAX_ANYCHANNELINLIMPHOME                               255u
#define NMOSEK_MAX_BUSOFFCOUNTER                                      255u
#define NMOSEK_MAX_INTERNALSTATE                                      65535u
#define NMOSEK_MAX_LOGICALSUCCESSOR                                   255u
#define NMOSEK_MAX_MSGTIMEOUTTIMER                                    65535u
#define NMOSEK_MAX_NODECONFIG                                         255u
#define NMOSEK_MAX_PERIODICMSGTIMER                                   65535u
#define NMOSEK_MAX_REMOTESLEEPSTATE                                   255u
#define NMOSEK_MAX_RINGCYCLETIMER                                     65535u
#define NMOSEK_MAX_RXMESSAGEDATA                                      255u
#define NMOSEK_MAX_RXNMMSGSOURCEADDR                                  255u
#define NMOSEK_MAX_RXTXCNT                                            255u
#define NMOSEK_MAX_SAMSGREQSTATE                                      255u
#define NMOSEK_MAX_SAMSGREQTIMER                                      65535u
#define NMOSEK_MAX_SYNCPOINTTIMER                                     65535u
#define NMOSEK_MAX_TIMEOUTTIMER                                       65535u
#define NMOSEK_MAX_TXMESSAGEDATA                                      255u
/** 
  \}
*/ 

/** 
  \defgroup  NmOsekPCNoReferenceDefines  NmOsek No Reference Defines (PRE_COMPILE)
  \brief  These defines are used to indicate unused indexes in data relations.
  \{
*/ 
#define NMOSEK_NO_ANYCHANNELINLIMPHOMEIDXOFCHANNELCONFIG              65535u
#define NMOSEK_NO_AWAKETXUSERDATACOMIPDUIDOFPBCHANNELCONFIG           65535u
#define NMOSEK_NO_AWAKETXUSERDATAPDUIDOFPBCHANNELCONFIG               255u
#define NMOSEK_NO_NODEIDOFPBCHANNELCONFIG                             255u
#define NMOSEK_NO_RXMESSAGEDATAENDIDXOFPBCHANNELCONFIG                255u
#define NMOSEK_NO_RXMESSAGEDATASTARTIDXOFPBCHANNELCONFIG              255u
#define NMOSEK_NO_RXMESSAGEDATA_NODSPNENDIDXOFPBCHANNELCONFIG         65535u
#define NMOSEK_NO_RXMESSAGEDATA_NODSPNSTARTIDXOFPBCHANNELCONFIG       65535u
#define NMOSEK_NO_RXMESSAGEDATA_USERDATAENDIDXOFPBCHANNELCONFIG       255u
#define NMOSEK_NO_RXMESSAGEDATA_USERDATASTARTIDXOFPBCHANNELCONFIG     255u
#define NMOSEK_NO_RXMESSAGEDATA_WUP_INITIDXOFPBCHANNELCONFIG          65535u
#define NMOSEK_NO_TXMESSAGEDATAENDIDXOFPBCHANNELCONFIG                255u
#define NMOSEK_NO_TXMESSAGEDATASTARTIDXOFPBCHANNELCONFIG              255u
#define NMOSEK_NO_TXMESSAGEDATA_NODSPNENDIDXOFPBCHANNELCONFIG         65535u
#define NMOSEK_NO_TXMESSAGEDATA_NODSPNSTARTIDXOFPBCHANNELCONFIG       65535u
#define NMOSEK_NO_TXMESSAGEDATA_USERDATAENDIDXOFPBCHANNELCONFIG       255u
#define NMOSEK_NO_TXMESSAGEDATA_USERDATASTARTIDXOFPBCHANNELCONFIG     255u
#define NMOSEK_NO_TXMESSAGEDATA_WUP_INITIDXOFPBCHANNELCONFIG          65535u
#define NMOSEK_NO_TXPDUIDOFPBCHANNELCONFIG                            255u
#define NMOSEK_NO_WAKEUPTXUSERDATACOMIPDUIDOFPBCHANNELCONFIG          65535u
#define NMOSEK_NO_WAKEUPTXUSERDATAPDUIDOFPBCHANNELCONFIG              255u
#define NMOSEK_NO_SYSTONMCHANNELIND                                   255u
#define NMOSEK_NO_EXPECTEDCOMPATIBILITYVERSION                        65535u
/** 
  \}
*/ 

/** 
  \defgroup  NmOsekPCMaskedBitDefines  NmOsek Masked Bit Defines (PRE_COMPILE)
  \brief  These defines are masks to extract packed boolean data.
  \{
*/ 
#define NMOSEK_RXMESSAGEDATAUSEDOFPBCHANNELCONFIG_MASK                0x08u
#define NMOSEK_RXMESSAGEDATA_USERDATAUSEDOFPBCHANNELCONFIG_MASK       0x04u
#define NMOSEK_TXMESSAGEDATAUSEDOFPBCHANNELCONFIG_MASK                0x02u
#define NMOSEK_TXMESSAGEDATA_USERDATAUSEDOFPBCHANNELCONFIG_MASK       0x01u
/** 
  \}
*/ 

/** 
  \defgroup  NmOsekPCIsReducedToDefineDefines  NmOsek Is Reduced To Define Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define is STD_ON else STD_OFF.
  \{
*/ 
#define NMOSEK_ISDEF_ANYCHANNELINLIMPHOMEIDXOFCHANNELCONFIG           STD_OFF
#define NMOSEK_ISDEF_ANYCHANNELINLIMPHOMEUSEDOFCHANNELCONFIG          STD_OFF
#define NMOSEK_ISDEF_COMMNETWORKHANDLEREFOFCHANNELCONFIG              STD_OFF
#define NMOSEK_ISDEF_LIMPHOMESHORTNUMBEROFCHANNELCONFIG               STD_OFF
#define NMOSEK_ISDEF_LIMPHOMESHORTTIMEOFCHANNELCONFIG                 STD_OFF
#define NMOSEK_ISDEF_LIMPHOMETIMEOFCHANNELCONFIG                      STD_OFF
#define NMOSEK_ISDEF_NODECONFIGENDIDXOFCHANNELCONFIG                  STD_OFF
#define NMOSEK_ISDEF_NODECONFIGSTARTIDXOFCHANNELCONFIG                STD_OFF
#define NMOSEK_ISDEF_NODEIDOFFSETOFCHANNELCONFIG                      STD_OFF
#define NMOSEK_ISDEF_NODESPECNOHIBYTEOFCHANNELCONFIG                  STD_OFF
#define NMOSEK_ISDEF_NODESPECNOLOBYTEOFCHANNELCONFIG                  STD_OFF
#define NMOSEK_ISDEF_RINGMAXTIMEOFCHANNELCONFIG                       STD_OFF
#define NMOSEK_ISDEF_RINGTYPTIMEOFCHANNELCONFIG                       STD_OFF
#define NMOSEK_ISDEF_SYNCPOINTINTALLINNORMALOFCHANNELCONFIG           STD_OFF
#define NMOSEK_ISDEF_SYNCPOINTINTMODLHSHORTTIMEOFCHANNELCONFIG        STD_OFF
#define NMOSEK_ISDEF_SYNCPOINTINTMODLHTIMEOFCHANNELCONFIG             STD_OFF
#define NMOSEK_ISDEF_SYNCPOINTNETWORKRELEASEINTERVALOFCHANNELCONFIG   STD_OFF
#define NMOSEK_ISDEF_SYNCHRONIZINGNETWORKOFCHANNELCONFIG              STD_OFF
#define NMOSEK_ISDEF_TXCONFIRMATIONTIMEOUTTIMEOFCHANNELCONFIG         STD_OFF
#define NMOSEK_ISDEF_WAITBUSSLEEPTIMEOFCHANNELCONFIG                  STD_OFF
#define NMOSEK_ISDEF_AWAKETXUSERDATACOMIPDUIDOFPBCHANNELCONFIG        STD_OFF
#define NMOSEK_ISDEF_AWAKETXUSERDATAPDUIDOFPBCHANNELCONFIG            STD_OFF
#define NMOSEK_ISDEF_CONFIRMTXUSERDATAPDUOFPBCHANNELCONFIG            STD_OFF
#define NMOSEK_ISDEF_MASKEDBITSOFPBCHANNELCONFIG                      STD_OFF
#define NMOSEK_ISDEF_NODEIDOFPBCHANNELCONFIG                          STD_OFF
#define NMOSEK_ISDEF_RANGEMASKOFPBCHANNELCONFIG                       STD_OFF
#define NMOSEK_ISDEF_RXMESSAGEDATAENDIDXOFPBCHANNELCONFIG             STD_OFF
#define NMOSEK_ISDEF_RXMESSAGEDATALENGTHOFPBCHANNELCONFIG             STD_OFF
#define NMOSEK_ISDEF_RXMESSAGEDATASTARTIDXOFPBCHANNELCONFIG           STD_OFF
#define NMOSEK_ISDEF_RXMESSAGEDATAUSEDOFPBCHANNELCONFIG               STD_OFF
#define NMOSEK_ISDEF_RXMESSAGEDATA_DESTIDIDXOFPBCHANNELCONFIG         STD_OFF
#define NMOSEK_ISDEF_RXMESSAGEDATA_NODSPNENDIDXOFPBCHANNELCONFIG      STD_OFF
#define NMOSEK_ISDEF_RXMESSAGEDATA_NODSPNLENGTHOFPBCHANNELCONFIG      STD_OFF
#define NMOSEK_ISDEF_RXMESSAGEDATA_NODSPNSTARTIDXOFPBCHANNELCONFIG    STD_OFF
#define NMOSEK_ISDEF_RXMESSAGEDATA_NODSPNUSEDOFPBCHANNELCONFIG        STD_OFF
#define NMOSEK_ISDEF_RXMESSAGEDATA_OPCODEIDXOFPBCHANNELCONFIG         STD_OFF
#define NMOSEK_ISDEF_RXMESSAGEDATA_SLEEPIDXOFPBCHANNELCONFIG          STD_OFF
#define NMOSEK_ISDEF_RXMESSAGEDATA_USERDATAENDIDXOFPBCHANNELCONFIG    STD_OFF
#define NMOSEK_ISDEF_RXMESSAGEDATA_USERDATALENGTHOFPBCHANNELCONFIG    STD_OFF
#define NMOSEK_ISDEF_RXMESSAGEDATA_USERDATASTARTIDXOFPBCHANNELCONFIG  STD_OFF
#define NMOSEK_ISDEF_RXMESSAGEDATA_USERDATAUSEDOFPBCHANNELCONFIG      STD_OFF
#define NMOSEK_ISDEF_RXMESSAGEDATA_WUP_INITIDXOFPBCHANNELCONFIG       STD_OFF
#define NMOSEK_ISDEF_RXMESSAGEDATA_WUP_INITUSEDOFPBCHANNELCONFIG      STD_OFF
#define NMOSEK_ISDEF_TXMESSAGEDATAENDIDXOFPBCHANNELCONFIG             STD_OFF
#define NMOSEK_ISDEF_TXMESSAGEDATALENGTHOFPBCHANNELCONFIG             STD_OFF
#define NMOSEK_ISDEF_TXMESSAGEDATASTARTIDXOFPBCHANNELCONFIG           STD_OFF
#define NMOSEK_ISDEF_TXMESSAGEDATAUSEDOFPBCHANNELCONFIG               STD_OFF
#define NMOSEK_ISDEF_TXMESSAGEDATA_DESTIDIDXOFPBCHANNELCONFIG         STD_OFF
#define NMOSEK_ISDEF_TXMESSAGEDATA_NODSPNENDIDXOFPBCHANNELCONFIG      STD_OFF
#define NMOSEK_ISDEF_TXMESSAGEDATA_NODSPNLENGTHOFPBCHANNELCONFIG      STD_OFF
#define NMOSEK_ISDEF_TXMESSAGEDATA_NODSPNSTARTIDXOFPBCHANNELCONFIG    STD_OFF
#define NMOSEK_ISDEF_TXMESSAGEDATA_NODSPNUSEDOFPBCHANNELCONFIG        STD_OFF
#define NMOSEK_ISDEF_TXMESSAGEDATA_OPCODEIDXOFPBCHANNELCONFIG         STD_OFF
#define NMOSEK_ISDEF_TXMESSAGEDATA_SLEEPIDXOFPBCHANNELCONFIG          STD_OFF
#define NMOSEK_ISDEF_TXMESSAGEDATA_USERDATAENDIDXOFPBCHANNELCONFIG    STD_OFF
#define NMOSEK_ISDEF_TXMESSAGEDATA_USERDATALENGTHOFPBCHANNELCONFIG    STD_OFF
#define NMOSEK_ISDEF_TXMESSAGEDATA_USERDATASTARTIDXOFPBCHANNELCONFIG  STD_OFF
#define NMOSEK_ISDEF_TXMESSAGEDATA_USERDATAUSEDOFPBCHANNELCONFIG      STD_OFF
#define NMOSEK_ISDEF_TXMESSAGEDATA_WUP_INITIDXOFPBCHANNELCONFIG       STD_OFF
#define NMOSEK_ISDEF_TXMESSAGEDATA_WUP_INITUSEDOFPBCHANNELCONFIG      STD_OFF
#define NMOSEK_ISDEF_TXPDUIDOFPBCHANNELCONFIG                         STD_OFF
#define NMOSEK_ISDEF_WAKEUPTXUSERDATACOMIPDUIDOFPBCHANNELCONFIG       STD_OFF
#define NMOSEK_ISDEF_WAKEUPTXUSERDATAPDUIDOFPBCHANNELCONFIG           STD_OFF
#define NMOSEK_ISDEF_SYSTONMCHANNELIND                                STD_OFF
#define NMOSEK_ISDEF_ACTIONOFPCCONFIG                                 STD_ON
#define NMOSEK_ISDEF_CANISBUSOFFOFPCCONFIG                            STD_ON
#define NMOSEK_ISDEF_CHANNELCONFIGOFPCCONFIG                          STD_ON
#define NMOSEK_ISDEF_DESIREDNMSTATEOFPCCONFIG                         STD_ON
#define NMOSEK_ISDEF_EXPECTEDCOMPATIBILITYVERSIONOFPCCONFIG           STD_OFF
#define NMOSEK_ISDEF_FINALMAGICNUMBEROFPCCONFIG                       STD_OFF
#define NMOSEK_ISDEF_GENERATORCOMPATIBILITYVERSIONOFPCCONFIG          STD_OFF
#define NMOSEK_ISDEF_INITDATAHASHCODEOFPCCONFIG                       STD_OFF
#define NMOSEK_ISDEF_INTERNALSTATEOFPCCONFIG                          STD_ON
#define NMOSEK_ISDEF_LOGICALSUCCESSOROFPCCONFIG                       STD_ON
#define NMOSEK_ISDEF_NMSTATEOFPCCONFIG                                STD_ON
#define NMOSEK_ISDEF_PBCHANNELCONFIGOFPCCONFIG                        STD_ON
#define NMOSEK_ISDEF_REMOTESLEEPSTATEOFPCCONFIG                       STD_ON
#define NMOSEK_ISDEF_RXMESSAGEDATAOFPCCONFIG                          STD_ON
#define NMOSEK_ISDEF_RXNMMSGSOURCEADDROFPCCONFIG                      STD_ON
#define NMOSEK_ISDEF_RXTXCNTOFPCCONFIG                                STD_ON
#define NMOSEK_ISDEF_TIMEOUTTIMEROFPCCONFIG                           STD_ON
#define NMOSEK_ISDEF_TXMESSAGEDATAOFPCCONFIG                          STD_ON
#define NMOSEK_ISDEF_TXREQUESTOFPCCONFIG                              STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  NmOsekPCEqualsAlwaysToDefines  NmOsek Equals Always To Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define contains the always equals value.
  \{
*/ 
#define NMOSEK_EQ2_ANYCHANNELINLIMPHOMEIDXOFCHANNELCONFIG             
#define NMOSEK_EQ2_ANYCHANNELINLIMPHOMEUSEDOFCHANNELCONFIG            
#define NMOSEK_EQ2_COMMNETWORKHANDLEREFOFCHANNELCONFIG                
#define NMOSEK_EQ2_LIMPHOMESHORTNUMBEROFCHANNELCONFIG                 
#define NMOSEK_EQ2_LIMPHOMESHORTTIMEOFCHANNELCONFIG                   
#define NMOSEK_EQ2_LIMPHOMETIMEOFCHANNELCONFIG                        
#define NMOSEK_EQ2_NODECONFIGENDIDXOFCHANNELCONFIG                    
#define NMOSEK_EQ2_NODECONFIGSTARTIDXOFCHANNELCONFIG                  
#define NMOSEK_EQ2_NODEIDOFFSETOFCHANNELCONFIG                        
#define NMOSEK_EQ2_NODESPECNOHIBYTEOFCHANNELCONFIG                    
#define NMOSEK_EQ2_NODESPECNOLOBYTEOFCHANNELCONFIG                    
#define NMOSEK_EQ2_RINGMAXTIMEOFCHANNELCONFIG                         
#define NMOSEK_EQ2_RINGTYPTIMEOFCHANNELCONFIG                         
#define NMOSEK_EQ2_SYNCPOINTINTALLINNORMALOFCHANNELCONFIG             
#define NMOSEK_EQ2_SYNCPOINTINTMODLHSHORTTIMEOFCHANNELCONFIG          
#define NMOSEK_EQ2_SYNCPOINTINTMODLHTIMEOFCHANNELCONFIG               
#define NMOSEK_EQ2_SYNCPOINTNETWORKRELEASEINTERVALOFCHANNELCONFIG     
#define NMOSEK_EQ2_SYNCHRONIZINGNETWORKOFCHANNELCONFIG                
#define NMOSEK_EQ2_TXCONFIRMATIONTIMEOUTTIMEOFCHANNELCONFIG           
#define NMOSEK_EQ2_WAITBUSSLEEPTIMEOFCHANNELCONFIG                    
#define NMOSEK_EQ2_AWAKETXUSERDATACOMIPDUIDOFPBCHANNELCONFIG          
#define NMOSEK_EQ2_AWAKETXUSERDATAPDUIDOFPBCHANNELCONFIG              
#define NMOSEK_EQ2_CONFIRMTXUSERDATAPDUOFPBCHANNELCONFIG              
#define NMOSEK_EQ2_MASKEDBITSOFPBCHANNELCONFIG                        
#define NMOSEK_EQ2_NODEIDOFPBCHANNELCONFIG                            
#define NMOSEK_EQ2_RANGEMASKOFPBCHANNELCONFIG                         
#define NMOSEK_EQ2_RXMESSAGEDATAENDIDXOFPBCHANNELCONFIG               
#define NMOSEK_EQ2_RXMESSAGEDATALENGTHOFPBCHANNELCONFIG               
#define NMOSEK_EQ2_RXMESSAGEDATASTARTIDXOFPBCHANNELCONFIG             
#define NMOSEK_EQ2_RXMESSAGEDATAUSEDOFPBCHANNELCONFIG                 
#define NMOSEK_EQ2_RXMESSAGEDATA_DESTIDIDXOFPBCHANNELCONFIG           
#define NMOSEK_EQ2_RXMESSAGEDATA_NODSPNENDIDXOFPBCHANNELCONFIG        
#define NMOSEK_EQ2_RXMESSAGEDATA_NODSPNLENGTHOFPBCHANNELCONFIG        
#define NMOSEK_EQ2_RXMESSAGEDATA_NODSPNSTARTIDXOFPBCHANNELCONFIG      
#define NMOSEK_EQ2_RXMESSAGEDATA_NODSPNUSEDOFPBCHANNELCONFIG          
#define NMOSEK_EQ2_RXMESSAGEDATA_OPCODEIDXOFPBCHANNELCONFIG           
#define NMOSEK_EQ2_RXMESSAGEDATA_SLEEPIDXOFPBCHANNELCONFIG            
#define NMOSEK_EQ2_RXMESSAGEDATA_USERDATAENDIDXOFPBCHANNELCONFIG      
#define NMOSEK_EQ2_RXMESSAGEDATA_USERDATALENGTHOFPBCHANNELCONFIG      
#define NMOSEK_EQ2_RXMESSAGEDATA_USERDATASTARTIDXOFPBCHANNELCONFIG    
#define NMOSEK_EQ2_RXMESSAGEDATA_USERDATAUSEDOFPBCHANNELCONFIG        
#define NMOSEK_EQ2_RXMESSAGEDATA_WUP_INITIDXOFPBCHANNELCONFIG         
#define NMOSEK_EQ2_RXMESSAGEDATA_WUP_INITUSEDOFPBCHANNELCONFIG        
#define NMOSEK_EQ2_TXMESSAGEDATAENDIDXOFPBCHANNELCONFIG               
#define NMOSEK_EQ2_TXMESSAGEDATALENGTHOFPBCHANNELCONFIG               
#define NMOSEK_EQ2_TXMESSAGEDATASTARTIDXOFPBCHANNELCONFIG             
#define NMOSEK_EQ2_TXMESSAGEDATAUSEDOFPBCHANNELCONFIG                 
#define NMOSEK_EQ2_TXMESSAGEDATA_DESTIDIDXOFPBCHANNELCONFIG           
#define NMOSEK_EQ2_TXMESSAGEDATA_NODSPNENDIDXOFPBCHANNELCONFIG        
#define NMOSEK_EQ2_TXMESSAGEDATA_NODSPNLENGTHOFPBCHANNELCONFIG        
#define NMOSEK_EQ2_TXMESSAGEDATA_NODSPNSTARTIDXOFPBCHANNELCONFIG      
#define NMOSEK_EQ2_TXMESSAGEDATA_NODSPNUSEDOFPBCHANNELCONFIG          
#define NMOSEK_EQ2_TXMESSAGEDATA_OPCODEIDXOFPBCHANNELCONFIG           
#define NMOSEK_EQ2_TXMESSAGEDATA_SLEEPIDXOFPBCHANNELCONFIG            
#define NMOSEK_EQ2_TXMESSAGEDATA_USERDATAENDIDXOFPBCHANNELCONFIG      
#define NMOSEK_EQ2_TXMESSAGEDATA_USERDATALENGTHOFPBCHANNELCONFIG      
#define NMOSEK_EQ2_TXMESSAGEDATA_USERDATASTARTIDXOFPBCHANNELCONFIG    
#define NMOSEK_EQ2_TXMESSAGEDATA_USERDATAUSEDOFPBCHANNELCONFIG        
#define NMOSEK_EQ2_TXMESSAGEDATA_WUP_INITIDXOFPBCHANNELCONFIG         
#define NMOSEK_EQ2_TXMESSAGEDATA_WUP_INITUSEDOFPBCHANNELCONFIG        
#define NMOSEK_EQ2_TXPDUIDOFPBCHANNELCONFIG                           
#define NMOSEK_EQ2_WAKEUPTXUSERDATACOMIPDUIDOFPBCHANNELCONFIG         
#define NMOSEK_EQ2_WAKEUPTXUSERDATAPDUIDOFPBCHANNELCONFIG             
#define NMOSEK_EQ2_SYSTONMCHANNELIND                                  
#define NMOSEK_EQ2_ACTIONOFPCCONFIG                                   NmOsek_Action
#define NMOSEK_EQ2_CANISBUSOFFOFPCCONFIG                              NmOsek_CanIsBusOff
#define NMOSEK_EQ2_CHANNELCONFIGOFPCCONFIG                            NmOsek_ChannelConfig
#define NMOSEK_EQ2_DESIREDNMSTATEOFPCCONFIG                           NmOsek_DesiredNmState
#define NMOSEK_EQ2_EXPECTEDCOMPATIBILITYVERSIONOFPCCONFIG             
#define NMOSEK_EQ2_FINALMAGICNUMBEROFPCCONFIG                         
#define NMOSEK_EQ2_GENERATORCOMPATIBILITYVERSIONOFPCCONFIG            
#define NMOSEK_EQ2_INITDATAHASHCODEOFPCCONFIG                         
#define NMOSEK_EQ2_INTERNALSTATEOFPCCONFIG                            NmOsek_InternalState
#define NMOSEK_EQ2_LOGICALSUCCESSOROFPCCONFIG                         NmOsek_LogicalSuccessor
#define NMOSEK_EQ2_NMSTATEOFPCCONFIG                                  NmOsek_NmState
#define NMOSEK_EQ2_PBCHANNELCONFIGOFPCCONFIG                          NmOsek_PbChannelConfig
#define NMOSEK_EQ2_REMOTESLEEPSTATEOFPCCONFIG                         NmOsek_RemoteSleepState
#define NMOSEK_EQ2_RXMESSAGEDATAOFPCCONFIG                            NmOsek_RxMessageData
#define NMOSEK_EQ2_RXNMMSGSOURCEADDROFPCCONFIG                        NmOsek_RxNmMsgSourceAddr
#define NMOSEK_EQ2_RXTXCNTOFPCCONFIG                                  NmOsek_RxTxCnt
#define NMOSEK_EQ2_TIMEOUTTIMEROFPCCONFIG                             NmOsek_TimeoutTimer
#define NMOSEK_EQ2_TXMESSAGEDATAOFPCCONFIG                            NmOsek_TxMessageData
#define NMOSEK_EQ2_TXREQUESTOFPCCONFIG                                NmOsek_TxRequest
/** 
  \}
*/ 

/** 
  \defgroup  NmOsekPCSymbolicInitializationPointers  NmOsek Symbolic Initialization Pointers (PRE_COMPILE)
  \brief  Symbolic initialization pointers to be used in the call of a preinit or init function.
  \{
*/ 
#define NmOsek_Config_Ptr                                             NULL_PTR  /**< symbolic identifier which shall be used to initialize 'NmOsek' */
/** 
  \}
*/ 

/** 
  \defgroup  NmOsekPCInitializationSymbols  NmOsek Initialization Symbols (PRE_COMPILE)
  \brief  Symbolic initialization pointers which may be used in the call of a preinit or init function. Please note, that the defined value can be a 'NULL_PTR' and the address operator is not usable.
  \{
*/ 
#define NmOsek_Config                                                 NULL_PTR  /**< symbolic identifier which could be used to initialize 'NmOsek */
/** 
  \}
*/ 

/** 
  \defgroup  NmOsekPCGeneral  NmOsek General (PRE_COMPILE)
  \brief  General constant defines not associated with a group of defines.
  \{
*/ 
#define NMOSEK_CHECK_INIT_POINTER                                     STD_OFF  /**< STD_ON if the init pointer shall not be used as NULL_PTR and a check shall validate this. */
#define NMOSEK_FINAL_MAGIC_NUMBER                                     0xFF1Eu  /**< the precompile constant to validate the size of the initialization structure at initialization time of NmOsek */
#define NMOSEK_INDIVIDUAL_POSTBUILD                                   STD_OFF  /**< the precompile constant to check, that the module is individual postbuildable. The module 'NmOsek' is not configured to be postbuild capable. */
#define NMOSEK_INIT_DATA                                              NMOSEK_CONST  /**< CompilerMemClassDefine for the initialization data. */
#define NMOSEK_INIT_DATA_HASH_CODE                                    1118383742L  /**< the precompile constant to validate the initialization structure at initialization time of NmOsek with a hashcode. The seed value is '0xFF1Eu' */
#define NMOSEK_USE_ECUM_BSW_ERROR_HOOK                                STD_OFF  /**< STD_ON if the EcuM_BswErrorHook shall be called in the ConfigPtr check. */
#define NMOSEK_USE_INIT_POINTER                                       STD_OFF  /**< STD_ON if the init pointer NmOsek shall be used. */
/** 
  \}
*/ 



/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  NmOsekPBDataSwitches  NmOsek Data Switches  (POST_BUILD)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define NMOSEK_PBCONFIG                                               STD_OFF  /**< Deactivateable: 'NmOsek_PBConfig' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
#define NMOSEK_LTCONFIGIDXOFPBCONFIG                                  STD_OFF  /**< Deactivateable: 'NmOsek_PBConfig.LTConfigIdx' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
#define NMOSEK_PCCONFIGIDXOFPBCONFIG                                  STD_OFF  /**< Deactivateable: 'NmOsek_PBConfig.PCConfigIdx' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
/** 
  \}
*/ 

/** 
  \defgroup  NmOsekPBIsReducedToDefineDefines  NmOsek Is Reduced To Define Defines (POST_BUILD)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define is STD_ON else STD_OFF.
  \{
*/ 
#define NMOSEK_ISDEF_LTCONFIGIDXOFPBCONFIG                            STD_OFF
#define NMOSEK_ISDEF_PCCONFIGIDXOFPBCONFIG                            STD_OFF
/** 
  \}
*/ 

/** 
  \defgroup  NmOsekPBEqualsAlwaysToDefines  NmOsek Equals Always To Defines (POST_BUILD)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define contains the always equals value.
  \{
*/ 
#define NMOSEK_EQ2_LTCONFIGIDXOFPBCONFIG                              
#define NMOSEK_EQ2_PCCONFIGIDXOFPBCONFIG                              
/** 
  \}
*/ 



/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
/** 
  \defgroup  DataAccessMacros  Data Access Macros
  \brief  generated data access macros to abstract the generated data from the code to read and write CONST or VAR data.
  \{
*/ 
  /* PRQA S 3453 MACROS_3453 */  /* MD_CSL_3453 */
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
/** 
  \defgroup  NmOsekPCGetRootDataMacros  NmOsek Get Root Data Macros (PRE_COMPILE)
  \brief  These macros are used to get data pointers of root data.
  \{
*/ 
#define NmOsek_GetExpectedCompatibilityVersionOfPCConfig()            
#define NmOsek_GetFinalMagicNumberOfPCConfig()                        
#define NmOsek_GetGeneratorCompatibilityVersionOfPCConfig()           
#define NmOsek_GetInitDataHashCodeOfPCConfig()                        
/** 
  \}
*/ 

/** 
  \defgroup  NmOsekPCGetConstantDuplicatedRootDataMacros  NmOsek Get Constant Duplicated Root Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated by constance root data elements.
  \{
*/ 
#define NmOsek_GetActionOfPCConfig()                                  NmOsek_Action  /**< the pointer to NmOsek_Action */
#define NmOsek_IsBusOffNotificationEnabledOfGlobalConfigOfPCConfig()  (((TRUE)) != FALSE)
#define NmOsek_GetCanIsBusOffOfPCConfig()                             NmOsek_CanIsBusOff  /**< the pointer to NmOsek_CanIsBusOff */
#define NmOsek_GetChannelConfigOfPCConfig()                           NmOsek_ChannelConfig  /**< the pointer to NmOsek_ChannelConfig */
#define NmOsek_GetDesiredNmStateOfPCConfig()                          NmOsek_DesiredNmState  /**< the pointer to NmOsek_DesiredNmState */
#define NmOsek_IsFirstMessageShallBeNmMessageOfGlobalConfigOfPCConfig() (((FALSE)) != FALSE)
#define NmOsek_GetInstanceIdOfGlobalConfigOfPCConfig()                0uL
#define NmOsek_GetInternalStateOfPCConfig()                           NmOsek_InternalState  /**< the pointer to NmOsek_InternalState */
#define NmOsek_IsLastByteOfCanIdAsNodeIdEnabledOfGlobalConfigOfPCConfig() (((FALSE)) != FALSE)
#define NmOsek_IsLeaveLHOnlyOnRxIndicationEnabledOfGlobalConfigOfPCConfig() (((FALSE)) != FALSE)
#define NmOsek_GetLogicalSuccessorOfPCConfig()                        NmOsek_LogicalSuccessor  /**< the pointer to NmOsek_LogicalSuccessor */
#define NmOsek_IsNMResetIgnoreRxExceptAliveEnabledOfGlobalConfigOfPCConfig() (((FALSE)) != FALSE)
#define NmOsek_GetNmStateOfPCConfig()                                 NmOsek_NmState  /**< the pointer to NmOsek_NmState */
#define NmOsek_GetNumberOfNmConfigNodesOfGlobalConfigOfPCConfig()     32uL
#define NmOsek_GetPbChannelConfigOfPCConfig()                         NmOsek_PbChannelConfig  /**< the pointer to NmOsek_PbChannelConfig */
#define NmOsek_GetRemoteSleepStateOfPCConfig()                        NmOsek_RemoteSleepState  /**< the pointer to NmOsek_RemoteSleepState */
#define NmOsek_IsResetTMaxInLHPrepSleepOnRxRingEnabledOfGlobalConfigOfPCConfig() (((TRUE)) != FALSE)
#define NmOsek_GetRxMessageDataOfPCConfig()                           NmOsek_RxMessageData  /**< the pointer to NmOsek_RxMessageData */
#define NmOsek_GetRxNmMsgSourceAddrOfPCConfig()                       NmOsek_RxNmMsgSourceAddr  /**< the pointer to NmOsek_RxNmMsgSourceAddr */
#define NmOsek_GetRxTxCntOfPCConfig()                                 NmOsek_RxTxCnt  /**< the pointer to NmOsek_RxTxCnt */
#define NmOsek_IsSafeBswChecksOfGlobalConfigOfPCConfig()              (((FALSE)) != FALSE)
#define NmOsek_GetSizeOfChannelConfigOfPCConfig()                     1u  /**< the number of accomplishable value elements in NmOsek_ChannelConfig */
#define NmOsek_GetSizeOfPbChannelConfigOfPCConfig()                   1u  /**< the number of accomplishable value elements in NmOsek_PbChannelConfig */
#define NmOsek_GetSizeOfRxMessageDataOfPCConfig()                     8u  /**< the number of accomplishable value elements in NmOsek_RxMessageData */
#define NmOsek_GetSizeOfTxMessageDataOfPCConfig()                     8u  /**< the number of accomplishable value elements in NmOsek_TxMessageData */
#define NmOsek_GetTimeoutTimerOfPCConfig()                            NmOsek_TimeoutTimer  /**< the pointer to NmOsek_TimeoutTimer */
#define NmOsek_IsTokenMonitoringOfGlobalConfigOfPCConfig()            (((FALSE)) != FALSE)
#define NmOsek_IsTxDeadlineMonitoringInComEnabledOfGlobalConfigOfPCConfig() (((FALSE)) != FALSE)
#define NmOsek_GetTxMessageDataOfPCConfig()                           NmOsek_TxMessageData  /**< the pointer to NmOsek_TxMessageData */
#define NmOsek_GetTxRequestOfPCConfig()                               NmOsek_TxRequest  /**< the pointer to NmOsek_TxRequest */
#define NmOsek_IsUseNmNodeListOfGlobalConfigOfPCConfig()              (((FALSE)) != FALSE)
#define NmOsek_IsVersionInfoApiOfGlobalConfigOfPCConfig()             (((FALSE)) != FALSE)
#define NmOsek_IsWBSTransitionOnRingMsgOnlyEnabledOfGlobalConfigOfPCConfig() (((FALSE)) != FALSE)
/** 
  \}
*/ 

/** 
  \defgroup  NmOsekPCGetDuplicatedRootDataMacros  NmOsek Get Duplicated Root Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated root data elements.
  \{
*/ 
#define NmOsek_GetSizeOfActionOfPCConfig()                            NmOsek_GetSizeOfChannelConfigOfPCConfig()  /**< the number of accomplishable value elements in NmOsek_Action */
#define NmOsek_GetSizeOfCanIsBusOffOfPCConfig()                       NmOsek_GetSizeOfChannelConfigOfPCConfig()  /**< the number of accomplishable value elements in NmOsek_CanIsBusOff */
#define NmOsek_GetSizeOfDesiredNmStateOfPCConfig()                    NmOsek_GetSizeOfChannelConfigOfPCConfig()  /**< the number of accomplishable value elements in NmOsek_DesiredNmState */
#define NmOsek_GetSizeOfInternalStateOfPCConfig()                     NmOsek_GetSizeOfChannelConfigOfPCConfig()  /**< the number of accomplishable value elements in NmOsek_InternalState */
#define NmOsek_GetSizeOfLogicalSuccessorOfPCConfig()                  NmOsek_GetSizeOfChannelConfigOfPCConfig()  /**< the number of accomplishable value elements in NmOsek_LogicalSuccessor */
#define NmOsek_GetSizeOfNmStateOfPCConfig()                           NmOsek_GetSizeOfChannelConfigOfPCConfig()  /**< the number of accomplishable value elements in NmOsek_NmState */
#define NmOsek_GetSizeOfRemoteSleepStateOfPCConfig()                  NmOsek_GetSizeOfChannelConfigOfPCConfig()  /**< the number of accomplishable value elements in NmOsek_RemoteSleepState */
#define NmOsek_GetSizeOfRxNmMsgSourceAddrOfPCConfig()                 NmOsek_GetSizeOfChannelConfigOfPCConfig()  /**< the number of accomplishable value elements in NmOsek_RxNmMsgSourceAddr */
#define NmOsek_GetSizeOfRxTxCntOfPCConfig()                           NmOsek_GetSizeOfChannelConfigOfPCConfig()  /**< the number of accomplishable value elements in NmOsek_RxTxCnt */
#define NmOsek_GetSizeOfTimeoutTimerOfPCConfig()                      NmOsek_GetSizeOfChannelConfigOfPCConfig()  /**< the number of accomplishable value elements in NmOsek_TimeoutTimer */
#define NmOsek_GetSizeOfTxRequestOfPCConfig()                         NmOsek_GetSizeOfChannelConfigOfPCConfig()  /**< the number of accomplishable value elements in NmOsek_TxRequest */
/** 
  \}
*/ 

/** 
  \defgroup  NmOsekPCGetDataMacros  NmOsek Get Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read CONST and VAR data.
  \{
*/ 
#define NmOsek_GetAction(Index)                                       (NmOsek_GetActionOfPCConfig()[(Index)])
#define NmOsek_GetAnyChannelInLimpHome(Index)                         
#define NmOsek_GetBusOffCounter(Index)                                
#define NmOsek_IsCanIsBusOff(Index)                                   ((NmOsek_GetCanIsBusOffOfPCConfig()[(Index)]) != FALSE)
#define NmOsek_GetAnyChannelInLimpHomeIdxOfChannelConfig(Index)       
#define NmOsek_IsAnyChannelInLimpHomeUsedOfChannelConfig(Index)       
#define NmOsek_GetComMNetworkHandleRefOfChannelConfig(Index)          (NmOsek_GetChannelConfigOfPCConfig()[(Index)].ComMNetworkHandleRefOfChannelConfig)
#define NmOsek_GetLimpHomeShortNumberOfChannelConfig(Index)           
#define NmOsek_GetLimpHomeShortTimeOfChannelConfig(Index)             
#define NmOsek_GetLimpHomeTimeOfChannelConfig(Index)                  (NmOsek_GetChannelConfigOfPCConfig()[(Index)].LimpHomeTimeOfChannelConfig)
#define NmOsek_GetNodeConfigEndIdxOfChannelConfig(Index)              
#define NmOsek_GetNodeConfigStartIdxOfChannelConfig(Index)            
#define NmOsek_GetNodeIdOffsetOfChannelConfig(Index)                  
#define NmOsek_GetNodeSpecNoHiByteOfChannelConfig(Index)              
#define NmOsek_GetNodeSpecNoLoByteOfChannelConfig(Index)              
#define NmOsek_GetRingMaxTimeOfChannelConfig(Index)                   (NmOsek_GetChannelConfigOfPCConfig()[(Index)].RingMaxTimeOfChannelConfig)
#define NmOsek_GetRingTypTimeOfChannelConfig(Index)                   (NmOsek_GetChannelConfigOfPCConfig()[(Index)].RingTypTimeOfChannelConfig)
#define NmOsek_GetSyncPointIntAllInNormalOfChannelConfig(Index)       
#define NmOsek_GetSyncPointIntModLHShortTimeOfChannelConfig(Index)    
#define NmOsek_GetSyncPointIntModLHTimeOfChannelConfig(Index)         
#define NmOsek_GetSyncPointNetworkReleaseIntervalOfChannelConfig(Index) 
#define NmOsek_IsSynchronizingNetworkOfChannelConfig(Index)           
#define NmOsek_GetTxConfirmationTimeoutTimeOfChannelConfig(Index)     
#define NmOsek_GetWaitBusSleepTimeOfChannelConfig(Index)              (NmOsek_GetChannelConfigOfPCConfig()[(Index)].WaitBusSleepTimeOfChannelConfig)
#define NmOsek_GetDesiredNmState(Index)                               (NmOsek_GetDesiredNmStateOfPCConfig()[(Index)])
#define NmOsek_IsFirstTxConfOrRxInd(Index)                            
#define NmOsek_GetInternalState(Index)                                (NmOsek_GetInternalStateOfPCConfig()[(Index)])
#define NmOsek_GetLogicalSuccessor(Index)                             (NmOsek_GetLogicalSuccessorOfPCConfig()[(Index)])
#define NmOsek_GetMsgTimeoutTimer(Index)                              
#define NmOsek_GetNmState(Index)                                      (NmOsek_GetNmStateOfPCConfig()[(Index)])
#define NmOsek_GetNodeConfig(Index)                                   
#define NmOsek_GetAwakeTxUserDataComIpduIdOfPbChannelConfig(Index)    
#define NmOsek_GetAwakeTxUserDataPduIdOfPbChannelConfig(Index)        (NmOsek_GetPbChannelConfigOfPCConfig()[(Index)].AwakeTxUserDataPduIdOfPbChannelConfig)
#define NmOsek_IsConfirmTxUserDataPduOfPbChannelConfig(Index)         
#define NmOsek_GetMaskedBitsOfPbChannelConfig(Index)                  (NmOsek_GetPbChannelConfigOfPCConfig()[(Index)].MaskedBitsOfPbChannelConfig)
#define NmOsek_GetNodeIdOfPbChannelConfig(Index)                      (NmOsek_GetPbChannelConfigOfPCConfig()[(Index)].NodeIdOfPbChannelConfig)
#define NmOsek_GetRangeMaskOfPbChannelConfig(Index)                   (NmOsek_GetPbChannelConfigOfPCConfig()[(Index)].RangeMaskOfPbChannelConfig)
#define NmOsek_GetRxMessageDataEndIdxOfPbChannelConfig(Index)         (NmOsek_GetPbChannelConfigOfPCConfig()[(Index)].RxMessageDataEndIdxOfPbChannelConfig)
#define NmOsek_GetRxMessageDataLengthOfPbChannelConfig(Index)         (NmOsek_GetPbChannelConfigOfPCConfig()[(Index)].RxMessageDataLengthOfPbChannelConfig)
#define NmOsek_GetRxMessageDataStartIdxOfPbChannelConfig(Index)       (NmOsek_GetPbChannelConfigOfPCConfig()[(Index)].RxMessageDataStartIdxOfPbChannelConfig)
#define NmOsek_GetRxMessageData_DestIdIdxOfPbChannelConfig(Index)     (NmOsek_GetPbChannelConfigOfPCConfig()[(Index)].RxMessageData_DestIdIdxOfPbChannelConfig)
#define NmOsek_GetRxMessageData_NodSpNEndIdxOfPbChannelConfig(Index)  
#define NmOsek_GetRxMessageData_NodSpNLengthOfPbChannelConfig(Index)  
#define NmOsek_GetRxMessageData_NodSpNStartIdxOfPbChannelConfig(Index) 
#define NmOsek_IsRxMessageData_NodSpNUsedOfPbChannelConfig(Index)     
#define NmOsek_GetRxMessageData_OpCodeIdxOfPbChannelConfig(Index)     (NmOsek_GetPbChannelConfigOfPCConfig()[(Index)].RxMessageData_OpCodeIdxOfPbChannelConfig)
#define NmOsek_GetRxMessageData_SleepIdxOfPbChannelConfig(Index)      (NmOsek_GetPbChannelConfigOfPCConfig()[(Index)].RxMessageData_SleepIdxOfPbChannelConfig)
#define NmOsek_GetRxMessageData_UserDataEndIdxOfPbChannelConfig(Index) (NmOsek_GetPbChannelConfigOfPCConfig()[(Index)].RxMessageData_UserDataEndIdxOfPbChannelConfig)
#define NmOsek_GetRxMessageData_UserDataLengthOfPbChannelConfig(Index) (NmOsek_GetPbChannelConfigOfPCConfig()[(Index)].RxMessageData_UserDataLengthOfPbChannelConfig)
#define NmOsek_GetRxMessageData_UserDataStartIdxOfPbChannelConfig(Index) (NmOsek_GetPbChannelConfigOfPCConfig()[(Index)].RxMessageData_UserDataStartIdxOfPbChannelConfig)
#define NmOsek_GetRxMessageData_Wup_InitIdxOfPbChannelConfig(Index)   
#define NmOsek_IsRxMessageData_Wup_InitUsedOfPbChannelConfig(Index)   
#define NmOsek_GetTxMessageDataEndIdxOfPbChannelConfig(Index)         (NmOsek_GetPbChannelConfigOfPCConfig()[(Index)].TxMessageDataEndIdxOfPbChannelConfig)
#define NmOsek_GetTxMessageDataLengthOfPbChannelConfig(Index)         (NmOsek_GetPbChannelConfigOfPCConfig()[(Index)].TxMessageDataLengthOfPbChannelConfig)
#define NmOsek_GetTxMessageDataStartIdxOfPbChannelConfig(Index)       (NmOsek_GetPbChannelConfigOfPCConfig()[(Index)].TxMessageDataStartIdxOfPbChannelConfig)
#define NmOsek_GetTxMessageData_DestIdIdxOfPbChannelConfig(Index)     (NmOsek_GetPbChannelConfigOfPCConfig()[(Index)].TxMessageData_DestIdIdxOfPbChannelConfig)
#define NmOsek_GetTxMessageData_NodSpNEndIdxOfPbChannelConfig(Index)  
#define NmOsek_GetTxMessageData_NodSpNLengthOfPbChannelConfig(Index)  
#define NmOsek_GetTxMessageData_NodSpNStartIdxOfPbChannelConfig(Index) 
#define NmOsek_IsTxMessageData_NodSpNUsedOfPbChannelConfig(Index)     
#define NmOsek_GetTxMessageData_OpCodeIdxOfPbChannelConfig(Index)     (NmOsek_GetPbChannelConfigOfPCConfig()[(Index)].TxMessageData_OpCodeIdxOfPbChannelConfig)
#define NmOsek_GetTxMessageData_SleepIdxOfPbChannelConfig(Index)      (NmOsek_GetPbChannelConfigOfPCConfig()[(Index)].TxMessageData_SleepIdxOfPbChannelConfig)
#define NmOsek_GetTxMessageData_UserDataEndIdxOfPbChannelConfig(Index) (NmOsek_GetPbChannelConfigOfPCConfig()[(Index)].TxMessageData_UserDataEndIdxOfPbChannelConfig)
#define NmOsek_GetTxMessageData_UserDataLengthOfPbChannelConfig(Index) (NmOsek_GetPbChannelConfigOfPCConfig()[(Index)].TxMessageData_UserDataLengthOfPbChannelConfig)
#define NmOsek_GetTxMessageData_UserDataStartIdxOfPbChannelConfig(Index) (NmOsek_GetPbChannelConfigOfPCConfig()[(Index)].TxMessageData_UserDataStartIdxOfPbChannelConfig)
#define NmOsek_GetTxMessageData_Wup_InitIdxOfPbChannelConfig(Index)   
#define NmOsek_IsTxMessageData_Wup_InitUsedOfPbChannelConfig(Index)   
#define NmOsek_GetTxPduIdOfPbChannelConfig(Index)                     (NmOsek_GetPbChannelConfigOfPCConfig()[(Index)].TxPduIdOfPbChannelConfig)
#define NmOsek_GetWakeUpTxUserDataComIpduIdOfPbChannelConfig(Index)   
#define NmOsek_GetWakeUpTxUserDataPduIdOfPbChannelConfig(Index)       (NmOsek_GetPbChannelConfigOfPCConfig()[(Index)].WakeUpTxUserDataPduIdOfPbChannelConfig)
#define NmOsek_GetPeriodicMsgTimer(Index)                             
#define NmOsek_IsPrepSendSleepAck(Index)                              
#define NmOsek_GetPreviousNmState(Index)                              
#define NmOsek_GetRemoteSleepState(Index)                             (NmOsek_GetRemoteSleepStateOfPCConfig()[(Index)])
#define NmOsek_GetRingCycleTimer(Index)                               
#define NmOsek_GetRxMessageData(Index)                                (NmOsek_GetRxMessageDataOfPCConfig()[(Index)])
#define NmOsek_GetRxNmMsgSourceAddr(Index)                            (NmOsek_GetRxNmMsgSourceAddrOfPCConfig()[(Index)])
#define NmOsek_GetRxTxCnt(Index)                                      (NmOsek_GetRxTxCntOfPCConfig()[(Index)])
#define NmOsek_GetSAMsgReqState(Index)                                
#define NmOsek_GetSAMsgReqTimer(Index)                                
#define NmOsek_IsSendWakeUpFrame(Index)                               
#define NmOsek_GetSyncPointTimer(Index)                               
#define NmOsek_GetSysToNmChannelInd(Index)                            
#define NmOsek_GetTimeoutTimer(Index)                                 (NmOsek_GetTimeoutTimerOfPCConfig()[(Index)])
#define NmOsek_GetTxMessageData(Index)                                (NmOsek_GetTxMessageDataOfPCConfig()[(Index)])
#define NmOsek_IsTxRequest(Index)                                     ((NmOsek_GetTxRequestOfPCConfig()[(Index)]) != FALSE)
/** 
  \}
*/ 

/** 
  \defgroup  NmOsekPCGetDeduplicatedDataMacros  NmOsek Get Deduplicated Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated data elements.
  \{
*/ 
#define NmOsek_IsBusOffNotificationEnabledOfGlobalConfig()            NmOsek_IsBusOffNotificationEnabledOfGlobalConfigOfPCConfig()
#define NmOsek_GetExpectedCompatibilityVersion()                      
#define NmOsek_GetFinalMagicNumber()                                  
#define NmOsek_IsFirstMessageShallBeNmMessageOfGlobalConfig()         NmOsek_IsFirstMessageShallBeNmMessageOfGlobalConfigOfPCConfig()
#define NmOsek_GetGeneratorCompatibilityVersion()                     
#define NmOsek_GetInitDataHashCode()                                  
#define NmOsek_GetInstanceIdOfGlobalConfig()                          NmOsek_GetInstanceIdOfGlobalConfigOfPCConfig()
#define NmOsek_IsLastByteOfCanIdAsNodeIdEnabledOfGlobalConfig()       NmOsek_IsLastByteOfCanIdAsNodeIdEnabledOfGlobalConfigOfPCConfig()
#define NmOsek_IsLeaveLHOnlyOnRxIndicationEnabledOfGlobalConfig()     NmOsek_IsLeaveLHOnlyOnRxIndicationEnabledOfGlobalConfigOfPCConfig()
#define NmOsek_IsNMResetIgnoreRxExceptAliveEnabledOfGlobalConfig()    NmOsek_IsNMResetIgnoreRxExceptAliveEnabledOfGlobalConfigOfPCConfig()
#define NmOsek_GetNumberOfNmConfigNodesOfGlobalConfig()               NmOsek_GetNumberOfNmConfigNodesOfGlobalConfigOfPCConfig()
#define NmOsek_IsRxMessageDataUsedOfPbChannelConfig(Index)            (((boolean)(NmOsek_GetRxMessageDataLengthOfPbChannelConfig(Index) != 0)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to NmOsek_RxMessageData */
#define NmOsek_IsRxMessageData_UserDataUsedOfPbChannelConfig(Index)   (((boolean)(NmOsek_GetRxMessageData_UserDataLengthOfPbChannelConfig(Index) != 0)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to NmOsek_RxMessageData */
#define NmOsek_IsTxMessageDataUsedOfPbChannelConfig(Index)            (((boolean)(NmOsek_GetTxMessageDataLengthOfPbChannelConfig(Index) != 0)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to NmOsek_TxMessageData */
#define NmOsek_IsTxMessageData_UserDataUsedOfPbChannelConfig(Index)   (((boolean)(NmOsek_GetTxMessageData_UserDataLengthOfPbChannelConfig(Index) != 0)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to NmOsek_TxMessageData */
#define NmOsek_IsResetTMaxInLHPrepSleepOnRxRingEnabledOfGlobalConfig() NmOsek_IsResetTMaxInLHPrepSleepOnRxRingEnabledOfGlobalConfigOfPCConfig()
#define NmOsek_IsSafeBswChecksOfGlobalConfig()                        NmOsek_IsSafeBswChecksOfGlobalConfigOfPCConfig()
#define NmOsek_GetSizeOfAction()                                      NmOsek_GetSizeOfActionOfPCConfig()
#define NmOsek_GetSizeOfCanIsBusOff()                                 NmOsek_GetSizeOfCanIsBusOffOfPCConfig()
#define NmOsek_GetSizeOfChannelConfig()                               NmOsek_GetSizeOfChannelConfigOfPCConfig()
#define NmOsek_GetSizeOfDesiredNmState()                              NmOsek_GetSizeOfDesiredNmStateOfPCConfig()
#define NmOsek_GetSizeOfInternalState()                               NmOsek_GetSizeOfInternalStateOfPCConfig()
#define NmOsek_GetSizeOfLogicalSuccessor()                            NmOsek_GetSizeOfLogicalSuccessorOfPCConfig()
#define NmOsek_GetSizeOfNmState()                                     NmOsek_GetSizeOfNmStateOfPCConfig()
#define NmOsek_GetSizeOfPbChannelConfig()                             NmOsek_GetSizeOfPbChannelConfigOfPCConfig()
#define NmOsek_GetSizeOfRemoteSleepState()                            NmOsek_GetSizeOfRemoteSleepStateOfPCConfig()
#define NmOsek_GetSizeOfRxMessageData()                               NmOsek_GetSizeOfRxMessageDataOfPCConfig()
#define NmOsek_GetSizeOfRxNmMsgSourceAddr()                           NmOsek_GetSizeOfRxNmMsgSourceAddrOfPCConfig()
#define NmOsek_GetSizeOfRxTxCnt()                                     NmOsek_GetSizeOfRxTxCntOfPCConfig()
#define NmOsek_GetSizeOfTimeoutTimer()                                NmOsek_GetSizeOfTimeoutTimerOfPCConfig()
#define NmOsek_GetSizeOfTxMessageData()                               NmOsek_GetSizeOfTxMessageDataOfPCConfig()
#define NmOsek_GetSizeOfTxRequest()                                   NmOsek_GetSizeOfTxRequestOfPCConfig()
#define NmOsek_IsTokenMonitoringOfGlobalConfig()                      NmOsek_IsTokenMonitoringOfGlobalConfigOfPCConfig()
#define NmOsek_IsTxDeadlineMonitoringInComEnabledOfGlobalConfig()     NmOsek_IsTxDeadlineMonitoringInComEnabledOfGlobalConfigOfPCConfig()
#define NmOsek_IsUseNmNodeListOfGlobalConfig()                        NmOsek_IsUseNmNodeListOfGlobalConfigOfPCConfig()
#define NmOsek_IsVersionInfoApiOfGlobalConfig()                       NmOsek_IsVersionInfoApiOfGlobalConfigOfPCConfig()
#define NmOsek_IsWBSTransitionOnRingMsgOnlyEnabledOfGlobalConfig()    NmOsek_IsWBSTransitionOnRingMsgOnlyEnabledOfGlobalConfigOfPCConfig()
/** 
  \}
*/ 

/** 
  \defgroup  NmOsekPCSetDataMacros  NmOsek Set Data Macros (PRE_COMPILE)
  \brief  These macros can be used to write data.
  \{
*/ 
#define NmOsek_SetAction(Index, Value)                                NmOsek_GetActionOfPCConfig()[(Index)] = (Value)
#define NmOsek_SetAnyChannelInLimpHome(Index, Value)                  
#define NmOsek_SetBusOffCounter(Index, Value)                         
#define NmOsek_SetCanIsBusOff(Index, Value)                           NmOsek_GetCanIsBusOffOfPCConfig()[(Index)] = (Value)
#define NmOsek_SetDesiredNmState(Index, Value)                        NmOsek_GetDesiredNmStateOfPCConfig()[(Index)] = (Value)
#define NmOsek_SetFirstTxConfOrRxInd(Index, Value)                    
#define NmOsek_SetInternalState(Index, Value)                         NmOsek_GetInternalStateOfPCConfig()[(Index)] = (Value)
#define NmOsek_SetLogicalSuccessor(Index, Value)                      NmOsek_GetLogicalSuccessorOfPCConfig()[(Index)] = (Value)
#define NmOsek_SetMsgTimeoutTimer(Index, Value)                       
#define NmOsek_SetNmState(Index, Value)                               NmOsek_GetNmStateOfPCConfig()[(Index)] = (Value)
#define NmOsek_SetNodeConfig(Index, Value)                            
#define NmOsek_SetPeriodicMsgTimer(Index, Value)                      
#define NmOsek_SetPrepSendSleepAck(Index, Value)                      
#define NmOsek_SetPreviousNmState(Index, Value)                       
#define NmOsek_SetRemoteSleepState(Index, Value)                      NmOsek_GetRemoteSleepStateOfPCConfig()[(Index)] = (Value)
#define NmOsek_SetRingCycleTimer(Index, Value)                        
#define NmOsek_SetRxMessageData(Index, Value)                         NmOsek_GetRxMessageDataOfPCConfig()[(Index)] = (Value)
#define NmOsek_SetRxNmMsgSourceAddr(Index, Value)                     NmOsek_GetRxNmMsgSourceAddrOfPCConfig()[(Index)] = (Value)
#define NmOsek_SetRxTxCnt(Index, Value)                               NmOsek_GetRxTxCntOfPCConfig()[(Index)] = (Value)
#define NmOsek_SetSAMsgReqState(Index, Value)                         
#define NmOsek_SetSAMsgReqTimer(Index, Value)                         
#define NmOsek_SetSendWakeUpFrame(Index, Value)                       
#define NmOsek_SetSyncPointTimer(Index, Value)                        
#define NmOsek_SetTimeoutTimer(Index, Value)                          NmOsek_GetTimeoutTimerOfPCConfig()[(Index)] = (Value)
#define NmOsek_SetTxMessageData(Index, Value)                         NmOsek_GetTxMessageDataOfPCConfig()[(Index)] = (Value)
#define NmOsek_SetTxRequest(Index, Value)                             NmOsek_GetTxRequestOfPCConfig()[(Index)] = (Value)
/** 
  \}
*/ 

/** 
  \defgroup  NmOsekPCGetAddressOfDataMacros  NmOsek Get Address Of Data Macros (PRE_COMPILE)
  \brief  These macros can be used to get the data by the address operator.
  \{
*/ 
#define NmOsek_GetAddrRxMessageData(Index)                            &NmOsek_GetRxMessageData(Index)
#define NmOsek_GetAddrTxMessageData(Index)                            &NmOsek_GetTxMessageData(Index)
/** 
  \}
*/ 

/** 
  \defgroup  NmOsekPCHasMacros  NmOsek Has Macros (PRE_COMPILE)
  \brief  These macros can be used to detect at runtime a deactivated piece of information. TRUE in the CONFIGURATION_VARIANT PRE-COMPILE, TRUE or FALSE in the CONFIGURATION_VARIANT POST-BUILD.
  \{
*/ 
#define NmOsek_HasAction()                                            (TRUE != FALSE)
#define NmOsek_HasAnyChannelInLimpHome()                              
#define NmOsek_HasBusOffCounter()                                     
#define NmOsek_HasBusOffNotificationEnabledOfGlobalConfig()           (TRUE != FALSE)
#define NmOsek_HasCanIsBusOff()                                       (TRUE != FALSE)
#define NmOsek_HasChannelConfig()                                     (TRUE != FALSE)
#define NmOsek_HasAnyChannelInLimpHomeIdxOfChannelConfig()            
#define NmOsek_HasAnyChannelInLimpHomeUsedOfChannelConfig()           
#define NmOsek_HasComMNetworkHandleRefOfChannelConfig()               (TRUE != FALSE)
#define NmOsek_HasLimpHomeShortNumberOfChannelConfig()                
#define NmOsek_HasLimpHomeShortTimeOfChannelConfig()                  
#define NmOsek_HasLimpHomeTimeOfChannelConfig()                       (TRUE != FALSE)
#define NmOsek_HasNodeConfigEndIdxOfChannelConfig()                   
#define NmOsek_HasNodeConfigStartIdxOfChannelConfig()                 
#define NmOsek_HasNodeIdOffsetOfChannelConfig()                       
#define NmOsek_HasNodeSpecNoHiByteOfChannelConfig()                   
#define NmOsek_HasNodeSpecNoLoByteOfChannelConfig()                   
#define NmOsek_HasRingMaxTimeOfChannelConfig()                        (TRUE != FALSE)
#define NmOsek_HasRingTypTimeOfChannelConfig()                        (TRUE != FALSE)
#define NmOsek_HasSyncPointIntAllInNormalOfChannelConfig()            
#define NmOsek_HasSyncPointIntModLHShortTimeOfChannelConfig()         
#define NmOsek_HasSyncPointIntModLHTimeOfChannelConfig()              
#define NmOsek_HasSyncPointNetworkReleaseIntervalOfChannelConfig()    
#define NmOsek_HasSynchronizingNetworkOfChannelConfig()               
#define NmOsek_HasTxConfirmationTimeoutTimeOfChannelConfig()          
#define NmOsek_HasWaitBusSleepTimeOfChannelConfig()                   (TRUE != FALSE)
#define NmOsek_HasDesiredNmState()                                    (TRUE != FALSE)
#define NmOsek_HasExpectedCompatibilityVersion()                      
#define NmOsek_HasFinalMagicNumber()                                  
#define NmOsek_HasFirstMessageShallBeNmMessageOfGlobalConfig()        (TRUE != FALSE)
#define NmOsek_HasFirstTxConfOrRxInd()                                
#define NmOsek_HasGeneratorCompatibilityVersion()                     
#define NmOsek_HasInitDataHashCode()                                  
#define NmOsek_HasInstanceIdOfGlobalConfig()                          (TRUE != FALSE)
#define NmOsek_HasInternalState()                                     (TRUE != FALSE)
#define NmOsek_HasLastByteOfCanIdAsNodeIdEnabledOfGlobalConfig()      (TRUE != FALSE)
#define NmOsek_HasLeaveLHOnlyOnRxIndicationEnabledOfGlobalConfig()    (TRUE != FALSE)
#define NmOsek_HasLogicalSuccessor()                                  (TRUE != FALSE)
#define NmOsek_HasMsgTimeoutTimer()                                   
#define NmOsek_HasNMResetIgnoreRxExceptAliveEnabledOfGlobalConfig()   (TRUE != FALSE)
#define NmOsek_HasNmState()                                           (TRUE != FALSE)
#define NmOsek_HasNodeConfig()                                        
#define NmOsek_HasNumberOfNmConfigNodesOfGlobalConfig()               (TRUE != FALSE)
#define NmOsek_HasPbChannelConfig()                                   (TRUE != FALSE)
#define NmOsek_HasAwakeTxUserDataComIpduIdOfPbChannelConfig()         
#define NmOsek_HasAwakeTxUserDataPduIdOfPbChannelConfig()             (TRUE != FALSE)
#define NmOsek_HasConfirmTxUserDataPduOfPbChannelConfig()             
#define NmOsek_HasMaskedBitsOfPbChannelConfig()                       (TRUE != FALSE)
#define NmOsek_HasNodeIdOfPbChannelConfig()                           (TRUE != FALSE)
#define NmOsek_HasRangeMaskOfPbChannelConfig()                        (TRUE != FALSE)
#define NmOsek_HasRxMessageDataEndIdxOfPbChannelConfig()              (TRUE != FALSE)
#define NmOsek_HasRxMessageDataLengthOfPbChannelConfig()              (TRUE != FALSE)
#define NmOsek_HasRxMessageDataStartIdxOfPbChannelConfig()            (TRUE != FALSE)
#define NmOsek_HasRxMessageDataUsedOfPbChannelConfig()                (TRUE != FALSE)
#define NmOsek_HasRxMessageData_DestIdIdxOfPbChannelConfig()          (TRUE != FALSE)
#define NmOsek_HasRxMessageData_NodSpNEndIdxOfPbChannelConfig()       
#define NmOsek_HasRxMessageData_NodSpNLengthOfPbChannelConfig()       
#define NmOsek_HasRxMessageData_NodSpNStartIdxOfPbChannelConfig()     
#define NmOsek_HasRxMessageData_NodSpNUsedOfPbChannelConfig()         
#define NmOsek_HasRxMessageData_OpCodeIdxOfPbChannelConfig()          (TRUE != FALSE)
#define NmOsek_HasRxMessageData_SleepIdxOfPbChannelConfig()           (TRUE != FALSE)
#define NmOsek_HasRxMessageData_UserDataEndIdxOfPbChannelConfig()     (TRUE != FALSE)
#define NmOsek_HasRxMessageData_UserDataLengthOfPbChannelConfig()     (TRUE != FALSE)
#define NmOsek_HasRxMessageData_UserDataStartIdxOfPbChannelConfig()   (TRUE != FALSE)
#define NmOsek_HasRxMessageData_UserDataUsedOfPbChannelConfig()       (TRUE != FALSE)
#define NmOsek_HasRxMessageData_Wup_InitIdxOfPbChannelConfig()        
#define NmOsek_HasRxMessageData_Wup_InitUsedOfPbChannelConfig()       
#define NmOsek_HasTxMessageDataEndIdxOfPbChannelConfig()              (TRUE != FALSE)
#define NmOsek_HasTxMessageDataLengthOfPbChannelConfig()              (TRUE != FALSE)
#define NmOsek_HasTxMessageDataStartIdxOfPbChannelConfig()            (TRUE != FALSE)
#define NmOsek_HasTxMessageDataUsedOfPbChannelConfig()                (TRUE != FALSE)
#define NmOsek_HasTxMessageData_DestIdIdxOfPbChannelConfig()          (TRUE != FALSE)
#define NmOsek_HasTxMessageData_NodSpNEndIdxOfPbChannelConfig()       
#define NmOsek_HasTxMessageData_NodSpNLengthOfPbChannelConfig()       
#define NmOsek_HasTxMessageData_NodSpNStartIdxOfPbChannelConfig()     
#define NmOsek_HasTxMessageData_NodSpNUsedOfPbChannelConfig()         
#define NmOsek_HasTxMessageData_OpCodeIdxOfPbChannelConfig()          (TRUE != FALSE)
#define NmOsek_HasTxMessageData_SleepIdxOfPbChannelConfig()           (TRUE != FALSE)
#define NmOsek_HasTxMessageData_UserDataEndIdxOfPbChannelConfig()     (TRUE != FALSE)
#define NmOsek_HasTxMessageData_UserDataLengthOfPbChannelConfig()     (TRUE != FALSE)
#define NmOsek_HasTxMessageData_UserDataStartIdxOfPbChannelConfig()   (TRUE != FALSE)
#define NmOsek_HasTxMessageData_UserDataUsedOfPbChannelConfig()       (TRUE != FALSE)
#define NmOsek_HasTxMessageData_Wup_InitIdxOfPbChannelConfig()        
#define NmOsek_HasTxMessageData_Wup_InitUsedOfPbChannelConfig()       
#define NmOsek_HasTxPduIdOfPbChannelConfig()                          (TRUE != FALSE)
#define NmOsek_HasWakeUpTxUserDataComIpduIdOfPbChannelConfig()        
#define NmOsek_HasWakeUpTxUserDataPduIdOfPbChannelConfig()            (TRUE != FALSE)
#define NmOsek_HasPeriodicMsgTimer()                                  
#define NmOsek_HasPrepSendSleepAck()                                  
#define NmOsek_HasPreviousNmState()                                   
#define NmOsek_HasRemoteSleepState()                                  (TRUE != FALSE)
#define NmOsek_HasResetTMaxInLHPrepSleepOnRxRingEnabledOfGlobalConfig() (TRUE != FALSE)
#define NmOsek_HasRingCycleTimer()                                    
#define NmOsek_HasRxMessageData()                                     (TRUE != FALSE)
#define NmOsek_HasRxNmMsgSourceAddr()                                 (TRUE != FALSE)
#define NmOsek_HasRxTxCnt()                                           (TRUE != FALSE)
#define NmOsek_HasSAMsgReqState()                                     
#define NmOsek_HasSAMsgReqTimer()                                     
#define NmOsek_HasSafeBswChecksOfGlobalConfig()                       (TRUE != FALSE)
#define NmOsek_HasSendWakeUpFrame()                                   
#define NmOsek_HasSizeOfAction()                                      (TRUE != FALSE)
#define NmOsek_HasSizeOfCanIsBusOff()                                 (TRUE != FALSE)
#define NmOsek_HasSizeOfChannelConfig()                               (TRUE != FALSE)
#define NmOsek_HasSizeOfDesiredNmState()                              (TRUE != FALSE)
#define NmOsek_HasSizeOfInternalState()                               (TRUE != FALSE)
#define NmOsek_HasSizeOfLogicalSuccessor()                            (TRUE != FALSE)
#define NmOsek_HasSizeOfNmState()                                     (TRUE != FALSE)
#define NmOsek_HasSizeOfPbChannelConfig()                             (TRUE != FALSE)
#define NmOsek_HasSizeOfRemoteSleepState()                            (TRUE != FALSE)
#define NmOsek_HasSizeOfRxMessageData()                               (TRUE != FALSE)
#define NmOsek_HasSizeOfRxNmMsgSourceAddr()                           (TRUE != FALSE)
#define NmOsek_HasSizeOfRxTxCnt()                                     (TRUE != FALSE)
#define NmOsek_HasSizeOfTimeoutTimer()                                (TRUE != FALSE)
#define NmOsek_HasSizeOfTxMessageData()                               (TRUE != FALSE)
#define NmOsek_HasSizeOfTxRequest()                                   (TRUE != FALSE)
#define NmOsek_HasSyncPointTimer()                                    
#define NmOsek_HasSysToNmChannelInd()                                 
#define NmOsek_HasTimeoutTimer()                                      (TRUE != FALSE)
#define NmOsek_HasTokenMonitoringOfGlobalConfig()                     (TRUE != FALSE)
#define NmOsek_HasTxDeadlineMonitoringInComEnabledOfGlobalConfig()    (TRUE != FALSE)
#define NmOsek_HasTxMessageData()                                     (TRUE != FALSE)
#define NmOsek_HasTxRequest()                                         (TRUE != FALSE)
#define NmOsek_HasUseNmNodeListOfGlobalConfig()                       (TRUE != FALSE)
#define NmOsek_HasVersionInfoApiOfGlobalConfig()                      (TRUE != FALSE)
#define NmOsek_HasWBSTransitionOnRingMsgOnlyEnabledOfGlobalConfig()   (TRUE != FALSE)
#define NmOsek_HasPCConfig()                                          (TRUE != FALSE)
#define NmOsek_HasActionOfPCConfig()                                  (TRUE != FALSE)
#define NmOsek_HasBusOffNotificationEnabledOfGlobalConfigOfPCConfig() (TRUE != FALSE)
#define NmOsek_HasCanIsBusOffOfPCConfig()                             (TRUE != FALSE)
#define NmOsek_HasChannelConfigOfPCConfig()                           (TRUE != FALSE)
#define NmOsek_HasDesiredNmStateOfPCConfig()                          (TRUE != FALSE)
#define NmOsek_HasExpectedCompatibilityVersionOfPCConfig()            
#define NmOsek_HasFinalMagicNumberOfPCConfig()                        
#define NmOsek_HasFirstMessageShallBeNmMessageOfGlobalConfigOfPCConfig() (TRUE != FALSE)
#define NmOsek_HasGeneratorCompatibilityVersionOfPCConfig()           
#define NmOsek_HasInitDataHashCodeOfPCConfig()                        
#define NmOsek_HasInstanceIdOfGlobalConfigOfPCConfig()                (TRUE != FALSE)
#define NmOsek_HasInternalStateOfPCConfig()                           (TRUE != FALSE)
#define NmOsek_HasLastByteOfCanIdAsNodeIdEnabledOfGlobalConfigOfPCConfig() (TRUE != FALSE)
#define NmOsek_HasLeaveLHOnlyOnRxIndicationEnabledOfGlobalConfigOfPCConfig() (TRUE != FALSE)
#define NmOsek_HasLogicalSuccessorOfPCConfig()                        (TRUE != FALSE)
#define NmOsek_HasNMResetIgnoreRxExceptAliveEnabledOfGlobalConfigOfPCConfig() (TRUE != FALSE)
#define NmOsek_HasNmStateOfPCConfig()                                 (TRUE != FALSE)
#define NmOsek_HasNumberOfNmConfigNodesOfGlobalConfigOfPCConfig()     (TRUE != FALSE)
#define NmOsek_HasPbChannelConfigOfPCConfig()                         (TRUE != FALSE)
#define NmOsek_HasRemoteSleepStateOfPCConfig()                        (TRUE != FALSE)
#define NmOsek_HasResetTMaxInLHPrepSleepOnRxRingEnabledOfGlobalConfigOfPCConfig() (TRUE != FALSE)
#define NmOsek_HasRxMessageDataOfPCConfig()                           (TRUE != FALSE)
#define NmOsek_HasRxNmMsgSourceAddrOfPCConfig()                       (TRUE != FALSE)
#define NmOsek_HasRxTxCntOfPCConfig()                                 (TRUE != FALSE)
#define NmOsek_HasSafeBswChecksOfGlobalConfigOfPCConfig()             (TRUE != FALSE)
#define NmOsek_HasSizeOfActionOfPCConfig()                            (TRUE != FALSE)
#define NmOsek_HasSizeOfCanIsBusOffOfPCConfig()                       (TRUE != FALSE)
#define NmOsek_HasSizeOfChannelConfigOfPCConfig()                     (TRUE != FALSE)
#define NmOsek_HasSizeOfDesiredNmStateOfPCConfig()                    (TRUE != FALSE)
#define NmOsek_HasSizeOfInternalStateOfPCConfig()                     (TRUE != FALSE)
#define NmOsek_HasSizeOfLogicalSuccessorOfPCConfig()                  (TRUE != FALSE)
#define NmOsek_HasSizeOfNmStateOfPCConfig()                           (TRUE != FALSE)
#define NmOsek_HasSizeOfPbChannelConfigOfPCConfig()                   (TRUE != FALSE)
#define NmOsek_HasSizeOfRemoteSleepStateOfPCConfig()                  (TRUE != FALSE)
#define NmOsek_HasSizeOfRxMessageDataOfPCConfig()                     (TRUE != FALSE)
#define NmOsek_HasSizeOfRxNmMsgSourceAddrOfPCConfig()                 (TRUE != FALSE)
#define NmOsek_HasSizeOfRxTxCntOfPCConfig()                           (TRUE != FALSE)
#define NmOsek_HasSizeOfTimeoutTimerOfPCConfig()                      (TRUE != FALSE)
#define NmOsek_HasSizeOfTxMessageDataOfPCConfig()                     (TRUE != FALSE)
#define NmOsek_HasSizeOfTxRequestOfPCConfig()                         (TRUE != FALSE)
#define NmOsek_HasTimeoutTimerOfPCConfig()                            (TRUE != FALSE)
#define NmOsek_HasTokenMonitoringOfGlobalConfigOfPCConfig()           (TRUE != FALSE)
#define NmOsek_HasTxDeadlineMonitoringInComEnabledOfGlobalConfigOfPCConfig() (TRUE != FALSE)
#define NmOsek_HasTxMessageDataOfPCConfig()                           (TRUE != FALSE)
#define NmOsek_HasTxRequestOfPCConfig()                               (TRUE != FALSE)
#define NmOsek_HasUseNmNodeListOfGlobalConfigOfPCConfig()             (TRUE != FALSE)
#define NmOsek_HasVersionInfoApiOfGlobalConfigOfPCConfig()            (TRUE != FALSE)
#define NmOsek_HasWBSTransitionOnRingMsgOnlyEnabledOfGlobalConfigOfPCConfig() (TRUE != FALSE)
/** 
  \}
*/ 

/** 
  \defgroup  NmOsekPCIncrementDataMacros  NmOsek Increment Data Macros (PRE_COMPILE)
  \brief  These macros can be used to increment VAR data with numerical nature.
  \{
*/ 
#define NmOsek_IncAction(Index)                                       NmOsek_GetAction(Index)++
#define NmOsek_IncAnyChannelInLimpHome(Index)                         
#define NmOsek_IncBusOffCounter(Index)                                
#define NmOsek_IncDesiredNmState(Index)                               NmOsek_GetDesiredNmState(Index)++
#define NmOsek_IncInternalState(Index)                                NmOsek_GetInternalState(Index)++
#define NmOsek_IncLogicalSuccessor(Index)                             NmOsek_GetLogicalSuccessor(Index)++
#define NmOsek_IncMsgTimeoutTimer(Index)                              
#define NmOsek_IncNmState(Index)                                      NmOsek_GetNmState(Index)++
#define NmOsek_IncNodeConfig(Index)                                   
#define NmOsek_IncPeriodicMsgTimer(Index)                             
#define NmOsek_IncPreviousNmState(Index)                              
#define NmOsek_IncRemoteSleepState(Index)                             NmOsek_GetRemoteSleepState(Index)++
#define NmOsek_IncRingCycleTimer(Index)                               
#define NmOsek_IncRxMessageData(Index)                                NmOsek_GetRxMessageData(Index)++
#define NmOsek_IncRxNmMsgSourceAddr(Index)                            NmOsek_GetRxNmMsgSourceAddr(Index)++
#define NmOsek_IncRxTxCnt(Index)                                      NmOsek_GetRxTxCnt(Index)++
#define NmOsek_IncSAMsgReqState(Index)                                
#define NmOsek_IncSAMsgReqTimer(Index)                                
#define NmOsek_IncSyncPointTimer(Index)                               
#define NmOsek_IncTimeoutTimer(Index)                                 NmOsek_GetTimeoutTimer(Index)++
#define NmOsek_IncTxMessageData(Index)                                NmOsek_GetTxMessageData(Index)++
/** 
  \}
*/ 

/** 
  \defgroup  NmOsekPCDecrementDataMacros  NmOsek Decrement Data Macros (PRE_COMPILE)
  \brief  These macros can be used to decrement VAR data with numerical nature.
  \{
*/ 
#define NmOsek_DecAction(Index)                                       NmOsek_GetAction(Index)--
#define NmOsek_DecAnyChannelInLimpHome(Index)                         
#define NmOsek_DecBusOffCounter(Index)                                
#define NmOsek_DecDesiredNmState(Index)                               NmOsek_GetDesiredNmState(Index)--
#define NmOsek_DecInternalState(Index)                                NmOsek_GetInternalState(Index)--
#define NmOsek_DecLogicalSuccessor(Index)                             NmOsek_GetLogicalSuccessor(Index)--
#define NmOsek_DecMsgTimeoutTimer(Index)                              
#define NmOsek_DecNmState(Index)                                      NmOsek_GetNmState(Index)--
#define NmOsek_DecNodeConfig(Index)                                   
#define NmOsek_DecPeriodicMsgTimer(Index)                             
#define NmOsek_DecPreviousNmState(Index)                              
#define NmOsek_DecRemoteSleepState(Index)                             NmOsek_GetRemoteSleepState(Index)--
#define NmOsek_DecRingCycleTimer(Index)                               
#define NmOsek_DecRxMessageData(Index)                                NmOsek_GetRxMessageData(Index)--
#define NmOsek_DecRxNmMsgSourceAddr(Index)                            NmOsek_GetRxNmMsgSourceAddr(Index)--
#define NmOsek_DecRxTxCnt(Index)                                      NmOsek_GetRxTxCnt(Index)--
#define NmOsek_DecSAMsgReqState(Index)                                
#define NmOsek_DecSAMsgReqTimer(Index)                                
#define NmOsek_DecSyncPointTimer(Index)                               
#define NmOsek_DecTimeoutTimer(Index)                                 NmOsek_GetTimeoutTimer(Index)--
#define NmOsek_DecTxMessageData(Index)                                NmOsek_GetTxMessageData(Index)--
/** 
  \}
*/ 

  /* PRQA L:MACROS_3453 */
/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL ACCESS FUNCTION MACROS
**********************************************************************************************************************/


/** 
  \defgroup  DataAccessMacros  Data Access Macros
  \brief  generated data access macros to abstract the generated data from the code to read and write CONST or VAR data.
  \{
*/ 
  /* PRQA S 3453 MACROS_3453 */  /* MD_CSL_3453 */
/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
/** 
  \defgroup  NmOsekPBGetRootDataMacros  NmOsek Get Root Data Macros (POST_BUILD)
  \brief  These macros are used to get data pointers of root data.
  \{
*/ 
#define NmOsek_GetLTConfigIdxOfPBConfig()                             
#define NmOsek_GetPCConfigIdxOfPBConfig()                             
/** 
  \}
*/ 

/** 
  \defgroup  NmOsekPBHasMacros  NmOsek Has Macros (POST_BUILD)
  \brief  These macros can be used to detect at runtime a deactivated piece of information. TRUE in the CONFIGURATION_VARIANT PRE-COMPILE, TRUE or FALSE in the CONFIGURATION_VARIANT POST-BUILD.
  \{
*/ 
#define NmOsek_HasPBConfig()                                          
#define NmOsek_HasLTConfigIdxOfPBConfig()                             
#define NmOsek_HasPCConfigIdxOfPBConfig()                             
/** 
  \}
*/ 

  /* PRQA L:MACROS_3453 */
/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL ACCESS FUNCTION MACROS
**********************************************************************************************************************/







/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/


/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL SIMPLE DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  NmOsekPCIterableTypes  NmOsek Iterable Types (PRE_COMPILE)
  \brief  These type definitions are used to iterate over an array with least processor cycles for variable access as possible.
  \{
*/ 
/**   \brief  type used to iterate NmOsek_ChannelConfig */
typedef uint8_least NmOsek_ChannelConfigIterType;

/**   \brief  type used to iterate NmOsek_PbChannelConfig */
typedef uint8_least NmOsek_PbChannelConfigIterType;

/**   \brief  type used to iterate NmOsek_RxMessageData */
typedef uint8_least NmOsek_RxMessageDataIterType;

/**   \brief  type used to iterate NmOsek_TxMessageData */
typedef uint8_least NmOsek_TxMessageDataIterType;

/** 
  \}
*/ 

/** 
  \defgroup  NmOsekPCIterableTypesWithSizeRelations  NmOsek Iterable Types With Size Relations (PRE_COMPILE)
  \brief  These type definitions are used to iterate over a VAR based array with the same iterator as the related CONST array.
  \{
*/ 
/**   \brief  type used to iterate NmOsek_Action */
typedef NmOsek_ChannelConfigIterType NmOsek_ActionIterType;

/**   \brief  type used to iterate NmOsek_CanIsBusOff */
typedef NmOsek_ChannelConfigIterType NmOsek_CanIsBusOffIterType;

/**   \brief  type used to iterate NmOsek_DesiredNmState */
typedef NmOsek_ChannelConfigIterType NmOsek_DesiredNmStateIterType;

/**   \brief  type used to iterate NmOsek_InternalState */
typedef NmOsek_ChannelConfigIterType NmOsek_InternalStateIterType;

/**   \brief  type used to iterate NmOsek_LogicalSuccessor */
typedef NmOsek_ChannelConfigIterType NmOsek_LogicalSuccessorIterType;

/**   \brief  type used to iterate NmOsek_NmState */
typedef NmOsek_ChannelConfigIterType NmOsek_NmStateIterType;

/**   \brief  type used to iterate NmOsek_RemoteSleepState */
typedef NmOsek_ChannelConfigIterType NmOsek_RemoteSleepStateIterType;

/**   \brief  type used to iterate NmOsek_RxNmMsgSourceAddr */
typedef NmOsek_ChannelConfigIterType NmOsek_RxNmMsgSourceAddrIterType;

/**   \brief  type used to iterate NmOsek_RxTxCnt */
typedef NmOsek_ChannelConfigIterType NmOsek_RxTxCntIterType;

/**   \brief  type used to iterate NmOsek_TimeoutTimer */
typedef NmOsek_ChannelConfigIterType NmOsek_TimeoutTimerIterType;

/**   \brief  type used to iterate NmOsek_TxRequest */
typedef NmOsek_ChannelConfigIterType NmOsek_TxRequestIterType;

/** 
  \}
*/ 

/** 
  \defgroup  NmOsekPCValueTypes  NmOsek Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value based data representations.
  \{
*/ 
/**   \brief  value based type definition for NmOsek_Action */
typedef uint8 NmOsek_ActionType;

/**   \brief  value based type definition for NmOsek_BusOffNotificationEnabledOfGlobalConfig */
typedef boolean NmOsek_BusOffNotificationEnabledOfGlobalConfigType;

/**   \brief  value based type definition for NmOsek_CanIsBusOff */
typedef boolean NmOsek_CanIsBusOffType;

/**   \brief  value based type definition for NmOsek_ComMNetworkHandleRefOfChannelConfig */
typedef NetworkHandleType NmOsek_ComMNetworkHandleRefOfChannelConfigType;

/**   \brief  value based type definition for NmOsek_LimpHomeTimeOfChannelConfig */
typedef uint8 NmOsek_LimpHomeTimeOfChannelConfigType;

/**   \brief  value based type definition for NmOsek_RingMaxTimeOfChannelConfig */
typedef uint8 NmOsek_RingMaxTimeOfChannelConfigType;

/**   \brief  value based type definition for NmOsek_RingTypTimeOfChannelConfig */
typedef uint8 NmOsek_RingTypTimeOfChannelConfigType;

/**   \brief  value based type definition for NmOsek_WaitBusSleepTimeOfChannelConfig */
typedef uint8 NmOsek_WaitBusSleepTimeOfChannelConfigType;

/**   \brief  value based type definition for NmOsek_FirstMessageShallBeNmMessageOfGlobalConfig */
typedef boolean NmOsek_FirstMessageShallBeNmMessageOfGlobalConfigType;

/**   \brief  value based type definition for NmOsek_InstanceIdOfGlobalConfig */
typedef uint8 NmOsek_InstanceIdOfGlobalConfigType;

/**   \brief  value based type definition for NmOsek_InternalState */
typedef uint16 NmOsek_InternalStateType;

/**   \brief  value based type definition for NmOsek_LastByteOfCanIdAsNodeIdEnabledOfGlobalConfig */
typedef boolean NmOsek_LastByteOfCanIdAsNodeIdEnabledOfGlobalConfigType;

/**   \brief  value based type definition for NmOsek_LeaveLHOnlyOnRxIndicationEnabledOfGlobalConfig */
typedef boolean NmOsek_LeaveLHOnlyOnRxIndicationEnabledOfGlobalConfigType;

/**   \brief  value based type definition for NmOsek_LogicalSuccessor */
typedef uint8 NmOsek_LogicalSuccessorType;

/**   \brief  value based type definition for NmOsek_NMResetIgnoreRxExceptAliveEnabledOfGlobalConfig */
typedef boolean NmOsek_NMResetIgnoreRxExceptAliveEnabledOfGlobalConfigType;

/**   \brief  value based type definition for NmOsek_NumberOfNmConfigNodesOfGlobalConfig */
typedef uint8 NmOsek_NumberOfNmConfigNodesOfGlobalConfigType;

/**   \brief  value based type definition for NmOsek_AwakeTxUserDataPduIdOfPbChannelConfig */
typedef uint8 NmOsek_AwakeTxUserDataPduIdOfPbChannelConfigType;

/**   \brief  value based type definition for NmOsek_MaskedBitsOfPbChannelConfig */
typedef uint8 NmOsek_MaskedBitsOfPbChannelConfigType;

/**   \brief  value based type definition for NmOsek_NodeIdOfPbChannelConfig */
typedef uint8 NmOsek_NodeIdOfPbChannelConfigType;

/**   \brief  value based type definition for NmOsek_RangeMaskOfPbChannelConfig */
typedef uint8 NmOsek_RangeMaskOfPbChannelConfigType;

/**   \brief  value based type definition for NmOsek_RxMessageDataEndIdxOfPbChannelConfig */
typedef uint8 NmOsek_RxMessageDataEndIdxOfPbChannelConfigType;

/**   \brief  value based type definition for NmOsek_RxMessageDataLengthOfPbChannelConfig */
typedef uint8 NmOsek_RxMessageDataLengthOfPbChannelConfigType;

/**   \brief  value based type definition for NmOsek_RxMessageDataStartIdxOfPbChannelConfig */
typedef uint8 NmOsek_RxMessageDataStartIdxOfPbChannelConfigType;

/**   \brief  value based type definition for NmOsek_RxMessageDataUsedOfPbChannelConfig */
typedef boolean NmOsek_RxMessageDataUsedOfPbChannelConfigType;

/**   \brief  value based type definition for NmOsek_RxMessageData_DestIdIdxOfPbChannelConfig */
typedef uint8 NmOsek_RxMessageData_DestIdIdxOfPbChannelConfigType;

/**   \brief  value based type definition for NmOsek_RxMessageData_OpCodeIdxOfPbChannelConfig */
typedef uint8 NmOsek_RxMessageData_OpCodeIdxOfPbChannelConfigType;

/**   \brief  value based type definition for NmOsek_RxMessageData_SleepIdxOfPbChannelConfig */
typedef uint8 NmOsek_RxMessageData_SleepIdxOfPbChannelConfigType;

/**   \brief  value based type definition for NmOsek_RxMessageData_UserDataEndIdxOfPbChannelConfig */
typedef uint8 NmOsek_RxMessageData_UserDataEndIdxOfPbChannelConfigType;

/**   \brief  value based type definition for NmOsek_RxMessageData_UserDataLengthOfPbChannelConfig */
typedef uint8 NmOsek_RxMessageData_UserDataLengthOfPbChannelConfigType;

/**   \brief  value based type definition for NmOsek_RxMessageData_UserDataStartIdxOfPbChannelConfig */
typedef uint8 NmOsek_RxMessageData_UserDataStartIdxOfPbChannelConfigType;

/**   \brief  value based type definition for NmOsek_RxMessageData_UserDataUsedOfPbChannelConfig */
typedef boolean NmOsek_RxMessageData_UserDataUsedOfPbChannelConfigType;

/**   \brief  value based type definition for NmOsek_TxMessageDataEndIdxOfPbChannelConfig */
typedef uint8 NmOsek_TxMessageDataEndIdxOfPbChannelConfigType;

/**   \brief  value based type definition for NmOsek_TxMessageDataLengthOfPbChannelConfig */
typedef uint8 NmOsek_TxMessageDataLengthOfPbChannelConfigType;

/**   \brief  value based type definition for NmOsek_TxMessageDataStartIdxOfPbChannelConfig */
typedef uint8 NmOsek_TxMessageDataStartIdxOfPbChannelConfigType;

/**   \brief  value based type definition for NmOsek_TxMessageDataUsedOfPbChannelConfig */
typedef boolean NmOsek_TxMessageDataUsedOfPbChannelConfigType;

/**   \brief  value based type definition for NmOsek_TxMessageData_DestIdIdxOfPbChannelConfig */
typedef uint8 NmOsek_TxMessageData_DestIdIdxOfPbChannelConfigType;

/**   \brief  value based type definition for NmOsek_TxMessageData_OpCodeIdxOfPbChannelConfig */
typedef uint8 NmOsek_TxMessageData_OpCodeIdxOfPbChannelConfigType;

/**   \brief  value based type definition for NmOsek_TxMessageData_SleepIdxOfPbChannelConfig */
typedef uint8 NmOsek_TxMessageData_SleepIdxOfPbChannelConfigType;

/**   \brief  value based type definition for NmOsek_TxMessageData_UserDataEndIdxOfPbChannelConfig */
typedef uint8 NmOsek_TxMessageData_UserDataEndIdxOfPbChannelConfigType;

/**   \brief  value based type definition for NmOsek_TxMessageData_UserDataLengthOfPbChannelConfig */
typedef uint8 NmOsek_TxMessageData_UserDataLengthOfPbChannelConfigType;

/**   \brief  value based type definition for NmOsek_TxMessageData_UserDataStartIdxOfPbChannelConfig */
typedef uint8 NmOsek_TxMessageData_UserDataStartIdxOfPbChannelConfigType;

/**   \brief  value based type definition for NmOsek_TxMessageData_UserDataUsedOfPbChannelConfig */
typedef boolean NmOsek_TxMessageData_UserDataUsedOfPbChannelConfigType;

/**   \brief  value based type definition for NmOsek_TxPduIdOfPbChannelConfig */
typedef uint8 NmOsek_TxPduIdOfPbChannelConfigType;

/**   \brief  value based type definition for NmOsek_WakeUpTxUserDataPduIdOfPbChannelConfig */
typedef uint8 NmOsek_WakeUpTxUserDataPduIdOfPbChannelConfigType;

/**   \brief  value based type definition for NmOsek_RemoteSleepState */
typedef uint8 NmOsek_RemoteSleepStateType;

/**   \brief  value based type definition for NmOsek_ResetTMaxInLHPrepSleepOnRxRingEnabledOfGlobalConfig */
typedef boolean NmOsek_ResetTMaxInLHPrepSleepOnRxRingEnabledOfGlobalConfigType;

/**   \brief  value based type definition for NmOsek_RxMessageData */
typedef uint8 NmOsek_RxMessageDataType;

/**   \brief  value based type definition for NmOsek_RxNmMsgSourceAddr */
typedef uint8 NmOsek_RxNmMsgSourceAddrType;

/**   \brief  value based type definition for NmOsek_RxTxCnt */
typedef uint8 NmOsek_RxTxCntType;

/**   \brief  value based type definition for NmOsek_SafeBswChecksOfGlobalConfig */
typedef boolean NmOsek_SafeBswChecksOfGlobalConfigType;

/**   \brief  value based type definition for NmOsek_SizeOfAction */
typedef uint8 NmOsek_SizeOfActionType;

/**   \brief  value based type definition for NmOsek_SizeOfCanIsBusOff */
typedef uint8 NmOsek_SizeOfCanIsBusOffType;

/**   \brief  value based type definition for NmOsek_SizeOfChannelConfig */
typedef uint8 NmOsek_SizeOfChannelConfigType;

/**   \brief  value based type definition for NmOsek_SizeOfDesiredNmState */
typedef uint8 NmOsek_SizeOfDesiredNmStateType;

/**   \brief  value based type definition for NmOsek_SizeOfInternalState */
typedef uint8 NmOsek_SizeOfInternalStateType;

/**   \brief  value based type definition for NmOsek_SizeOfLogicalSuccessor */
typedef uint8 NmOsek_SizeOfLogicalSuccessorType;

/**   \brief  value based type definition for NmOsek_SizeOfNmState */
typedef uint8 NmOsek_SizeOfNmStateType;

/**   \brief  value based type definition for NmOsek_SizeOfPbChannelConfig */
typedef uint8 NmOsek_SizeOfPbChannelConfigType;

/**   \brief  value based type definition for NmOsek_SizeOfRemoteSleepState */
typedef uint8 NmOsek_SizeOfRemoteSleepStateType;

/**   \brief  value based type definition for NmOsek_SizeOfRxMessageData */
typedef uint8 NmOsek_SizeOfRxMessageDataType;

/**   \brief  value based type definition for NmOsek_SizeOfRxNmMsgSourceAddr */
typedef uint8 NmOsek_SizeOfRxNmMsgSourceAddrType;

/**   \brief  value based type definition for NmOsek_SizeOfRxTxCnt */
typedef uint8 NmOsek_SizeOfRxTxCntType;

/**   \brief  value based type definition for NmOsek_SizeOfTimeoutTimer */
typedef uint8 NmOsek_SizeOfTimeoutTimerType;

/**   \brief  value based type definition for NmOsek_SizeOfTxMessageData */
typedef uint8 NmOsek_SizeOfTxMessageDataType;

/**   \brief  value based type definition for NmOsek_SizeOfTxRequest */
typedef uint8 NmOsek_SizeOfTxRequestType;

/**   \brief  value based type definition for NmOsek_TimeoutTimer */
typedef uint16 NmOsek_TimeoutTimerType;

/**   \brief  value based type definition for NmOsek_TokenMonitoringOfGlobalConfig */
typedef boolean NmOsek_TokenMonitoringOfGlobalConfigType;

/**   \brief  value based type definition for NmOsek_TxDeadlineMonitoringInComEnabledOfGlobalConfig */
typedef boolean NmOsek_TxDeadlineMonitoringInComEnabledOfGlobalConfigType;

/**   \brief  value based type definition for NmOsek_TxMessageData */
typedef uint8 NmOsek_TxMessageDataType;

/**   \brief  value based type definition for NmOsek_TxRequest */
typedef boolean NmOsek_TxRequestType;

/**   \brief  value based type definition for NmOsek_UseNmNodeListOfGlobalConfig */
typedef boolean NmOsek_UseNmNodeListOfGlobalConfigType;

/**   \brief  value based type definition for NmOsek_VersionInfoApiOfGlobalConfig */
typedef boolean NmOsek_VersionInfoApiOfGlobalConfigType;

/**   \brief  value based type definition for NmOsek_WBSTransitionOnRingMsgOnlyEnabledOfGlobalConfig */
typedef boolean NmOsek_WBSTransitionOnRingMsgOnlyEnabledOfGlobalConfigType;

/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL COMPLEX DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  NmOsekPCStructTypes  NmOsek Struct Types (PRE_COMPILE)
  \brief  These type definitions are used for structured data representations.
  \{
*/ 
/**   \brief  type used in NmOsek_ChannelConfig */
typedef struct sNmOsek_ChannelConfigType
{
  NmOsek_ComMNetworkHandleRefOfChannelConfigType ComMNetworkHandleRefOfChannelConfig;  /**< Contains values of DefinitionRef: /MICROSAR/NmOsek/NmOsekGlobalConfig/NmOsekChannelConfig/NmOsekComMNetworkHandleRef. */
  NmOsek_LimpHomeTimeOfChannelConfigType LimpHomeTimeOfChannelConfig;  /**< Contains values of DefinitionRef: /MICROSAR/NmOsek/NmOsekGlobalConfig/NmOsekChannelConfig/NmOsekLimpHomeTime. */
  NmOsek_RingMaxTimeOfChannelConfigType RingMaxTimeOfChannelConfig;  /**< Contains values of DefinitionRef: /MICROSAR/NmOsek/NmOsekGlobalConfig/NmOsekChannelConfig/NmOsekRingMaxTime. */
  NmOsek_RingTypTimeOfChannelConfigType RingTypTimeOfChannelConfig;  /**< Contains values of DefinitionRef: /MICROSAR/NmOsek/NmOsekGlobalConfig/NmOsekChannelConfig/NmOsekRingTypTime. */
  NmOsek_WaitBusSleepTimeOfChannelConfigType WaitBusSleepTimeOfChannelConfig;  /**< Contains values of DefinitionRef: /MICROSAR/NmOsek/NmOsekGlobalConfig/NmOsekChannelConfig/NmOsekWaitBusSleepTime. */
} NmOsek_ChannelConfigType;

/**   \brief  type used in NmOsek_PbChannelConfig */
typedef struct sNmOsek_PbChannelConfigType
{
  NmOsek_AwakeTxUserDataPduIdOfPbChannelConfigType AwakeTxUserDataPduIdOfPbChannelConfig;  /**< Awake TX PDU ID passed to PduR_NmOsekTriggerTransmit() */
  NmOsek_MaskedBitsOfPbChannelConfigType MaskedBitsOfPbChannelConfig;  /**< contains bitcoded the boolean data of NmOsek_RxMessageDataUsedOfPbChannelConfig, NmOsek_RxMessageData_UserDataUsedOfPbChannelConfig, NmOsek_TxMessageDataUsedOfPbChannelConfig, NmOsek_TxMessageData_UserDataUsedOfPbChannelConfig */
  NmOsek_NodeIdOfPbChannelConfigType NodeIdOfPbChannelConfig;  /**< Node Identifier of local node */
  NmOsek_RangeMaskOfPbChannelConfigType RangeMaskOfPbChannelConfig;  /**< Range Mask for the reception (CanIfRxPduCanIdRangeUpperCanId - CanIfRxPduCanIdRangeLowerCanId) */
  NmOsek_RxMessageDataEndIdxOfPbChannelConfigType RxMessageDataEndIdxOfPbChannelConfig;  /**< the end index of the 0:n relation pointing to NmOsek_RxMessageData */
  NmOsek_RxMessageDataLengthOfPbChannelConfigType RxMessageDataLengthOfPbChannelConfig;  /**< the number of relations pointing to NmOsek_RxMessageData */
  NmOsek_RxMessageDataStartIdxOfPbChannelConfigType RxMessageDataStartIdxOfPbChannelConfig;  /**< the start index of the 0:n relation pointing to NmOsek_RxMessageData */
  NmOsek_RxMessageData_DestIdIdxOfPbChannelConfigType RxMessageData_DestIdIdxOfPbChannelConfig;  /**< the index of the 1:1 relation pointing to NmOsek_RxMessageData */
  NmOsek_RxMessageData_OpCodeIdxOfPbChannelConfigType RxMessageData_OpCodeIdxOfPbChannelConfig;  /**< the index of the 1:1 relation pointing to NmOsek_RxMessageData */
  NmOsek_RxMessageData_SleepIdxOfPbChannelConfigType RxMessageData_SleepIdxOfPbChannelConfig;  /**< the index of the 1:1 relation pointing to NmOsek_RxMessageData */
  NmOsek_RxMessageData_UserDataEndIdxOfPbChannelConfigType RxMessageData_UserDataEndIdxOfPbChannelConfig;  /**< the end index of the 0:n relation pointing to NmOsek_RxMessageData */
  NmOsek_RxMessageData_UserDataLengthOfPbChannelConfigType RxMessageData_UserDataLengthOfPbChannelConfig;  /**< the number of relations pointing to NmOsek_RxMessageData */
  NmOsek_RxMessageData_UserDataStartIdxOfPbChannelConfigType RxMessageData_UserDataStartIdxOfPbChannelConfig;  /**< the start index of the 0:n relation pointing to NmOsek_RxMessageData */
  NmOsek_TxMessageDataEndIdxOfPbChannelConfigType TxMessageDataEndIdxOfPbChannelConfig;  /**< the end index of the 0:n relation pointing to NmOsek_TxMessageData */
  NmOsek_TxMessageDataLengthOfPbChannelConfigType TxMessageDataLengthOfPbChannelConfig;  /**< the number of relations pointing to NmOsek_TxMessageData */
  NmOsek_TxMessageDataStartIdxOfPbChannelConfigType TxMessageDataStartIdxOfPbChannelConfig;  /**< the start index of the 0:n relation pointing to NmOsek_TxMessageData */
  NmOsek_TxMessageData_DestIdIdxOfPbChannelConfigType TxMessageData_DestIdIdxOfPbChannelConfig;  /**< the index of the 1:1 relation pointing to NmOsek_TxMessageData */
  NmOsek_TxMessageData_OpCodeIdxOfPbChannelConfigType TxMessageData_OpCodeIdxOfPbChannelConfig;  /**< the index of the 1:1 relation pointing to NmOsek_TxMessageData */
  NmOsek_TxMessageData_SleepIdxOfPbChannelConfigType TxMessageData_SleepIdxOfPbChannelConfig;  /**< the index of the 1:1 relation pointing to NmOsek_TxMessageData */
  NmOsek_TxMessageData_UserDataEndIdxOfPbChannelConfigType TxMessageData_UserDataEndIdxOfPbChannelConfig;  /**< the end index of the 0:n relation pointing to NmOsek_TxMessageData */
  NmOsek_TxMessageData_UserDataLengthOfPbChannelConfigType TxMessageData_UserDataLengthOfPbChannelConfig;  /**< the number of relations pointing to NmOsek_TxMessageData */
  NmOsek_TxMessageData_UserDataStartIdxOfPbChannelConfigType TxMessageData_UserDataStartIdxOfPbChannelConfig;  /**< the start index of the 0:n relation pointing to NmOsek_TxMessageData */
  NmOsek_TxPduIdOfPbChannelConfigType TxPduIdOfPbChannelConfig;  /**< Lower layer TX PDU ID passed to CanIf_Transmit() */
  NmOsek_WakeUpTxUserDataPduIdOfPbChannelConfigType WakeUpTxUserDataPduIdOfPbChannelConfig;  /**< Wake-up TX PDU ID passed to PduR_NmOsekTriggerTransmit() */
} NmOsek_PbChannelConfigType;

/** 
  \}
*/ 

/** 
  \defgroup  NmOsekPCSymbolicStructTypes  NmOsek Symbolic Struct Types (PRE_COMPILE)
  \brief  These structs are used in unions to have a symbol based data representation style.
  \{
*/ 
/** 
  \}
*/ 

/** 
  \defgroup  NmOsekPCUnionIndexAndSymbolTypes  NmOsek Union Index And Symbol Types (PRE_COMPILE)
  \brief  These unions are used to access arrays in an index and symbol based style.
  \{
*/ 
/** 
  \}
*/ 

/** 
  \defgroup  NmOsekPCRootPointerTypes  NmOsek Root Pointer Types (PRE_COMPILE)
  \brief  These type definitions are used to point from the config root to symbol instances.
  \{
*/ 
/** 
  \}
*/ 

/** 
  \defgroup  NmOsekPCRootValueTypes  NmOsek Root Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value representations in root arrays.
  \{
*/ 
/**   \brief  type used in NmOsek_PCConfig */
typedef struct sNmOsek_PCConfigType
{
  uint8 NmOsek_PCConfigNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} NmOsek_PCConfigType;

typedef NmOsek_PCConfigType NmOsek_ConfigType;  /**< A structure type is present for data in each configuration class. This typedef redefines the probably different name to the specified one. */

/** 
  \}
*/ 



/* PRQA S 0779 POSTBUILDGLOBALDATATYPES */ /* MD_CSL_0779 */ 
/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL SIMPLE DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  NmOsekPBValueTypes  NmOsek Value Types (POST_BUILD)
  \brief  These type definitions are used for value based data representations.
  \{
*/ 
/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL COMPLEX DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  NmOsekPBRootValueTypes  NmOsek Root Value Types (POST_BUILD)
  \brief  These type definitions are used for value representations in root arrays.
  \{
*/ 
/** 
  \}
*/ 


/* PRQA L:POSTBUILDGLOBALDATATYPES */

/**********************************************************************************************************************
  GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA PROTOTYPES
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
extern CONST(NmOsek_ChannelConfigType, NMOSEK_CONST) NmOsek_ChannelConfig[1];
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
extern CONST(NmOsek_PbChannelConfigType, NMOSEK_CONST) NmOsek_PbChannelConfig[1];
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
extern VAR(NmOsek_ActionType, NMOSEK_VAR_NO_INIT) NmOsek_Action[1];
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
extern VAR(NmOsek_CanIsBusOffType, NMOSEK_VAR_NO_INIT) NmOsek_CanIsBusOff[1];
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
extern VAR(Nm_StateType, NMOSEK_VAR_NO_INIT) NmOsek_DesiredNmState[1];
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
extern VAR(NmOsek_InternalStateType, NMOSEK_VAR_NO_INIT) NmOsek_InternalState[1];
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
extern VAR(NmOsek_LogicalSuccessorType, NMOSEK_VAR_NO_INIT) NmOsek_LogicalSuccessor[1];
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
extern VAR(Nm_StateType, NMOSEK_VAR_NO_INIT) NmOsek_NmState[1];
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
extern VAR(NmOsek_RemoteSleepStateType, NMOSEK_VAR_NO_INIT) NmOsek_RemoteSleepState[1];
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
extern VAR(NmOsek_RxMessageDataType, NMOSEK_VAR_NO_INIT) NmOsek_RxMessageData[8];
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
extern VAR(NmOsek_RxNmMsgSourceAddrType, NMOSEK_VAR_NO_INIT) NmOsek_RxNmMsgSourceAddr[1];
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
extern VAR(NmOsek_RxTxCntType, NMOSEK_VAR_NO_INIT) NmOsek_RxTxCnt[1];
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
extern VAR(NmOsek_TimeoutTimerType, NMOSEK_VAR_NO_INIT) NmOsek_TimeoutTimer[1];
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
extern VAR(NmOsek_TxMessageDataType, NMOSEK_VAR_NO_INIT) NmOsek_TxMessageData[8];
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
extern VAR(NmOsek_TxRequestType, NMOSEK_VAR_NO_INIT) NmOsek_TxRequest[1];
#define NMOSEK_STOP_SEC_VAR_NO_INIT_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */



/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/


/*-- Application constant unspecified declarations ------------------------------------------------------------------*/
#define NMOSEK_START_SEC_APPL_CONST_UNSPECIFIED
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_19.1 */

#if (NMOSEK_USE_NM_NODE_LIST == STD_ON)
/*! Node Arrays defined by Application used by NmOsek_CmpConfig() */ /* PRQA S 3684 2 */ /* MD_NmOsek_3684 */
extern CONST(NmOsek_NodeConfigType, NMOSEK_APPL_CONST)  NmOsek_ConfigMaskTable[][sizeof(NmOsek_NodeConfig) / sizeof(NmOsek_NodeConfigType)];
extern CONST(NmOsek_NodeConfigType, NMOSEK_APPL_CONST)  NmOsek_TargetConfigTable[][sizeof(NmOsek_NodeConfig) / sizeof(NmOsek_NodeConfigType)];
#endif

#define NMOSEK_STOP_SEC_APPL_CONST_UNSPECIFIED
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
  GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/


/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/




#define NMOSEK_START_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
/**********************************************************************************************************************
 *  NmOsek_RxIndication_0()
 *********************************************************************************************************************/
/*! \brief        This service indicates a successful reception of a received NM message to the NmOsek after passing all
 *                filters and validation checks on NmOsek channel 0
 *  \details      Triggers state changes and state transitions in dependency of the received message
 *  \param[in]    nmOsekRxPduId            Identification of the network through PDU-ID
 *  \param[in]    canSduPtr                Pointer to received SDU
 *  \param[in]    canId                    CAN Identifier of the received SDU
 *  \context      TASK|ISR1|ISR2
 *  \reentrant	  FALSE
 *  \synchronous  TRUE
 *  \pre          -
 *  \note         Called by CAN Interface
 *********************************************************************************************************************/
extern FUNC(void, NMOSEK_CODE) NmOsek_RxIndication_0(VAR(PduIdType, AUTOMATIC) nmOsekRxPduId,
                                                     P2CONST(uint8, AUTOMATIC, NMOSEK_APPL_VAR) canSduPtr,
                                                     CONST(Can_IdType, AUTOMATIC) canId);


/**********************************************************************************************************************
 *  NmOsek_TxConfirmation_0()
 *********************************************************************************************************************/
/*! \brief        This service indicates a successful transmission of a sent NM message to the NmOsek on the bus on
 *                NmOsek channel 0
 *  \details      Triggers state changes and state transitions in dependency of the transmitted message
 *  \param[in]    nmOsekTxPduId            Identification of the network through PDU-ID
 *  \context      TASK|ISR1|ISR2
 *  \reentrant	  FALSE
 *  \synchronous  TRUE
 *  \pre          -
 *  \note         Called by CAN Interface
 *********************************************************************************************************************/
extern FUNC(void, NMOSEK_CODE) NmOsek_TxConfirmation_0(VAR(PduIdType, AUTOMATIC) nmOsekTxPduId);
#define NMOSEK_STOP_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */




#endif /* NMOSEK_CFG_H */

/**********************************************************************************************************************
 *  END OF FILE: NmOsek_Cfg.h
 *********************************************************************************************************************/

