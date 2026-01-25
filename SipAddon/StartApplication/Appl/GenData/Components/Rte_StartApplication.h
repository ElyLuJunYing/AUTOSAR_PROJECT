/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_StartApplication.h
 *        Config:  TsiStandard.dpa
 *   ECU-Project:  MyECU
 *
 *     Generator:  MICROSAR RTE Generator Version 4.19.0
 *                 RTE Core Version 1.19.0
 *       License:  CBD1800257
 *
 *   Description:  Application header file for SW-C <StartApplication>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_STARTAPPLICATION_H
# define _RTE_STARTAPPLICATION_H

# ifndef RTE_CORE
#  ifdef RTE_APPLICATION_HEADER_FILE
#   error Multiple application header files included.
#  endif
#  define RTE_APPLICATION_HEADER_FILE
#  ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#   define RTE_PTR2ARRAYBASETYPE_PASSING
#  endif
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_StartApplication_Type.h"
# include "Rte_DataHandleType.h"


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_PpSignal_StartAppl_RxCtrl_MyECU_omsg_StartAppl_Rx_MyECU_oCAN_09591065_Rx_DeSignal_StartAppl_RxCtrl_MyECU_omsg_StartAppl_Rx_MyECU_oCAN_09591065_Rx (0U)
#  define Rte_InitValue_PpSignal_StartAppl_RxData_MyECU_omsg_StartAppl_Rx_MyECU_oCAN_315f9453_Rx_DeSignal_StartAppl_RxData_MyECU_omsg_StartAppl_Rx_MyECU_oCAN_315f9453_Rx (0U)
#  define Rte_InitValue_PpSignal_StartAppl_TxCtrl_MyECU_omsg_StartAppl_Tx_MyECU_oCAN_b45ea6bd_Tx_DeSignal_StartAppl_TxCtrl_MyECU_omsg_StartAppl_Tx_MyECU_oCAN_b45ea6bd_Tx (0U)
#  define Rte_InitValue_PpSignal_StartAppl_TxData_MyECU_omsg_StartAppl_Tx_MyECU_oCAN_8c58228b_Tx_DeSignal_StartAppl_TxData_MyECU_omsg_StartAppl_Tx_MyECU_oCAN_8c58228b_Tx (0U)
#  define Rte_InitValue_PpTrustedData_DeValue (0U)
#  define Rte_InitValue_PpTrustedDataVerification_DeValue (0U)
# endif


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Buffers for inter-runnable variables
 *********************************************************************************************************************/

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(DtMemoryProtectionDataElementType, RTE_VAR_INIT) Rte_Irv_StartApplication_IrvMemoryProtectionData; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_Irv_StartApplication_IrvOccuranceCounterDid; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
# endif /* !defined(RTE_CORE) */


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StartApplication_PpSignal_StartAppl_RxCtrl_MyECU_omsg_StartAppl_Rx_MyECU_oCAN_09591065_Rx_DeSignal_StartAppl_RxCtrl_MyECU_omsg_StartAppl_Rx_MyECU_oCAN_09591065_Rx(P2VAR(uint8, AUTOMATIC, RTE_STARTAPPLICATION_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StartApplication_PpSignal_StartAppl_RxData_MyECU_omsg_StartAppl_Rx_MyECU_oCAN_315f9453_Rx_DeSignal_StartAppl_RxData_MyECU_omsg_StartAppl_Rx_MyECU_oCAN_315f9453_Rx(P2VAR(uint8, AUTOMATIC, RTE_STARTAPPLICATION_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StartApplication_PpTrustedDataVerification_DeValue(P2VAR(uint8, AUTOMATIC, RTE_STARTAPPLICATION_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_StartApplication_PpSignal_StartAppl_TxCtrl_MyECU_omsg_StartAppl_Tx_MyECU_oCAN_b45ea6bd_Tx_DeSignal_StartAppl_TxCtrl_MyECU_omsg_StartAppl_Tx_MyECU_oCAN_b45ea6bd_Tx(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_StartApplication_PpSignal_StartAppl_TxData_MyECU_omsg_StartAppl_Tx_MyECU_oCAN_8c58228b_Tx_DeSignal_StartAppl_TxData_MyECU_omsg_StartAppl_Tx_MyECU_oCAN_8c58228b_Tx(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_StartApplication_PpTrustedData_DeValue(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StartApplication_PpAliveWdgMSupervisedEntity_StartApplication_CheckpointReached(WdgM_CheckpointIdType checkpointId); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StartApplication_PpDemOpCycle_PowerCycle_SetOperationCycleState(Dem_OperationCycleStateType CycleState); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StartApplication_PpDiagnosticMonitor_DEM_EVENT_StartApplication_SetEventStatus(Dem_EventStatusType EventStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StartApplication_PpMemoryAccessViolationState_GetState(P2VAR(boolean, AUTOMATIC, RTE_STARTAPPLICATION_APPL_VAR) State); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StartApplication_PpMemoryAccessViolationState_Reset(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StartApplication_PpPS_StartApplication_NvMBlock1_ReadBlock(dtRef_VOID DstPtr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StartApplication_PpPS_StartApplication_NvMBlock1_WriteBlock(dtRef_const_VOID SrcPtr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StartApplication_PpPS_StartApplication_NvMBlock2_ReadBlock(dtRef_VOID DstPtr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StartApplication_PpPS_StartApplication_NvMBlock2_WriteBlock(dtRef_const_VOID SrcPtr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StartApplication_PpTrustedDataInvalid_Write(uint8 Value); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StartApplication_UR_CN_CAN_52ce3533_GetCurrentComMode(P2VAR(ComM_ModeType, AUTOMATIC, RTE_STARTAPPLICATION_APPL_VAR) ComMode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StartApplication_UR_CN_CAN_52ce3533_RequestComMode(ComM_ModeType ComMode); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_PpSignal_StartAppl_RxCtrl_MyECU_omsg_StartAppl_Rx_MyECU_oCAN_09591065_Rx_DeSignal_StartAppl_RxCtrl_MyECU_omsg_StartAppl_Rx_MyECU_oCAN_09591065_Rx Rte_Read_StartApplication_PpSignal_StartAppl_RxCtrl_MyECU_omsg_StartAppl_Rx_MyECU_oCAN_09591065_Rx_DeSignal_StartAppl_RxCtrl_MyECU_omsg_StartAppl_Rx_MyECU_oCAN_09591065_Rx
#  define Rte_Read_PpSignal_StartAppl_RxData_MyECU_omsg_StartAppl_Rx_MyECU_oCAN_315f9453_Rx_DeSignal_StartAppl_RxData_MyECU_omsg_StartAppl_Rx_MyECU_oCAN_315f9453_Rx Rte_Read_StartApplication_PpSignal_StartAppl_RxData_MyECU_omsg_StartAppl_Rx_MyECU_oCAN_315f9453_Rx_DeSignal_StartAppl_RxData_MyECU_omsg_StartAppl_Rx_MyECU_oCAN_315f9453_Rx
#  define Rte_Read_PpTrustedDataVerification_DeValue Rte_Read_StartApplication_PpTrustedDataVerification_DeValue


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_PpSignal_StartAppl_TxCtrl_MyECU_omsg_StartAppl_Tx_MyECU_oCAN_b45ea6bd_Tx_DeSignal_StartAppl_TxCtrl_MyECU_omsg_StartAppl_Tx_MyECU_oCAN_b45ea6bd_Tx Rte_Write_StartApplication_PpSignal_StartAppl_TxCtrl_MyECU_omsg_StartAppl_Tx_MyECU_oCAN_b45ea6bd_Tx_DeSignal_StartAppl_TxCtrl_MyECU_omsg_StartAppl_Tx_MyECU_oCAN_b45ea6bd_Tx
#  define Rte_Write_PpSignal_StartAppl_TxData_MyECU_omsg_StartAppl_Tx_MyECU_oCAN_8c58228b_Tx_DeSignal_StartAppl_TxData_MyECU_omsg_StartAppl_Tx_MyECU_oCAN_8c58228b_Tx Rte_Write_StartApplication_PpSignal_StartAppl_TxData_MyECU_omsg_StartAppl_Tx_MyECU_oCAN_8c58228b_Tx_DeSignal_StartAppl_TxData_MyECU_omsg_StartAppl_Tx_MyECU_oCAN_8c58228b_Tx
#  define Rte_Write_PpTrustedData_DeValue Rte_Write_StartApplication_PpTrustedData_DeValue


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define Rte_Call_PpAliveWdgMSupervisedEntity_StartApplication_CheckpointReached Rte_Call_StartApplication_PpAliveWdgMSupervisedEntity_StartApplication_CheckpointReached
#  define Rte_Call_PpDemOpCycle_PowerCycle_SetOperationCycleState Rte_Call_StartApplication_PpDemOpCycle_PowerCycle_SetOperationCycleState
#  define Rte_Call_PpDiagnosticMonitor_DEM_EVENT_StartApplication_SetEventStatus Rte_Call_StartApplication_PpDiagnosticMonitor_DEM_EVENT_StartApplication_SetEventStatus
#  define Rte_Call_PpMemoryAccessViolationState_GetState Rte_Call_StartApplication_PpMemoryAccessViolationState_GetState
#  define Rte_Call_PpMemoryAccessViolationState_Reset Rte_Call_StartApplication_PpMemoryAccessViolationState_Reset
#  define Rte_Call_PpPS_StartApplication_NvMBlock1_ReadBlock Rte_Call_StartApplication_PpPS_StartApplication_NvMBlock1_ReadBlock
#  define Rte_Call_PpPS_StartApplication_NvMBlock1_WriteBlock Rte_Call_StartApplication_PpPS_StartApplication_NvMBlock1_WriteBlock
#  define Rte_Call_PpPS_StartApplication_NvMBlock2_ReadBlock Rte_Call_StartApplication_PpPS_StartApplication_NvMBlock2_ReadBlock
#  define Rte_Call_PpPS_StartApplication_NvMBlock2_WriteBlock Rte_Call_StartApplication_PpPS_StartApplication_NvMBlock2_WriteBlock
#  define Rte_Call_PpTrustedDataInvalid_Write Rte_Call_StartApplication_PpTrustedDataInvalid_Write
#  define Rte_Call_UR_CN_CAN_52ce3533_GetCurrentComMode Rte_Call_StartApplication_UR_CN_CAN_52ce3533_GetCurrentComMode
#  define Rte_Call_UR_CN_CAN_52ce3533_RequestComMode Rte_Call_StartApplication_UR_CN_CAN_52ce3533_RequestComMode


/**********************************************************************************************************************
 * Inter-runnable variables
 *********************************************************************************************************************/

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_StartApplication_Cyclic250ms_IrvOccuranceCounterDid() \
  Rte_Irv_StartApplication_IrvOccuranceCounterDid
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_StartApplication_DIAG_DcmReadData_IrvOccuranceCounterDid() \
  Rte_Irv_StartApplication_IrvOccuranceCounterDid
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_StartApplication_DIAG_DcmWriteData_IrvOccuranceCounterDid(data) \
  (Rte_Irv_StartApplication_IrvOccuranceCounterDid = (data))
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_StartApplication_DIAG_DemReadData_IrvOccuranceCounterDid() \
  Rte_Irv_StartApplication_IrvOccuranceCounterDid
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_StartApplication_MEMORYPROTECTION_Cyclic10ms_IrvMemoryProtectionData(data) \
  (*(data) = Rte_Irv_StartApplication_IrvMemoryProtectionData)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_StartApplication_MEMORYPROTECTION_Cyclic10ms_IrvMemoryProtectionData(data) \
  (Rte_Irv_StartApplication_IrvMemoryProtectionData = *(data))
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_StartApplication_OnDataRec_RxData_IrvOccuranceCounterDid() \
  Rte_Irv_StartApplication_IrvOccuranceCounterDid
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_StartApplication_OnDataRec_RxData_IrvMemoryProtectionData(data) \
  (Rte_Irv_StartApplication_IrvMemoryProtectionData = *(data))
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_StartApplication_OnDataRec_RxData_IrvOccuranceCounterDid(data) \
  (Rte_Irv_StartApplication_IrvOccuranceCounterDid = (data))
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_OsApplication_NonTrusted_Core0_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint32, RTE_VAR_DEFAULT_RTE_OsApplication_NonTrusted_Core0_PIM_GROUP) Rte_StartApplication_NM_ActiveComMUsers; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(EnumActiveComponentType, RTE_VAR_DEFAULT_RTE_OsApplication_NonTrusted_Core0_PIM_GROUP) Rte_StartApplication_ActiveComponent; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_OsApplication_NonTrusted_Core0_PIM_GROUP) Rte_StartApplication_COM_RxSigValue0; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_OsApplication_NonTrusted_Core0_PIM_GROUP) Rte_StartApplication_COM_TxSigValue0; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_OsApplication_NonTrusted_Core0_PIM_GROUP) Rte_StartApplication_DIAG_LastRxData; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_OsApplication_NonTrusted_Core0_PIM_GROUP) Rte_StartApplication_MEM_ActiveBlock; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(EnumMEM_BlockStateType, RTE_VAR_DEFAULT_RTE_OsApplication_NonTrusted_Core0_PIM_GROUP) Rte_StartApplication_MEM_BlockState1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(EnumMEM_BlockStateType, RTE_VAR_DEFAULT_RTE_OsApplication_NonTrusted_Core0_PIM_GROUP) Rte_StartApplication_MEM_BlockState2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_OsApplication_NonTrusted_Core0_PIM_GROUP) Rte_StartApplication_MEM_DataBuffer1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_OsApplication_NonTrusted_Core0_PIM_GROUP) Rte_StartApplication_MEM_DataBuffer2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_OsApplication_NonTrusted_Core0_PIM_GROUP) Rte_StartApplication_NM_ActiveChannelHasFullComRequest; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_OsApplication_NonTrusted_Core0_PIM_GROUP) Rte_StartApplication_NM_ActiveComMChannel; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(EnumNM_ApplStateType, RTE_VAR_DEFAULT_RTE_OsApplication_NonTrusted_Core0_PIM_GROUP) Rte_StartApplication_NM_ApplState; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_OsApplication_NonTrusted_Core0_PIM_GROUP) Rte_StartApplication_NM_BusSleepModeTimer; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_OsApplication_NonTrusted_Core0_PIM_GROUP) Rte_StartApplication_TxCtrlSigValue; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_OsApplication_NonTrusted_Core0_PIM_GROUP) Rte_StartApplication_TxDataSigValue; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_OsApplication_NonTrusted_Core0_PIM_GROUP) Rte_StartApplication_Uptime; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_OsApplication_NonTrusted_Core0_PIM_GROUP) Rte_StartApplication_WDG_AliveCycle; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_OsApplication_NonTrusted_Core0_PIM_GROUP) Rte_StartApplication_WDG_AliveTimer; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_OsApplication_NonTrusted_Core0_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_NM_ActiveComMUsers() \
  (&Rte_StartApplication_NM_ActiveComMUsers) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_ActiveComponent() \
  (&Rte_StartApplication_ActiveComponent) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_COM_RxSigValue0() \
  (&Rte_StartApplication_COM_RxSigValue0) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_COM_TxSigValue0() \
  (&Rte_StartApplication_COM_TxSigValue0) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_DIAG_LastRxData() \
  (&Rte_StartApplication_DIAG_LastRxData) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MEM_ActiveBlock() \
  (&Rte_StartApplication_MEM_ActiveBlock) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MEM_BlockState1() \
  (&Rte_StartApplication_MEM_BlockState1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MEM_BlockState2() \
  (&Rte_StartApplication_MEM_BlockState2) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MEM_DataBuffer1() \
  (&Rte_StartApplication_MEM_DataBuffer1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MEM_DataBuffer2() \
  (&Rte_StartApplication_MEM_DataBuffer2) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_NM_ActiveChannelHasFullComRequest() \
  (&Rte_StartApplication_NM_ActiveChannelHasFullComRequest) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_NM_ActiveComMChannel() \
  (&Rte_StartApplication_NM_ActiveComMChannel) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_NM_ApplState() \
  (&Rte_StartApplication_NM_ApplState) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_NM_BusSleepModeTimer() \
  (&Rte_StartApplication_NM_BusSleepModeTimer) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_TxCtrlSigValue() \
  (&Rte_StartApplication_TxCtrlSigValue) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_TxDataSigValue() \
  (&Rte_StartApplication_TxDataSigValue) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_Uptime() \
  (&Rte_StartApplication_Uptime) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_WDG_AliveCycle() \
  (&Rte_StartApplication_WDG_AliveCycle) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_WDG_AliveTimer() \
  (&Rte_StartApplication_WDG_AliveTimer) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define StartApplication_START_SEC_CODE
# include "StartApplication_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_StartApplication_Cyclic1000ms StartApplication_Cyclic1000ms
#  define RTE_RUNNABLE_StartApplication_Cyclic10ms StartApplication_Cyclic10ms
#  define RTE_RUNNABLE_StartApplication_Cyclic1ms StartApplication_Cyclic1ms
#  define RTE_RUNNABLE_StartApplication_Cyclic250ms StartApplication_Cyclic250ms
#  define RTE_RUNNABLE_StartApplication_DIAG_ConditionCheckRead StartApplication_DIAG_ConditionCheckRead
#  define RTE_RUNNABLE_StartApplication_DIAG_DcmReadData StartApplication_DIAG_DcmReadData
#  define RTE_RUNNABLE_StartApplication_DIAG_DcmWriteData StartApplication_DIAG_DcmWriteData
#  define RTE_RUNNABLE_StartApplication_DIAG_DemReadData StartApplication_DIAG_DemReadData
#  define RTE_RUNNABLE_StartApplication_Init StartApplication_Init
#  define RTE_RUNNABLE_StartApplication_MEMORYPROTECTION_Cyclic10ms StartApplication_MEMORYPROTECTION_Cyclic10ms
#  define RTE_RUNNABLE_StartApplication_MEM_JobFinished_StartApplication_NvMBlock1 StartApplication_MEM_JobFinished_StartApplication_NvMBlock1
#  define RTE_RUNNABLE_StartApplication_MEM_JobFinished_StartApplication_NvMBlock2 StartApplication_MEM_JobFinished_StartApplication_NvMBlock2
#  define RTE_RUNNABLE_StartApplication_OnDataRec_RxCtrl StartApplication_OnDataRec_RxCtrl
#  define RTE_RUNNABLE_StartApplication_OnDataRec_RxData StartApplication_OnDataRec_RxData
# endif

FUNC(void, StartApplication_CODE) StartApplication_Cyclic1000ms(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, StartApplication_CODE) StartApplication_Cyclic10ms(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, StartApplication_CODE) StartApplication_Cyclic1ms(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, StartApplication_CODE) StartApplication_Cyclic250ms(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, StartApplication_CODE) StartApplication_DIAG_ConditionCheckRead(P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_STARTAPPLICATION_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, StartApplication_CODE) StartApplication_DIAG_DcmReadData(P2VAR(uint8, AUTOMATIC, RTE_STARTAPPLICATION_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, StartApplication_CODE) StartApplication_DIAG_DcmReadData(P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_STARTAPPLICATION_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, StartApplication_CODE) StartApplication_DIAG_DcmWriteData(P2CONST(uint8, AUTOMATIC, RTE_STARTAPPLICATION_APPL_DATA) Data, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_STARTAPPLICATION_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, StartApplication_CODE) StartApplication_DIAG_DcmWriteData(P2CONST(Dcm_Data2ByteType, AUTOMATIC, RTE_STARTAPPLICATION_APPL_DATA) Data, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_STARTAPPLICATION_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, StartApplication_CODE) StartApplication_DIAG_DemReadData(P2VAR(uint8, AUTOMATIC, RTE_STARTAPPLICATION_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, StartApplication_CODE) StartApplication_DIAG_DemReadData(P2VAR(DataArray_Type_2, AUTOMATIC, RTE_STARTAPPLICATION_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(void, StartApplication_CODE) StartApplication_Init(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, StartApplication_CODE) StartApplication_MEMORYPROTECTION_Cyclic10ms(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, StartApplication_CODE) StartApplication_MEM_JobFinished_StartApplication_NvMBlock1(NvM_ServiceIdType ServiceId, NvM_RequestResultType JobResult); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, StartApplication_CODE) StartApplication_MEM_JobFinished_StartApplication_NvMBlock2(NvM_ServiceIdType ServiceId, NvM_RequestResultType JobResult); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, StartApplication_CODE) StartApplication_OnDataRec_RxCtrl(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, StartApplication_CODE) StartApplication_OnDataRec_RxData(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define StartApplication_STOP_SEC_CODE
# include "StartApplication_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_PiAliveWdgMSupervisedEntity_StartApplication_E_NOT_OK (1U)

#  define RTE_E_PiDemOpCycle_PowerCycle_E_NOT_OK (1U)

#  define RTE_E_PiDiagnosticMonitor_DEM_EVENT_StartApplication_E_NOT_OK (1U)

#  define RTE_E_PiPS_StartApplication_NvMBlock1_E_NOT_OK (1U)

#  define RTE_E_PiPS_StartApplication_NvMBlock2_E_NOT_OK (1U)

#  define RTE_E_PiUR_CN_CAN_52ce3533_E_MODE_LIMITATION (2U)

#  define RTE_E_PiUR_CN_CAN_52ce3533_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_STARTAPPLICATION_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
