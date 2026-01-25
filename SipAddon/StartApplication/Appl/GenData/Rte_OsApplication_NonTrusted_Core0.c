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
 *          File:  Rte_OsApplication_NonTrusted_Core0.c
 *        Config:  TsiStandard.dpa
 *   ECU-Project:  MyECU
 *
 *     Generator:  MICROSAR RTE Generator Version 4.19.0
 *                 RTE Core Version 1.19.0
 *       License:  CBD1800257
 *
 *   Description:  RTE implementation file
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* PRQA S 0777, 0779, 0781, 0857 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779, MD_Rte_0781, MD_MSR_1.1_857 */

#define RTE_CORE
#include "Os.h" /* PRQA S 0828, 0883 */ /* MD_MSR_1.1_828, MD_Rte_Os */
#include "Rte_Type.h"
#include "Rte_Main.h"

#include "Rte_BswM.h"
#include "Rte_ComM.h"
#include "Rte_Dcm.h"
#include "Rte_DemMaster_0.h"
#include "Rte_DemSatellite_0.h"
#include "Rte_Det.h"
#include "Rte_EcuM.h"
#include "Rte_NvM.h"
#include "Rte_Os_OsCore0_swc.h"
#include "Rte_StartApplication.h"
#include "Rte_StartApplicationMemoryAccessState.h"
#include "Rte_StartApplicationTrusted.h"
#include "Rte_WdgM_OsApplication_NonTrusted_Core0.h"
#include "Rte_WdgM_OsApplication_Trusted_Core0.h"
#include "SchM_Adc.h"
#include "SchM_BswM.h"
#include "SchM_Can.h"
#include "SchM_CanIf.h"
#include "SchM_CanSM.h"
#include "SchM_CanTp.h"
#include "SchM_Com.h"
#include "SchM_ComM.h"
#include "SchM_Csec.h"
#include "SchM_Dcm.h"
#include "SchM_Dem.h"
#include "SchM_Det.h"
#include "SchM_Dio.h"
#include "SchM_Ea.h"
#include "SchM_EcuM.h"
#include "SchM_Eep.h"
#include "SchM_Fls.h"
#include "SchM_Gpt.h"
#include "SchM_Icu.h"
#include "SchM_Mcl.h"
#include "SchM_Mcu.h"
#include "SchM_Nm.h"
#include "SchM_NmOsek.h"
#include "SchM_NvM.h"
#include "SchM_PduR.h"
#include "SchM_Port.h"
#include "SchM_Pwm.h"
#include "SchM_RamTst.h"
#include "SchM_Spi.h"
#include "SchM_Wdg.h"
#include "SchM_WdgM.h"

#include "Rte_Hook.h"

#include "Com.h"
#if defined(IL_ASRCOM_VERSION)
# define RTE_USE_COM_TXSIGNAL_RDACCESS
#endif

#include "Rte_Cbk.h"

/* AUTOSAR 3.x compatibility */
#if !defined (RTE_LOCAL)
# define RTE_LOCAL static
#endif


/**********************************************************************************************************************
 * API for enable / disable interrupts global
 *********************************************************************************************************************/

#if defined(osDisableGlobalUM) && !defined(RTE_DISABLE_ENHANCED_INTERRUPT_LOCK_API)
# define Rte_DisableAllInterrupts() osDisableGlobalUM()   /* MICROSAR OS */
#else
# define Rte_DisableAllInterrupts() DisableAllInterrupts()   /* AUTOSAR OS */
#endif

#if defined(osEnableGlobalUM) && !defined(RTE_DISABLE_ENHANCED_INTERRUPT_LOCK_API)
# define Rte_EnableAllInterrupts() osEnableGlobalUM()   /* MICROSAR OS */
#else
# define Rte_EnableAllInterrupts() EnableAllInterrupts()   /* AUTOSAR OS */
#endif

/**********************************************************************************************************************
 * API for enable / disable interrupts up to the systemLevel
 *********************************************************************************************************************/

#if defined(osDisableLevelUM) && !defined(RTE_DISABLE_ENHANCED_INTERRUPT_LOCK_API)
# define Rte_DisableOSInterrupts() osDisableLevelUM()   /* MICROSAR OS */
#else
# define Rte_DisableOSInterrupts() SuspendOSInterrupts()   /* AUTOSAR OS */
#endif

#if defined(osEnableLevelUM) && !defined(RTE_DISABLE_ENHANCED_INTERRUPT_LOCK_API)
# define Rte_EnableOSInterrupts() osEnableLevelUM()   /* MICROSAR OS */
#else
# define Rte_EnableOSInterrupts() ResumeOSInterrupts()   /* AUTOSAR OS */
#endif


/**********************************************************************************************************************
 * Buffers for unqueued S/R
 *********************************************************************************************************************/

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(BswM_ESH_RunRequest, RTE_VAR_INIT) Rte_BswM_Provide_BswMRteModeRequestPort_requestedMode = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_StartApplication_PpTrustedData_DeValue = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Per-Instance Memory
 *********************************************************************************************************************/

#define RTE_START_SEC_VAR_DEFAULT_RTE_OsApplication_NonTrusted_Core0_PIM_GROUP_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(uint32, RTE_VAR_DEFAULT_RTE_OsApplication_NonTrusted_Core0_PIM_GROUP) Rte_StartApplication_NM_ActiveComMUsers; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(EnumActiveComponentType, RTE_VAR_DEFAULT_RTE_OsApplication_NonTrusted_Core0_PIM_GROUP) Rte_StartApplication_ActiveComponent; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_OsApplication_NonTrusted_Core0_PIM_GROUP) Rte_StartApplication_COM_RxSigValue0; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_OsApplication_NonTrusted_Core0_PIM_GROUP) Rte_StartApplication_COM_TxSigValue0; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_OsApplication_NonTrusted_Core0_PIM_GROUP) Rte_StartApplication_DIAG_LastRxData; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_OsApplication_NonTrusted_Core0_PIM_GROUP) Rte_StartApplication_MEM_ActiveBlock; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(EnumMEM_BlockStateType, RTE_VAR_DEFAULT_RTE_OsApplication_NonTrusted_Core0_PIM_GROUP) Rte_StartApplication_MEM_BlockState1; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(EnumMEM_BlockStateType, RTE_VAR_DEFAULT_RTE_OsApplication_NonTrusted_Core0_PIM_GROUP) Rte_StartApplication_MEM_BlockState2; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_OsApplication_NonTrusted_Core0_PIM_GROUP) Rte_StartApplication_MEM_DataBuffer1; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_OsApplication_NonTrusted_Core0_PIM_GROUP) Rte_StartApplication_MEM_DataBuffer2; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_OsApplication_NonTrusted_Core0_PIM_GROUP) Rte_StartApplication_NM_ActiveChannelHasFullComRequest; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_OsApplication_NonTrusted_Core0_PIM_GROUP) Rte_StartApplication_NM_ActiveComMChannel; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(EnumNM_ApplStateType, RTE_VAR_DEFAULT_RTE_OsApplication_NonTrusted_Core0_PIM_GROUP) Rte_StartApplication_NM_ApplState; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_OsApplication_NonTrusted_Core0_PIM_GROUP) Rte_StartApplication_NM_BusSleepModeTimer; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_OsApplication_NonTrusted_Core0_PIM_GROUP) Rte_StartApplication_TxCtrlSigValue; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_OsApplication_NonTrusted_Core0_PIM_GROUP) Rte_StartApplication_TxDataSigValue; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_OsApplication_NonTrusted_Core0_PIM_GROUP) Rte_StartApplication_Uptime; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_OsApplication_NonTrusted_Core0_PIM_GROUP) Rte_StartApplication_WDG_AliveCycle; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_OsApplication_NonTrusted_Core0_PIM_GROUP) Rte_StartApplication_WDG_AliveTimer; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_OsApplication_NonTrusted_Core0_PIM_GROUP) Rte_StartApplicationMemoryAccessState_PimMemoryAccessState; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#define RTE_STOP_SEC_VAR_DEFAULT_RTE_OsApplication_NonTrusted_Core0_PIM_GROUP_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * TxAck/ModeSwitchAck Flags
 *********************************************************************************************************************/


#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(Rte_OsApplication_NonTrusted_Core0_AckFlagsType, RTE_VAR_INIT) Rte_OsApplication_NonTrusted_Core0_AckFlags = { /* PRQA S 0850 */ /* MD_MSR_19.8 */
  1,
};

#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define Rte_OsApplication_NonTrusted_Core0_AckFlagsInit() (Rte_MemClr(&Rte_OsApplication_NonTrusted_Core0_AckFlags, sizeof(Rte_OsApplication_NonTrusted_Core0_AckFlagsType)))
/**********************************************************************************************************************
 * Defines for Rte_ComSendSignalProxy
 *********************************************************************************************************************/
#define RTE_COM_SENDSIGNALPROXY_NOCHANGE       (0U)
#define RTE_COM_SENDSIGNALPROXY_SEND           (1U)
#define RTE_COM_SENDSIGNALPROXY_INVALIDATE     (2U)



/**********************************************************************************************************************
 * Buffer for inter-runnable variables
 *********************************************************************************************************************/

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(DtMemoryProtectionDataElementType, RTE_VAR_INIT) Rte_Irv_StartApplication_IrvMemoryProtectionData = {
  0U, FALSE
}; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_Irv_StartApplication_IrvOccuranceCounterDid = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define RTE_START_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

FUNC(void, RTE_CODE) Rte_MemClr(P2VAR(void, AUTOMATIC, RTE_VAR_NOINIT) ptr, uint32_least num); /* PRQA S 0850, 3447, 3408 */ /* MD_MSR_19.8, MD_Rte_3447, MD_Rte_3408 */

#define RTE_STOP_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Data structures for mode management
 *********************************************************************************************************************/

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
VAR(BswM_ESH_Mode, RTE_VAR_INIT) Rte_ModeMachine_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode = RTE_MODE_BswM_ESH_Mode_STARTUP; /* PRQA S 3408 */ /* MD_Rte_3408 */
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Timer handling
 *********************************************************************************************************************/

#if defined OS_US2TICKS_SystemTimer
# define RTE_USEC_SystemTimer OS_US2TICKS_SystemTimer
#else
# define RTE_USEC_SystemTimer(val) ((TickType)RTE_CONST_USEC_SystemTimer_##val) /* PRQA S 0342 */ /* MD_MSR_19.13_0342 */
#endif

#if defined OS_MS2TICKS_SystemTimer
# define RTE_MSEC_SystemTimer OS_MS2TICKS_SystemTimer
#else
# define RTE_MSEC_SystemTimer(val) ((TickType)RTE_CONST_MSEC_SystemTimer_##val) /* PRQA S 0342 */ /* MD_MSR_19.13_0342 */
#endif

#if defined OS_SEC2TICKS_SystemTimer
# define RTE_SEC_SystemTimer OS_SEC2TICKS_SystemTimer
#else
# define RTE_SEC_SystemTimer(val)  ((TickType)RTE_CONST_SEC_SystemTimer_##val) /* PRQA S 0342 */ /* MD_MSR_19.13_0342 */
#endif

#define RTE_CONST_MSEC_SystemTimer_0 (0UL)
#define RTE_CONST_MSEC_SystemTimer_1 (1UL)
#define RTE_CONST_MSEC_SystemTimer_10 (10UL)
#define RTE_CONST_MSEC_SystemTimer_20 (20UL)
#define RTE_CONST_MSEC_SystemTimer_250 (250UL)
#define RTE_CONST_MSEC_SystemTimer_5 (5UL)

#define RTE_CONST_SEC_SystemTimer_0 (0UL)
#define RTE_CONST_SEC_SystemTimer_1 (1000UL)


/**********************************************************************************************************************
 * Internal definitions
 *********************************************************************************************************************/

#define RTE_TASK_TIMEOUT_EVENT_MASK   ((EventMaskType)0x01)
#define RTE_TASK_WAITPOINT_EVENT_MASK ((EventMaskType)0x02)

/**********************************************************************************************************************
 * RTE life cycle API
 *********************************************************************************************************************/

#define RTE_START_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


FUNC(void, RTE_CODE) Rte_InitMemory_OsApplication_NonTrusted_Core0(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
  /* set default values for internal data */
  Rte_BswM_Provide_BswMRteModeRequestPort_requestedMode = 0U;
  Rte_StartApplication_PpTrustedData_DeValue = 0U;

  /* reset Tx Ack Flags */
  Rte_OsApplication_NonTrusted_Core0_AckFlagsInit();
  Rte_OsApplication_NonTrusted_Core0_AckFlags.Rte_ModeSwitchAck_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode_Ack = 1;

  /* initialize inter-runnable variables */
  Rte_Irv_StartApplication_IrvMemoryProtectionData = Rte_C_DtMemoryProtectionDataElementType_0;
  Rte_Irv_StartApplication_IrvOccuranceCounterDid = 0U;

  /* mode management initialization part 1 */

  Rte_ModeMachine_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode = RTE_MODE_BswM_ESH_Mode_STARTUP;

}


/**********************************************************************************************************************
 * Internal/External Tx connections
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_BswM_Provide_BswMRteModeRequestPort_requestedMode(BswM_ESH_RunRequest data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_BswM_Provide_BswMRteModeRequestPort_requestedMode = *(&data);

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_StartApplication_PpSignal_StartAppl_TxCtrl_MyECU_omsg_StartAppl_Tx_MyECU_oCAN_b45ea6bd_Tx_DeSignal_StartAppl_TxCtrl_MyECU_omsg_StartAppl_Tx_MyECU_oCAN_b45ea6bd_Tx(uint8 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  ret |= Com_SendSignal(ComConf_ComSignal_Signal_StartAppl_TxCtrl_MyECU_omsg_StartAppl_Tx_MyECU_oCAN_b45ea6bd_Tx, (&data)); /* PRQA S 0850 */ /* MD_MSR_19.8 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_StartApplication_PpSignal_StartAppl_TxData_MyECU_omsg_StartAppl_Tx_MyECU_oCAN_8c58228b_Tx_DeSignal_StartAppl_TxData_MyECU_omsg_StartAppl_Tx_MyECU_oCAN_8c58228b_Tx(uint8 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  ret |= Com_SendSignal(ComConf_ComSignal_Signal_StartAppl_TxData_MyECU_omsg_StartAppl_Tx_MyECU_oCAN_8c58228b_Tx, (&data)); /* PRQA S 0850 */ /* MD_MSR_19.8 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_StartApplication_PpTrustedData_DeValue(uint8 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_StartApplication_PpTrustedData_DeValue = *(&data);
  /* scheduled trigger for runnables: StartApplicationTrusted_OnDataRec_TrustedData */
  (void)ActivateTask(StartApplication_Trusted_Task); /* PRQA S 3417 */ /* MD_Rte_Os */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */


/**********************************************************************************************************************
 * Internal/External Rx connections
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BswM_Request_ESH_PostRunRequest_0_requestedMode(P2VAR(BswM_ESH_RunRequest, AUTOMATIC, RTE_BSWM_APPL_VAR) data) /* PRQA S 0850, 3673, 1505, 3206 */ /* MD_MSR_19.8, MD_Rte_Qac, MD_MSR_8.10, MD_Rte_3206 */
{
  *data = 0U;

  return RTE_E_UNCONNECTED;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BswM_Request_ESH_PostRunRequest_1_requestedMode(P2VAR(BswM_ESH_RunRequest, AUTOMATIC, RTE_BSWM_APPL_VAR) data) /* PRQA S 0850, 3673, 1505, 3206 */ /* MD_MSR_19.8, MD_Rte_Qac, MD_MSR_8.10, MD_Rte_3206 */
{
  *data = 0U;

  return RTE_E_UNCONNECTED;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BswM_Request_ESH_RunRequest_0_requestedMode(P2VAR(BswM_ESH_RunRequest, AUTOMATIC, RTE_BSWM_APPL_VAR) data) /* PRQA S 0850, 3673, 1505 */ /* MD_MSR_19.8, MD_Rte_Qac, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  *(data) = Rte_BswM_Provide_BswMRteModeRequestPort_requestedMode;

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BswM_Request_ESH_RunRequest_1_requestedMode(P2VAR(BswM_ESH_RunRequest, AUTOMATIC, RTE_BSWM_APPL_VAR) data) /* PRQA S 0850, 3673, 1505, 3206 */ /* MD_MSR_19.8, MD_Rte_Qac, MD_MSR_8.10, MD_Rte_3206 */
{
  *data = 0U;

  return RTE_E_UNCONNECTED;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StartApplication_PpSignal_StartAppl_RxCtrl_MyECU_omsg_StartAppl_Rx_MyECU_oCAN_09591065_Rx_DeSignal_StartAppl_RxCtrl_MyECU_omsg_StartAppl_Rx_MyECU_oCAN_09591065_Rx(P2VAR(uint8, AUTOMATIC, RTE_STARTAPPLICATION_APPL_VAR) data) /* PRQA S 0850, 3673, 1505 */ /* MD_MSR_19.8, MD_Rte_Qac, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  ret = Com_ReceiveSignal(ComConf_ComSignal_Signal_StartAppl_RxCtrl_MyECU_omsg_StartAppl_Rx_MyECU_oCAN_09591065_Rx, (data)); /* PRQA S 3453 */ /* MD_MSR_19.7 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StartApplication_PpSignal_StartAppl_RxData_MyECU_omsg_StartAppl_Rx_MyECU_oCAN_315f9453_Rx_DeSignal_StartAppl_RxData_MyECU_omsg_StartAppl_Rx_MyECU_oCAN_315f9453_Rx(P2VAR(uint8, AUTOMATIC, RTE_STARTAPPLICATION_APPL_VAR) data) /* PRQA S 0850, 3673, 1505 */ /* MD_MSR_19.8, MD_Rte_Qac, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  ret = Com_ReceiveSignal(ComConf_ComSignal_Signal_StartAppl_RxData_MyECU_omsg_StartAppl_Rx_MyECU_oCAN_315f9453_Rx, (data)); /* PRQA S 3453 */ /* MD_MSR_19.7 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StartApplication_PpTrustedDataVerification_DeValue(P2VAR(uint8, AUTOMATIC, RTE_STARTAPPLICATION_APPL_VAR) data) /* PRQA S 0850, 3673, 1505 */ /* MD_MSR_19.8, MD_Rte_Qac, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  *(data) = Rte_StartApplicationTrusted_PpTrustedDataVerification_DeValue;

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */


/**********************************************************************************************************************
 * Internal C/S connections
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_BT_Auto_Pairing_FD63_BT_Chip_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_BT_Auto_Pairing_FD63_BT_MAC_Address_WriteData(P2CONST(Dcm_Data6ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_BT_Handfree_Loopback_Test_FD6B_Reserved_Byte_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Connectivy_OnOff_Control_FD62_BT_WiFi_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Connectivy_OnOff_Control_FD62_ON_OFF_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Display_Color_Bar_Control_FD38_Display_Color_Bar_Control_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Enter_NAV_Demo_Mode_FD70_Demo_Mode_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Ethernet_IP_Ping_Function_FD6E_Ethernet_Channel_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Ethernet_IP_Ping_Function_FD6E_IPAddress_Byte1_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Ethernet_IP_Ping_Function_FD6E_IPAddress_Byte2_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Ethernet_IP_Ping_Function_FD6E_IPAddress_Byte3_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Ethernet_IP_Ping_Function_FD6E_IPAddress_Byte4_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Input_Output_OnOff_control_FD18_OnOffModule_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Input_Output_OnOff_control_FD18_OnOffValue_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Mirror_Link_connection_FD6D_Mirror_Link_connection_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Play_BT_Audio_Control_FD64_Reserved_Byte_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Power_Control_FD01_Power_Control_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_ReadGPSSNR_FD73_GPSSNR_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_ReadGPSSNR_FD73_GPSSNR_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_AME_diagnostic_version_FD08_CombinedDataElement_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_AME_diagnostic_version_FD08_CombinedDataElement_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data17ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_AME_diagnostic_version_FD08_CombinedDataElement_ReadDataLength(Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  DataLength = DataLength;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_Detection_Input_Info_FD92_CombinedDataElement_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_Detection_Input_Info_FD92_CombinedDataElement_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_FAN_speed_FD11_FAN_Speed_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_FAN_speed_FD11_FAN_Speed_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_GPS_Info_FD72_Number_of_fix_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_GPS_Info_FD72_Number_of_fix_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_GPS_Info_FD72_Number_of_used_satellite_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_GPS_Info_FD72_Number_of_used_satellite_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_GPS_Info_FD72_Number_of_visible_staellite_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_GPS_Info_FD72_Number_of_visible_staellite_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_GYRO_Status_FD71_GYRO_Status_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_GYRO_Status_FD71_GYRO_Status_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_Head_Unit_Connector_Status_FD90_CombinedDataElement_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_Head_Unit_Connector_Status_FD90_CombinedDataElement_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_MAC_Address_FD60_CombinedDataElement_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_MAC_Address_FD60_CombinedDataElement_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data6ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_MAC_Address_FD60_CombinedDataElement_ReadDataLength(Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  DataLength = DataLength;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_SW_and_HW_Version_FD04_CombinedDataElement_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_SW_and_HW_Version_FD04_CombinedDataElement_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data50ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_SW_and_HW_Version_FD04_CombinedDataElement_ReadDataLength(Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  DataLength = DataLength;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_harman_manufactory_part_number_FD06_Harman_Manufactory_Part_Number_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_harman_manufactory_part_number_FD06_Harman_Manufactory_Part_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data28ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_system_temperature_FD13_CombinedDataElement_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_system_temperature_FD13_CombinedDataElement_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_system_voltage_FD14_CombinedDataElement_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_system_voltage_FD14_CombinedDataElement_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Route_MIC_To_Internal_Speaker_FD36_Control_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Route_MIC_To_Internal_Speaker_FD36_Mic_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Route_Video_To_HMI_FD37_Route_Vedio_To_HMI_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Select_Audio_Buffer_Channel_Output_FD39_SelectAudioBufferChannelOutput_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Select_Speaker_Zone_FD33_Select_Speaker_Zone_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Set_AM_Frequency_FD52_AM_Frequency_WriteData(P2CONST(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Set_External_Output_Status_FD93_HW_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Set_External_Output_Status_FD93_Status_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Set_FAN_speed_FD12_FAN_Speed_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Set_FM_Frequency_FD50_FM_Frequency_WriteData(P2CONST(Dcm_Data3ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Set_HMI_Language_FD21_Set_HMI_Language_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Set_Mute_Control_FD31_Set_Mute_Control_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Set_Volume_FD30_Set_Volume_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Set_WIFI_Mode_FD67_WiFi_Mode_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Skip_welcome_confirm_FD20_Reserved_Byte_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Switch_BIOS_Mode_FD02_Switch_BIOS_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Switch_Source_FD40_SelectAudioBufferChannelOutput_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_TBOX_communication_status_check_FD80_TBOX_status_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_TBOX_communication_status_check_FD80_TBOX_status_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_TrackMedia_Audio_Source_Play_FD41_TrackMedia_AudioSourcePlay_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Write_MAC_Address_FD61_A0_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Write_MAC_Address_FD61_A1_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Write_MAC_Address_FD61_A2_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Write_MAC_Address_FD61_A3_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Write_MAC_Address_FD61_A4_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Write_MAC_Address_FD61_A5_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Write_MAC_Address_FD61_subID_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Write_harman_manufactory_part_number_FD07_Harman_Manufactory_Part_Number_WriteData(P2CONST(Dcm_Data28ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AM_signal_Strength_E011_AM_signal_Strength_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AM_signal_Strength_E011_AM_signal_Strength_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Audio_jack_status_E00A_Audio_jack_status_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Audio_jack_status_E00A_Audio_jack_status_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_BT_Power_Class_E007_BT_Power_Class_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_BT_Power_Class_E007_BT_Power_Class_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_BT_active_profile_list_E008_BT_active_profile_list_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_BT_active_profile_list_E008_BT_active_profile_list_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_BT_firmware_version_E009_BT_firmware_version_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_BT_firmware_version_E009_BT_firmware_version_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data16ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Bluetooth_Current_Discoverability_modes_E005_Bluetooth_Current_Discoverability_modes_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Bluetooth_Current_Discoverability_modes_E005_Bluetooth_Current_Discoverability_modes_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Bluetooth_Status_E006_Bluetooth_Status_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Bluetooth_Status_E006_Bluetooth_Status_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_C_matrix_Version_of_the_ECU_product_F1A2_C_matrix_Version_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_C_matrix_Version_of_the_ECU_product_F1A2_C_matrix_Version_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data10ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Currently_connected_USB_Type_E00C_Currently_connected_USB_Type_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Currently_connected_USB_Type_E00C_Currently_connected_USB_Type_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DTC_Occurrence_Timer_D005_Occure_Time_Inforamation_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DTC_Occurrence_Timer_D005_Occure_Time_Inforamation_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DID_StartApplication_ConditionCheckRead(P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 3197 */ /* MD_Rte_3197 */

  StartApplication_DIAG_ConditionCheckRead(ErrorCode);

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DID_StartApplication_ReadData(P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 0850, 1505, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 3197 */ /* MD_Rte_3197 */

  StartApplication_DIAG_DcmReadData(Data);

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DID_StartApplication_WriteData(P2CONST(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 3197 */ /* MD_Rte_3197 */

  StartApplication_DIAG_DcmWriteData(Data, ErrorCode);

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_ECU_Serial_Number_F18C_ECU_Serial_Number_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_ECU_Serial_Number_F18C_ECU_Serial_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data16ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_ECU_Serial_Number_F18C_ECU_Serial_Number_WriteData(P2CONST(Dcm_Data16ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Engine_Speed_D002_Engine_Speed_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Engine_Speed_D002_Engine_Speed_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_FM_signal_Strength_E012_FM_signal_Strength_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_FM_signal_Strength_E012_FM_signal_Strength_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_INVALID_SHORTNAME_AME_Reset_Factory_Mode_FD05_Reset_Factory_Mode_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Number_of_external_USB_devices_plugged_E00B_Number_of_external_USB_devices_plugged_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Number_of_external_USB_devices_plugged_E00B_Number_of_external_USB_devices_plugged_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Number_of_installed_cameras_E001_Number_of_installed_cameras_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Number_of_installed_cameras_E001_Number_of_installed_cameras_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Number_of_installed_speakers_E01C_Number_of_installed_speakers_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Number_of_installed_speakers_E01C_Number_of_installed_speakers_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Odometer_D004_Odometer_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Odometer_D004_Odometer_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Operating_Voltage_Value_D003_Operating_Voltage_Value_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Operating_Voltage_Value_D003_Operating_Voltage_Value_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Present_GPS_coordinates_shift_data_E003_GPS_coordinates_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Present_GPS_coordinates_shift_data_E003_GPS_coordinates_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Screen_resolution_E002_Height_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Screen_resolution_E002_Height_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Screen_resolution_E002_Width_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Screen_resolution_E002_Width_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Select_Speaker_Test_Tone_FD34_Select_tone_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Set_debug_on_off_control_FDF0_CombinedDataElement_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Set_debug_on_off_control_FDF0_CombinedDataElement_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Set_debug_on_off_control_FDF0_CombinedDataElement_ReadDataLength(Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  DataLength = DataLength;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Set_debug_on_off_control_FDF0_CombinedDataElement_WriteData(P2CONST(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, uint16 DataLength, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Data = Data;
  DataLength = DataLength;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Support_AM_frequency_Max_E00E_Support_AM_frequency_Max_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Support_AM_frequency_Max_E00E_Support_AM_frequency_Max_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Support_AM_frequency_Min_E00D_Support_AM_frequency_Min_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Support_AM_frequency_Min_E00D_Support_AM_frequency_Min_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Support_FM_frequency_Max_E010_Support_FM_frequency_Max_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Support_FM_frequency_Max_E010_Support_FM_frequency_Max_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Support_FM_frequency_Min_E00F_Support_FM_frequency_Min_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Support_FM_frequency_Min_E00F_Support_FM_frequency_Min_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Switch_HU_boot_mode_FDF1_Boot_Mode_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_System_Supplier_ECU_Hardware_Version_Number_F193_Hardware_Version_Number_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_System_Supplier_ECU_Hardware_Version_Number_F193_Hardware_Version_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data16ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_System_Supplier_ECU_Software_Version_Number_F195_Software_Version_Number_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_System_Supplier_ECU_Software_Version_Number_F195_Software_Version_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data16ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_System_Supplier_Identifier_F18A_System_Supplier_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_System_Supplier_Identifier_F18A_System_Supplier_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data10ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Tbox_Gateway_sub_mask_E017_Tbox_Gateway_sub_mask_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Tbox_Gateway_sub_mask_E017_Tbox_Gateway_sub_mask_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data16ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Tbox_IP_Address_E016_Tbox_IP_Address_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Tbox_IP_Address_E016_Tbox_IP_Address_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data16ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Tbox_Last_connection_lost_time_stamp_E018_Tbox_Last_connection_lost_time_stamp_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Tbox_Last_connection_lost_time_stamp_E018_Tbox_Last_connection_lost_time_stamp_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data16ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Tbox_geographical_coordinates_when_connection_lost_E019_Tbox_geographical_coordinates_when_connection_lost_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Tbox_geographical_coordinates_when_connection_lost_E019_Tbox_geographical_coordinates_when_connection_lost_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data16ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Telematics_Module_Status_E01A_Telematics_Module_Status_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Telematics_Module_Status_E01A_Telematics_Module_Status_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VehicleNetworkConfiguration_F1A1_VehicleNetworkConfiguration_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VehicleNetworkConfiguration_F1A1_VehicleNetworkConfiguration_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data17ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VehicleNetworkConfiguration_F1A1_VehicleNetworkConfiguration_WriteData(P2CONST(Dcm_Data17ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Vehicle_Identification_Number_F190_VIN_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Vehicle_Identification_Number_F190_VIN_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data17ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Vehicle_Identification_Number_F190_VIN_WriteData(P2CONST(Dcm_Data17ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Vehicle_Manufacture_Spare_Part_Number_F187_Vehicle_Manufacture_Spare_Part_Number_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Vehicle_Manufacture_Spare_Part_Number_F187_Vehicle_Manufacture_Spare_Part_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data15ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Vehicle_Speed_D001_Vehicle_Speed_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Vehicle_Speed_D001_Vehicle_Speed_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wi_Fi_Module_Firmware_Version_E014_Wi_Fi_Module_Firmware_Version_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wi_Fi_Module_Firmware_Version_E014_Wi_Fi_Module_Firmware_Version_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data16ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wi_Fi_Module_Hardware_Part_Number_E015_Wi_Fi_Module_Hardware_Part_Number_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wi_Fi_Module_Hardware_Part_Number_E015_Wi_Fi_Module_Hardware_Part_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data16ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wi_Fi_Module_Status_E013_Wi_Fi_Module_Status_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wi_Fi_Module_Status_E013_Wi_Fi_Module_Status_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_HUT_self_check_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_HUT_self_check_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_HUT_self_check_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_UnlockedL1_CompareKey(P2CONST(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Key, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Key = Key;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_UnlockedL1_GetSeed(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Seed, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  OpStatus = OpStatus;
  Seed = Seed;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DemDataElementClass_StartApplication_ReadData(P2VAR(DataArrayType_uint8_2, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data) /* PRQA S 0850, 1505, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 3197 */ /* MD_Rte_3197 */

  StartApplication_DIAG_DemReadData(Data);

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_PID_0x14_DID_Data_ReadData(P2VAR(DataArrayType_uint8_2, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemSatellite_0_CBReadData_DemDataElementClass_StartApplication_ReadData(P2VAR(DataArrayType_uint8_2, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) Data) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemSatellite_0_CBReadData_PID_0x14_DID_Data_ReadData(P2VAR(DataArrayType_uint8_2, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) Data) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_NvM_NvM_RpNotifyJobEnd_StartApplication_NvMBlock1_JobFinished(NvM_ServiceIdType ServiceId, NvM_RequestResultType JobResult) /* PRQA S 0850, 1505, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 3197 */ /* MD_Rte_3197 */

  StartApplication_MEM_JobFinished_StartApplication_NvMBlock1(ServiceId, JobResult);

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_NvM_NvM_RpNotifyJobEnd_StartApplication_NvMBlock2_JobFinished(NvM_ServiceIdType ServiceId, NvM_RequestResultType JobResult) /* PRQA S 0850, 1505, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 3197 */ /* MD_Rte_3197 */

  StartApplication_MEM_JobFinished_StartApplication_NvMBlock2(ServiceId, JobResult);

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StartApplication_PpAliveWdgMSupervisedEntity_StartApplication_CheckpointReached(WdgM_CheckpointIdType checkpointId) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */

  checkpointId = checkpointId;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StartApplication_PpDemOpCycle_PowerCycle_SetOperationCycleState(Dem_OperationCycleStateType CycleState) /* PRQA S 0850, 1505, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
{
  Std_ReturnType ret;

  ret = Dem_SetOperationCycleState((Dem_OperationCycleIdType)1, CycleState);

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StartApplication_PpDiagnosticMonitor_DEM_EVENT_StartApplication_SetEventStatus(Dem_EventStatusType EventStatus) /* PRQA S 0850, 1505, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
{
  Std_ReturnType ret;

  ret = Dem_SetEventStatus((Dem_EventIdType)56, EventStatus);

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StartApplication_PpMemoryAccessViolationState_GetState(P2VAR(boolean, AUTOMATIC, RTE_STARTAPPLICATION_APPL_VAR) State) /* PRQA S 0850, 1505, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 3197 */ /* MD_Rte_3197 */

  StartApplicationMemoryAccessState_GetState(State);

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StartApplication_PpMemoryAccessViolationState_Reset(void) /* PRQA S 0850, 1505, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 3197 */ /* MD_Rte_3197 */

  StartApplicationMemoryAccessState_Reset();

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StartApplication_PpPS_StartApplication_NvMBlock1_ReadBlock(dtRef_VOID DstPtr) /* PRQA S 0850, 1505, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
{
  Std_ReturnType ret;

  ret = NvM_ReadBlock((NvM_BlockIdType)5, DstPtr);

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StartApplication_PpPS_StartApplication_NvMBlock1_WriteBlock(dtRef_const_VOID SrcPtr) /* PRQA S 0850, 1505, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
{
  Std_ReturnType ret;

  ret = NvM_WriteBlock((NvM_BlockIdType)5, SrcPtr);

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StartApplication_PpPS_StartApplication_NvMBlock2_ReadBlock(dtRef_VOID DstPtr) /* PRQA S 0850, 1505, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
{
  Std_ReturnType ret;

  ret = NvM_ReadBlock((NvM_BlockIdType)4, DstPtr);

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StartApplication_PpPS_StartApplication_NvMBlock2_WriteBlock(dtRef_const_VOID SrcPtr) /* PRQA S 0850, 1505, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
{
  Std_ReturnType ret;

  ret = NvM_WriteBlock((NvM_BlockIdType)4, SrcPtr);

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StartApplication_PpTrustedDataInvalid_Write(uint8 Value) /* PRQA S 0850, 1505, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 3197 */ /* MD_Rte_3197 */

  StartApplicationTrusted_TriggerMemoryAccesViolation(Value);

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StartApplication_UR_CN_CAN_52ce3533_GetCurrentComMode(P2VAR(ComM_ModeType, AUTOMATIC, RTE_STARTAPPLICATION_APPL_VAR) ComMode) /* PRQA S 0850, 1505, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
{
  Std_ReturnType ret;

  ret = ComM_GetCurrentComMode((ComM_UserHandleType)0, ComMode);

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StartApplication_UR_CN_CAN_52ce3533_RequestComMode(ComM_ModeType ComMode) /* PRQA S 0850, 1505, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_Qac */
{
  Std_ReturnType ret;

  ret = ComM_RequestComMode((ComM_UserHandleType)0, ComMode);

  return ret;
}


/**********************************************************************************************************************
 * Mode Switch API (Rte_Switch)
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode(BswM_ESH_Mode nextMode) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  BswM_ESH_Mode currentMode;
  SuspendOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  currentMode = Rte_ModeMachine_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode;
  if (nextMode >= 5U)
  {
    ResumeOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    Rte_CallDetReportError(RTE_SWITCH_SERVICE_ID, RTE_E_DET_MODEARGUMENT); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    ret = RTE_E_LIMIT;
  }
  else if (currentMode >= 5U)
  {
    ResumeOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    Rte_CallDetReportError(RTE_SWITCH_SERVICE_ID, RTE_E_DET_MODESTATE); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    ret = RTE_E_LIMIT;
  }
  else
  {
    Rte_ModeMachine_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode = nextMode;
    ResumeOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }

  return ret;
} /* PRQA S 6050 */ /* MD_MSR_STCAL */


/**********************************************************************************************************************
 * Mode reading API (Rte_Mode)
 *********************************************************************************************************************/

FUNC(BswM_ESH_Mode, RTE_CODE) Rte_Mode_BswM_Notification_ESH_ModeNotification_BswM_MDGP_ESH_Mode(void) /* PRQA S 3408 */ /* MD_Rte_3408 */
{
  BswM_ESH_Mode curMode;
  curMode = Rte_ModeMachine_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode;
  return curMode;
}


/**********************************************************************************************************************
 * Transmission/Mode Switch Acknowledgement handling (Rte_Feedback/Rte_SwitchAck)
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_SwitchAck_Dcm_DcmEcuReset_DcmEcuReset(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{

  return RTE_E_UNCONNECTED;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */


/**********************************************************************************************************************
 * Mode Switch API (Rte_Switch)
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Dcm_DcmCommunicationControl_ComMConf_ComMChannel_CN_CAN_fe6ecc87_DcmCommunicationControl_ComMConf_ComMChannel_CN_CAN_fe6ecc87(Dcm_CommunicationModeType nextMode) /* PRQA S 0850, 1505, 3206 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK;

  nextMode = nextMode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Dcm_DcmControlDtcSetting_DcmControlDtcSetting(Dcm_ControlDtcSettingType nextMode) /* PRQA S 0850, 1505, 3206 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK;

  nextMode = nextMode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Dcm_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl(Dcm_DiagnosticSessionControlType nextMode) /* PRQA S 0850, 1505, 3206 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK;

  nextMode = nextMode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Dcm_DcmEcuReset_DcmEcuReset(Dcm_EcuResetType nextMode) /* PRQA S 0850, 1505, 3206 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK;

  nextMode = nextMode;

  return ret;
}


/**********************************************************************************************************************
 * Task bodies for RTE controlled tasks
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Task:     Default_Appl_Init_Task
 * Priority: 45
 * Schedule: NON
 *********************************************************************************************************************/
TASK(Default_Appl_Init_Task) /* PRQA S 3408, 1503 */ /* MD_Rte_3408, MD_MSR_14.1 */
{

  /* call runnable */
  StartApplication_Init();

  /* call runnable */
  StartApplicationMemoryAccessState_Init();

  (void)TerminateTask(); /* PRQA S 3417 */ /* MD_Rte_Os */
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

/**********************************************************************************************************************
 * Task:     Default_Appl_Task
 * Priority: 5
 * Schedule: NON
 *********************************************************************************************************************/
TASK(Default_Appl_Task) /* PRQA S 3408, 1503 */ /* MD_Rte_3408, MD_MSR_14.1 */
{
  EventMaskType ev;

  for(;;)
  {
    (void)WaitEvent(Rte_Ev_Run_StartApplication_StartApplication_Cyclic1000ms | Rte_Ev_Run_StartApplication_StartApplication_Cyclic10ms | Rte_Ev_Run_StartApplication_StartApplication_Cyclic1ms | Rte_Ev_Run_StartApplication_StartApplication_Cyclic250ms | Rte_Ev_Run_StartApplication_StartApplication_OnDataRec_RxCtrl | Rte_Ev_Run_StartApplication_StartApplication_OnDataRec_RxData); /* PRQA S 3417 */ /* MD_Rte_Os */
    (void)GetEvent(Default_Appl_Task, &ev); /* PRQA S 3417 */ /* MD_Rte_Os */
    (void)ClearEvent(ev & (Rte_Ev_Run_StartApplication_StartApplication_Cyclic1000ms | Rte_Ev_Run_StartApplication_StartApplication_Cyclic10ms | Rte_Ev_Run_StartApplication_StartApplication_Cyclic1ms | Rte_Ev_Run_StartApplication_StartApplication_Cyclic250ms | Rte_Ev_Run_StartApplication_StartApplication_OnDataRec_RxCtrl | Rte_Ev_Run_StartApplication_StartApplication_OnDataRec_RxData)); /* PRQA S 3417 */ /* MD_Rte_Os */

    if ((ev & Rte_Ev_Run_StartApplication_StartApplication_Cyclic1000ms) != (EventMaskType)0)
    {
      /* call runnable */
      StartApplication_Cyclic1000ms();
    }

    if ((ev & Rte_Ev_Run_StartApplication_StartApplication_Cyclic10ms) != (EventMaskType)0)
    {
      /* call runnable */
      StartApplication_Cyclic10ms();
    }

    if ((ev & Rte_Ev_Run_StartApplication_StartApplication_Cyclic1ms) != (EventMaskType)0)
    {
      /* call runnable */
      StartApplication_Cyclic1ms();
    }

    if ((ev & Rte_Ev_Run_StartApplication_StartApplication_Cyclic250ms) != (EventMaskType)0)
    {
      /* call runnable */
      StartApplication_Cyclic250ms();
    }

    if ((ev & Rte_Ev_Run_StartApplication_StartApplication_OnDataRec_RxCtrl) != (EventMaskType)0)
    {
      /* call runnable */
      StartApplication_OnDataRec_RxCtrl();
    }

    if ((ev & Rte_Ev_Run_StartApplication_StartApplication_OnDataRec_RxData) != (EventMaskType)0)
    {
      /* call runnable */
      StartApplication_OnDataRec_RxData();
    }
  }
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

/**********************************************************************************************************************
 * Task:     Default_BSW_Async_Task
 * Priority: 30
 * Schedule: NON
 *********************************************************************************************************************/
TASK(Default_BSW_Async_Task) /* PRQA S 3408, 1503 */ /* MD_Rte_3408, MD_MSR_14.1 */
{
  EventMaskType ev;

  for(;;)
  {
    (void)WaitEvent(Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_10ms | Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_1ms | Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_20ms | Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_5ms); /* PRQA S 3417 */ /* MD_Rte_Os */
    (void)GetEvent(Default_BSW_Async_Task, &ev); /* PRQA S 3417 */ /* MD_Rte_Os */
    (void)ClearEvent(ev & (Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_10ms | Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_1ms | Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_20ms | Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_5ms)); /* PRQA S 3417 */ /* MD_Rte_Os */

    if ((ev & Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_10ms) != (EventMaskType)0)
    {
      /* call runnable */
      BswM_MainFunction();

      /* call schedulable entity */
      CanSM_MainFunction();
    }

    if ((ev & Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_5ms) != (EventMaskType)0)
    {
      /* call schedulable entity */
      CanTp_MainFunction();
    }

    if ((ev & Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_10ms) != (EventMaskType)0)
    {
      /* call schedulable entity */
      Can_MainFunction_BusOff();

      /* call schedulable entity */
      Can_MainFunction_Mode();

      /* call schedulable entity */
      Can_MainFunction_Wakeup();
    }

    if ((ev & Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_20ms) != (EventMaskType)0)
    {
      /* call runnable */
      ComM_MainFunction_0();
    }

    if ((ev & Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_10ms) != (EventMaskType)0)
    {
      /* call schedulable entity */
      Com_MainFunctionRx();
    }

    if ((ev & Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_1ms) != (EventMaskType)0)
    {
      /* call schedulable entity */
      Com_MainFunctionTx();
    }

    if ((ev & Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_10ms) != (EventMaskType)0)
    {
      /* call runnable */
      Dcm_MainFunction();

      /* call runnable */
      Dem_MasterMainFunction();

      /* call runnable */
      Dem_SatelliteMainFunction();

      /* call runnable */
      EcuM_MainFunction();

      /* call runnable */
      NvM_MainFunction();
    }

    if ((ev & Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_1ms) != (EventMaskType)0)
    {
      /* call schedulable entity */
      Rte_ComSendSignalProxyPeriodic();
    }

    if ((ev & Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_5ms) != (EventMaskType)0)
    {
      /* call schedulable entity */
      Ea_MainFunction();

      /* call schedulable entity */
      Eep_MainFunction();

      /* call schedulable entity */
      Spi_MainFunction_Handling();
    }

    if ((ev & Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_10ms) != (EventMaskType)0)
    {
      /* call schedulable entity */
      RamTst_MainFunction();

      /* call schedulable entity */
      NmOsek_MainFunction();

      /* call schedulable entity */
      Can_MainFunction_Write();
    }
  }
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

/**********************************************************************************************************************
 * Task:     StartApplication_MemoryViolation_Task
 * Priority: 5
 * Schedule: NON
 * Alarm:    Cycle Time 0.01 s Alarm Offset 0 s
 *********************************************************************************************************************/
TASK(StartApplication_MemoryViolation_Task) /* PRQA S 3408, 1503 */ /* MD_Rte_3408, MD_MSR_14.1 */
{

  /* call runnable */
  StartApplication_MEMORYPROTECTION_Cyclic10ms();

  (void)TerminateTask(); /* PRQA S 3417 */ /* MD_Rte_Os */
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

#define RTE_STOP_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_0781:  MISRA rule: 5.6
     Reason:     The name is being used as a structure/union member as well as being a label, tag or ordinary identifier.
                 The compliance to this rule is under user's control.
     Risk:       Ambiguous identifiers can lead to compiler errors / warnings.
     Prevention: Verified during compile time. If the compiler reports an error or warning, the user has to rename the objects leading to the violation.

   MD_Rte_3197:  MISRA rule: -
     Reason:     The variable is not written by the code in all possible code variants. Due to this, the variable is initialized.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_3206:  MISRA rule: -
     Reason:     The parameter's are not used by the code in all possible code variants.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_3408:  MISRA rule: 8.8
     Reason:     For the purpose of monitoring during calibration or debugging it is necessary to use non-static declarations.
                 This is covered in the MISRA C compliance section of the Rte specification.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_3447:  MISRA rule: 8.8
     Reason:     For the purpose of monitoring during calibration or debugging it is necessary to use non-static declarations.
                 This is covered in the MISRA C compliance section of the Rte specification.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_Os:
     Reason:     This justification is used as summary justification for all deviations caused by the MICROSAR OS
                 which is for testing of the RTE. Those deviations are no issues in the RTE code.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_Qac:
     Reason:     This justification is used as summary justification for all deviations caused by wrong analysis tool results.
                 The used analysis tool QAC 7.0 sometimes creates wrong messages. Those deviations are no issues in the RTE code.
     Risk:       No functional risk.
     Prevention: Not required.

*/
