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
 *            Module: Os
 *           Program: MSR_Vector_SLP4
 *          Customer: Harman International (China) Holdings Co., Ltd.
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: FS32K148UAT0VLQR
 *    License Scope : The usage is restricted to CBD1800257_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Os_Types_Lcfg.h
 *   Generation Time: 2018-11-27 15:30:02
 *           Project: TsiStandard - Version 1
 *          Delivery: CBD1800257_D01
 *      Tool Version: DaVinci Configurator  5.18.37 SP1
 *
 *
 *********************************************************************************************************************/

#if !defined (OS_TYPES_LCFG_H)                                                       /* PRQA S 0883 */ /* MD_Os_0883 */
# define OS_TYPES_LCFG_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module declarations */

/* Os kernel module dependencies */

/* Os hal dependencies */

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/* OS-Application identifiers. */
#define OsApplication_NonTrusted_Core0 OsApplication_NonTrusted_Core0
#define OsApplication_Trusted_Core0 OsApplication_Trusted_Core0
#define SystemApplication_OsCore0 SystemApplication_OsCore0

/* Trusted function identifiers. */

/* Non-trusted function identifiers. */

/* Fast trusted function identifiers. */

/* Task identifiers. */
#define Default_Appl_Init_Task Default_Appl_Init_Task
#define Default_Appl_Task Default_Appl_Task
#define Default_BSW_Async_Task Default_BSW_Async_Task
#define Default_BSW_Sync_Task Default_BSW_Sync_Task
#define Default_Init_Task Default_Init_Task
#define Default_RTE_Mode_switch_Task Default_RTE_Mode_switch_Task
#define IdleTask_OsCore0 IdleTask_OsCore0
#define OsTask_WdgM_Cyclic OsTask_WdgM_Cyclic
#define StartApplication_MemoryViolation_Task StartApplication_MemoryViolation_Task
#define StartApplication_Trusted_Task StartApplication_Trusted_Task

/* Category 2 ISR identifiers. */
#define CanIsr_0_BusOff CanIsr_0_BusOff
#define CanIsr_0_MB00To15 CanIsr_0_MB00To15
#define CanIsr_0_MB16To31 CanIsr_0_MB16To31
#define CounterIsr_SystemTimer CounterIsr_SystemTimer
#define FTM_0_CH_0_CH_1_ISR FTM_0_CH_0_CH_1_ISR

/* Alarm identifiers. */
#define Rte_Al_TE2_Default_BSW_Async_Task_0_10ms Rte_Al_TE2_Default_BSW_Async_Task_0_10ms
#define Rte_Al_TE2_Default_BSW_Async_Task_0_1ms Rte_Al_TE2_Default_BSW_Async_Task_0_1ms
#define Rte_Al_TE2_Default_BSW_Async_Task_0_20ms Rte_Al_TE2_Default_BSW_Async_Task_0_20ms
#define Rte_Al_TE2_Default_BSW_Async_Task_0_5ms Rte_Al_TE2_Default_BSW_Async_Task_0_5ms
#define Rte_Al_TE2_OsTask_WdgM_Cyclic_0_10ms Rte_Al_TE2_OsTask_WdgM_Cyclic_0_10ms
#define Rte_Al_TE_StartApplication_StartApplication_Cyclic1000ms Rte_Al_TE_StartApplication_StartApplication_Cyclic1000ms
#define Rte_Al_TE_StartApplication_StartApplication_Cyclic10ms Rte_Al_TE_StartApplication_StartApplication_Cyclic10ms
#define Rte_Al_TE_StartApplication_StartApplication_Cyclic1ms Rte_Al_TE_StartApplication_StartApplication_Cyclic1ms
#define Rte_Al_TE_StartApplication_StartApplication_Cyclic250ms Rte_Al_TE_StartApplication_StartApplication_Cyclic250ms
#define Rte_Al_TE_StartApplication_StartApplication_MEMORYPROTECTION_Cyclic10ms Rte_Al_TE_StartApplication_StartApplication_MEMORYPROTECTION_Cyclic10ms

/* Counter identifiers. */
#define SystemTimer SystemTimer

/* ScheduleTable identifiers. */

/* Resource identifiers. */
#define OsResource_EcuM OsResource_EcuM

/* Spinlock identifiers. */

/* Peripheral identifiers. */
#define CAN_PROTECTED_AREA_CH0 CAN_PROTECTED_AREA_CH0

/* Barrier identifiers. */

/* Trace thread identifiers (Tasks and ISRs inclusive system objects). */
#define Os_TraceId_Default_Appl_Init_Task Os_TraceId_Default_Appl_Init_Task
#define Os_TraceId_Default_Appl_Task Os_TraceId_Default_Appl_Task
#define Os_TraceId_Default_BSW_Async_Task Os_TraceId_Default_BSW_Async_Task
#define Os_TraceId_Default_BSW_Sync_Task Os_TraceId_Default_BSW_Sync_Task
#define Os_TraceId_Default_Init_Task Os_TraceId_Default_Init_Task
#define Os_TraceId_Default_RTE_Mode_switch_Task Os_TraceId_Default_RTE_Mode_switch_Task
#define Os_TraceId_IdleTask_OsCore0 Os_TraceId_IdleTask_OsCore0
#define Os_TraceId_OsTask_WdgM_Cyclic Os_TraceId_OsTask_WdgM_Cyclic
#define Os_TraceId_StartApplication_MemoryViolation_Task Os_TraceId_StartApplication_MemoryViolation_Task
#define Os_TraceId_StartApplication_Trusted_Task Os_TraceId_StartApplication_Trusted_Task
#define Os_TraceId_CanIsr_0_BusOff Os_TraceId_CanIsr_0_BusOff
#define Os_TraceId_CanIsr_0_MB00To15 Os_TraceId_CanIsr_0_MB00To15
#define Os_TraceId_CanIsr_0_MB16To31 Os_TraceId_CanIsr_0_MB16To31
#define Os_TraceId_CounterIsr_SystemTimer Os_TraceId_CounterIsr_SystemTimer
#define Os_TraceId_FTM_0_CH_0_CH_1_ISR Os_TraceId_FTM_0_CH_0_CH_1_ISR

/* Trace spinlock identifiers (All spinlocks inclusive system objects). */

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/*! OS-Application identifiers. */
typedef enum
{
  OsApplication_NonTrusted_Core0 = 0, /* 0x00000001 */
  OsApplication_Trusted_Core0 = 1, /* 0x00000002 */
  SystemApplication_OsCore0 = 2, /* 0x00000004 */
  OS_APPID_COUNT = 3,
  INVALID_OSAPPLICATION = OS_APPID_COUNT
} ApplicationType;

/*! Trusted function identifiers. */
typedef enum
{
  OS_TRUSTEDFUNCTIONID_COUNT = 0
} TrustedFunctionIndexType;

/*! Non-trusted function identifiers. */
typedef enum
{
  OS_NONTRUSTEDFUNCTIONID_COUNT = 0
} Os_NonTrustedFunctionIndexType;

/*! Fast trusted function identifiers. */
typedef enum
{
  OS_FASTTRUSTEDFUNCTIONID_COUNT = 0
} Os_FastTrustedFunctionIndexType;

/*! Task identifiers. */
typedef enum
{
  Default_Appl_Init_Task = 0,
  Default_Appl_Task = 1,
  Default_BSW_Async_Task = 2,
  Default_BSW_Sync_Task = 3,
  Default_Init_Task = 4,
  Default_RTE_Mode_switch_Task = 5,
  IdleTask_OsCore0 = 6,
  OsTask_WdgM_Cyclic = 7,
  StartApplication_MemoryViolation_Task = 8,
  StartApplication_Trusted_Task = 9,
  OS_TASKID_COUNT = 10,
  INVALID_TASK = OS_TASKID_COUNT
} TaskType;

/*! Category 2 ISR identifiers. */
typedef enum
{
  CanIsr_0_BusOff = 0,
  CanIsr_0_MB00To15 = 1,
  CanIsr_0_MB16To31 = 2,
  CounterIsr_SystemTimer = 3,
  FTM_0_CH_0_CH_1_ISR = 4,
  OS_ISRID_COUNT = 5,
  INVALID_ISR = OS_ISRID_COUNT
} ISRType;

/*! Alarm identifiers. */
typedef enum
{
  Rte_Al_TE2_Default_BSW_Async_Task_0_10ms = 0,
  Rte_Al_TE2_Default_BSW_Async_Task_0_1ms = 1,
  Rte_Al_TE2_Default_BSW_Async_Task_0_20ms = 2,
  Rte_Al_TE2_Default_BSW_Async_Task_0_5ms = 3,
  Rte_Al_TE2_OsTask_WdgM_Cyclic_0_10ms = 4,
  Rte_Al_TE_StartApplication_StartApplication_Cyclic1000ms = 5,
  Rte_Al_TE_StartApplication_StartApplication_Cyclic10ms = 6,
  Rte_Al_TE_StartApplication_StartApplication_Cyclic1ms = 7,
  Rte_Al_TE_StartApplication_StartApplication_Cyclic250ms = 8,
  Rte_Al_TE_StartApplication_StartApplication_MEMORYPROTECTION_Cyclic10ms = 9,
  OS_ALARMID_COUNT = 10
} AlarmType;

/*! Counter identifiers. */
typedef enum
{
  SystemTimer = 0,
  OS_COUNTERID_COUNT = 1
} CounterType;

/*! ScheduleTable identifiers. */
typedef enum
{
  OS_SCHTID_COUNT = 0
} ScheduleTableType;

/*! Resource identifiers. */
typedef enum
{
  OsResource_EcuM = 0,
  OS_RESOURCEID_COUNT = 1
} ResourceType;

/*! Spinlock identifiers. */
typedef enum
{
  OS_SPINLOCKID_COUNT = 0,
  INVALID_SPINLOCK = OS_SPINLOCKID_COUNT
} SpinlockIdType;

/*! Peripheral identifiers. */
typedef enum
{
  CAN_PROTECTED_AREA_CH0 = 0,
  OS_PERIPHERALID_COUNT = 1
} Os_PeripheralIdType;

/*! Barrier identifiers. */
typedef enum
{
  OS_BARRIERID_COUNT = 0
} Os_BarrierIdType;

/*! Trace thread identifiers (Tasks and ISRs inclusive system objects). */
typedef enum
{
  Os_TraceId_Default_Appl_Init_Task = 0,
  Os_TraceId_Default_Appl_Task = 1,
  Os_TraceId_Default_BSW_Async_Task = 2,
  Os_TraceId_Default_BSW_Sync_Task = 3,
  Os_TraceId_Default_Init_Task = 4,
  Os_TraceId_Default_RTE_Mode_switch_Task = 5,
  Os_TraceId_IdleTask_OsCore0 = 6,
  Os_TraceId_OsTask_WdgM_Cyclic = 7,
  Os_TraceId_StartApplication_MemoryViolation_Task = 8,
  Os_TraceId_StartApplication_Trusted_Task = 9,
  Os_TraceId_CanIsr_0_BusOff = 10,
  Os_TraceId_CanIsr_0_MB00To15 = 11,
  Os_TraceId_CanIsr_0_MB16To31 = 12,
  Os_TraceId_CounterIsr_SystemTimer = 13,
  Os_TraceId_FTM_0_CH_0_CH_1_ISR = 14,
  OS_TRACE_THREADID_COUNT = 15,
  OS_TRACE_INVALID_THREAD = OS_TRACE_THREADID_COUNT + 1
} Os_TraceThreadIdType;

/*! Trace spinlock identifiers (All spinlocks inclusive system objects). */
typedef enum
{
  OS_TRACE_NUMBER_OF_CONFIGURED_SPINLOCKS = OS_SPINLOCKID_COUNT,
  OS_TRACE_NUMBER_OF_ALL_SPINLOCKS = OS_SPINLOCKID_COUNT + 0,
  OS_TRACE_INVALID_SPINLOCK = OS_TRACE_NUMBER_OF_ALL_SPINLOCKS + 1
} Os_TraceSpinlockIdType;

/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL CONSTANT DATA PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/


#endif /* OS_TYPES_LCFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Os_Types_Lcfg.h
 *********************************************************************************************************************/
