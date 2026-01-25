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
 *              File: Os_Alarm_Lcfg.c
 *   Generation Time: 2018-11-27 15:30:01
 *           Project: TsiStandard - Version 1
 *          Delivery: CBD1800257_D01
 *      Tool Version: DaVinci Configurator  5.18.37 SP1
 *
 *
 *********************************************************************************************************************/

/* PRQA S 0777, 0779, 0810, 0828, 0857 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779, MD_MSR_1.1_810, MD_MSR_1.1_828, MD_MSR_1.1_857 */

#define OS_ALARM_LCFG_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
#include "Std_Types.h"

/* Os module declarations */
#include "Os_Alarm_Lcfg.h"
#include "Os_Alarm.h"

/* Os kernel module dependencies */
#include "Os_Application_Lcfg.h"
#include "Os_Cfg.h"
#include "Os_Common.h"
#include "Os_Counter_Lcfg.h"
#include "Os_Counter.h"
#include "Os_Task_Lcfg.h"
#include "Os_Timer.h"

/* Os hal dependencies */


/**********************************************************************************************************************
 *  LOCAL CONSTANT MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTION MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA PROTOTYPES
 *********************************************************************************************************************/

#define OS_START_SEC_CORE0_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! Dynamic alarm data: Rte_Al_TE2_Default_BSW_Async_Task_0_10ms */
OS_LOCAL VAR(Os_AlarmType, OS_VAR_NOINIT) OsCfg_Alarm_Rte_Al_TE2_Default_BSW_Async_Task_0_10ms_Dyn;

/*! Dynamic alarm data: Rte_Al_TE2_Default_BSW_Async_Task_0_1ms */
OS_LOCAL VAR(Os_AlarmType, OS_VAR_NOINIT) OsCfg_Alarm_Rte_Al_TE2_Default_BSW_Async_Task_0_1ms_Dyn;

/*! Dynamic alarm data: Rte_Al_TE2_Default_BSW_Async_Task_0_20ms */
OS_LOCAL VAR(Os_AlarmType, OS_VAR_NOINIT) OsCfg_Alarm_Rte_Al_TE2_Default_BSW_Async_Task_0_20ms_Dyn;

/*! Dynamic alarm data: Rte_Al_TE2_Default_BSW_Async_Task_0_5ms */
OS_LOCAL VAR(Os_AlarmType, OS_VAR_NOINIT) OsCfg_Alarm_Rte_Al_TE2_Default_BSW_Async_Task_0_5ms_Dyn;

/*! Dynamic alarm data: Rte_Al_TE2_OsTask_WdgM_Cyclic_0_10ms */
OS_LOCAL VAR(Os_AlarmType, OS_VAR_NOINIT) OsCfg_Alarm_Rte_Al_TE2_OsTask_WdgM_Cyclic_0_10ms_Dyn;

/*! Dynamic alarm data: Rte_Al_TE_StartApplication_StartApplication_Cyclic1000ms */
OS_LOCAL VAR(Os_AlarmType, OS_VAR_NOINIT) OsCfg_Alarm_Rte_Al_TE_StartApplication_StartApplication_Cyclic1000ms_Dyn;

/*! Dynamic alarm data: Rte_Al_TE_StartApplication_StartApplication_Cyclic10ms */
OS_LOCAL VAR(Os_AlarmType, OS_VAR_NOINIT) OsCfg_Alarm_Rte_Al_TE_StartApplication_StartApplication_Cyclic10ms_Dyn;

/*! Dynamic alarm data: Rte_Al_TE_StartApplication_StartApplication_Cyclic1ms */
OS_LOCAL VAR(Os_AlarmType, OS_VAR_NOINIT) OsCfg_Alarm_Rte_Al_TE_StartApplication_StartApplication_Cyclic1ms_Dyn;

/*! Dynamic alarm data: Rte_Al_TE_StartApplication_StartApplication_Cyclic250ms */
OS_LOCAL VAR(Os_AlarmType, OS_VAR_NOINIT) OsCfg_Alarm_Rte_Al_TE_StartApplication_StartApplication_Cyclic250ms_Dyn;

/*! Dynamic alarm data: Rte_Al_TE_StartApplication_StartApplication_MEMORYPROTECTION_Cyclic10ms */
OS_LOCAL VAR(Os_AlarmType, OS_VAR_NOINIT) OsCfg_Alarm_Rte_Al_TE_StartApplication_StartApplication_MEMORYPROTECTION_Cyclic10ms_Dyn;

#define OS_STOP_SEC_CORE0_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL CONSTANT DATA
 *********************************************************************************************************************/

#define OS_START_SEC_CORE0_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! Alarm configuration data: Rte_Al_TE2_Default_BSW_Async_Task_0_10ms */
CONST(Os_AlarmSetEventConfigType, OS_CONST) OsCfg_Alarm_Rte_Al_TE2_Default_BSW_Async_Task_0_10ms =
{
  /* .Alarm = */
  {
    /* .Job                   = */
    {
      /* .Dyn      = */ OS_ALARM_CASTDYN_ALARM_2_JOB(OsCfg_Alarm_Rte_Al_TE2_Default_BSW_Async_Task_0_10ms_Dyn),
      /* .Counter  = */ OS_COUNTER_CASTCONFIG_TIMERPIT_2_COUNTER(OsCfg_Counter_SystemTimer),
      /* .Callback = */ Os_AlarmActionSetEvent
    },
    /* .Autostart             = */
    {
      /* .AlarmTime        = */ 0uL, /* 0.0 sec */
      /* .Cycle            = */ 0uL, /* 0.0 sec */
      /* .ApplicationModes = */ OS_APPMODE_NONE,
      /* .AlarmMode        = */ OS_ALARMMODE_ABSOLUTE
    },
    /* .AccessingApplications = */ (OS_APPID2MASK(OsApplication_NonTrusted_Core0)
        | OS_APPID2MASK(OsApplication_Trusted_Core0)
        | OS_APPID2MASK(SystemApplication_OsCore0)),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_NonTrusted_Core0
  },
  /* .Task  = */ &OsCfg_Task_Default_BSW_Async_Task,
  /* .Mask  = */ Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_10ms
};

/*! Alarm configuration data: Rte_Al_TE2_Default_BSW_Async_Task_0_1ms */
CONST(Os_AlarmSetEventConfigType, OS_CONST) OsCfg_Alarm_Rte_Al_TE2_Default_BSW_Async_Task_0_1ms =
{
  /* .Alarm = */
  {
    /* .Job                   = */
    {
      /* .Dyn      = */ OS_ALARM_CASTDYN_ALARM_2_JOB(OsCfg_Alarm_Rte_Al_TE2_Default_BSW_Async_Task_0_1ms_Dyn),
      /* .Counter  = */ OS_COUNTER_CASTCONFIG_TIMERPIT_2_COUNTER(OsCfg_Counter_SystemTimer),
      /* .Callback = */ Os_AlarmActionSetEvent
    },
    /* .Autostart             = */
    {
      /* .AlarmTime        = */ 0uL, /* 0.0 sec */
      /* .Cycle            = */ 0uL, /* 0.0 sec */
      /* .ApplicationModes = */ OS_APPMODE_NONE,
      /* .AlarmMode        = */ OS_ALARMMODE_ABSOLUTE
    },
    /* .AccessingApplications = */ (OS_APPID2MASK(OsApplication_NonTrusted_Core0)
        | OS_APPID2MASK(OsApplication_Trusted_Core0)
        | OS_APPID2MASK(SystemApplication_OsCore0)),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_NonTrusted_Core0
  },
  /* .Task  = */ &OsCfg_Task_Default_BSW_Async_Task,
  /* .Mask  = */ Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_1ms
};

/*! Alarm configuration data: Rte_Al_TE2_Default_BSW_Async_Task_0_20ms */
CONST(Os_AlarmSetEventConfigType, OS_CONST) OsCfg_Alarm_Rte_Al_TE2_Default_BSW_Async_Task_0_20ms =
{
  /* .Alarm = */
  {
    /* .Job                   = */
    {
      /* .Dyn      = */ OS_ALARM_CASTDYN_ALARM_2_JOB(OsCfg_Alarm_Rte_Al_TE2_Default_BSW_Async_Task_0_20ms_Dyn),
      /* .Counter  = */ OS_COUNTER_CASTCONFIG_TIMERPIT_2_COUNTER(OsCfg_Counter_SystemTimer),
      /* .Callback = */ Os_AlarmActionSetEvent
    },
    /* .Autostart             = */
    {
      /* .AlarmTime        = */ 0uL, /* 0.0 sec */
      /* .Cycle            = */ 0uL, /* 0.0 sec */
      /* .ApplicationModes = */ OS_APPMODE_NONE,
      /* .AlarmMode        = */ OS_ALARMMODE_ABSOLUTE
    },
    /* .AccessingApplications = */ (OS_APPID2MASK(OsApplication_NonTrusted_Core0)
        | OS_APPID2MASK(OsApplication_Trusted_Core0)
        | OS_APPID2MASK(SystemApplication_OsCore0)),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_NonTrusted_Core0
  },
  /* .Task  = */ &OsCfg_Task_Default_BSW_Async_Task,
  /* .Mask  = */ Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_20ms
};

/*! Alarm configuration data: Rte_Al_TE2_Default_BSW_Async_Task_0_5ms */
CONST(Os_AlarmSetEventConfigType, OS_CONST) OsCfg_Alarm_Rte_Al_TE2_Default_BSW_Async_Task_0_5ms =
{
  /* .Alarm = */
  {
    /* .Job                   = */
    {
      /* .Dyn      = */ OS_ALARM_CASTDYN_ALARM_2_JOB(OsCfg_Alarm_Rte_Al_TE2_Default_BSW_Async_Task_0_5ms_Dyn),
      /* .Counter  = */ OS_COUNTER_CASTCONFIG_TIMERPIT_2_COUNTER(OsCfg_Counter_SystemTimer),
      /* .Callback = */ Os_AlarmActionSetEvent
    },
    /* .Autostart             = */
    {
      /* .AlarmTime        = */ 0uL, /* 0.0 sec */
      /* .Cycle            = */ 0uL, /* 0.0 sec */
      /* .ApplicationModes = */ OS_APPMODE_NONE,
      /* .AlarmMode        = */ OS_ALARMMODE_ABSOLUTE
    },
    /* .AccessingApplications = */ (OS_APPID2MASK(OsApplication_NonTrusted_Core0)
        | OS_APPID2MASK(OsApplication_Trusted_Core0)
        | OS_APPID2MASK(SystemApplication_OsCore0)),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_NonTrusted_Core0
  },
  /* .Task  = */ &OsCfg_Task_Default_BSW_Async_Task,
  /* .Mask  = */ Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_5ms
};

/*! Alarm configuration data: Rte_Al_TE2_OsTask_WdgM_Cyclic_0_10ms */
CONST(Os_AlarmActivateTaskConfigType, OS_CONST) OsCfg_Alarm_Rte_Al_TE2_OsTask_WdgM_Cyclic_0_10ms =
{
  /* .Alarm = */
  {
    /* .Job                   = */
    {
      /* .Dyn      = */ OS_ALARM_CASTDYN_ALARM_2_JOB(OsCfg_Alarm_Rte_Al_TE2_OsTask_WdgM_Cyclic_0_10ms_Dyn),
      /* .Counter  = */ OS_COUNTER_CASTCONFIG_TIMERPIT_2_COUNTER(OsCfg_Counter_SystemTimer),
      /* .Callback = */ Os_AlarmActionActivateTask
    },
    /* .Autostart             = */
    {
      /* .AlarmTime        = */ 0uL, /* 0.0 sec */
      /* .Cycle            = */ 0uL, /* 0.0 sec */
      /* .ApplicationModes = */ OS_APPMODE_NONE,
      /* .AlarmMode        = */ OS_ALARMMODE_ABSOLUTE
    },
    /* .AccessingApplications = */ (OS_APPID2MASK(OsApplication_NonTrusted_Core0)
        | OS_APPID2MASK(OsApplication_Trusted_Core0)
        | OS_APPID2MASK(SystemApplication_OsCore0)),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_Trusted_Core0
  },
  /* .Task  = */ &OsCfg_Task_OsTask_WdgM_Cyclic
};

/*! Alarm configuration data: Rte_Al_TE_StartApplication_StartApplication_Cyclic1000ms */
CONST(Os_AlarmSetEventConfigType, OS_CONST) OsCfg_Alarm_Rte_Al_TE_StartApplication_StartApplication_Cyclic1000ms =
{
  /* .Alarm = */
  {
    /* .Job                   = */
    {
      /* .Dyn      = */ OS_ALARM_CASTDYN_ALARM_2_JOB(OsCfg_Alarm_Rte_Al_TE_StartApplication_StartApplication_Cyclic1000ms_Dyn),
      /* .Counter  = */ OS_COUNTER_CASTCONFIG_TIMERPIT_2_COUNTER(OsCfg_Counter_SystemTimer),
      /* .Callback = */ Os_AlarmActionSetEvent
    },
    /* .Autostart             = */
    {
      /* .AlarmTime        = */ 0uL, /* 0.0 sec */
      /* .Cycle            = */ 0uL, /* 0.0 sec */
      /* .ApplicationModes = */ OS_APPMODE_NONE,
      /* .AlarmMode        = */ OS_ALARMMODE_ABSOLUTE
    },
    /* .AccessingApplications = */ (OS_APPID2MASK(OsApplication_NonTrusted_Core0)
        | OS_APPID2MASK(OsApplication_Trusted_Core0)
        | OS_APPID2MASK(SystemApplication_OsCore0)),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_NonTrusted_Core0
  },
  /* .Task  = */ &OsCfg_Task_Default_Appl_Task,
  /* .Mask  = */ Rte_Ev_Run_StartApplication_StartApplication_Cyclic1000ms
};

/*! Alarm configuration data: Rte_Al_TE_StartApplication_StartApplication_Cyclic10ms */
CONST(Os_AlarmSetEventConfigType, OS_CONST) OsCfg_Alarm_Rte_Al_TE_StartApplication_StartApplication_Cyclic10ms =
{
  /* .Alarm = */
  {
    /* .Job                   = */
    {
      /* .Dyn      = */ OS_ALARM_CASTDYN_ALARM_2_JOB(OsCfg_Alarm_Rte_Al_TE_StartApplication_StartApplication_Cyclic10ms_Dyn),
      /* .Counter  = */ OS_COUNTER_CASTCONFIG_TIMERPIT_2_COUNTER(OsCfg_Counter_SystemTimer),
      /* .Callback = */ Os_AlarmActionSetEvent
    },
    /* .Autostart             = */
    {
      /* .AlarmTime        = */ 0uL, /* 0.0 sec */
      /* .Cycle            = */ 0uL, /* 0.0 sec */
      /* .ApplicationModes = */ OS_APPMODE_NONE,
      /* .AlarmMode        = */ OS_ALARMMODE_ABSOLUTE
    },
    /* .AccessingApplications = */ (OS_APPID2MASK(OsApplication_NonTrusted_Core0)
        | OS_APPID2MASK(OsApplication_Trusted_Core0)
        | OS_APPID2MASK(SystemApplication_OsCore0)),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_NonTrusted_Core0
  },
  /* .Task  = */ &OsCfg_Task_Default_Appl_Task,
  /* .Mask  = */ Rte_Ev_Run_StartApplication_StartApplication_Cyclic10ms
};

/*! Alarm configuration data: Rte_Al_TE_StartApplication_StartApplication_Cyclic1ms */
CONST(Os_AlarmSetEventConfigType, OS_CONST) OsCfg_Alarm_Rte_Al_TE_StartApplication_StartApplication_Cyclic1ms =
{
  /* .Alarm = */
  {
    /* .Job                   = */
    {
      /* .Dyn      = */ OS_ALARM_CASTDYN_ALARM_2_JOB(OsCfg_Alarm_Rte_Al_TE_StartApplication_StartApplication_Cyclic1ms_Dyn),
      /* .Counter  = */ OS_COUNTER_CASTCONFIG_TIMERPIT_2_COUNTER(OsCfg_Counter_SystemTimer),
      /* .Callback = */ Os_AlarmActionSetEvent
    },
    /* .Autostart             = */
    {
      /* .AlarmTime        = */ 0uL, /* 0.0 sec */
      /* .Cycle            = */ 0uL, /* 0.0 sec */
      /* .ApplicationModes = */ OS_APPMODE_NONE,
      /* .AlarmMode        = */ OS_ALARMMODE_ABSOLUTE
    },
    /* .AccessingApplications = */ (OS_APPID2MASK(OsApplication_NonTrusted_Core0)
        | OS_APPID2MASK(OsApplication_Trusted_Core0)
        | OS_APPID2MASK(SystemApplication_OsCore0)),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_NonTrusted_Core0
  },
  /* .Task  = */ &OsCfg_Task_Default_Appl_Task,
  /* .Mask  = */ Rte_Ev_Run_StartApplication_StartApplication_Cyclic1ms
};

/*! Alarm configuration data: Rte_Al_TE_StartApplication_StartApplication_Cyclic250ms */
CONST(Os_AlarmSetEventConfigType, OS_CONST) OsCfg_Alarm_Rte_Al_TE_StartApplication_StartApplication_Cyclic250ms =
{
  /* .Alarm = */
  {
    /* .Job                   = */
    {
      /* .Dyn      = */ OS_ALARM_CASTDYN_ALARM_2_JOB(OsCfg_Alarm_Rte_Al_TE_StartApplication_StartApplication_Cyclic250ms_Dyn),
      /* .Counter  = */ OS_COUNTER_CASTCONFIG_TIMERPIT_2_COUNTER(OsCfg_Counter_SystemTimer),
      /* .Callback = */ Os_AlarmActionSetEvent
    },
    /* .Autostart             = */
    {
      /* .AlarmTime        = */ 0uL, /* 0.0 sec */
      /* .Cycle            = */ 0uL, /* 0.0 sec */
      /* .ApplicationModes = */ OS_APPMODE_NONE,
      /* .AlarmMode        = */ OS_ALARMMODE_ABSOLUTE
    },
    /* .AccessingApplications = */ (OS_APPID2MASK(OsApplication_NonTrusted_Core0)
        | OS_APPID2MASK(OsApplication_Trusted_Core0)
        | OS_APPID2MASK(SystemApplication_OsCore0)),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_NonTrusted_Core0
  },
  /* .Task  = */ &OsCfg_Task_Default_Appl_Task,
  /* .Mask  = */ Rte_Ev_Run_StartApplication_StartApplication_Cyclic250ms
};

/*! Alarm configuration data: Rte_Al_TE_StartApplication_StartApplication_MEMORYPROTECTION_Cyclic10ms */
CONST(Os_AlarmActivateTaskConfigType, OS_CONST) OsCfg_Alarm_Rte_Al_TE_StartApplication_StartApplication_MEMORYPROTECTION_Cyclic10ms =
{
  /* .Alarm = */
  {
    /* .Job                   = */
    {
      /* .Dyn      = */ OS_ALARM_CASTDYN_ALARM_2_JOB(OsCfg_Alarm_Rte_Al_TE_StartApplication_StartApplication_MEMORYPROTECTION_Cyclic10ms_Dyn),
      /* .Counter  = */ OS_COUNTER_CASTCONFIG_TIMERPIT_2_COUNTER(OsCfg_Counter_SystemTimer),
      /* .Callback = */ Os_AlarmActionActivateTask
    },
    /* .Autostart             = */
    {
      /* .AlarmTime        = */ 0uL, /* 0.0 sec */
      /* .Cycle            = */ 0uL, /* 0.0 sec */
      /* .ApplicationModes = */ OS_APPMODE_NONE,
      /* .AlarmMode        = */ OS_ALARMMODE_ABSOLUTE
    },
    /* .AccessingApplications = */ (OS_APPID2MASK(OsApplication_NonTrusted_Core0)
        | OS_APPID2MASK(OsApplication_Trusted_Core0)
        | OS_APPID2MASK(SystemApplication_OsCore0)),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_NonTrusted_Core0
  },
  /* .Task  = */ &OsCfg_Task_StartApplication_MemoryViolation_Task
};

#define OS_STOP_SEC_CORE0_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define OS_START_SEC_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! Object reference table for alarms. */
CONSTP2CONST(Os_AlarmConfigType, OS_CONST, OS_CONST) OsCfg_AlarmRefs[OS_ALARMID_COUNT + 1] =
{
  OS_ALARM_CASTCONFIG_ALARMSETEVENT_2_ALARM(OsCfg_Alarm_Rte_Al_TE2_Default_BSW_Async_Task_0_10ms),
  OS_ALARM_CASTCONFIG_ALARMSETEVENT_2_ALARM(OsCfg_Alarm_Rte_Al_TE2_Default_BSW_Async_Task_0_1ms),
  OS_ALARM_CASTCONFIG_ALARMSETEVENT_2_ALARM(OsCfg_Alarm_Rte_Al_TE2_Default_BSW_Async_Task_0_20ms),
  OS_ALARM_CASTCONFIG_ALARMSETEVENT_2_ALARM(OsCfg_Alarm_Rte_Al_TE2_Default_BSW_Async_Task_0_5ms),
  OS_ALARM_CASTCONFIG_ALARMACTIVATETASK_2_ALARM(OsCfg_Alarm_Rte_Al_TE2_OsTask_WdgM_Cyclic_0_10ms),
  OS_ALARM_CASTCONFIG_ALARMSETEVENT_2_ALARM(OsCfg_Alarm_Rte_Al_TE_StartApplication_StartApplication_Cyclic1000ms),
  OS_ALARM_CASTCONFIG_ALARMSETEVENT_2_ALARM(OsCfg_Alarm_Rte_Al_TE_StartApplication_StartApplication_Cyclic10ms),
  OS_ALARM_CASTCONFIG_ALARMSETEVENT_2_ALARM(OsCfg_Alarm_Rte_Al_TE_StartApplication_StartApplication_Cyclic1ms),
  OS_ALARM_CASTCONFIG_ALARMSETEVENT_2_ALARM(OsCfg_Alarm_Rte_Al_TE_StartApplication_StartApplication_Cyclic250ms),
  OS_ALARM_CASTCONFIG_ALARMACTIVATETASK_2_ALARM(OsCfg_Alarm_Rte_Al_TE_StartApplication_StartApplication_MEMORYPROTECTION_Cyclic10ms),
  NULL_PTR
};

#define OS_STOP_SEC_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  END OF FILE: Os_Alarm_Lcfg.c
 *********************************************************************************************************************/
