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
 *          File:  Rte_Dcm.h
 *        Config:  TsiStandard.dpa
 *   ECU-Project:  MyECU
 *
 *     Generator:  MICROSAR RTE Generator Version 4.19.0
 *                 RTE Core Version 1.19.0
 *       License:  CBD1800257
 *
 *   Description:  Application header file for SW-C <Dcm>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_DCM_H
# define _RTE_DCM_H

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

# include "Rte_Dcm_Type.h"
# include "Rte_DataHandleType.h"


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Dcm_DcmCommunicationControl_ComMConf_ComMChannel_CN_CAN_fe6ecc87_DcmCommunicationControl_ComMConf_ComMChannel_CN_CAN_fe6ecc87(Dcm_CommunicationModeType nextMode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Dcm_DcmControlDtcSetting_DcmControlDtcSetting(Dcm_ControlDtcSettingType nextMode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Dcm_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl(Dcm_DiagnosticSessionControlType nextMode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Dcm_DcmEcuReset_DcmEcuReset(Dcm_EcuResetType nextMode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_SwitchAck_Dcm_DcmEcuReset_DcmEcuReset(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_BT_Auto_Pairing_FD63_BT_Chip_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_BT_Auto_Pairing_FD63_BT_Chip_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_BT_Auto_Pairing_FD63_BT_MAC_Address_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_BT_Auto_Pairing_FD63_BT_MAC_Address_WriteData(P2CONST(Dcm_Data6ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_BT_Handfree_Loopback_Test_FD6B_Reserved_Byte_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_BT_Handfree_Loopback_Test_FD6B_Reserved_Byte_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Connectivy_OnOff_Control_FD62_BT_WiFi_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Connectivy_OnOff_Control_FD62_BT_WiFi_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Connectivy_OnOff_Control_FD62_ON_OFF_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Connectivy_OnOff_Control_FD62_ON_OFF_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Display_Color_Bar_Control_FD38_Display_Color_Bar_Control_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Display_Color_Bar_Control_FD38_Display_Color_Bar_Control_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Enter_NAV_Demo_Mode_FD70_Demo_Mode_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Enter_NAV_Demo_Mode_FD70_Demo_Mode_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Ethernet_IP_Ping_Function_FD6E_Ethernet_Channel_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Ethernet_IP_Ping_Function_FD6E_Ethernet_Channel_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Ethernet_IP_Ping_Function_FD6E_IPAddress_Byte1_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Ethernet_IP_Ping_Function_FD6E_IPAddress_Byte1_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Ethernet_IP_Ping_Function_FD6E_IPAddress_Byte2_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Ethernet_IP_Ping_Function_FD6E_IPAddress_Byte2_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Ethernet_IP_Ping_Function_FD6E_IPAddress_Byte3_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Ethernet_IP_Ping_Function_FD6E_IPAddress_Byte3_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Ethernet_IP_Ping_Function_FD6E_IPAddress_Byte4_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Ethernet_IP_Ping_Function_FD6E_IPAddress_Byte4_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Input_Output_OnOff_control_FD18_OnOffModule_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Input_Output_OnOff_control_FD18_OnOffModule_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Input_Output_OnOff_control_FD18_OnOffValue_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Input_Output_OnOff_control_FD18_OnOffValue_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Mirror_Link_connection_FD6D_Mirror_Link_connection_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Mirror_Link_connection_FD6D_Mirror_Link_connection_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Play_BT_Audio_Control_FD64_Reserved_Byte_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Play_BT_Audio_Control_FD64_Reserved_Byte_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Power_Control_FD01_Power_Control_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Power_Control_FD01_Power_Control_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_ReadGPSSNR_FD73_GPSSNR_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_ReadGPSSNR_FD73_GPSSNR_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_ReadGPSSNR_FD73_GPSSNR_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_AME_diagnostic_version_FD08_CombinedDataElement_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_AME_diagnostic_version_FD08_CombinedDataElement_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_AME_diagnostic_version_FD08_CombinedDataElement_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data17ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_AME_diagnostic_version_FD08_CombinedDataElement_ReadDataLength(Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_Detection_Input_Info_FD92_CombinedDataElement_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_Detection_Input_Info_FD92_CombinedDataElement_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_Detection_Input_Info_FD92_CombinedDataElement_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_FAN_speed_FD11_FAN_Speed_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_FAN_speed_FD11_FAN_Speed_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_FAN_speed_FD11_FAN_Speed_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_GPS_Info_FD72_Number_of_fix_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_GPS_Info_FD72_Number_of_fix_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_GPS_Info_FD72_Number_of_fix_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_GPS_Info_FD72_Number_of_used_satellite_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_GPS_Info_FD72_Number_of_used_satellite_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_GPS_Info_FD72_Number_of_used_satellite_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_GPS_Info_FD72_Number_of_visible_staellite_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_GPS_Info_FD72_Number_of_visible_staellite_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_GPS_Info_FD72_Number_of_visible_staellite_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_GYRO_Status_FD71_GYRO_Status_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_GYRO_Status_FD71_GYRO_Status_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_GYRO_Status_FD71_GYRO_Status_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_Head_Unit_Connector_Status_FD90_CombinedDataElement_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_Head_Unit_Connector_Status_FD90_CombinedDataElement_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_Head_Unit_Connector_Status_FD90_CombinedDataElement_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_MAC_Address_FD60_CombinedDataElement_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_MAC_Address_FD60_CombinedDataElement_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_MAC_Address_FD60_CombinedDataElement_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data6ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_MAC_Address_FD60_CombinedDataElement_ReadDataLength(Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_SW_and_HW_Version_FD04_CombinedDataElement_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_SW_and_HW_Version_FD04_CombinedDataElement_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_SW_and_HW_Version_FD04_CombinedDataElement_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data50ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_SW_and_HW_Version_FD04_CombinedDataElement_ReadDataLength(Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_harman_manufactory_part_number_FD06_Harman_Manufactory_Part_Number_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_harman_manufactory_part_number_FD06_Harman_Manufactory_Part_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_harman_manufactory_part_number_FD06_Harman_Manufactory_Part_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data28ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_system_temperature_FD13_CombinedDataElement_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_system_temperature_FD13_CombinedDataElement_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_system_temperature_FD13_CombinedDataElement_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_system_voltage_FD14_CombinedDataElement_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_system_voltage_FD14_CombinedDataElement_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Read_system_voltage_FD14_CombinedDataElement_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Route_MIC_To_Internal_Speaker_FD36_Control_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Route_MIC_To_Internal_Speaker_FD36_Control_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Route_MIC_To_Internal_Speaker_FD36_Mic_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Route_MIC_To_Internal_Speaker_FD36_Mic_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Route_Video_To_HMI_FD37_Route_Vedio_To_HMI_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Route_Video_To_HMI_FD37_Route_Vedio_To_HMI_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Select_Audio_Buffer_Channel_Output_FD39_SelectAudioBufferChannelOutput_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Select_Audio_Buffer_Channel_Output_FD39_SelectAudioBufferChannelOutput_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Select_Speaker_Zone_FD33_Select_Speaker_Zone_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Select_Speaker_Zone_FD33_Select_Speaker_Zone_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Set_AM_Frequency_FD52_AM_Frequency_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Set_AM_Frequency_FD52_AM_Frequency_WriteData(P2CONST(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Set_External_Output_Status_FD93_HW_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Set_External_Output_Status_FD93_HW_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Set_External_Output_Status_FD93_Status_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Set_External_Output_Status_FD93_Status_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Set_FAN_speed_FD12_FAN_Speed_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Set_FAN_speed_FD12_FAN_Speed_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Set_FM_Frequency_FD50_FM_Frequency_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Set_FM_Frequency_FD50_FM_Frequency_WriteData(P2CONST(Dcm_Data3ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Set_HMI_Language_FD21_Set_HMI_Language_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Set_HMI_Language_FD21_Set_HMI_Language_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Set_Mute_Control_FD31_Set_Mute_Control_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Set_Mute_Control_FD31_Set_Mute_Control_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Set_Volume_FD30_Set_Volume_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Set_Volume_FD30_Set_Volume_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Set_WIFI_Mode_FD67_WiFi_Mode_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Set_WIFI_Mode_FD67_WiFi_Mode_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Skip_welcome_confirm_FD20_Reserved_Byte_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Skip_welcome_confirm_FD20_Reserved_Byte_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Switch_BIOS_Mode_FD02_Switch_BIOS_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Switch_BIOS_Mode_FD02_Switch_BIOS_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Switch_Source_FD40_SelectAudioBufferChannelOutput_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Switch_Source_FD40_SelectAudioBufferChannelOutput_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_TBOX_communication_status_check_FD80_TBOX_status_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_TBOX_communication_status_check_FD80_TBOX_status_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_TBOX_communication_status_check_FD80_TBOX_status_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_TrackMedia_Audio_Source_Play_FD41_TrackMedia_AudioSourcePlay_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_TrackMedia_Audio_Source_Play_FD41_TrackMedia_AudioSourcePlay_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Write_MAC_Address_FD61_A0_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Write_MAC_Address_FD61_A0_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Write_MAC_Address_FD61_A1_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Write_MAC_Address_FD61_A1_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Write_MAC_Address_FD61_A2_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Write_MAC_Address_FD61_A2_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Write_MAC_Address_FD61_A3_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Write_MAC_Address_FD61_A3_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Write_MAC_Address_FD61_A4_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Write_MAC_Address_FD61_A4_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Write_MAC_Address_FD61_A5_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Write_MAC_Address_FD61_A5_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Write_MAC_Address_FD61_subID_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Write_MAC_Address_FD61_subID_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Write_harman_manufactory_part_number_FD07_Harman_Manufactory_Part_Number_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AME_Write_harman_manufactory_part_number_FD07_Harman_Manufactory_Part_Number_WriteData(P2CONST(Dcm_Data28ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AM_signal_Strength_E011_AM_signal_Strength_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AM_signal_Strength_E011_AM_signal_Strength_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AM_signal_Strength_E011_AM_signal_Strength_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Audio_jack_status_E00A_Audio_jack_status_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Audio_jack_status_E00A_Audio_jack_status_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Audio_jack_status_E00A_Audio_jack_status_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_BT_Power_Class_E007_BT_Power_Class_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_BT_Power_Class_E007_BT_Power_Class_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_BT_Power_Class_E007_BT_Power_Class_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_BT_active_profile_list_E008_BT_active_profile_list_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_BT_active_profile_list_E008_BT_active_profile_list_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_BT_active_profile_list_E008_BT_active_profile_list_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_BT_firmware_version_E009_BT_firmware_version_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_BT_firmware_version_E009_BT_firmware_version_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_BT_firmware_version_E009_BT_firmware_version_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data16ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Bluetooth_Current_Discoverability_modes_E005_Bluetooth_Current_Discoverability_modes_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Bluetooth_Current_Discoverability_modes_E005_Bluetooth_Current_Discoverability_modes_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Bluetooth_Current_Discoverability_modes_E005_Bluetooth_Current_Discoverability_modes_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Bluetooth_Status_E006_Bluetooth_Status_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Bluetooth_Status_E006_Bluetooth_Status_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Bluetooth_Status_E006_Bluetooth_Status_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_C_matrix_Version_of_the_ECU_product_F1A2_C_matrix_Version_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_C_matrix_Version_of_the_ECU_product_F1A2_C_matrix_Version_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_C_matrix_Version_of_the_ECU_product_F1A2_C_matrix_Version_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data10ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Currently_connected_USB_Type_E00C_Currently_connected_USB_Type_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Currently_connected_USB_Type_E00C_Currently_connected_USB_Type_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Currently_connected_USB_Type_E00C_Currently_connected_USB_Type_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DTC_Occurrence_Timer_D005_Occure_Time_Inforamation_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DTC_Occurrence_Timer_D005_Occure_Time_Inforamation_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DTC_Occurrence_Timer_D005_Occure_Time_Inforamation_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DID_StartApplication_ConditionCheckRead(P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DID_StartApplication_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DID_StartApplication_ReadData(P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DID_StartApplication_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DID_StartApplication_WriteData(P2CONST(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_ECU_Serial_Number_F18C_ECU_Serial_Number_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_ECU_Serial_Number_F18C_ECU_Serial_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_ECU_Serial_Number_F18C_ECU_Serial_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data16ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_ECU_Serial_Number_F18C_ECU_Serial_Number_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_ECU_Serial_Number_F18C_ECU_Serial_Number_WriteData(P2CONST(Dcm_Data16ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Engine_Speed_D002_Engine_Speed_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Engine_Speed_D002_Engine_Speed_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Engine_Speed_D002_Engine_Speed_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_FM_signal_Strength_E012_FM_signal_Strength_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_FM_signal_Strength_E012_FM_signal_Strength_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_FM_signal_Strength_E012_FM_signal_Strength_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_INVALID_SHORTNAME_AME_Reset_Factory_Mode_FD05_Reset_Factory_Mode_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_INVALID_SHORTNAME_AME_Reset_Factory_Mode_FD05_Reset_Factory_Mode_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Number_of_external_USB_devices_plugged_E00B_Number_of_external_USB_devices_plugged_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Number_of_external_USB_devices_plugged_E00B_Number_of_external_USB_devices_plugged_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Number_of_external_USB_devices_plugged_E00B_Number_of_external_USB_devices_plugged_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Number_of_installed_cameras_E001_Number_of_installed_cameras_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Number_of_installed_cameras_E001_Number_of_installed_cameras_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Number_of_installed_cameras_E001_Number_of_installed_cameras_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Number_of_installed_speakers_E01C_Number_of_installed_speakers_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Number_of_installed_speakers_E01C_Number_of_installed_speakers_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Number_of_installed_speakers_E01C_Number_of_installed_speakers_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Odometer_D004_Odometer_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Odometer_D004_Odometer_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Odometer_D004_Odometer_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Operating_Voltage_Value_D003_Operating_Voltage_Value_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Operating_Voltage_Value_D003_Operating_Voltage_Value_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Operating_Voltage_Value_D003_Operating_Voltage_Value_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Present_GPS_coordinates_shift_data_E003_GPS_coordinates_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Present_GPS_coordinates_shift_data_E003_GPS_coordinates_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Present_GPS_coordinates_shift_data_E003_GPS_coordinates_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Screen_resolution_E002_Height_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Screen_resolution_E002_Height_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Screen_resolution_E002_Height_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Screen_resolution_E002_Width_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Screen_resolution_E002_Width_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Screen_resolution_E002_Width_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Select_Speaker_Test_Tone_FD34_Select_tone_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Select_Speaker_Test_Tone_FD34_Select_tone_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Set_debug_on_off_control_FDF0_CombinedDataElement_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Set_debug_on_off_control_FDF0_CombinedDataElement_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Set_debug_on_off_control_FDF0_CombinedDataElement_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Set_debug_on_off_control_FDF0_CombinedDataElement_ReadDataLength(Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Set_debug_on_off_control_FDF0_CombinedDataElement_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, uint16 DataLength, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Set_debug_on_off_control_FDF0_CombinedDataElement_WriteData(P2CONST(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, uint16 DataLength, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Support_AM_frequency_Max_E00E_Support_AM_frequency_Max_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Support_AM_frequency_Max_E00E_Support_AM_frequency_Max_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Support_AM_frequency_Max_E00E_Support_AM_frequency_Max_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Support_AM_frequency_Min_E00D_Support_AM_frequency_Min_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Support_AM_frequency_Min_E00D_Support_AM_frequency_Min_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Support_AM_frequency_Min_E00D_Support_AM_frequency_Min_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Support_FM_frequency_Max_E010_Support_FM_frequency_Max_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Support_FM_frequency_Max_E010_Support_FM_frequency_Max_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Support_FM_frequency_Max_E010_Support_FM_frequency_Max_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Support_FM_frequency_Min_E00F_Support_FM_frequency_Min_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Support_FM_frequency_Min_E00F_Support_FM_frequency_Min_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Support_FM_frequency_Min_E00F_Support_FM_frequency_Min_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Switch_HU_boot_mode_FDF1_Boot_Mode_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Switch_HU_boot_mode_FDF1_Boot_Mode_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_System_Supplier_ECU_Hardware_Version_Number_F193_Hardware_Version_Number_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_System_Supplier_ECU_Hardware_Version_Number_F193_Hardware_Version_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_System_Supplier_ECU_Hardware_Version_Number_F193_Hardware_Version_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data16ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_System_Supplier_ECU_Software_Version_Number_F195_Software_Version_Number_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_System_Supplier_ECU_Software_Version_Number_F195_Software_Version_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_System_Supplier_ECU_Software_Version_Number_F195_Software_Version_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data16ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_System_Supplier_Identifier_F18A_System_Supplier_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_System_Supplier_Identifier_F18A_System_Supplier_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_System_Supplier_Identifier_F18A_System_Supplier_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data10ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Tbox_Gateway_sub_mask_E017_Tbox_Gateway_sub_mask_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Tbox_Gateway_sub_mask_E017_Tbox_Gateway_sub_mask_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Tbox_Gateway_sub_mask_E017_Tbox_Gateway_sub_mask_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data16ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Tbox_IP_Address_E016_Tbox_IP_Address_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Tbox_IP_Address_E016_Tbox_IP_Address_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Tbox_IP_Address_E016_Tbox_IP_Address_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data16ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Tbox_Last_connection_lost_time_stamp_E018_Tbox_Last_connection_lost_time_stamp_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Tbox_Last_connection_lost_time_stamp_E018_Tbox_Last_connection_lost_time_stamp_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Tbox_Last_connection_lost_time_stamp_E018_Tbox_Last_connection_lost_time_stamp_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data16ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Tbox_geographical_coordinates_when_connection_lost_E019_Tbox_geographical_coordinates_when_connection_lost_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Tbox_geographical_coordinates_when_connection_lost_E019_Tbox_geographical_coordinates_when_connection_lost_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Tbox_geographical_coordinates_when_connection_lost_E019_Tbox_geographical_coordinates_when_connection_lost_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data16ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Telematics_Module_Status_E01A_Telematics_Module_Status_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Telematics_Module_Status_E01A_Telematics_Module_Status_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Telematics_Module_Status_E01A_Telematics_Module_Status_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VehicleNetworkConfiguration_F1A1_VehicleNetworkConfiguration_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VehicleNetworkConfiguration_F1A1_VehicleNetworkConfiguration_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VehicleNetworkConfiguration_F1A1_VehicleNetworkConfiguration_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data17ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VehicleNetworkConfiguration_F1A1_VehicleNetworkConfiguration_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VehicleNetworkConfiguration_F1A1_VehicleNetworkConfiguration_WriteData(P2CONST(Dcm_Data17ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Vehicle_Identification_Number_F190_VIN_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Vehicle_Identification_Number_F190_VIN_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Vehicle_Identification_Number_F190_VIN_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data17ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Vehicle_Identification_Number_F190_VIN_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Vehicle_Identification_Number_F190_VIN_WriteData(P2CONST(Dcm_Data17ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Vehicle_Manufacture_Spare_Part_Number_F187_Vehicle_Manufacture_Spare_Part_Number_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Vehicle_Manufacture_Spare_Part_Number_F187_Vehicle_Manufacture_Spare_Part_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Vehicle_Manufacture_Spare_Part_Number_F187_Vehicle_Manufacture_Spare_Part_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data15ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Vehicle_Speed_D001_Vehicle_Speed_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Vehicle_Speed_D001_Vehicle_Speed_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Vehicle_Speed_D001_Vehicle_Speed_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wi_Fi_Module_Firmware_Version_E014_Wi_Fi_Module_Firmware_Version_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wi_Fi_Module_Firmware_Version_E014_Wi_Fi_Module_Firmware_Version_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wi_Fi_Module_Firmware_Version_E014_Wi_Fi_Module_Firmware_Version_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data16ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wi_Fi_Module_Hardware_Part_Number_E015_Wi_Fi_Module_Hardware_Part_Number_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wi_Fi_Module_Hardware_Part_Number_E015_Wi_Fi_Module_Hardware_Part_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wi_Fi_Module_Hardware_Part_Number_E015_Wi_Fi_Module_Hardware_Part_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data16ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wi_Fi_Module_Status_E013_Wi_Fi_Module_Status_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wi_Fi_Module_Status_E013_Wi_Fi_Module_Status_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wi_Fi_Module_Status_E013_Wi_Fi_Module_Status_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_HUT_self_check_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_HUT_self_check_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_HUT_self_check_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_UnlockedL1_CompareKey(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Key, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_UnlockedL1_CompareKey(P2CONST(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Key, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_UnlockedL1_GetSeed(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Seed, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_UnlockedL1_GetSeed(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Seed, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Switch_<p>_<m>
 *********************************************************************************************************************/
#  define Rte_Switch_DcmCommunicationControl_ComMConf_ComMChannel_CN_CAN_fe6ecc87_DcmCommunicationControl_ComMConf_ComMChannel_CN_CAN_fe6ecc87 Rte_Switch_Dcm_DcmCommunicationControl_ComMConf_ComMChannel_CN_CAN_fe6ecc87_DcmCommunicationControl_ComMConf_ComMChannel_CN_CAN_fe6ecc87
#  define Rte_Switch_DcmControlDtcSetting_DcmControlDtcSetting Rte_Switch_Dcm_DcmControlDtcSetting_DcmControlDtcSetting
#  define Rte_Switch_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl Rte_Switch_Dcm_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl
#  define Rte_Switch_DcmEcuReset_DcmEcuReset Rte_Switch_Dcm_DcmEcuReset_DcmEcuReset


/**********************************************************************************************************************
 * Rte_Feedback_<p>_<m> (mode switch acknowledge)
 *********************************************************************************************************************/
#  define Rte_SwitchAck_DcmEcuReset_DcmEcuReset Rte_SwitchAck_Dcm_DcmEcuReset_DcmEcuReset


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define Rte_Call_DataServices_AME_BT_Auto_Pairing_FD63_BT_Chip_WriteData Rte_Call_Dcm_DataServices_AME_BT_Auto_Pairing_FD63_BT_Chip_WriteData
#  define Rte_Call_DataServices_AME_BT_Auto_Pairing_FD63_BT_MAC_Address_WriteData Rte_Call_Dcm_DataServices_AME_BT_Auto_Pairing_FD63_BT_MAC_Address_WriteData
#  define Rte_Call_DataServices_AME_BT_Handfree_Loopback_Test_FD6B_Reserved_Byte_WriteData Rte_Call_Dcm_DataServices_AME_BT_Handfree_Loopback_Test_FD6B_Reserved_Byte_WriteData
#  define Rte_Call_DataServices_AME_Connectivy_OnOff_Control_FD62_BT_WiFi_WriteData Rte_Call_Dcm_DataServices_AME_Connectivy_OnOff_Control_FD62_BT_WiFi_WriteData
#  define Rte_Call_DataServices_AME_Connectivy_OnOff_Control_FD62_ON_OFF_WriteData Rte_Call_Dcm_DataServices_AME_Connectivy_OnOff_Control_FD62_ON_OFF_WriteData
#  define Rte_Call_DataServices_AME_Display_Color_Bar_Control_FD38_Display_Color_Bar_Control_WriteData Rte_Call_Dcm_DataServices_AME_Display_Color_Bar_Control_FD38_Display_Color_Bar_Control_WriteData
#  define Rte_Call_DataServices_AME_Enter_NAV_Demo_Mode_FD70_Demo_Mode_WriteData Rte_Call_Dcm_DataServices_AME_Enter_NAV_Demo_Mode_FD70_Demo_Mode_WriteData
#  define Rte_Call_DataServices_AME_Ethernet_IP_Ping_Function_FD6E_Ethernet_Channel_WriteData Rte_Call_Dcm_DataServices_AME_Ethernet_IP_Ping_Function_FD6E_Ethernet_Channel_WriteData
#  define Rte_Call_DataServices_AME_Ethernet_IP_Ping_Function_FD6E_IPAddress_Byte1_WriteData Rte_Call_Dcm_DataServices_AME_Ethernet_IP_Ping_Function_FD6E_IPAddress_Byte1_WriteData
#  define Rte_Call_DataServices_AME_Ethernet_IP_Ping_Function_FD6E_IPAddress_Byte2_WriteData Rte_Call_Dcm_DataServices_AME_Ethernet_IP_Ping_Function_FD6E_IPAddress_Byte2_WriteData
#  define Rte_Call_DataServices_AME_Ethernet_IP_Ping_Function_FD6E_IPAddress_Byte3_WriteData Rte_Call_Dcm_DataServices_AME_Ethernet_IP_Ping_Function_FD6E_IPAddress_Byte3_WriteData
#  define Rte_Call_DataServices_AME_Ethernet_IP_Ping_Function_FD6E_IPAddress_Byte4_WriteData Rte_Call_Dcm_DataServices_AME_Ethernet_IP_Ping_Function_FD6E_IPAddress_Byte4_WriteData
#  define Rte_Call_DataServices_AME_Input_Output_OnOff_control_FD18_OnOffModule_WriteData Rte_Call_Dcm_DataServices_AME_Input_Output_OnOff_control_FD18_OnOffModule_WriteData
#  define Rte_Call_DataServices_AME_Input_Output_OnOff_control_FD18_OnOffValue_WriteData Rte_Call_Dcm_DataServices_AME_Input_Output_OnOff_control_FD18_OnOffValue_WriteData
#  define Rte_Call_DataServices_AME_Mirror_Link_connection_FD6D_Mirror_Link_connection_WriteData Rte_Call_Dcm_DataServices_AME_Mirror_Link_connection_FD6D_Mirror_Link_connection_WriteData
#  define Rte_Call_DataServices_AME_Play_BT_Audio_Control_FD64_Reserved_Byte_WriteData Rte_Call_Dcm_DataServices_AME_Play_BT_Audio_Control_FD64_Reserved_Byte_WriteData
#  define Rte_Call_DataServices_AME_Power_Control_FD01_Power_Control_WriteData Rte_Call_Dcm_DataServices_AME_Power_Control_FD01_Power_Control_WriteData
#  define Rte_Call_DataServices_AME_ReadGPSSNR_FD73_GPSSNR_ConditionCheckRead Rte_Call_Dcm_DataServices_AME_ReadGPSSNR_FD73_GPSSNR_ConditionCheckRead
#  define Rte_Call_DataServices_AME_ReadGPSSNR_FD73_GPSSNR_ReadData Rte_Call_Dcm_DataServices_AME_ReadGPSSNR_FD73_GPSSNR_ReadData
#  define Rte_Call_DataServices_AME_Read_AME_diagnostic_version_FD08_CombinedDataElement_ConditionCheckRead Rte_Call_Dcm_DataServices_AME_Read_AME_diagnostic_version_FD08_CombinedDataElement_ConditionCheckRead
#  define Rte_Call_DataServices_AME_Read_AME_diagnostic_version_FD08_CombinedDataElement_ReadData Rte_Call_Dcm_DataServices_AME_Read_AME_diagnostic_version_FD08_CombinedDataElement_ReadData
#  define Rte_Call_DataServices_AME_Read_AME_diagnostic_version_FD08_CombinedDataElement_ReadDataLength Rte_Call_Dcm_DataServices_AME_Read_AME_diagnostic_version_FD08_CombinedDataElement_ReadDataLength
#  define Rte_Call_DataServices_AME_Read_Detection_Input_Info_FD92_CombinedDataElement_ConditionCheckRead Rte_Call_Dcm_DataServices_AME_Read_Detection_Input_Info_FD92_CombinedDataElement_ConditionCheckRead
#  define Rte_Call_DataServices_AME_Read_Detection_Input_Info_FD92_CombinedDataElement_ReadData Rte_Call_Dcm_DataServices_AME_Read_Detection_Input_Info_FD92_CombinedDataElement_ReadData
#  define Rte_Call_DataServices_AME_Read_FAN_speed_FD11_FAN_Speed_ConditionCheckRead Rte_Call_Dcm_DataServices_AME_Read_FAN_speed_FD11_FAN_Speed_ConditionCheckRead
#  define Rte_Call_DataServices_AME_Read_FAN_speed_FD11_FAN_Speed_ReadData Rte_Call_Dcm_DataServices_AME_Read_FAN_speed_FD11_FAN_Speed_ReadData
#  define Rte_Call_DataServices_AME_Read_GPS_Info_FD72_Number_of_fix_ConditionCheckRead Rte_Call_Dcm_DataServices_AME_Read_GPS_Info_FD72_Number_of_fix_ConditionCheckRead
#  define Rte_Call_DataServices_AME_Read_GPS_Info_FD72_Number_of_fix_ReadData Rte_Call_Dcm_DataServices_AME_Read_GPS_Info_FD72_Number_of_fix_ReadData
#  define Rte_Call_DataServices_AME_Read_GPS_Info_FD72_Number_of_used_satellite_ConditionCheckRead Rte_Call_Dcm_DataServices_AME_Read_GPS_Info_FD72_Number_of_used_satellite_ConditionCheckRead
#  define Rte_Call_DataServices_AME_Read_GPS_Info_FD72_Number_of_used_satellite_ReadData Rte_Call_Dcm_DataServices_AME_Read_GPS_Info_FD72_Number_of_used_satellite_ReadData
#  define Rte_Call_DataServices_AME_Read_GPS_Info_FD72_Number_of_visible_staellite_ConditionCheckRead Rte_Call_Dcm_DataServices_AME_Read_GPS_Info_FD72_Number_of_visible_staellite_ConditionCheckRead
#  define Rte_Call_DataServices_AME_Read_GPS_Info_FD72_Number_of_visible_staellite_ReadData Rte_Call_Dcm_DataServices_AME_Read_GPS_Info_FD72_Number_of_visible_staellite_ReadData
#  define Rte_Call_DataServices_AME_Read_GYRO_Status_FD71_GYRO_Status_ConditionCheckRead Rte_Call_Dcm_DataServices_AME_Read_GYRO_Status_FD71_GYRO_Status_ConditionCheckRead
#  define Rte_Call_DataServices_AME_Read_GYRO_Status_FD71_GYRO_Status_ReadData Rte_Call_Dcm_DataServices_AME_Read_GYRO_Status_FD71_GYRO_Status_ReadData
#  define Rte_Call_DataServices_AME_Read_Head_Unit_Connector_Status_FD90_CombinedDataElement_ConditionCheckRead Rte_Call_Dcm_DataServices_AME_Read_Head_Unit_Connector_Status_FD90_CombinedDataElement_ConditionCheckRead
#  define Rte_Call_DataServices_AME_Read_Head_Unit_Connector_Status_FD90_CombinedDataElement_ReadData Rte_Call_Dcm_DataServices_AME_Read_Head_Unit_Connector_Status_FD90_CombinedDataElement_ReadData
#  define Rte_Call_DataServices_AME_Read_MAC_Address_FD60_CombinedDataElement_ConditionCheckRead Rte_Call_Dcm_DataServices_AME_Read_MAC_Address_FD60_CombinedDataElement_ConditionCheckRead
#  define Rte_Call_DataServices_AME_Read_MAC_Address_FD60_CombinedDataElement_ReadData Rte_Call_Dcm_DataServices_AME_Read_MAC_Address_FD60_CombinedDataElement_ReadData
#  define Rte_Call_DataServices_AME_Read_MAC_Address_FD60_CombinedDataElement_ReadDataLength Rte_Call_Dcm_DataServices_AME_Read_MAC_Address_FD60_CombinedDataElement_ReadDataLength
#  define Rte_Call_DataServices_AME_Read_SW_and_HW_Version_FD04_CombinedDataElement_ConditionCheckRead Rte_Call_Dcm_DataServices_AME_Read_SW_and_HW_Version_FD04_CombinedDataElement_ConditionCheckRead
#  define Rte_Call_DataServices_AME_Read_SW_and_HW_Version_FD04_CombinedDataElement_ReadData Rte_Call_Dcm_DataServices_AME_Read_SW_and_HW_Version_FD04_CombinedDataElement_ReadData
#  define Rte_Call_DataServices_AME_Read_SW_and_HW_Version_FD04_CombinedDataElement_ReadDataLength Rte_Call_Dcm_DataServices_AME_Read_SW_and_HW_Version_FD04_CombinedDataElement_ReadDataLength
#  define Rte_Call_DataServices_AME_Read_harman_manufactory_part_number_FD06_Harman_Manufactory_Part_Number_ConditionCheckRead Rte_Call_Dcm_DataServices_AME_Read_harman_manufactory_part_number_FD06_Harman_Manufactory_Part_Number_ConditionCheckRead
#  define Rte_Call_DataServices_AME_Read_harman_manufactory_part_number_FD06_Harman_Manufactory_Part_Number_ReadData Rte_Call_Dcm_DataServices_AME_Read_harman_manufactory_part_number_FD06_Harman_Manufactory_Part_Number_ReadData
#  define Rte_Call_DataServices_AME_Read_system_temperature_FD13_CombinedDataElement_ConditionCheckRead Rte_Call_Dcm_DataServices_AME_Read_system_temperature_FD13_CombinedDataElement_ConditionCheckRead
#  define Rte_Call_DataServices_AME_Read_system_temperature_FD13_CombinedDataElement_ReadData Rte_Call_Dcm_DataServices_AME_Read_system_temperature_FD13_CombinedDataElement_ReadData
#  define Rte_Call_DataServices_AME_Read_system_voltage_FD14_CombinedDataElement_ConditionCheckRead Rte_Call_Dcm_DataServices_AME_Read_system_voltage_FD14_CombinedDataElement_ConditionCheckRead
#  define Rte_Call_DataServices_AME_Read_system_voltage_FD14_CombinedDataElement_ReadData Rte_Call_Dcm_DataServices_AME_Read_system_voltage_FD14_CombinedDataElement_ReadData
#  define Rte_Call_DataServices_AME_Route_MIC_To_Internal_Speaker_FD36_Control_WriteData Rte_Call_Dcm_DataServices_AME_Route_MIC_To_Internal_Speaker_FD36_Control_WriteData
#  define Rte_Call_DataServices_AME_Route_MIC_To_Internal_Speaker_FD36_Mic_WriteData Rte_Call_Dcm_DataServices_AME_Route_MIC_To_Internal_Speaker_FD36_Mic_WriteData
#  define Rte_Call_DataServices_AME_Route_Video_To_HMI_FD37_Route_Vedio_To_HMI_WriteData Rte_Call_Dcm_DataServices_AME_Route_Video_To_HMI_FD37_Route_Vedio_To_HMI_WriteData
#  define Rte_Call_DataServices_AME_Select_Audio_Buffer_Channel_Output_FD39_SelectAudioBufferChannelOutput_WriteData Rte_Call_Dcm_DataServices_AME_Select_Audio_Buffer_Channel_Output_FD39_SelectAudioBufferChannelOutput_WriteData
#  define Rte_Call_DataServices_AME_Select_Speaker_Zone_FD33_Select_Speaker_Zone_WriteData Rte_Call_Dcm_DataServices_AME_Select_Speaker_Zone_FD33_Select_Speaker_Zone_WriteData
#  define Rte_Call_DataServices_AME_Set_AM_Frequency_FD52_AM_Frequency_WriteData Rte_Call_Dcm_DataServices_AME_Set_AM_Frequency_FD52_AM_Frequency_WriteData
#  define Rte_Call_DataServices_AME_Set_External_Output_Status_FD93_HW_WriteData Rte_Call_Dcm_DataServices_AME_Set_External_Output_Status_FD93_HW_WriteData
#  define Rte_Call_DataServices_AME_Set_External_Output_Status_FD93_Status_WriteData Rte_Call_Dcm_DataServices_AME_Set_External_Output_Status_FD93_Status_WriteData
#  define Rte_Call_DataServices_AME_Set_FAN_speed_FD12_FAN_Speed_WriteData Rte_Call_Dcm_DataServices_AME_Set_FAN_speed_FD12_FAN_Speed_WriteData
#  define Rte_Call_DataServices_AME_Set_FM_Frequency_FD50_FM_Frequency_WriteData Rte_Call_Dcm_DataServices_AME_Set_FM_Frequency_FD50_FM_Frequency_WriteData
#  define Rte_Call_DataServices_AME_Set_HMI_Language_FD21_Set_HMI_Language_WriteData Rte_Call_Dcm_DataServices_AME_Set_HMI_Language_FD21_Set_HMI_Language_WriteData
#  define Rte_Call_DataServices_AME_Set_Mute_Control_FD31_Set_Mute_Control_WriteData Rte_Call_Dcm_DataServices_AME_Set_Mute_Control_FD31_Set_Mute_Control_WriteData
#  define Rte_Call_DataServices_AME_Set_Volume_FD30_Set_Volume_WriteData Rte_Call_Dcm_DataServices_AME_Set_Volume_FD30_Set_Volume_WriteData
#  define Rte_Call_DataServices_AME_Set_WIFI_Mode_FD67_WiFi_Mode_WriteData Rte_Call_Dcm_DataServices_AME_Set_WIFI_Mode_FD67_WiFi_Mode_WriteData
#  define Rte_Call_DataServices_AME_Skip_welcome_confirm_FD20_Reserved_Byte_WriteData Rte_Call_Dcm_DataServices_AME_Skip_welcome_confirm_FD20_Reserved_Byte_WriteData
#  define Rte_Call_DataServices_AME_Switch_BIOS_Mode_FD02_Switch_BIOS_WriteData Rte_Call_Dcm_DataServices_AME_Switch_BIOS_Mode_FD02_Switch_BIOS_WriteData
#  define Rte_Call_DataServices_AME_Switch_Source_FD40_SelectAudioBufferChannelOutput_WriteData Rte_Call_Dcm_DataServices_AME_Switch_Source_FD40_SelectAudioBufferChannelOutput_WriteData
#  define Rte_Call_DataServices_AME_TBOX_communication_status_check_FD80_TBOX_status_ConditionCheckRead Rte_Call_Dcm_DataServices_AME_TBOX_communication_status_check_FD80_TBOX_status_ConditionCheckRead
#  define Rte_Call_DataServices_AME_TBOX_communication_status_check_FD80_TBOX_status_ReadData Rte_Call_Dcm_DataServices_AME_TBOX_communication_status_check_FD80_TBOX_status_ReadData
#  define Rte_Call_DataServices_AME_TrackMedia_Audio_Source_Play_FD41_TrackMedia_AudioSourcePlay_WriteData Rte_Call_Dcm_DataServices_AME_TrackMedia_Audio_Source_Play_FD41_TrackMedia_AudioSourcePlay_WriteData
#  define Rte_Call_DataServices_AME_Write_MAC_Address_FD61_A0_WriteData Rte_Call_Dcm_DataServices_AME_Write_MAC_Address_FD61_A0_WriteData
#  define Rte_Call_DataServices_AME_Write_MAC_Address_FD61_A1_WriteData Rte_Call_Dcm_DataServices_AME_Write_MAC_Address_FD61_A1_WriteData
#  define Rte_Call_DataServices_AME_Write_MAC_Address_FD61_A2_WriteData Rte_Call_Dcm_DataServices_AME_Write_MAC_Address_FD61_A2_WriteData
#  define Rte_Call_DataServices_AME_Write_MAC_Address_FD61_A3_WriteData Rte_Call_Dcm_DataServices_AME_Write_MAC_Address_FD61_A3_WriteData
#  define Rte_Call_DataServices_AME_Write_MAC_Address_FD61_A4_WriteData Rte_Call_Dcm_DataServices_AME_Write_MAC_Address_FD61_A4_WriteData
#  define Rte_Call_DataServices_AME_Write_MAC_Address_FD61_A5_WriteData Rte_Call_Dcm_DataServices_AME_Write_MAC_Address_FD61_A5_WriteData
#  define Rte_Call_DataServices_AME_Write_MAC_Address_FD61_subID_WriteData Rte_Call_Dcm_DataServices_AME_Write_MAC_Address_FD61_subID_WriteData
#  define Rte_Call_DataServices_AME_Write_harman_manufactory_part_number_FD07_Harman_Manufactory_Part_Number_WriteData Rte_Call_Dcm_DataServices_AME_Write_harman_manufactory_part_number_FD07_Harman_Manufactory_Part_Number_WriteData
#  define Rte_Call_DataServices_AM_signal_Strength_E011_AM_signal_Strength_ConditionCheckRead Rte_Call_Dcm_DataServices_AM_signal_Strength_E011_AM_signal_Strength_ConditionCheckRead
#  define Rte_Call_DataServices_AM_signal_Strength_E011_AM_signal_Strength_ReadData Rte_Call_Dcm_DataServices_AM_signal_Strength_E011_AM_signal_Strength_ReadData
#  define Rte_Call_DataServices_Audio_jack_status_E00A_Audio_jack_status_ConditionCheckRead Rte_Call_Dcm_DataServices_Audio_jack_status_E00A_Audio_jack_status_ConditionCheckRead
#  define Rte_Call_DataServices_Audio_jack_status_E00A_Audio_jack_status_ReadData Rte_Call_Dcm_DataServices_Audio_jack_status_E00A_Audio_jack_status_ReadData
#  define Rte_Call_DataServices_BT_Power_Class_E007_BT_Power_Class_ConditionCheckRead Rte_Call_Dcm_DataServices_BT_Power_Class_E007_BT_Power_Class_ConditionCheckRead
#  define Rte_Call_DataServices_BT_Power_Class_E007_BT_Power_Class_ReadData Rte_Call_Dcm_DataServices_BT_Power_Class_E007_BT_Power_Class_ReadData
#  define Rte_Call_DataServices_BT_active_profile_list_E008_BT_active_profile_list_ConditionCheckRead Rte_Call_Dcm_DataServices_BT_active_profile_list_E008_BT_active_profile_list_ConditionCheckRead
#  define Rte_Call_DataServices_BT_active_profile_list_E008_BT_active_profile_list_ReadData Rte_Call_Dcm_DataServices_BT_active_profile_list_E008_BT_active_profile_list_ReadData
#  define Rte_Call_DataServices_BT_firmware_version_E009_BT_firmware_version_ConditionCheckRead Rte_Call_Dcm_DataServices_BT_firmware_version_E009_BT_firmware_version_ConditionCheckRead
#  define Rte_Call_DataServices_BT_firmware_version_E009_BT_firmware_version_ReadData Rte_Call_Dcm_DataServices_BT_firmware_version_E009_BT_firmware_version_ReadData
#  define Rte_Call_DataServices_Bluetooth_Current_Discoverability_modes_E005_Bluetooth_Current_Discoverability_modes_ConditionCheckRead Rte_Call_Dcm_DataServices_Bluetooth_Current_Discoverability_modes_E005_Bluetooth_Current_Discoverability_modes_ConditionCheckRead
#  define Rte_Call_DataServices_Bluetooth_Current_Discoverability_modes_E005_Bluetooth_Current_Discoverability_modes_ReadData Rte_Call_Dcm_DataServices_Bluetooth_Current_Discoverability_modes_E005_Bluetooth_Current_Discoverability_modes_ReadData
#  define Rte_Call_DataServices_Bluetooth_Status_E006_Bluetooth_Status_ConditionCheckRead Rte_Call_Dcm_DataServices_Bluetooth_Status_E006_Bluetooth_Status_ConditionCheckRead
#  define Rte_Call_DataServices_Bluetooth_Status_E006_Bluetooth_Status_ReadData Rte_Call_Dcm_DataServices_Bluetooth_Status_E006_Bluetooth_Status_ReadData
#  define Rte_Call_DataServices_C_matrix_Version_of_the_ECU_product_F1A2_C_matrix_Version_ConditionCheckRead Rte_Call_Dcm_DataServices_C_matrix_Version_of_the_ECU_product_F1A2_C_matrix_Version_ConditionCheckRead
#  define Rte_Call_DataServices_C_matrix_Version_of_the_ECU_product_F1A2_C_matrix_Version_ReadData Rte_Call_Dcm_DataServices_C_matrix_Version_of_the_ECU_product_F1A2_C_matrix_Version_ReadData
#  define Rte_Call_DataServices_Currently_connected_USB_Type_E00C_Currently_connected_USB_Type_ConditionCheckRead Rte_Call_Dcm_DataServices_Currently_connected_USB_Type_E00C_Currently_connected_USB_Type_ConditionCheckRead
#  define Rte_Call_DataServices_Currently_connected_USB_Type_E00C_Currently_connected_USB_Type_ReadData Rte_Call_Dcm_DataServices_Currently_connected_USB_Type_E00C_Currently_connected_USB_Type_ReadData
#  define Rte_Call_DataServices_DTC_Occurrence_Timer_D005_Occure_Time_Inforamation_ConditionCheckRead Rte_Call_Dcm_DataServices_DTC_Occurrence_Timer_D005_Occure_Time_Inforamation_ConditionCheckRead
#  define Rte_Call_DataServices_DTC_Occurrence_Timer_D005_Occure_Time_Inforamation_ReadData Rte_Call_Dcm_DataServices_DTC_Occurrence_Timer_D005_Occure_Time_Inforamation_ReadData
#  define Rte_Call_DataServices_Data_DID_StartApplication_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DID_StartApplication_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DID_StartApplication_ReadData Rte_Call_Dcm_DataServices_Data_DID_StartApplication_ReadData
#  define Rte_Call_DataServices_Data_DID_StartApplication_WriteData Rte_Call_Dcm_DataServices_Data_DID_StartApplication_WriteData
#  define Rte_Call_DataServices_ECU_Serial_Number_F18C_ECU_Serial_Number_ConditionCheckRead Rte_Call_Dcm_DataServices_ECU_Serial_Number_F18C_ECU_Serial_Number_ConditionCheckRead
#  define Rte_Call_DataServices_ECU_Serial_Number_F18C_ECU_Serial_Number_ReadData Rte_Call_Dcm_DataServices_ECU_Serial_Number_F18C_ECU_Serial_Number_ReadData
#  define Rte_Call_DataServices_ECU_Serial_Number_F18C_ECU_Serial_Number_WriteData Rte_Call_Dcm_DataServices_ECU_Serial_Number_F18C_ECU_Serial_Number_WriteData
#  define Rte_Call_DataServices_Engine_Speed_D002_Engine_Speed_ConditionCheckRead Rte_Call_Dcm_DataServices_Engine_Speed_D002_Engine_Speed_ConditionCheckRead
#  define Rte_Call_DataServices_Engine_Speed_D002_Engine_Speed_ReadData Rte_Call_Dcm_DataServices_Engine_Speed_D002_Engine_Speed_ReadData
#  define Rte_Call_DataServices_FM_signal_Strength_E012_FM_signal_Strength_ConditionCheckRead Rte_Call_Dcm_DataServices_FM_signal_Strength_E012_FM_signal_Strength_ConditionCheckRead
#  define Rte_Call_DataServices_FM_signal_Strength_E012_FM_signal_Strength_ReadData Rte_Call_Dcm_DataServices_FM_signal_Strength_E012_FM_signal_Strength_ReadData
#  define Rte_Call_DataServices_INVALID_SHORTNAME_AME_Reset_Factory_Mode_FD05_Reset_Factory_Mode_WriteData Rte_Call_Dcm_DataServices_INVALID_SHORTNAME_AME_Reset_Factory_Mode_FD05_Reset_Factory_Mode_WriteData
#  define Rte_Call_DataServices_Number_of_external_USB_devices_plugged_E00B_Number_of_external_USB_devices_plugged_ConditionCheckRead Rte_Call_Dcm_DataServices_Number_of_external_USB_devices_plugged_E00B_Number_of_external_USB_devices_plugged_ConditionCheckRead
#  define Rte_Call_DataServices_Number_of_external_USB_devices_plugged_E00B_Number_of_external_USB_devices_plugged_ReadData Rte_Call_Dcm_DataServices_Number_of_external_USB_devices_plugged_E00B_Number_of_external_USB_devices_plugged_ReadData
#  define Rte_Call_DataServices_Number_of_installed_cameras_E001_Number_of_installed_cameras_ConditionCheckRead Rte_Call_Dcm_DataServices_Number_of_installed_cameras_E001_Number_of_installed_cameras_ConditionCheckRead
#  define Rte_Call_DataServices_Number_of_installed_cameras_E001_Number_of_installed_cameras_ReadData Rte_Call_Dcm_DataServices_Number_of_installed_cameras_E001_Number_of_installed_cameras_ReadData
#  define Rte_Call_DataServices_Number_of_installed_speakers_E01C_Number_of_installed_speakers_ConditionCheckRead Rte_Call_Dcm_DataServices_Number_of_installed_speakers_E01C_Number_of_installed_speakers_ConditionCheckRead
#  define Rte_Call_DataServices_Number_of_installed_speakers_E01C_Number_of_installed_speakers_ReadData Rte_Call_Dcm_DataServices_Number_of_installed_speakers_E01C_Number_of_installed_speakers_ReadData
#  define Rte_Call_DataServices_Odometer_D004_Odometer_ConditionCheckRead Rte_Call_Dcm_DataServices_Odometer_D004_Odometer_ConditionCheckRead
#  define Rte_Call_DataServices_Odometer_D004_Odometer_ReadData Rte_Call_Dcm_DataServices_Odometer_D004_Odometer_ReadData
#  define Rte_Call_DataServices_Operating_Voltage_Value_D003_Operating_Voltage_Value_ConditionCheckRead Rte_Call_Dcm_DataServices_Operating_Voltage_Value_D003_Operating_Voltage_Value_ConditionCheckRead
#  define Rte_Call_DataServices_Operating_Voltage_Value_D003_Operating_Voltage_Value_ReadData Rte_Call_Dcm_DataServices_Operating_Voltage_Value_D003_Operating_Voltage_Value_ReadData
#  define Rte_Call_DataServices_Present_GPS_coordinates_shift_data_E003_GPS_coordinates_ConditionCheckRead Rte_Call_Dcm_DataServices_Present_GPS_coordinates_shift_data_E003_GPS_coordinates_ConditionCheckRead
#  define Rte_Call_DataServices_Present_GPS_coordinates_shift_data_E003_GPS_coordinates_ReadData Rte_Call_Dcm_DataServices_Present_GPS_coordinates_shift_data_E003_GPS_coordinates_ReadData
#  define Rte_Call_DataServices_Screen_resolution_E002_Height_ConditionCheckRead Rte_Call_Dcm_DataServices_Screen_resolution_E002_Height_ConditionCheckRead
#  define Rte_Call_DataServices_Screen_resolution_E002_Height_ReadData Rte_Call_Dcm_DataServices_Screen_resolution_E002_Height_ReadData
#  define Rte_Call_DataServices_Screen_resolution_E002_Width_ConditionCheckRead Rte_Call_Dcm_DataServices_Screen_resolution_E002_Width_ConditionCheckRead
#  define Rte_Call_DataServices_Screen_resolution_E002_Width_ReadData Rte_Call_Dcm_DataServices_Screen_resolution_E002_Width_ReadData
#  define Rte_Call_DataServices_Select_Speaker_Test_Tone_FD34_Select_tone_WriteData Rte_Call_Dcm_DataServices_Select_Speaker_Test_Tone_FD34_Select_tone_WriteData
#  define Rte_Call_DataServices_Set_debug_on_off_control_FDF0_CombinedDataElement_ConditionCheckRead Rte_Call_Dcm_DataServices_Set_debug_on_off_control_FDF0_CombinedDataElement_ConditionCheckRead
#  define Rte_Call_DataServices_Set_debug_on_off_control_FDF0_CombinedDataElement_ReadData Rte_Call_Dcm_DataServices_Set_debug_on_off_control_FDF0_CombinedDataElement_ReadData
#  define Rte_Call_DataServices_Set_debug_on_off_control_FDF0_CombinedDataElement_ReadDataLength Rte_Call_Dcm_DataServices_Set_debug_on_off_control_FDF0_CombinedDataElement_ReadDataLength
#  define Rte_Call_DataServices_Set_debug_on_off_control_FDF0_CombinedDataElement_WriteData Rte_Call_Dcm_DataServices_Set_debug_on_off_control_FDF0_CombinedDataElement_WriteData
#  define Rte_Call_DataServices_Support_AM_frequency_Max_E00E_Support_AM_frequency_Max_ConditionCheckRead Rte_Call_Dcm_DataServices_Support_AM_frequency_Max_E00E_Support_AM_frequency_Max_ConditionCheckRead
#  define Rte_Call_DataServices_Support_AM_frequency_Max_E00E_Support_AM_frequency_Max_ReadData Rte_Call_Dcm_DataServices_Support_AM_frequency_Max_E00E_Support_AM_frequency_Max_ReadData
#  define Rte_Call_DataServices_Support_AM_frequency_Min_E00D_Support_AM_frequency_Min_ConditionCheckRead Rte_Call_Dcm_DataServices_Support_AM_frequency_Min_E00D_Support_AM_frequency_Min_ConditionCheckRead
#  define Rte_Call_DataServices_Support_AM_frequency_Min_E00D_Support_AM_frequency_Min_ReadData Rte_Call_Dcm_DataServices_Support_AM_frequency_Min_E00D_Support_AM_frequency_Min_ReadData
#  define Rte_Call_DataServices_Support_FM_frequency_Max_E010_Support_FM_frequency_Max_ConditionCheckRead Rte_Call_Dcm_DataServices_Support_FM_frequency_Max_E010_Support_FM_frequency_Max_ConditionCheckRead
#  define Rte_Call_DataServices_Support_FM_frequency_Max_E010_Support_FM_frequency_Max_ReadData Rte_Call_Dcm_DataServices_Support_FM_frequency_Max_E010_Support_FM_frequency_Max_ReadData
#  define Rte_Call_DataServices_Support_FM_frequency_Min_E00F_Support_FM_frequency_Min_ConditionCheckRead Rte_Call_Dcm_DataServices_Support_FM_frequency_Min_E00F_Support_FM_frequency_Min_ConditionCheckRead
#  define Rte_Call_DataServices_Support_FM_frequency_Min_E00F_Support_FM_frequency_Min_ReadData Rte_Call_Dcm_DataServices_Support_FM_frequency_Min_E00F_Support_FM_frequency_Min_ReadData
#  define Rte_Call_DataServices_Switch_HU_boot_mode_FDF1_Boot_Mode_WriteData Rte_Call_Dcm_DataServices_Switch_HU_boot_mode_FDF1_Boot_Mode_WriteData
#  define Rte_Call_DataServices_System_Supplier_ECU_Hardware_Version_Number_F193_Hardware_Version_Number_ConditionCheckRead Rte_Call_Dcm_DataServices_System_Supplier_ECU_Hardware_Version_Number_F193_Hardware_Version_Number_ConditionCheckRead
#  define Rte_Call_DataServices_System_Supplier_ECU_Hardware_Version_Number_F193_Hardware_Version_Number_ReadData Rte_Call_Dcm_DataServices_System_Supplier_ECU_Hardware_Version_Number_F193_Hardware_Version_Number_ReadData
#  define Rte_Call_DataServices_System_Supplier_ECU_Software_Version_Number_F195_Software_Version_Number_ConditionCheckRead Rte_Call_Dcm_DataServices_System_Supplier_ECU_Software_Version_Number_F195_Software_Version_Number_ConditionCheckRead
#  define Rte_Call_DataServices_System_Supplier_ECU_Software_Version_Number_F195_Software_Version_Number_ReadData Rte_Call_Dcm_DataServices_System_Supplier_ECU_Software_Version_Number_F195_Software_Version_Number_ReadData
#  define Rte_Call_DataServices_System_Supplier_Identifier_F18A_System_Supplier_Identifier_ConditionCheckRead Rte_Call_Dcm_DataServices_System_Supplier_Identifier_F18A_System_Supplier_Identifier_ConditionCheckRead
#  define Rte_Call_DataServices_System_Supplier_Identifier_F18A_System_Supplier_Identifier_ReadData Rte_Call_Dcm_DataServices_System_Supplier_Identifier_F18A_System_Supplier_Identifier_ReadData
#  define Rte_Call_DataServices_Tbox_Gateway_sub_mask_E017_Tbox_Gateway_sub_mask_ConditionCheckRead Rte_Call_Dcm_DataServices_Tbox_Gateway_sub_mask_E017_Tbox_Gateway_sub_mask_ConditionCheckRead
#  define Rte_Call_DataServices_Tbox_Gateway_sub_mask_E017_Tbox_Gateway_sub_mask_ReadData Rte_Call_Dcm_DataServices_Tbox_Gateway_sub_mask_E017_Tbox_Gateway_sub_mask_ReadData
#  define Rte_Call_DataServices_Tbox_IP_Address_E016_Tbox_IP_Address_ConditionCheckRead Rte_Call_Dcm_DataServices_Tbox_IP_Address_E016_Tbox_IP_Address_ConditionCheckRead
#  define Rte_Call_DataServices_Tbox_IP_Address_E016_Tbox_IP_Address_ReadData Rte_Call_Dcm_DataServices_Tbox_IP_Address_E016_Tbox_IP_Address_ReadData
#  define Rte_Call_DataServices_Tbox_Last_connection_lost_time_stamp_E018_Tbox_Last_connection_lost_time_stamp_ConditionCheckRead Rte_Call_Dcm_DataServices_Tbox_Last_connection_lost_time_stamp_E018_Tbox_Last_connection_lost_time_stamp_ConditionCheckRead
#  define Rte_Call_DataServices_Tbox_Last_connection_lost_time_stamp_E018_Tbox_Last_connection_lost_time_stamp_ReadData Rte_Call_Dcm_DataServices_Tbox_Last_connection_lost_time_stamp_E018_Tbox_Last_connection_lost_time_stamp_ReadData
#  define Rte_Call_DataServices_Tbox_geographical_coordinates_when_connection_lost_E019_Tbox_geographical_coordinates_when_connection_lost_ConditionCheckRead Rte_Call_Dcm_DataServices_Tbox_geographical_coordinates_when_connection_lost_E019_Tbox_geographical_coordinates_when_connection_lost_ConditionCheckRead
#  define Rte_Call_DataServices_Tbox_geographical_coordinates_when_connection_lost_E019_Tbox_geographical_coordinates_when_connection_lost_ReadData Rte_Call_Dcm_DataServices_Tbox_geographical_coordinates_when_connection_lost_E019_Tbox_geographical_coordinates_when_connection_lost_ReadData
#  define Rte_Call_DataServices_Telematics_Module_Status_E01A_Telematics_Module_Status_ConditionCheckRead Rte_Call_Dcm_DataServices_Telematics_Module_Status_E01A_Telematics_Module_Status_ConditionCheckRead
#  define Rte_Call_DataServices_Telematics_Module_Status_E01A_Telematics_Module_Status_ReadData Rte_Call_Dcm_DataServices_Telematics_Module_Status_E01A_Telematics_Module_Status_ReadData
#  define Rte_Call_DataServices_VehicleNetworkConfiguration_F1A1_VehicleNetworkConfiguration_ConditionCheckRead Rte_Call_Dcm_DataServices_VehicleNetworkConfiguration_F1A1_VehicleNetworkConfiguration_ConditionCheckRead
#  define Rte_Call_DataServices_VehicleNetworkConfiguration_F1A1_VehicleNetworkConfiguration_ReadData Rte_Call_Dcm_DataServices_VehicleNetworkConfiguration_F1A1_VehicleNetworkConfiguration_ReadData
#  define Rte_Call_DataServices_VehicleNetworkConfiguration_F1A1_VehicleNetworkConfiguration_WriteData Rte_Call_Dcm_DataServices_VehicleNetworkConfiguration_F1A1_VehicleNetworkConfiguration_WriteData
#  define Rte_Call_DataServices_Vehicle_Identification_Number_F190_VIN_ConditionCheckRead Rte_Call_Dcm_DataServices_Vehicle_Identification_Number_F190_VIN_ConditionCheckRead
#  define Rte_Call_DataServices_Vehicle_Identification_Number_F190_VIN_ReadData Rte_Call_Dcm_DataServices_Vehicle_Identification_Number_F190_VIN_ReadData
#  define Rte_Call_DataServices_Vehicle_Identification_Number_F190_VIN_WriteData Rte_Call_Dcm_DataServices_Vehicle_Identification_Number_F190_VIN_WriteData
#  define Rte_Call_DataServices_Vehicle_Manufacture_Spare_Part_Number_F187_Vehicle_Manufacture_Spare_Part_Number_ConditionCheckRead Rte_Call_Dcm_DataServices_Vehicle_Manufacture_Spare_Part_Number_F187_Vehicle_Manufacture_Spare_Part_Number_ConditionCheckRead
#  define Rte_Call_DataServices_Vehicle_Manufacture_Spare_Part_Number_F187_Vehicle_Manufacture_Spare_Part_Number_ReadData Rte_Call_Dcm_DataServices_Vehicle_Manufacture_Spare_Part_Number_F187_Vehicle_Manufacture_Spare_Part_Number_ReadData
#  define Rte_Call_DataServices_Vehicle_Speed_D001_Vehicle_Speed_ConditionCheckRead Rte_Call_Dcm_DataServices_Vehicle_Speed_D001_Vehicle_Speed_ConditionCheckRead
#  define Rte_Call_DataServices_Vehicle_Speed_D001_Vehicle_Speed_ReadData Rte_Call_Dcm_DataServices_Vehicle_Speed_D001_Vehicle_Speed_ReadData
#  define Rte_Call_DataServices_Wi_Fi_Module_Firmware_Version_E014_Wi_Fi_Module_Firmware_Version_ConditionCheckRead Rte_Call_Dcm_DataServices_Wi_Fi_Module_Firmware_Version_E014_Wi_Fi_Module_Firmware_Version_ConditionCheckRead
#  define Rte_Call_DataServices_Wi_Fi_Module_Firmware_Version_E014_Wi_Fi_Module_Firmware_Version_ReadData Rte_Call_Dcm_DataServices_Wi_Fi_Module_Firmware_Version_E014_Wi_Fi_Module_Firmware_Version_ReadData
#  define Rte_Call_DataServices_Wi_Fi_Module_Hardware_Part_Number_E015_Wi_Fi_Module_Hardware_Part_Number_ConditionCheckRead Rte_Call_Dcm_DataServices_Wi_Fi_Module_Hardware_Part_Number_E015_Wi_Fi_Module_Hardware_Part_Number_ConditionCheckRead
#  define Rte_Call_DataServices_Wi_Fi_Module_Hardware_Part_Number_E015_Wi_Fi_Module_Hardware_Part_Number_ReadData Rte_Call_Dcm_DataServices_Wi_Fi_Module_Hardware_Part_Number_E015_Wi_Fi_Module_Hardware_Part_Number_ReadData
#  define Rte_Call_DataServices_Wi_Fi_Module_Status_E013_Wi_Fi_Module_Status_ConditionCheckRead Rte_Call_Dcm_DataServices_Wi_Fi_Module_Status_E013_Wi_Fi_Module_Status_ConditionCheckRead
#  define Rte_Call_DataServices_Wi_Fi_Module_Status_E013_Wi_Fi_Module_Status_ReadData Rte_Call_Dcm_DataServices_Wi_Fi_Module_Status_E013_Wi_Fi_Module_Status_ReadData
#  define Rte_Call_RoutineServices_HUT_self_check_RequestResults Rte_Call_Dcm_RoutineServices_HUT_self_check_RequestResults
#  define Rte_Call_RoutineServices_HUT_self_check_Start Rte_Call_Dcm_RoutineServices_HUT_self_check_Start
#  define Rte_Call_RoutineServices_HUT_self_check_Stop Rte_Call_Dcm_RoutineServices_HUT_self_check_Stop
#  define Rte_Call_SecurityAccess_UnlockedL1_CompareKey Rte_Call_Dcm_SecurityAccess_UnlockedL1_CompareKey
#  define Rte_Call_SecurityAccess_UnlockedL1_GetSeed Rte_Call_Dcm_SecurityAccess_UnlockedL1_GetSeed


# endif /* !defined(RTE_CORE) */


# define Dcm_START_SEC_CODE
# include "Dcm_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_Dcm_MainFunction Dcm_MainFunction
#  define RTE_RUNNABLE_GetActiveProtocol Dcm_GetActiveProtocol
#  define RTE_RUNNABLE_GetRequestKind Dcm_GetRequestKind
#  define RTE_RUNNABLE_GetSecurityLevel Dcm_GetSecurityLevel
#  define RTE_RUNNABLE_GetSesCtrlType Dcm_GetSesCtrlType
#  define RTE_RUNNABLE_ResetToDefaultSession Dcm_ResetToDefaultSession
#  define RTE_RUNNABLE_SetActiveDiagnostic Dcm_SetActiveDiagnostic
# endif

FUNC(void, Dcm_CODE) Dcm_MainFunction(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, Dcm_CODE) Dcm_GetActiveProtocol(P2VAR(Dcm_ProtocolType, AUTOMATIC, RTE_DCM_APPL_VAR) ActiveProtocol); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, Dcm_CODE) Dcm_GetRequestKind(uint16 TesterSourceAddress, P2VAR(Dcm_RequestKindType, AUTOMATIC, RTE_DCM_APPL_VAR) RequestKind); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, Dcm_CODE) Dcm_GetSecurityLevel(P2VAR(Dcm_SecLevelType, AUTOMATIC, RTE_DCM_APPL_VAR) SecLevel); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, Dcm_CODE) Dcm_GetSesCtrlType(P2VAR(Dcm_SesCtrlType, AUTOMATIC, RTE_DCM_APPL_VAR) SesCtrlType); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, Dcm_CODE) Dcm_ResetToDefaultSession(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, Dcm_CODE) Dcm_SetActiveDiagnostic(boolean active); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define Dcm_STOP_SEC_CODE
# include "Dcm_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_DCMServices_E_NOT_OK (1U)

#  define RTE_E_DCMServices_E_OK (0U)

#  define RTE_E_DataServices_AME_BT_Auto_Pairing_FD63_BT_Chip_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_AME_BT_Auto_Pairing_FD63_BT_Chip_E_NOT_OK (1U)

#  define RTE_E_DataServices_AME_BT_Auto_Pairing_FD63_BT_MAC_Address_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_AME_BT_Auto_Pairing_FD63_BT_MAC_Address_E_NOT_OK (1U)

#  define RTE_E_DataServices_AME_BT_Handfree_Loopback_Test_FD6B_Reserved_Byte_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_AME_BT_Handfree_Loopback_Test_FD6B_Reserved_Byte_E_NOT_OK (1U)

#  define RTE_E_DataServices_AME_Connectivy_OnOff_Control_FD62_BT_WiFi_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_AME_Connectivy_OnOff_Control_FD62_BT_WiFi_E_NOT_OK (1U)

#  define RTE_E_DataServices_AME_Connectivy_OnOff_Control_FD62_ON_OFF_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_AME_Connectivy_OnOff_Control_FD62_ON_OFF_E_NOT_OK (1U)

#  define RTE_E_DataServices_AME_Display_Color_Bar_Control_FD38_Display_Color_Bar_Control_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_AME_Display_Color_Bar_Control_FD38_Display_Color_Bar_Control_E_NOT_OK (1U)

#  define RTE_E_DataServices_AME_Enter_NAV_Demo_Mode_FD70_Demo_Mode_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_AME_Enter_NAV_Demo_Mode_FD70_Demo_Mode_E_NOT_OK (1U)

#  define RTE_E_DataServices_AME_Ethernet_IP_Ping_Function_FD6E_Ethernet_Channel_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_AME_Ethernet_IP_Ping_Function_FD6E_Ethernet_Channel_E_NOT_OK (1U)

#  define RTE_E_DataServices_AME_Ethernet_IP_Ping_Function_FD6E_IPAddress_Byte1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_AME_Ethernet_IP_Ping_Function_FD6E_IPAddress_Byte1_E_NOT_OK (1U)

#  define RTE_E_DataServices_AME_Ethernet_IP_Ping_Function_FD6E_IPAddress_Byte2_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_AME_Ethernet_IP_Ping_Function_FD6E_IPAddress_Byte2_E_NOT_OK (1U)

#  define RTE_E_DataServices_AME_Ethernet_IP_Ping_Function_FD6E_IPAddress_Byte3_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_AME_Ethernet_IP_Ping_Function_FD6E_IPAddress_Byte3_E_NOT_OK (1U)

#  define RTE_E_DataServices_AME_Ethernet_IP_Ping_Function_FD6E_IPAddress_Byte4_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_AME_Ethernet_IP_Ping_Function_FD6E_IPAddress_Byte4_E_NOT_OK (1U)

#  define RTE_E_DataServices_AME_Input_Output_OnOff_control_FD18_OnOffModule_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_AME_Input_Output_OnOff_control_FD18_OnOffModule_E_NOT_OK (1U)

#  define RTE_E_DataServices_AME_Input_Output_OnOff_control_FD18_OnOffValue_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_AME_Input_Output_OnOff_control_FD18_OnOffValue_E_NOT_OK (1U)

#  define RTE_E_DataServices_AME_Mirror_Link_connection_FD6D_Mirror_Link_connection_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_AME_Mirror_Link_connection_FD6D_Mirror_Link_connection_E_NOT_OK (1U)

#  define RTE_E_DataServices_AME_Play_BT_Audio_Control_FD64_Reserved_Byte_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_AME_Play_BT_Audio_Control_FD64_Reserved_Byte_E_NOT_OK (1U)

#  define RTE_E_DataServices_AME_Power_Control_FD01_Power_Control_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_AME_Power_Control_FD01_Power_Control_E_NOT_OK (1U)

#  define RTE_E_DataServices_AME_ReadGPSSNR_FD73_GPSSNR_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_AME_ReadGPSSNR_FD73_GPSSNR_E_NOT_OK (1U)

#  define RTE_E_DataServices_AME_Read_AME_diagnostic_version_FD08_CombinedDataElement_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_AME_Read_AME_diagnostic_version_FD08_CombinedDataElement_E_NOT_OK (1U)

#  define RTE_E_DataServices_AME_Read_Detection_Input_Info_FD92_CombinedDataElement_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_AME_Read_Detection_Input_Info_FD92_CombinedDataElement_E_NOT_OK (1U)

#  define RTE_E_DataServices_AME_Read_FAN_speed_FD11_FAN_Speed_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_AME_Read_FAN_speed_FD11_FAN_Speed_E_NOT_OK (1U)

#  define RTE_E_DataServices_AME_Read_GPS_Info_FD72_Number_of_fix_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_AME_Read_GPS_Info_FD72_Number_of_fix_E_NOT_OK (1U)

#  define RTE_E_DataServices_AME_Read_GPS_Info_FD72_Number_of_used_satellite_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_AME_Read_GPS_Info_FD72_Number_of_used_satellite_E_NOT_OK (1U)

#  define RTE_E_DataServices_AME_Read_GPS_Info_FD72_Number_of_visible_staellite_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_AME_Read_GPS_Info_FD72_Number_of_visible_staellite_E_NOT_OK (1U)

#  define RTE_E_DataServices_AME_Read_GYRO_Status_FD71_GYRO_Status_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_AME_Read_GYRO_Status_FD71_GYRO_Status_E_NOT_OK (1U)

#  define RTE_E_DataServices_AME_Read_Head_Unit_Connector_Status_FD90_CombinedDataElement_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_AME_Read_Head_Unit_Connector_Status_FD90_CombinedDataElement_E_NOT_OK (1U)

#  define RTE_E_DataServices_AME_Read_MAC_Address_FD60_CombinedDataElement_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_AME_Read_MAC_Address_FD60_CombinedDataElement_E_NOT_OK (1U)

#  define RTE_E_DataServices_AME_Read_SW_and_HW_Version_FD04_CombinedDataElement_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_AME_Read_SW_and_HW_Version_FD04_CombinedDataElement_E_NOT_OK (1U)

#  define RTE_E_DataServices_AME_Read_harman_manufactory_part_number_FD06_Harman_Manufactory_Part_Number_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_AME_Read_harman_manufactory_part_number_FD06_Harman_Manufactory_Part_Number_E_NOT_OK (1U)

#  define RTE_E_DataServices_AME_Read_system_temperature_FD13_CombinedDataElement_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_AME_Read_system_temperature_FD13_CombinedDataElement_E_NOT_OK (1U)

#  define RTE_E_DataServices_AME_Read_system_voltage_FD14_CombinedDataElement_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_AME_Read_system_voltage_FD14_CombinedDataElement_E_NOT_OK (1U)

#  define RTE_E_DataServices_AME_Route_MIC_To_Internal_Speaker_FD36_Control_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_AME_Route_MIC_To_Internal_Speaker_FD36_Control_E_NOT_OK (1U)

#  define RTE_E_DataServices_AME_Route_MIC_To_Internal_Speaker_FD36_Mic_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_AME_Route_MIC_To_Internal_Speaker_FD36_Mic_E_NOT_OK (1U)

#  define RTE_E_DataServices_AME_Route_Video_To_HMI_FD37_Route_Vedio_To_HMI_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_AME_Route_Video_To_HMI_FD37_Route_Vedio_To_HMI_E_NOT_OK (1U)

#  define RTE_E_DataServices_AME_Select_Audio_Buffer_Channel_Output_FD39_SelectAudioBufferChannelOutput_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_AME_Select_Audio_Buffer_Channel_Output_FD39_SelectAudioBufferChannelOutput_E_NOT_OK (1U)

#  define RTE_E_DataServices_AME_Select_Speaker_Zone_FD33_Select_Speaker_Zone_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_AME_Select_Speaker_Zone_FD33_Select_Speaker_Zone_E_NOT_OK (1U)

#  define RTE_E_DataServices_AME_Set_AM_Frequency_FD52_AM_Frequency_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_AME_Set_AM_Frequency_FD52_AM_Frequency_E_NOT_OK (1U)

#  define RTE_E_DataServices_AME_Set_External_Output_Status_FD93_HW_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_AME_Set_External_Output_Status_FD93_HW_E_NOT_OK (1U)

#  define RTE_E_DataServices_AME_Set_External_Output_Status_FD93_Status_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_AME_Set_External_Output_Status_FD93_Status_E_NOT_OK (1U)

#  define RTE_E_DataServices_AME_Set_FAN_speed_FD12_FAN_Speed_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_AME_Set_FAN_speed_FD12_FAN_Speed_E_NOT_OK (1U)

#  define RTE_E_DataServices_AME_Set_FM_Frequency_FD50_FM_Frequency_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_AME_Set_FM_Frequency_FD50_FM_Frequency_E_NOT_OK (1U)

#  define RTE_E_DataServices_AME_Set_HMI_Language_FD21_Set_HMI_Language_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_AME_Set_HMI_Language_FD21_Set_HMI_Language_E_NOT_OK (1U)

#  define RTE_E_DataServices_AME_Set_Mute_Control_FD31_Set_Mute_Control_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_AME_Set_Mute_Control_FD31_Set_Mute_Control_E_NOT_OK (1U)

#  define RTE_E_DataServices_AME_Set_Volume_FD30_Set_Volume_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_AME_Set_Volume_FD30_Set_Volume_E_NOT_OK (1U)

#  define RTE_E_DataServices_AME_Set_WIFI_Mode_FD67_WiFi_Mode_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_AME_Set_WIFI_Mode_FD67_WiFi_Mode_E_NOT_OK (1U)

#  define RTE_E_DataServices_AME_Skip_welcome_confirm_FD20_Reserved_Byte_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_AME_Skip_welcome_confirm_FD20_Reserved_Byte_E_NOT_OK (1U)

#  define RTE_E_DataServices_AME_Switch_BIOS_Mode_FD02_Switch_BIOS_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_AME_Switch_BIOS_Mode_FD02_Switch_BIOS_E_NOT_OK (1U)

#  define RTE_E_DataServices_AME_Switch_Source_FD40_SelectAudioBufferChannelOutput_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_AME_Switch_Source_FD40_SelectAudioBufferChannelOutput_E_NOT_OK (1U)

#  define RTE_E_DataServices_AME_TBOX_communication_status_check_FD80_TBOX_status_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_AME_TBOX_communication_status_check_FD80_TBOX_status_E_NOT_OK (1U)

#  define RTE_E_DataServices_AME_TrackMedia_Audio_Source_Play_FD41_TrackMedia_AudioSourcePlay_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_AME_TrackMedia_Audio_Source_Play_FD41_TrackMedia_AudioSourcePlay_E_NOT_OK (1U)

#  define RTE_E_DataServices_AME_Write_MAC_Address_FD61_A0_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_AME_Write_MAC_Address_FD61_A0_E_NOT_OK (1U)

#  define RTE_E_DataServices_AME_Write_MAC_Address_FD61_A1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_AME_Write_MAC_Address_FD61_A1_E_NOT_OK (1U)

#  define RTE_E_DataServices_AME_Write_MAC_Address_FD61_A2_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_AME_Write_MAC_Address_FD61_A2_E_NOT_OK (1U)

#  define RTE_E_DataServices_AME_Write_MAC_Address_FD61_A3_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_AME_Write_MAC_Address_FD61_A3_E_NOT_OK (1U)

#  define RTE_E_DataServices_AME_Write_MAC_Address_FD61_A4_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_AME_Write_MAC_Address_FD61_A4_E_NOT_OK (1U)

#  define RTE_E_DataServices_AME_Write_MAC_Address_FD61_A5_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_AME_Write_MAC_Address_FD61_A5_E_NOT_OK (1U)

#  define RTE_E_DataServices_AME_Write_MAC_Address_FD61_subID_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_AME_Write_MAC_Address_FD61_subID_E_NOT_OK (1U)

#  define RTE_E_DataServices_AME_Write_harman_manufactory_part_number_FD07_Harman_Manufactory_Part_Number_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_AME_Write_harman_manufactory_part_number_FD07_Harman_Manufactory_Part_Number_E_NOT_OK (1U)

#  define RTE_E_DataServices_AM_signal_Strength_E011_AM_signal_Strength_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_AM_signal_Strength_E011_AM_signal_Strength_E_NOT_OK (1U)

#  define RTE_E_DataServices_Audio_jack_status_E00A_Audio_jack_status_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Audio_jack_status_E00A_Audio_jack_status_E_NOT_OK (1U)

#  define RTE_E_DataServices_BT_Power_Class_E007_BT_Power_Class_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_BT_Power_Class_E007_BT_Power_Class_E_NOT_OK (1U)

#  define RTE_E_DataServices_BT_active_profile_list_E008_BT_active_profile_list_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_BT_active_profile_list_E008_BT_active_profile_list_E_NOT_OK (1U)

#  define RTE_E_DataServices_BT_firmware_version_E009_BT_firmware_version_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_BT_firmware_version_E009_BT_firmware_version_E_NOT_OK (1U)

#  define RTE_E_DataServices_Bluetooth_Current_Discoverability_modes_E005_Bluetooth_Current_Discoverability_modes_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Bluetooth_Current_Discoverability_modes_E005_Bluetooth_Current_Discoverability_modes_E_NOT_OK (1U)

#  define RTE_E_DataServices_Bluetooth_Status_E006_Bluetooth_Status_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Bluetooth_Status_E006_Bluetooth_Status_E_NOT_OK (1U)

#  define RTE_E_DataServices_C_matrix_Version_of_the_ECU_product_F1A2_C_matrix_Version_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_C_matrix_Version_of_the_ECU_product_F1A2_C_matrix_Version_E_NOT_OK (1U)

#  define RTE_E_DataServices_Currently_connected_USB_Type_E00C_Currently_connected_USB_Type_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Currently_connected_USB_Type_E00C_Currently_connected_USB_Type_E_NOT_OK (1U)

#  define RTE_E_DataServices_DTC_Occurrence_Timer_D005_Occure_Time_Inforamation_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DTC_Occurrence_Timer_D005_Occure_Time_Inforamation_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DID_StartApplication_E_NOT_OK (1U)

#  define RTE_E_DataServices_ECU_Serial_Number_F18C_ECU_Serial_Number_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_ECU_Serial_Number_F18C_ECU_Serial_Number_E_NOT_OK (1U)

#  define RTE_E_DataServices_Engine_Speed_D002_Engine_Speed_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Engine_Speed_D002_Engine_Speed_E_NOT_OK (1U)

#  define RTE_E_DataServices_FM_signal_Strength_E012_FM_signal_Strength_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_FM_signal_Strength_E012_FM_signal_Strength_E_NOT_OK (1U)

#  define RTE_E_DataServices_INVALID_SHORTNAME_AME_Reset_Factory_Mode_FD05_Reset_Factory_Mode_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_INVALID_SHORTNAME_AME_Reset_Factory_Mode_FD05_Reset_Factory_Mode_E_NOT_OK (1U)

#  define RTE_E_DataServices_Number_of_external_USB_devices_plugged_E00B_Number_of_external_USB_devices_plugged_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Number_of_external_USB_devices_plugged_E00B_Number_of_external_USB_devices_plugged_E_NOT_OK (1U)

#  define RTE_E_DataServices_Number_of_installed_cameras_E001_Number_of_installed_cameras_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Number_of_installed_cameras_E001_Number_of_installed_cameras_E_NOT_OK (1U)

#  define RTE_E_DataServices_Number_of_installed_speakers_E01C_Number_of_installed_speakers_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Number_of_installed_speakers_E01C_Number_of_installed_speakers_E_NOT_OK (1U)

#  define RTE_E_DataServices_Odometer_D004_Odometer_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Odometer_D004_Odometer_E_NOT_OK (1U)

#  define RTE_E_DataServices_Operating_Voltage_Value_D003_Operating_Voltage_Value_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Operating_Voltage_Value_D003_Operating_Voltage_Value_E_NOT_OK (1U)

#  define RTE_E_DataServices_Present_GPS_coordinates_shift_data_E003_GPS_coordinates_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Present_GPS_coordinates_shift_data_E003_GPS_coordinates_E_NOT_OK (1U)

#  define RTE_E_DataServices_Screen_resolution_E002_Height_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Screen_resolution_E002_Height_E_NOT_OK (1U)

#  define RTE_E_DataServices_Screen_resolution_E002_Width_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Screen_resolution_E002_Width_E_NOT_OK (1U)

#  define RTE_E_DataServices_Select_Speaker_Test_Tone_FD34_Select_tone_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Select_Speaker_Test_Tone_FD34_Select_tone_E_NOT_OK (1U)

#  define RTE_E_DataServices_Set_debug_on_off_control_FDF0_CombinedDataElement_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Set_debug_on_off_control_FDF0_CombinedDataElement_E_NOT_OK (1U)

#  define RTE_E_DataServices_Support_AM_frequency_Max_E00E_Support_AM_frequency_Max_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Support_AM_frequency_Max_E00E_Support_AM_frequency_Max_E_NOT_OK (1U)

#  define RTE_E_DataServices_Support_AM_frequency_Min_E00D_Support_AM_frequency_Min_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Support_AM_frequency_Min_E00D_Support_AM_frequency_Min_E_NOT_OK (1U)

#  define RTE_E_DataServices_Support_FM_frequency_Max_E010_Support_FM_frequency_Max_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Support_FM_frequency_Max_E010_Support_FM_frequency_Max_E_NOT_OK (1U)

#  define RTE_E_DataServices_Support_FM_frequency_Min_E00F_Support_FM_frequency_Min_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Support_FM_frequency_Min_E00F_Support_FM_frequency_Min_E_NOT_OK (1U)

#  define RTE_E_DataServices_Switch_HU_boot_mode_FDF1_Boot_Mode_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Switch_HU_boot_mode_FDF1_Boot_Mode_E_NOT_OK (1U)

#  define RTE_E_DataServices_System_Supplier_ECU_Hardware_Version_Number_F193_Hardware_Version_Number_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_System_Supplier_ECU_Hardware_Version_Number_F193_Hardware_Version_Number_E_NOT_OK (1U)

#  define RTE_E_DataServices_System_Supplier_ECU_Software_Version_Number_F195_Software_Version_Number_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_System_Supplier_ECU_Software_Version_Number_F195_Software_Version_Number_E_NOT_OK (1U)

#  define RTE_E_DataServices_System_Supplier_Identifier_F18A_System_Supplier_Identifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_System_Supplier_Identifier_F18A_System_Supplier_Identifier_E_NOT_OK (1U)

#  define RTE_E_DataServices_Tbox_Gateway_sub_mask_E017_Tbox_Gateway_sub_mask_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Tbox_Gateway_sub_mask_E017_Tbox_Gateway_sub_mask_E_NOT_OK (1U)

#  define RTE_E_DataServices_Tbox_IP_Address_E016_Tbox_IP_Address_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Tbox_IP_Address_E016_Tbox_IP_Address_E_NOT_OK (1U)

#  define RTE_E_DataServices_Tbox_Last_connection_lost_time_stamp_E018_Tbox_Last_connection_lost_time_stamp_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Tbox_Last_connection_lost_time_stamp_E018_Tbox_Last_connection_lost_time_stamp_E_NOT_OK (1U)

#  define RTE_E_DataServices_Tbox_geographical_coordinates_when_connection_lost_E019_Tbox_geographical_coordinates_when_connection_lost_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Tbox_geographical_coordinates_when_connection_lost_E019_Tbox_geographical_coordinates_when_connection_lost_E_NOT_OK (1U)

#  define RTE_E_DataServices_Telematics_Module_Status_E01A_Telematics_Module_Status_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Telematics_Module_Status_E01A_Telematics_Module_Status_E_NOT_OK (1U)

#  define RTE_E_DataServices_VehicleNetworkConfiguration_F1A1_VehicleNetworkConfiguration_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_VehicleNetworkConfiguration_F1A1_VehicleNetworkConfiguration_E_NOT_OK (1U)

#  define RTE_E_DataServices_Vehicle_Identification_Number_F190_VIN_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Vehicle_Identification_Number_F190_VIN_E_NOT_OK (1U)

#  define RTE_E_DataServices_Vehicle_Manufacture_Spare_Part_Number_F187_Vehicle_Manufacture_Spare_Part_Number_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Vehicle_Manufacture_Spare_Part_Number_F187_Vehicle_Manufacture_Spare_Part_Number_E_NOT_OK (1U)

#  define RTE_E_DataServices_Vehicle_Speed_D001_Vehicle_Speed_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Vehicle_Speed_D001_Vehicle_Speed_E_NOT_OK (1U)

#  define RTE_E_DataServices_Wi_Fi_Module_Firmware_Version_E014_Wi_Fi_Module_Firmware_Version_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Wi_Fi_Module_Firmware_Version_E014_Wi_Fi_Module_Firmware_Version_E_NOT_OK (1U)

#  define RTE_E_DataServices_Wi_Fi_Module_Hardware_Part_Number_E015_Wi_Fi_Module_Hardware_Part_Number_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Wi_Fi_Module_Hardware_Part_Number_E015_Wi_Fi_Module_Hardware_Part_Number_E_NOT_OK (1U)

#  define RTE_E_DataServices_Wi_Fi_Module_Status_E013_Wi_Fi_Module_Status_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Wi_Fi_Module_Status_E013_Wi_Fi_Module_Status_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_HUT_self_check_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_HUT_self_check_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_HUT_self_check_E_NOT_OK (1U)

#  define RTE_E_SecurityAccess_UnlockedL1_DCM_E_COMPARE_KEY_FAILED (11U)

#  define RTE_E_SecurityAccess_UnlockedL1_DCM_E_PENDING (10U)

#  define RTE_E_SecurityAccess_UnlockedL1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_DCM_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
