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
 *              File: Os_Stack_Cfg.h
 *   Generation Time: 2018-11-27 15:30:02
 *           Project: TsiStandard - Version 1
 *          Delivery: CBD1800257_D01
 *      Tool Version: DaVinci Configurator  5.18.37 SP1
 *
 *
 *********************************************************************************************************************/

#if !defined (OS_STACK_CFG_H)                                                        /* PRQA S 0883 */ /* MD_Os_0883 */
# define OS_STACK_CFG_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
# include "Std_Types.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/*! Defines whether stack monitoring is active (STD_ON) or not (STD_OFF). */
# define OS_CFG_STACKMONITORING                  (STD_ON)

/*! Defines whether stack measurement is active (STD_ON) or not (STD_OFF). */
# define OS_CFG_STACKMEASUREMENT                 (STD_OFF)

/* Configured stack sizes (Total: 20480 Byte) */
# define OS_CFG_SIZE_DEFAULT_APPL_TASK_STACK     (2048uL)
# define OS_CFG_SIZE_DEFAULT_BSW_ASYNC_TASK_STACK     (4096uL)
# define OS_CFG_SIZE_OSCORE0_ERROR_STACK     (1024uL)
# define OS_CFG_SIZE_OSCORE0_INIT_STACK     (2048uL)
# define OS_CFG_SIZE_OSCORE0_ISR_CORE_STACK     (1024uL)
# define OS_CFG_SIZE_OSCORE0_KERNEL_STACK     (1024uL)
# define OS_CFG_SIZE_OSCORE0_PROTECTION_STACK     (1024uL)
# define OS_CFG_SIZE_OSCORE0_TASK_PRIO10_STACK     (1024uL)
# define OS_CFG_SIZE_OSCORE0_TASK_PRIO30_STACK     (1024uL)
# define OS_CFG_SIZE_OSCORE0_TASK_PRIO40_STACK     (1024uL)
# define OS_CFG_SIZE_OSCORE0_TASK_PRIO4294967295_STACK     (1024uL)
# define OS_CFG_SIZE_OSCORE0_TASK_PRIO45_STACK     (1024uL)
# define OS_CFG_SIZE_OSCORE0_TASK_PRIO5_STACK     (1024uL)
# define OS_CFG_SIZE_OSCORE0_TASK_PRIO50_STACK     (2048uL)


/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


#endif /* OS_STACK_CFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Os_Stack_Cfg.h
 *********************************************************************************************************************/
