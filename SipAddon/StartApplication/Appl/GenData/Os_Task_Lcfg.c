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
 *              File: Os_Task_Lcfg.c
 *   Generation Time: 2018-11-27 15:30:02
 *           Project: TsiStandard - Version 1
 *          Delivery: CBD1800257_D01
 *      Tool Version: DaVinci Configurator  5.18.37 SP1
 *
 *
 *********************************************************************************************************************/

/* PRQA S 0777, 0779, 0810, 0828, 0857 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779, MD_MSR_1.1_810, MD_MSR_1.1_828, MD_MSR_1.1_857 */

#define OS_TASK_LCFG_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
#include "Std_Types.h"

/* Os module declarations */
#include "Os_Task_Lcfg.h"
#include "Os_Task.h"

/* Os kernel module dependencies */
#include "Os_AccessCheck_Lcfg.h"
#include "Os_Application_Lcfg.h"
#include "Os_Common.h"
#include "Os_Core_Lcfg.h"
#include "Os_Core.h"
#include "Os_Error.h"
#include "Os_Ioc.h"
#include "Os_Lcfg.h"
#include "Os_MemoryProtection_Lcfg.h"
#include "Os_Stack_Lcfg.h"
#include "Os_Thread.h"
#include "Os_TimingProtection_Lcfg.h"
#include "Os_Trace_Lcfg.h"

/* Os hal dependencies */
#include "Os_Hal_Context_Lcfg.h"


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

/*! Dynamic task data: Default_Appl_Init_Task */
OS_LOCAL VAR(Os_TaskType, OS_VAR_NOINIT) OsCfg_Task_Default_Appl_Init_Task_Dyn;

/*! Dynamic task data: Default_Appl_Task */
OS_LOCAL VAR(Os_TaskType, OS_VAR_NOINIT) OsCfg_Task_Default_Appl_Task_Dyn;

/*! Dynamic task data: Default_BSW_Async_Task */
OS_LOCAL VAR(Os_TaskType, OS_VAR_NOINIT) OsCfg_Task_Default_BSW_Async_Task_Dyn;

/*! Dynamic task data: Default_BSW_Sync_Task */
OS_LOCAL VAR(Os_TaskType, OS_VAR_NOINIT) OsCfg_Task_Default_BSW_Sync_Task_Dyn;

/*! Dynamic task data: Default_Init_Task */
OS_LOCAL VAR(Os_TaskType, OS_VAR_NOINIT) OsCfg_Task_Default_Init_Task_Dyn;

/*! Dynamic task data: Default_RTE_Mode_switch_Task */
OS_LOCAL VAR(Os_TaskType, OS_VAR_NOINIT) OsCfg_Task_Default_RTE_Mode_switch_Task_Dyn;

/*! Dynamic task data: IdleTask_OsCore0 */
OS_LOCAL VAR(Os_TaskType, OS_VAR_NOINIT) OsCfg_Task_IdleTask_OsCore0_Dyn;

/*! Dynamic task data: OsTask_WdgM_Cyclic */
OS_LOCAL VAR(Os_TaskType, OS_VAR_NOINIT) OsCfg_Task_OsTask_WdgM_Cyclic_Dyn;

/*! Dynamic task data: StartApplication_MemoryViolation_Task */
OS_LOCAL VAR(Os_TaskType, OS_VAR_NOINIT) OsCfg_Task_StartApplication_MemoryViolation_Task_Dyn;

/*! Dynamic task data: StartApplication_Trusted_Task */
OS_LOCAL VAR(Os_TaskType, OS_VAR_NOINIT) OsCfg_Task_StartApplication_Trusted_Task_Dyn;

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

/*! Task configuration data: Default_Appl_Init_Task */
CONST(Os_TaskConfigType, OS_CONST) OsCfg_Task_Default_Appl_Init_Task =
{
  /* .Thread                = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_Default_Appl_Init_Task,
    /* .Context               = */ &OsCfg_Hal_Context_Default_Appl_Init_Task_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Task_Prio45,
    /* .Dyn                   = */ OS_TASK_CASTDYN_TASK_2_THREAD(OsCfg_Task_Default_Appl_Init_Task_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_NonTrusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_Default_Appl_Init_Task,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_Default_Appl_Init_Task,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_TASK,
    /* .PreThreadHook         = */ &Os_TaskCallPreTaskHook,
    /* .InitDuringStartUp     = */ TRUE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HomePriority          = */ 1uL,
  /* .TaskId                = */ Default_Appl_Init_Task,
  /* .RunningPriority       = */ 0uL,
  /* .MaxActivations        = */ 1uL,
  /* .AutostartModes        = */ OS_APPMODE_NONE,
  /* .AccessingApplications = */ (OS_APPID2MASK(OsApplication_NonTrusted_Core0)
        | OS_APPID2MASK(OsApplication_Trusted_Core0)
        | OS_APPID2MASK(SystemApplication_OsCore0)),
  /* .IsExtended            = */ FALSE,
  /* .StackSharing          = */ OS_TASKSCHEDULE_ALLOWED
};

/*! Task configuration data: Default_Appl_Task */
CONST(Os_TaskConfigType, OS_CONST) OsCfg_Task_Default_Appl_Task =
{
  /* .Thread                = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_Default_Appl_Task,
    /* .Context               = */ &OsCfg_Hal_Context_Default_Appl_Task_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_Default_Appl_Task,
    /* .Dyn                   = */ OS_TASK_CASTDYN_TASK_2_THREAD(OsCfg_Task_Default_Appl_Task_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_NonTrusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_Default_Appl_Task,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_Default_Appl_Task,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_TASK,
    /* .PreThreadHook         = */ &Os_TaskCallPreTaskHook,
    /* .InitDuringStartUp     = */ TRUE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HomePriority          = */ 5uL,
  /* .TaskId                = */ Default_Appl_Task,
  /* .RunningPriority       = */ 0uL,
  /* .MaxActivations        = */ 1uL,
  /* .AutostartModes        = */ OS_APPMODE_NONE,
  /* .AccessingApplications = */ (OS_APPID2MASK(OsApplication_NonTrusted_Core0)
        | OS_APPID2MASK(OsApplication_Trusted_Core0)
        | OS_APPID2MASK(SystemApplication_OsCore0)),
  /* .IsExtended            = */ TRUE,
  /* .StackSharing          = */ OS_TASKSCHEDULE_ALLOWED
};

/*! Task configuration data: Default_BSW_Async_Task */
CONST(Os_TaskConfigType, OS_CONST) OsCfg_Task_Default_BSW_Async_Task =
{
  /* .Thread                = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_Default_BSW_Async_Task,
    /* .Context               = */ &OsCfg_Hal_Context_Default_BSW_Async_Task_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_Default_BSW_Async_Task,
    /* .Dyn                   = */ OS_TASK_CASTDYN_TASK_2_THREAD(OsCfg_Task_Default_BSW_Async_Task_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_NonTrusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_Default_BSW_Async_Task,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_Default_BSW_Async_Task,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_TASK,
    /* .PreThreadHook         = */ &Os_TaskCallPreTaskHook,
    /* .InitDuringStartUp     = */ TRUE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HomePriority          = */ 3uL,
  /* .TaskId                = */ Default_BSW_Async_Task,
  /* .RunningPriority       = */ 0uL,
  /* .MaxActivations        = */ 1uL,
  /* .AutostartModes        = */ OS_APPMODE_NONE,
  /* .AccessingApplications = */ (OS_APPID2MASK(OsApplication_NonTrusted_Core0)
        | OS_APPID2MASK(OsApplication_Trusted_Core0)
        | OS_APPID2MASK(SystemApplication_OsCore0)),
  /* .IsExtended            = */ TRUE,
  /* .StackSharing          = */ OS_TASKSCHEDULE_ALLOWED
};

/*! Task configuration data: Default_BSW_Sync_Task */
CONST(Os_TaskConfigType, OS_CONST) OsCfg_Task_Default_BSW_Sync_Task =
{
  /* .Thread                = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_Default_BSW_Sync_Task,
    /* .Context               = */ &OsCfg_Hal_Context_Default_BSW_Sync_Task_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Task_Prio40,
    /* .Dyn                   = */ OS_TASK_CASTDYN_TASK_2_THREAD(OsCfg_Task_Default_BSW_Sync_Task_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_NonTrusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_Default_BSW_Sync_Task,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_Default_BSW_Sync_Task,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_TASK,
    /* .PreThreadHook         = */ &Os_TaskCallPreTaskHook,
    /* .InitDuringStartUp     = */ TRUE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HomePriority          = */ 2uL,
  /* .TaskId                = */ Default_BSW_Sync_Task,
  /* .RunningPriority       = */ 0uL,
  /* .MaxActivations        = */ 1uL,
  /* .AutostartModes        = */ OS_APPMODE_NONE,
  /* .AccessingApplications = */ (OS_APPID2MASK(OsApplication_NonTrusted_Core0)
        | OS_APPID2MASK(SystemApplication_OsCore0)),
  /* .IsExtended            = */ FALSE,
  /* .StackSharing          = */ OS_TASKSCHEDULE_ALLOWED
};

/*! Task configuration data: Default_Init_Task */
CONST(Os_TaskConfigType, OS_CONST) OsCfg_Task_Default_Init_Task =
{
  /* .Thread                = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_Default_Init_Task,
    /* .Context               = */ &OsCfg_Hal_Context_Default_Init_Task_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Task_Prio50,
    /* .Dyn                   = */ OS_TASK_CASTDYN_TASK_2_THREAD(OsCfg_Task_Default_Init_Task_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_NonTrusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_Default_Init_Task,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_Default_Init_Task,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_TASK,
    /* .PreThreadHook         = */ &Os_TaskCallPreTaskHook,
    /* .InitDuringStartUp     = */ TRUE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HomePriority          = */ 0uL,
  /* .TaskId                = */ Default_Init_Task,
  /* .RunningPriority       = */ 0uL,
  /* .MaxActivations        = */ 1uL,
  /* .AutostartModes        = */ OSDEFAULTAPPMODE,
  /* .AccessingApplications = */ (OS_APPID2MASK(OsApplication_NonTrusted_Core0)
        | OS_APPID2MASK(SystemApplication_OsCore0)),
  /* .IsExtended            = */ FALSE,
  /* .StackSharing          = */ OS_TASKSCHEDULE_ALLOWED
};

/*! Task configuration data: Default_RTE_Mode_switch_Task */
CONST(Os_TaskConfigType, OS_CONST) OsCfg_Task_Default_RTE_Mode_switch_Task =
{
  /* .Thread                = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_Default_RTE_Mode_switch_Task,
    /* .Context               = */ &OsCfg_Hal_Context_Default_RTE_Mode_switch_Task_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Task_Prio10,
    /* .Dyn                   = */ OS_TASK_CASTDYN_TASK_2_THREAD(OsCfg_Task_Default_RTE_Mode_switch_Task_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_NonTrusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_Default_RTE_Mode_switch_Task,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_Default_RTE_Mode_switch_Task,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_TASK,
    /* .PreThreadHook         = */ &Os_TaskCallPreTaskHook,
    /* .InitDuringStartUp     = */ TRUE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HomePriority          = */ 4uL,
  /* .TaskId                = */ Default_RTE_Mode_switch_Task,
  /* .RunningPriority       = */ 0uL,
  /* .MaxActivations        = */ 1uL,
  /* .AutostartModes        = */ OS_APPMODE_NONE,
  /* .AccessingApplications = */ (OS_APPID2MASK(OsApplication_NonTrusted_Core0)
        | OS_APPID2MASK(SystemApplication_OsCore0)),
  /* .IsExtended            = */ FALSE,
  /* .StackSharing          = */ OS_TASKSCHEDULE_ALLOWED
};

/*! Task configuration data: IdleTask_OsCore0 */
CONST(Os_TaskConfigType, OS_CONST) OsCfg_Task_IdleTask_OsCore0 =
{
  /* .Thread                = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_IdleTask_OsCore0,
    /* .Context               = */ &OsCfg_Hal_Context_IdleTask_OsCore0_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Task_Prio4294967295,
    /* .Dyn                   = */ OS_TASK_CASTDYN_TASK_2_THREAD(OsCfg_Task_IdleTask_OsCore0_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_SystemApplication_OsCore0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_IdleTask_OsCore0,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_IdleTask_OsCore0,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_TASK,
    /* .PreThreadHook         = */ &Os_TaskCallPreTaskHook,
    /* .InitDuringStartUp     = */ TRUE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HomePriority          = */ 6uL,
  /* .TaskId                = */ IdleTask_OsCore0,
  /* .RunningPriority       = */ 6uL,
  /* .MaxActivations        = */ 1uL,
  /* .AutostartModes        = */ OS_APPMODE_ANY,
  /* .AccessingApplications = */ OS_APPID2MASK(SystemApplication_OsCore0),
  /* .IsExtended            = */ FALSE,
  /* .StackSharing          = */ OS_TASKSCHEDULE_ALLOWED
};

/*! Task configuration data: OsTask_WdgM_Cyclic */
CONST(Os_TaskConfigType, OS_CONST) OsCfg_Task_OsTask_WdgM_Cyclic =
{
  /* .Thread                = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_OsTask_WdgM_Cyclic,
    /* .Context               = */ &OsCfg_Hal_Context_OsTask_WdgM_Cyclic_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Task_Prio30,
    /* .Dyn                   = */ OS_TASK_CASTDYN_TASK_2_THREAD(OsCfg_Task_OsTask_WdgM_Cyclic_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_Trusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_OsTask_WdgM_Cyclic,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_OsTask_WdgM_Cyclic,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_TASK,
    /* .PreThreadHook         = */ &Os_TaskCallPreTaskHook,
    /* .InitDuringStartUp     = */ TRUE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HomePriority          = */ 3uL,
  /* .TaskId                = */ OsTask_WdgM_Cyclic,
  /* .RunningPriority       = */ 0uL,
  /* .MaxActivations        = */ 1uL,
  /* .AutostartModes        = */ OS_APPMODE_NONE,
  /* .AccessingApplications = */ (OS_APPID2MASK(OsApplication_NonTrusted_Core0)
        | OS_APPID2MASK(OsApplication_Trusted_Core0)
        | OS_APPID2MASK(SystemApplication_OsCore0)),
  /* .IsExtended            = */ FALSE,
  /* .StackSharing          = */ OS_TASKSCHEDULE_ALLOWED
};

/*! Task configuration data: StartApplication_MemoryViolation_Task */
CONST(Os_TaskConfigType, OS_CONST) OsCfg_Task_StartApplication_MemoryViolation_Task =
{
  /* .Thread                = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_StartApplication_MemoryViolation_Task,
    /* .Context               = */ &OsCfg_Hal_Context_StartApplication_MemoryViolation_Task_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Task_Prio5,
    /* .Dyn                   = */ OS_TASK_CASTDYN_TASK_2_THREAD(OsCfg_Task_StartApplication_MemoryViolation_Task_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_NonTrusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_StartApplication_MemoryViolation_Task,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_StartApplication_MemoryViolation_Task,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_TASK,
    /* .PreThreadHook         = */ &Os_TaskCallPreTaskHook,
    /* .InitDuringStartUp     = */ TRUE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HomePriority          = */ 5uL,
  /* .TaskId                = */ StartApplication_MemoryViolation_Task,
  /* .RunningPriority       = */ 0uL,
  /* .MaxActivations        = */ 1uL,
  /* .AutostartModes        = */ OS_APPMODE_NONE,
  /* .AccessingApplications = */ (OS_APPID2MASK(OsApplication_NonTrusted_Core0)
        | OS_APPID2MASK(OsApplication_Trusted_Core0)
        | OS_APPID2MASK(SystemApplication_OsCore0)),
  /* .IsExtended            = */ FALSE,
  /* .StackSharing          = */ OS_TASKSCHEDULE_ALLOWED
};

/*! Task configuration data: StartApplication_Trusted_Task */
CONST(Os_TaskConfigType, OS_CONST) OsCfg_Task_StartApplication_Trusted_Task =
{
  /* .Thread                = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_StartApplication_Trusted_Task,
    /* .Context               = */ &OsCfg_Hal_Context_StartApplication_Trusted_Task_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore0_Task_Prio5,
    /* .Dyn                   = */ OS_TASK_CASTDYN_TASK_2_THREAD(OsCfg_Task_StartApplication_Trusted_Task_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_OsApplication_Trusted_Core0,
    /* .Core                  = */ &OsCfg_Core_OsCore0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_StartApplication_Trusted_Task,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ &OsCfg_Trace_StartApplication_Trusted_Task,
    /* .FpuContext            = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_TASK,
    /* .PreThreadHook         = */ &Os_TaskCallPreTaskHook,
    /* .InitDuringStartUp     = */ TRUE,
    /* .UsesFpu               = */ FALSE
  },
  /* .HomePriority          = */ 5uL,
  /* .TaskId                = */ StartApplication_Trusted_Task,
  /* .RunningPriority       = */ 0uL,
  /* .MaxActivations        = */ 1uL,
  /* .AutostartModes        = */ OS_APPMODE_NONE,
  /* .AccessingApplications = */ (OS_APPID2MASK(OsApplication_NonTrusted_Core0)
        | OS_APPID2MASK(OsApplication_Trusted_Core0)
        | OS_APPID2MASK(SystemApplication_OsCore0)),
  /* .IsExtended            = */ FALSE,
  /* .StackSharing          = */ OS_TASKSCHEDULE_ALLOWED
};

#define OS_STOP_SEC_CORE0_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define OS_START_SEC_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! Object reference table for tasks. */
CONSTP2CONST(Os_TaskConfigType, OS_CONST, OS_CONST) OsCfg_TaskRefs[OS_TASKID_COUNT + 1] =
{
  OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_Default_Appl_Init_Task),
  OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_Default_Appl_Task),
  OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_Default_BSW_Async_Task),
  OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_Default_BSW_Sync_Task),
  OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_Default_Init_Task),
  OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_Default_RTE_Mode_switch_Task),
  OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_IdleTask_OsCore0),
  OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_OsTask_WdgM_Cyclic),
  OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_StartApplication_MemoryViolation_Task),
  OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_StartApplication_Trusted_Task),
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
 *  END OF FILE: Os_Task_Lcfg.c
 *********************************************************************************************************************/
