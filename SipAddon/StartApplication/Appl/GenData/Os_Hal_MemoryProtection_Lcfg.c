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
 *              File: Os_Hal_MemoryProtection_Lcfg.c
 *   Generation Time: 2018-11-27 15:30:01
 *           Project: TsiStandard - Version 1
 *          Delivery: CBD1800257_D01
 *      Tool Version: DaVinci Configurator  5.18.37 SP1
 *
 *
 *********************************************************************************************************************/

/* PRQA S 0777, 0779, 0810, 0828, 0857 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779, MD_MSR_1.1_810, MD_MSR_1.1_828, MD_MSR_1.1_857 */

#define OS_HAL_MEMORYPROTECTION_LCFG_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
#include "Std_Types.h"

/* Os module declarations */
#include "Os_Hal_MemoryProtection_Cfg.h"
#include "Os_Hal_MemoryProtection_Lcfg.h"
#include "Os_Hal_MemoryProtection.h"

/* Os kernel module dependencies */

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

/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL CONSTANT DATA
 *********************************************************************************************************************/

#define OS_START_SEC_CORE0_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! HAL memory protection configuration data: OsCore0 */

CONST(Os_Hal_MpCoreConfigType, OS_CONST) OsCfg_Hal_Mp_OsCore0 =
{
  /* .MpuRegionCount = */ (uint32)0,
  /* .MpuRegions     = */ NULL_PTR
};

/*! HAL memory protection configuration data: OsApplication_NonTrusted_Core0 */

CONST(Os_Hal_MpAppConfigType, OS_CONST) OsCfg_Hal_Mp_OsApplication_NonTrusted_Core0 =
{
  /* .MpuRegionCount = */ (uint32)0,
  /* .MpuRegions     = */ NULL_PTR
}
;

/*! HAL memory protection configuration data: OsApplication_Trusted_Core0 */

CONST(Os_Hal_MpAppConfigType, OS_CONST) OsCfg_Hal_Mp_OsApplication_Trusted_Core0 =
{
  /* .MpuRegionCount = */ (uint32)0,
  /* .MpuRegions     = */ NULL_PTR
}
;

/*! HAL memory protection configuration data: SystemApplication_OsCore0 */

CONST(Os_Hal_MpAppConfigType, OS_CONST) OsCfg_Hal_Mp_SystemApplication_OsCore0 =
{
  /* .MpuRegionCount = */ (uint32)0,
  /* .MpuRegions     = */ NULL_PTR
}
;

/*! HAL memory protection configuration data: CanIsr_0_BusOff */

CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_0_BusOff =
{
  /* .MpuRegionCount = */ (uint32)0,
  /* .MpuRegions     = */ NULL_PTR
}
;

/*! HAL memory protection configuration data: CanIsr_0_MB00To15 */

CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_0_MB00To15 =
{
  /* .MpuRegionCount = */ (uint32)0,
  /* .MpuRegions     = */ NULL_PTR
}
;

/*! HAL memory protection configuration data: CanIsr_0_MB16To31 */

CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CanIsr_0_MB16To31 =
{
  /* .MpuRegionCount = */ (uint32)0,
  /* .MpuRegions     = */ NULL_PTR
}
;

/*! HAL memory protection configuration data: CounterIsr_SystemTimer */

CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_CounterIsr_SystemTimer =
{
  /* .MpuRegionCount = */ (uint32)0,
  /* .MpuRegions     = */ NULL_PTR
}
;

/*! HAL memory protection configuration data: FTM_0_CH_0_CH_1_ISR */

CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_FTM_0_CH_0_CH_1_ISR =
{
  /* .MpuRegionCount = */ (uint32)0,
  /* .MpuRegions     = */ NULL_PTR
}
;

/*! HAL memory protection configuration data: Default_Appl_Init_Task */

CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Default_Appl_Init_Task =
{
  /* .MpuRegionCount = */ (uint32)0,
  /* .MpuRegions     = */ NULL_PTR
}
;

/*! HAL memory protection configuration data: Default_Appl_Task */

CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Default_Appl_Task =
{
  /* .MpuRegionCount = */ (uint32)0,
  /* .MpuRegions     = */ NULL_PTR
}
;

/*! HAL memory protection configuration data: Default_BSW_Async_Task */

CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Default_BSW_Async_Task =
{
  /* .MpuRegionCount = */ (uint32)0,
  /* .MpuRegions     = */ NULL_PTR
}
;

/*! HAL memory protection configuration data: Default_BSW_Sync_Task */

CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Default_BSW_Sync_Task =
{
  /* .MpuRegionCount = */ (uint32)0,
  /* .MpuRegions     = */ NULL_PTR
}
;

/*! HAL memory protection configuration data: Default_Init_Task */

CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Default_Init_Task =
{
  /* .MpuRegionCount = */ (uint32)0,
  /* .MpuRegions     = */ NULL_PTR
}
;

/*! HAL memory protection configuration data: Default_RTE_Mode_switch_Task */

CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_Default_RTE_Mode_switch_Task =
{
  /* .MpuRegionCount = */ (uint32)0,
  /* .MpuRegions     = */ NULL_PTR
}
;

/*! HAL memory protection configuration data: IdleTask_OsCore0 */

CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_IdleTask_OsCore0 =
{
  /* .MpuRegionCount = */ (uint32)0,
  /* .MpuRegions     = */ NULL_PTR
}
;

/*! HAL memory protection configuration data: OsTask_WdgM_Cyclic */

CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_OsTask_WdgM_Cyclic =
{
  /* .MpuRegionCount = */ (uint32)0,
  /* .MpuRegions     = */ NULL_PTR
}
;

/*! HAL memory protection configuration data: StartApplication_MemoryViolation_Task */

CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_StartApplication_MemoryViolation_Task =
{
  /* .MpuRegionCount = */ (uint32)0,
  /* .MpuRegions     = */ NULL_PTR
}
;

/*! HAL memory protection configuration data: StartApplication_Trusted_Task */

CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_StartApplication_Trusted_Task =
{
  /* .MpuRegionCount = */ (uint32)0,
  /* .MpuRegions     = */ NULL_PTR
}
;

#define OS_STOP_SEC_CORE0_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define OS_START_SEC_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! HAL memory protection configuration data: SystemMpu */
OS_LOCAL CONST(Os_Hal_MpRegionType, OS_CONST) OsCfg_Hal_Mp_SystemMpu_Regions[8] =
{
  {
    /* .MpuBaseAddress = */ OS_HAL_MPU_BASE_ADDRESS,
    /* .RegionIndex    = */ 1,
    /* .Word0          = */ (uint32)&_OS_OsApplication_NonTrusted_Core0_VAR_ALL_START,   /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
    /* .Word1          = */ (uint32)&_OS_OsApplication_NonTrusted_Core0_VAR_ALL_END,     /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
    /* .Word2          = */ (OS_HAL_SMPU_RGD_WORD_2_VALUE((OS_HAL_SMPU_SRWX_MSK | OS_HAL_SMPU_UW_MSK), 0) | OS_HAL_SMPU_RGD_WORD_2_VALUE((OS_HAL_SMPU_SRWX_MSK | OS_HAL_SMPU_UW_MSK), 1) | OS_HAL_SMPU_RGD_WORD_2_VALUE((OS_HAL_SMPU_SRWX_MSK | OS_HAL_SMPU_UW_MSK), 2) | OS_HAL_SMPU_RGD_WORD_2_VALUE((OS_HAL_SMPU_SRWX_MSK | OS_HAL_SMPU_UW_MSK), 3)),
    /* .Word3          = */ OS_HAL_SMPU_RGD_WORD_3_VALUE(0, 0xFF)
  },
  {
    /* .MpuBaseAddress = */ OS_HAL_MPU_BASE_ADDRESS,
    /* .RegionIndex    = */ 2,
    /* .Word0          = */ (uint32)0x10000000uL,   /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
    /* .Word1          = */ (uint32)0x14000FFFuL,     /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
    /* .Word2          = */ (OS_HAL_SMPU_RGD_WORD_2_VALUE((OS_HAL_SMPU_SRWX_MSK | OS_HAL_SMPU_UW_MSK), 0) | OS_HAL_SMPU_RGD_WORD_2_VALUE((OS_HAL_SMPU_SRWX_MSK | OS_HAL_SMPU_UW_MSK), 1) | OS_HAL_SMPU_RGD_WORD_2_VALUE((OS_HAL_SMPU_SRWX_MSK | OS_HAL_SMPU_UW_MSK), 2) | OS_HAL_SMPU_RGD_WORD_2_VALUE((OS_HAL_SMPU_SRWX_MSK | OS_HAL_SMPU_UW_MSK), 3)),
    /* .Word3          = */ OS_HAL_SMPU_RGD_WORD_3_VALUE(0, 0xFF)
  },
  {
    /* .MpuBaseAddress = */ OS_HAL_MPU_BASE_ADDRESS,
    /* .RegionIndex    = */ 3,
    /* .Word0          = */ (uint32)&_OS_GLOBALSHARED_VAR_START,   /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
    /* .Word1          = */ (uint32)&_OS_GLOBALSHARED_VAR_END,     /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
    /* .Word2          = */ (OS_HAL_SMPU_RGD_WORD_2_VALUE((OS_HAL_SMPU_SRW_MSK | OS_HAL_SMPU_UW_MSK), 0) | OS_HAL_SMPU_RGD_WORD_2_VALUE((OS_HAL_SMPU_SRW_MSK | OS_HAL_SMPU_UW_MSK), 1) | OS_HAL_SMPU_RGD_WORD_2_VALUE((OS_HAL_SMPU_SRW_MSK | OS_HAL_SMPU_UW_MSK), 2) | OS_HAL_SMPU_RGD_WORD_2_VALUE((OS_HAL_SMPU_SRW_MSK | OS_HAL_SMPU_UW_MSK), 3)),
    /* .Word3          = */ OS_HAL_SMPU_RGD_WORD_3_VALUE(0, 0xFF)
  },
  {
    /* .MpuBaseAddress = */ OS_HAL_MPU_BASE_ADDRESS,
    /* .RegionIndex    = */ 4,
    /* .Word0          = */ (uint32)0x00000000uL,   /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
    /* .Word1          = */ (uint32)0xFFFFFFFFuL,     /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
    /* .Word2          = */ (OS_HAL_SMPU_RGD_WORD_2_VALUE((OS_HAL_SMPU_SRX_MSK | OS_HAL_SMPU_UX_MSK | OS_HAL_SMPU_UR_MSK), 0) | OS_HAL_SMPU_RGD_WORD_2_VALUE((OS_HAL_SMPU_SRX_MSK | OS_HAL_SMPU_UX_MSK | OS_HAL_SMPU_UR_MSK), 1) | OS_HAL_SMPU_RGD_WORD_2_VALUE((OS_HAL_SMPU_SRX_MSK | OS_HAL_SMPU_UX_MSK | OS_HAL_SMPU_UR_MSK), 2) | OS_HAL_SMPU_RGD_WORD_2_VALUE((OS_HAL_SMPU_SRX_MSK | OS_HAL_SMPU_UX_MSK | OS_HAL_SMPU_UR_MSK), 3)),
    /* .Word3          = */ OS_HAL_SMPU_RGD_WORD_3_VALUE(0, 0xFF)
  },
  {
    /* .MpuBaseAddress = */ OS_HAL_MPU_BASE_ADDRESS,
    /* .RegionIndex    = */ 5,
    /* .Word0          = */ (uint32)0x1FFE0000uL,   /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
    /* .Word1          = */ (uint32)&_OS_CORE0_STACKS_START,     /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
    /* .Word2          = */ (OS_HAL_SMPU_RGD_WORD_2_VALUE((OS_HAL_SMPU_SRW_MSK | OS_HAL_SMPU_UR_MSK), 0) | OS_HAL_SMPU_RGD_WORD_2_VALUE((OS_HAL_SMPU_SRW_MSK | OS_HAL_SMPU_UR_MSK), 1) | OS_HAL_SMPU_RGD_WORD_2_VALUE((OS_HAL_SMPU_SRW_MSK | OS_HAL_SMPU_UR_MSK), 2) | OS_HAL_SMPU_RGD_WORD_2_VALUE((OS_HAL_SMPU_SRW_MSK | OS_HAL_SMPU_UR_MSK), 3)),
    /* .Word3          = */ OS_HAL_SMPU_RGD_WORD_3_VALUE(0, 0xFF)
  },
  {
    /* .MpuBaseAddress = */ OS_HAL_MPU_BASE_ADDRESS,
    /* .RegionIndex    = */ 6,
    /* .Word0          = */ (uint32)0x40000000uL,   /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
    /* .Word1          = */ (uint32)0xFFFFFFFFuL,     /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
    /* .Word2          = */ (OS_HAL_SMPU_RGD_WORD_2_VALUE((OS_HAL_SMPU_SRWX_MSK | OS_HAL_SMPU_UW_MSK), 0) | OS_HAL_SMPU_RGD_WORD_2_VALUE((OS_HAL_SMPU_SRWX_MSK | OS_HAL_SMPU_UW_MSK), 1) | OS_HAL_SMPU_RGD_WORD_2_VALUE((OS_HAL_SMPU_SRWX_MSK | OS_HAL_SMPU_UW_MSK), 2) | OS_HAL_SMPU_RGD_WORD_2_VALUE((OS_HAL_SMPU_SRWX_MSK | OS_HAL_SMPU_UW_MSK), 3)),
    /* .Word3          = */ OS_HAL_SMPU_RGD_WORD_3_VALUE(0, 0xFF)
  },
  {
    /* .MpuBaseAddress = */ OS_HAL_MPU_BASE_ADDRESS,
    /* .RegionIndex    = */ 7,
    /* .Word0          = */ (uint32)&_OS_CORE0_STACKS_END,   /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
    /* .Word1          = */ (uint32)0x2001EFFFuL,     /* PRQA S 0306, 0685 */ /* MD_Os_Hal_0306, MD_Os_Hal_0685_MpuRegionAddress */
    /* .Word2          = */ (OS_HAL_SMPU_RGD_WORD_2_VALUE((OS_HAL_SMPU_SRW_MSK | OS_HAL_SMPU_UR_MSK), 0) | OS_HAL_SMPU_RGD_WORD_2_VALUE((OS_HAL_SMPU_SRW_MSK | OS_HAL_SMPU_UR_MSK), 1) | OS_HAL_SMPU_RGD_WORD_2_VALUE((OS_HAL_SMPU_SRW_MSK | OS_HAL_SMPU_UR_MSK), 2) | OS_HAL_SMPU_RGD_WORD_2_VALUE((OS_HAL_SMPU_SRW_MSK | OS_HAL_SMPU_UR_MSK), 3)),
    /* .Word3          = */ OS_HAL_SMPU_RGD_WORD_3_VALUE(0, 0xFF)
  },

  {
    /* .MpuBaseAddress = */ OS_HAL_MPU_BASE_ADDRESS,
    /* .RegionIndex    = */ OS_HAL_MP_STACK_REGION_NUMBER,
    /* .Word0          = */ (uint32)0x00000000UL,
    /* .Word1          = */ (uint32)0xFFFFFFFFUL,
    /* .Word2          = */ (OS_HAL_SMPU_RGD_WORD_2_VALUE((OS_HAL_SMPU_UR_MSK | OS_HAL_SMPU_UW_MSK | OS_HAL_SMPU_SRW_MSK), 0)),
    /* .Word3          = */ OS_HAL_SMPU_RGD_WORD_3_VALUE(0, 0xFF)
  }
};

CONST(Os_Hal_MpSystemConfigType, OS_CONST) OsCfg_Hal_Mp_SystemMpu =
{
  /* .MpuRegionCount = */ (uint32)8,
  /* .MpuRegions     = */ OsCfg_Hal_Mp_SystemMpu_Regions
};

/*! HAL memory protection configuration data: EmptyThread */

CONST(Os_Hal_MpThreadConfigType, OS_CONST) OsCfg_Hal_Mp_EmptyThread =
{
  /* .MpuRegionCount = */ (uint32)0,
  /* .MpuRegions     = */ NULL_PTR
}
;

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
 *  END OF FILE: Os_Hal_MemoryProtection_Lcfg.c
 *********************************************************************************************************************/
