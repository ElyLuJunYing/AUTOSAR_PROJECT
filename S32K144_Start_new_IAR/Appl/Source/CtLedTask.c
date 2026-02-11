
/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  CtLedTask.c
 *        Config:  C:/Vector/CBD1800257_D01_S32K1xx/Applications/S32K144_Start_new/S32K144_Start.dpa
 *     SW-C Type:  CtLedTask
 *  Generated at:  Mon Jun  7 11:19:43 2021
 *
 *     Generator:  MICROSAR RTE Generator Version 4.19.0
 *                 RTE Core Version 1.19.0
 *       License:  CBD1800257
 *
 *   Description:  C-Code implementation template for SW-C <CtLedTask>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *
 * AUTOSAR Modelling Object Descriptions
 *
 **********************************************************************************************************************
 *
 * Data Types:
 * ===========
 * ComM_ModeType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 *********************************************************************************************************************/

#include "Rte_CtLedTask.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Dio.h"
#include "Com_Cfg.h"
#include "Adc.h"
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * Used AUTOSAR Data Types
 *
 **********************************************************************************************************************
 *
 * Primitive Types:
 * ================
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * ComM_ModeType: Enumeration of integer in interval [0...3] with enumerators
 *   COMM_NO_COMMUNICATION (0U)
 *   COMM_SILENT_COMMUNICATION (1U)
 *   COMM_FULL_COMMUNICATION (2U)
 *
 *********************************************************************************************************************/


#define CtLedTask_START_SEC_CODE
#include "CtLedTask_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CtLedTask_InitRunnable
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_UR_CN_CAN00_06ecbb07_GetCurrentComMode(ComM_ModeType *ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_ComM_UserRequest_E_NOT_OK
 *   Std_ReturnType Rte_Call_UR_CN_CAN00_06ecbb07_GetMaxComMode(ComM_ModeType *ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_ComM_UserRequest_E_NOT_OK
 *   Std_ReturnType Rte_Call_UR_CN_CAN00_06ecbb07_GetRequestedComMode(ComM_ModeType *ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_ComM_UserRequest_E_NOT_OK
 *   Std_ReturnType Rte_Call_UR_CN_CAN00_06ecbb07_RequestComMode(ComM_ModeType ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_ComM_UserRequest_E_MODE_LIMITATION, RTE_E_ComM_UserRequest_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CtLedTask_InitRunnable_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtLedTask_CODE) CtLedTask_InitRunnable(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CtLedTask_InitRunnable
 *********************************************************************************************************************/

Rte_Call_UR_CN_CAN00_06ecbb07_RequestComMode(COMM_FULL_COMMUNICATION);
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: LedRunnable
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 500ms
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: LedRunnable_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtLedTask_CODE) LedRunnable(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: LedRunnable
 *********************************************************************************************************************/

static unsigned char  LedState=0;  // 1 个字节 (8 位)
static int  LedCnt=0;

LedCnt++;

LedState ^= 0x01;  // 反转状态, 按位异或 (+1)



 Dio_WriteChannel(DioConf_DioChannel_DioChannel_PTD16,LedState);  // PTD16的LED灯, 下载完程序一直闪烁

 // 3.2、PORT点亮LED灯
 static boolean RearLeft_Window = 1;   // 手动信号
 RearLeft_Window = Dio_ReadChannel(DioConf_DioChannel_DioChannel_PTC12);  // (读取)PTC12的开关KEY
 Com_SendSignal(ComConf_ComSignal_RearLeft_Window, (&RearLeft_Window));  // (发送)发送报文显示LED灯状态
 if (RearLeft_Window == 1)
 {
    Dio_WriteChannel(DioConf_DioChannel_DioChannel_PTD0, 0);  // (写入)PTD0的LED灯点亮(注意是低电平亮)
 }
 else // if (RearLeft_Window == 0)
 {
    Dio_WriteChannel(DioConf_DioChannel_DioChannel_PTD0, 1);  // (写入)PTD0的LED灯熄灭
 }

 // 3.5.1、ADC练习
 static uint8 Group = 0;  // Group Id
 Adc_StartGroupConversion(Group);  // 启动ADC转换
 static uint16 G0_ReadBuffer[1*1] = {0};  // 采样精度12bit, Channel * StreamSampleNum
 static uint8 state_Read = E_NOT_OK;  // 读取状态, E_OK表示成功, E_NOT_OK表示失败
 state_Read = Adc_ReadGroup(Group, G0_ReadBuffer);  // 读取ADC转换结果到缓冲区
 // 发送到CAN总线观测ADC值
 static uint8 convert_read = 0;  // 0-4095-> 0-204
 convert_read = (uint8)(G0_ReadBuffer[0] / 20u);
 Com_SendSignal(ComConf_ComSignal_sig_LampCnt_omsg_MyECU_Lamp_oCAN00_f37e68ea_Tx, (&convert_read));  // 可修改Signal

//  // 2.8、Datamapping和工程编译刷写
//  Rte_Write_LampCnt_u8_Signal(LedCnt);  // 接口调用
//  Rte_Write_RearInteriorLight_Bool_Siganl(1);  // 接口调用

//  // 2.9、DBC创建发生接受报文
//  static boolean FrontInterLight = 0;
//  FrontInterLight ^= TRUE;  // 切换状态, 按位异或 (+1)
//  Rte_Write_FrontInterLight_bool_Signal(FrontInterLight);  // 接口调用
//  static unsigned char RearLeftWindowPosition = 0;
//  static unsigned char RearRightWindowPosition = 0;
//  Rte_Read_CtLedTask_RearLeftWindowPosition_u8_Signal(&RearLeftWindowPosition);
//  Rte_Read_CtLedTask_RearRightWindowPosition_u8_Signal(&RearRightWindowPosition);

//  // 2.11、COM发生模拟式练习 (LedRunnable是每300ms调用一次)
//  static boolean RearLeft_Window = 1;
//  static boolean RearRight_Window = 1;
//  static unsigned char cnt_invoke = 10;  // 创建计数器, 以设置特定时间调用Com_SendSignal
// //  if (cnt_invoke%10 == 0)  // 每3秒调用一次Com_SendSignal (300ms调用一次LedRunnable, 10*300ms=3000ms=3s)
//  if (cnt_invoke == 10)
//  {
//     Com_SendSignal(ComConf_ComSignal_RearLeft_Window, (&RearLeft_Window));  // 可修改Signal
//     RearLeft_Window ^= TRUE;  // 切换状态, 按位异或 (+1)
//     cnt_invoke = 0;  // 调用一次后, 计数器清零 10和0等效
//  }
//  cnt_invoke++;
//  Com_SendSignal(ComConf_ComSignal_RearRight_Window, (&RearRight_Window));  // 可修改Signal

//  // 2.12、signalgroup
//  static uint16 my_GSignal1 = 0x5A; // uint16
//  static uint16 my_GSignal2 = 0x8B;
//  Com_SendSignal(ComConf_ComGroupSignal_my_GSignal1, (&my_GSignal1));  // 可修改Signal (将值传递进缓存区)
//  Com_SendSignal(ComConf_ComGroupSignal_my_GSignal2, (&my_GSignal2));
//  Com_SendSignalGroup(ComConf_ComSignalGroup_My_SignalGroup);  // 统一将缓存发送IPdu到PduR里面

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CtLedTask_STOP_SEC_CODE
#include "CtLedTask_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
