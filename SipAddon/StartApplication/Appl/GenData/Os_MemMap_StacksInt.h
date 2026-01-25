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
 *              File: Os_MemMap_StacksInt.h
 *   Generation Time: 2018-11-27 15:30:02
 *           Project: TsiStandard - Version 1
 *          Delivery: CBD1800257_D01
 *      Tool Version: DaVinci Configurator  5.18.37 SP1
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  STACK SECTIONS
 *********************************************************************************************************************/

#ifdef OS_START_SEC_STACK_DEFAULT_APPL_TASK_VAR_NOINIT_UNSPECIFIED /* PRQA S 0883 */ /* MD_Os_0883 */
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_STACK_DEFAULT_APPL_TASK_VAR_NOINIT_UNSPECIFIED_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
# pragma ghs startdata /* PRQA S 3116 */ /* MD_MSR_1.1 */
# pragma ghs section bss = ".OS_STACK_DEFAULT_APPL_TASK_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_1.1 */
# pragma alignvar(32) /* PRQA S 3116 */ /* MD_MSR_1.1 */
# undef OS_START_SEC_STACK_DEFAULT_APPL_TASK_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef OS_STOP_SEC_STACK_DEFAULT_APPL_TASK_VAR_NOINIT_UNSPECIFIED /* PRQA S 0883 */ /* MD_Os_0883 */
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_19.6 */
# ifndef OS_STACK_DEFAULT_APPL_TASK_VAR_NOINIT_UNSPECIFIED_OPEN
#  error Section OS_STACK_DEFAULT_APPL_TASK_VAR_NOINIT_UNSPECIFIED is currently not opened and so cannot be closed.
# endif
# undef OS_STACK_DEFAULT_APPL_TASK_VAR_NOINIT_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_19.6 */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_1.1 */
# pragma ghs enddata /* PRQA S 3116 */ /* MD_MSR_1.1 */
# undef OS_STOP_SEC_STACK_DEFAULT_APPL_TASK_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef OS_START_SEC_STACK_DEFAULT_BSW_ASYNC_TASK_VAR_NOINIT_UNSPECIFIED /* PRQA S 0883 */ /* MD_Os_0883 */
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_STACK_DEFAULT_BSW_ASYNC_TASK_VAR_NOINIT_UNSPECIFIED_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
# pragma ghs startdata /* PRQA S 3116 */ /* MD_MSR_1.1 */
# pragma ghs section bss = ".OS_STACK_DEFAULT_BSW_ASYNC_TASK_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_1.1 */
# pragma alignvar(32) /* PRQA S 3116 */ /* MD_MSR_1.1 */
# undef OS_START_SEC_STACK_DEFAULT_BSW_ASYNC_TASK_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef OS_STOP_SEC_STACK_DEFAULT_BSW_ASYNC_TASK_VAR_NOINIT_UNSPECIFIED /* PRQA S 0883 */ /* MD_Os_0883 */
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_19.6 */
# ifndef OS_STACK_DEFAULT_BSW_ASYNC_TASK_VAR_NOINIT_UNSPECIFIED_OPEN
#  error Section OS_STACK_DEFAULT_BSW_ASYNC_TASK_VAR_NOINIT_UNSPECIFIED is currently not opened and so cannot be closed.
# endif
# undef OS_STACK_DEFAULT_BSW_ASYNC_TASK_VAR_NOINIT_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_19.6 */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_1.1 */
# pragma ghs enddata /* PRQA S 3116 */ /* MD_MSR_1.1 */
# undef OS_STOP_SEC_STACK_DEFAULT_BSW_ASYNC_TASK_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef OS_START_SEC_STACK_OSCORE0_ERROR_VAR_NOINIT_UNSPECIFIED /* PRQA S 0883 */ /* MD_Os_0883 */
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_STACK_OSCORE0_ERROR_VAR_NOINIT_UNSPECIFIED_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
# pragma ghs startdata /* PRQA S 3116 */ /* MD_MSR_1.1 */
# pragma ghs section bss = ".OS_STACK_OSCORE0_ERROR_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_1.1 */
# pragma alignvar(32) /* PRQA S 3116 */ /* MD_MSR_1.1 */
# undef OS_START_SEC_STACK_OSCORE0_ERROR_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef OS_STOP_SEC_STACK_OSCORE0_ERROR_VAR_NOINIT_UNSPECIFIED /* PRQA S 0883 */ /* MD_Os_0883 */
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_19.6 */
# ifndef OS_STACK_OSCORE0_ERROR_VAR_NOINIT_UNSPECIFIED_OPEN
#  error Section OS_STACK_OSCORE0_ERROR_VAR_NOINIT_UNSPECIFIED is currently not opened and so cannot be closed.
# endif
# undef OS_STACK_OSCORE0_ERROR_VAR_NOINIT_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_19.6 */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_1.1 */
# pragma ghs enddata /* PRQA S 3116 */ /* MD_MSR_1.1 */
# undef OS_STOP_SEC_STACK_OSCORE0_ERROR_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef OS_START_SEC_STACK_OSCORE0_INIT_VAR_NOINIT_UNSPECIFIED /* PRQA S 0883 */ /* MD_Os_0883 */
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_STACK_OSCORE0_INIT_VAR_NOINIT_UNSPECIFIED_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
# pragma ghs startdata /* PRQA S 3116 */ /* MD_MSR_1.1 */
# pragma ghs section bss = ".OS_STACK_OSCORE0_INIT_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_1.1 */
# pragma alignvar(32) /* PRQA S 3116 */ /* MD_MSR_1.1 */
# undef OS_START_SEC_STACK_OSCORE0_INIT_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef OS_STOP_SEC_STACK_OSCORE0_INIT_VAR_NOINIT_UNSPECIFIED /* PRQA S 0883 */ /* MD_Os_0883 */
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_19.6 */
# ifndef OS_STACK_OSCORE0_INIT_VAR_NOINIT_UNSPECIFIED_OPEN
#  error Section OS_STACK_OSCORE0_INIT_VAR_NOINIT_UNSPECIFIED is currently not opened and so cannot be closed.
# endif
# undef OS_STACK_OSCORE0_INIT_VAR_NOINIT_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_19.6 */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_1.1 */
# pragma ghs enddata /* PRQA S 3116 */ /* MD_MSR_1.1 */
# undef OS_STOP_SEC_STACK_OSCORE0_INIT_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef OS_START_SEC_STACK_OSCORE0_ISR_CORE_VAR_NOINIT_UNSPECIFIED /* PRQA S 0883 */ /* MD_Os_0883 */
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_STACK_OSCORE0_ISR_CORE_VAR_NOINIT_UNSPECIFIED_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
# pragma ghs startdata /* PRQA S 3116 */ /* MD_MSR_1.1 */
# pragma ghs section bss = ".OS_STACK_OSCORE0_ISR_CORE_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_1.1 */
# pragma alignvar(32) /* PRQA S 3116 */ /* MD_MSR_1.1 */
# undef OS_START_SEC_STACK_OSCORE0_ISR_CORE_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef OS_STOP_SEC_STACK_OSCORE0_ISR_CORE_VAR_NOINIT_UNSPECIFIED /* PRQA S 0883 */ /* MD_Os_0883 */
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_19.6 */
# ifndef OS_STACK_OSCORE0_ISR_CORE_VAR_NOINIT_UNSPECIFIED_OPEN
#  error Section OS_STACK_OSCORE0_ISR_CORE_VAR_NOINIT_UNSPECIFIED is currently not opened and so cannot be closed.
# endif
# undef OS_STACK_OSCORE0_ISR_CORE_VAR_NOINIT_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_19.6 */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_1.1 */
# pragma ghs enddata /* PRQA S 3116 */ /* MD_MSR_1.1 */
# undef OS_STOP_SEC_STACK_OSCORE0_ISR_CORE_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef OS_START_SEC_STACK_OSCORE0_KERNEL_VAR_NOINIT_UNSPECIFIED /* PRQA S 0883 */ /* MD_Os_0883 */
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_STACK_OSCORE0_KERNEL_VAR_NOINIT_UNSPECIFIED_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
# pragma ghs startdata /* PRQA S 3116 */ /* MD_MSR_1.1 */
# pragma ghs section bss = ".OS_STACK_OSCORE0_KERNEL_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_1.1 */
# pragma alignvar(32) /* PRQA S 3116 */ /* MD_MSR_1.1 */
# undef OS_START_SEC_STACK_OSCORE0_KERNEL_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef OS_STOP_SEC_STACK_OSCORE0_KERNEL_VAR_NOINIT_UNSPECIFIED /* PRQA S 0883 */ /* MD_Os_0883 */
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_19.6 */
# ifndef OS_STACK_OSCORE0_KERNEL_VAR_NOINIT_UNSPECIFIED_OPEN
#  error Section OS_STACK_OSCORE0_KERNEL_VAR_NOINIT_UNSPECIFIED is currently not opened and so cannot be closed.
# endif
# undef OS_STACK_OSCORE0_KERNEL_VAR_NOINIT_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_19.6 */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_1.1 */
# pragma ghs enddata /* PRQA S 3116 */ /* MD_MSR_1.1 */
# undef OS_STOP_SEC_STACK_OSCORE0_KERNEL_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef OS_START_SEC_STACK_OSCORE0_PROTECTION_VAR_NOINIT_UNSPECIFIED /* PRQA S 0883 */ /* MD_Os_0883 */
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_STACK_OSCORE0_PROTECTION_VAR_NOINIT_UNSPECIFIED_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
# pragma ghs startdata /* PRQA S 3116 */ /* MD_MSR_1.1 */
# pragma ghs section bss = ".OS_STACK_OSCORE0_PROTECTION_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_1.1 */
# pragma alignvar(32) /* PRQA S 3116 */ /* MD_MSR_1.1 */
# undef OS_START_SEC_STACK_OSCORE0_PROTECTION_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef OS_STOP_SEC_STACK_OSCORE0_PROTECTION_VAR_NOINIT_UNSPECIFIED /* PRQA S 0883 */ /* MD_Os_0883 */
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_19.6 */
# ifndef OS_STACK_OSCORE0_PROTECTION_VAR_NOINIT_UNSPECIFIED_OPEN
#  error Section OS_STACK_OSCORE0_PROTECTION_VAR_NOINIT_UNSPECIFIED is currently not opened and so cannot be closed.
# endif
# undef OS_STACK_OSCORE0_PROTECTION_VAR_NOINIT_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_19.6 */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_1.1 */
# pragma ghs enddata /* PRQA S 3116 */ /* MD_MSR_1.1 */
# undef OS_STOP_SEC_STACK_OSCORE0_PROTECTION_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef OS_START_SEC_STACK_OSCORE0_TASK_PRIO10_VAR_NOINIT_UNSPECIFIED /* PRQA S 0883 */ /* MD_Os_0883 */
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_STACK_OSCORE0_TASK_PRIO10_VAR_NOINIT_UNSPECIFIED_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
# pragma ghs startdata /* PRQA S 3116 */ /* MD_MSR_1.1 */
# pragma ghs section bss = ".OS_STACK_OSCORE0_TASK_PRIO10_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_1.1 */
# pragma alignvar(32) /* PRQA S 3116 */ /* MD_MSR_1.1 */
# undef OS_START_SEC_STACK_OSCORE0_TASK_PRIO10_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef OS_STOP_SEC_STACK_OSCORE0_TASK_PRIO10_VAR_NOINIT_UNSPECIFIED /* PRQA S 0883 */ /* MD_Os_0883 */
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_19.6 */
# ifndef OS_STACK_OSCORE0_TASK_PRIO10_VAR_NOINIT_UNSPECIFIED_OPEN
#  error Section OS_STACK_OSCORE0_TASK_PRIO10_VAR_NOINIT_UNSPECIFIED is currently not opened and so cannot be closed.
# endif
# undef OS_STACK_OSCORE0_TASK_PRIO10_VAR_NOINIT_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_19.6 */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_1.1 */
# pragma ghs enddata /* PRQA S 3116 */ /* MD_MSR_1.1 */
# undef OS_STOP_SEC_STACK_OSCORE0_TASK_PRIO10_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef OS_START_SEC_STACK_OSCORE0_TASK_PRIO30_VAR_NOINIT_UNSPECIFIED /* PRQA S 0883 */ /* MD_Os_0883 */
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_STACK_OSCORE0_TASK_PRIO30_VAR_NOINIT_UNSPECIFIED_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
# pragma ghs startdata /* PRQA S 3116 */ /* MD_MSR_1.1 */
# pragma ghs section bss = ".OS_STACK_OSCORE0_TASK_PRIO30_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_1.1 */
# pragma alignvar(32) /* PRQA S 3116 */ /* MD_MSR_1.1 */
# undef OS_START_SEC_STACK_OSCORE0_TASK_PRIO30_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef OS_STOP_SEC_STACK_OSCORE0_TASK_PRIO30_VAR_NOINIT_UNSPECIFIED /* PRQA S 0883 */ /* MD_Os_0883 */
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_19.6 */
# ifndef OS_STACK_OSCORE0_TASK_PRIO30_VAR_NOINIT_UNSPECIFIED_OPEN
#  error Section OS_STACK_OSCORE0_TASK_PRIO30_VAR_NOINIT_UNSPECIFIED is currently not opened and so cannot be closed.
# endif
# undef OS_STACK_OSCORE0_TASK_PRIO30_VAR_NOINIT_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_19.6 */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_1.1 */
# pragma ghs enddata /* PRQA S 3116 */ /* MD_MSR_1.1 */
# undef OS_STOP_SEC_STACK_OSCORE0_TASK_PRIO30_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef OS_START_SEC_STACK_OSCORE0_TASK_PRIO40_VAR_NOINIT_UNSPECIFIED /* PRQA S 0883 */ /* MD_Os_0883 */
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_STACK_OSCORE0_TASK_PRIO40_VAR_NOINIT_UNSPECIFIED_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
# pragma ghs startdata /* PRQA S 3116 */ /* MD_MSR_1.1 */
# pragma ghs section bss = ".OS_STACK_OSCORE0_TASK_PRIO40_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_1.1 */
# pragma alignvar(32) /* PRQA S 3116 */ /* MD_MSR_1.1 */
# undef OS_START_SEC_STACK_OSCORE0_TASK_PRIO40_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef OS_STOP_SEC_STACK_OSCORE0_TASK_PRIO40_VAR_NOINIT_UNSPECIFIED /* PRQA S 0883 */ /* MD_Os_0883 */
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_19.6 */
# ifndef OS_STACK_OSCORE0_TASK_PRIO40_VAR_NOINIT_UNSPECIFIED_OPEN
#  error Section OS_STACK_OSCORE0_TASK_PRIO40_VAR_NOINIT_UNSPECIFIED is currently not opened and so cannot be closed.
# endif
# undef OS_STACK_OSCORE0_TASK_PRIO40_VAR_NOINIT_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_19.6 */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_1.1 */
# pragma ghs enddata /* PRQA S 3116 */ /* MD_MSR_1.1 */
# undef OS_STOP_SEC_STACK_OSCORE0_TASK_PRIO40_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef OS_START_SEC_STACK_OSCORE0_TASK_PRIO4294967295_VAR_NOINIT_UNSPECIFIED /* PRQA S 0883 */ /* MD_Os_0883 */
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_STACK_OSCORE0_TASK_PRIO4294967295_VAR_NOINIT_UNSPECIFIED_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
# pragma ghs startdata /* PRQA S 3116 */ /* MD_MSR_1.1 */
# pragma ghs section bss = ".OS_STACK_OSCORE0_TASK_PRIO4294967295_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_1.1 */
# pragma alignvar(32) /* PRQA S 3116 */ /* MD_MSR_1.1 */
# undef OS_START_SEC_STACK_OSCORE0_TASK_PRIO4294967295_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef OS_STOP_SEC_STACK_OSCORE0_TASK_PRIO4294967295_VAR_NOINIT_UNSPECIFIED /* PRQA S 0883 */ /* MD_Os_0883 */
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_19.6 */
# ifndef OS_STACK_OSCORE0_TASK_PRIO4294967295_VAR_NOINIT_UNSPECIFIED_OPEN
#  error Section OS_STACK_OSCORE0_TASK_PRIO4294967295_VAR_NOINIT_UNSPECIFIED is currently not opened and so cannot be closed.
# endif
# undef OS_STACK_OSCORE0_TASK_PRIO4294967295_VAR_NOINIT_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_19.6 */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_1.1 */
# pragma ghs enddata /* PRQA S 3116 */ /* MD_MSR_1.1 */
# undef OS_STOP_SEC_STACK_OSCORE0_TASK_PRIO4294967295_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef OS_START_SEC_STACK_OSCORE0_TASK_PRIO45_VAR_NOINIT_UNSPECIFIED /* PRQA S 0883 */ /* MD_Os_0883 */
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_STACK_OSCORE0_TASK_PRIO45_VAR_NOINIT_UNSPECIFIED_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
# pragma ghs startdata /* PRQA S 3116 */ /* MD_MSR_1.1 */
# pragma ghs section bss = ".OS_STACK_OSCORE0_TASK_PRIO45_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_1.1 */
# pragma alignvar(32) /* PRQA S 3116 */ /* MD_MSR_1.1 */
# undef OS_START_SEC_STACK_OSCORE0_TASK_PRIO45_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef OS_STOP_SEC_STACK_OSCORE0_TASK_PRIO45_VAR_NOINIT_UNSPECIFIED /* PRQA S 0883 */ /* MD_Os_0883 */
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_19.6 */
# ifndef OS_STACK_OSCORE0_TASK_PRIO45_VAR_NOINIT_UNSPECIFIED_OPEN
#  error Section OS_STACK_OSCORE0_TASK_PRIO45_VAR_NOINIT_UNSPECIFIED is currently not opened and so cannot be closed.
# endif
# undef OS_STACK_OSCORE0_TASK_PRIO45_VAR_NOINIT_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_19.6 */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_1.1 */
# pragma ghs enddata /* PRQA S 3116 */ /* MD_MSR_1.1 */
# undef OS_STOP_SEC_STACK_OSCORE0_TASK_PRIO45_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef OS_START_SEC_STACK_OSCORE0_TASK_PRIO5_VAR_NOINIT_UNSPECIFIED /* PRQA S 0883 */ /* MD_Os_0883 */
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_STACK_OSCORE0_TASK_PRIO5_VAR_NOINIT_UNSPECIFIED_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
# pragma ghs startdata /* PRQA S 3116 */ /* MD_MSR_1.1 */
# pragma ghs section bss = ".OS_STACK_OSCORE0_TASK_PRIO5_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_1.1 */
# pragma alignvar(32) /* PRQA S 3116 */ /* MD_MSR_1.1 */
# undef OS_START_SEC_STACK_OSCORE0_TASK_PRIO5_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef OS_STOP_SEC_STACK_OSCORE0_TASK_PRIO5_VAR_NOINIT_UNSPECIFIED /* PRQA S 0883 */ /* MD_Os_0883 */
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_19.6 */
# ifndef OS_STACK_OSCORE0_TASK_PRIO5_VAR_NOINIT_UNSPECIFIED_OPEN
#  error Section OS_STACK_OSCORE0_TASK_PRIO5_VAR_NOINIT_UNSPECIFIED is currently not opened and so cannot be closed.
# endif
# undef OS_STACK_OSCORE0_TASK_PRIO5_VAR_NOINIT_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_19.6 */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_1.1 */
# pragma ghs enddata /* PRQA S 3116 */ /* MD_MSR_1.1 */
# undef OS_STOP_SEC_STACK_OSCORE0_TASK_PRIO5_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef OS_START_SEC_STACK_OSCORE0_TASK_PRIO50_VAR_NOINIT_UNSPECIFIED /* PRQA S 0883 */ /* MD_Os_0883 */
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_STACK_OSCORE0_TASK_PRIO50_VAR_NOINIT_UNSPECIFIED_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
# pragma ghs startdata /* PRQA S 3116 */ /* MD_MSR_1.1 */
# pragma ghs section bss = ".OS_STACK_OSCORE0_TASK_PRIO50_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_1.1 */
# pragma alignvar(32) /* PRQA S 3116 */ /* MD_MSR_1.1 */
# undef OS_START_SEC_STACK_OSCORE0_TASK_PRIO50_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

#ifdef OS_STOP_SEC_STACK_OSCORE0_TASK_PRIO50_VAR_NOINIT_UNSPECIFIED /* PRQA S 0883 */ /* MD_Os_0883 */
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_19.6 */
# ifndef OS_STACK_OSCORE0_TASK_PRIO50_VAR_NOINIT_UNSPECIFIED_OPEN
#  error Section OS_STACK_OSCORE0_TASK_PRIO50_VAR_NOINIT_UNSPECIFIED is currently not opened and so cannot be closed.
# endif
# undef OS_STACK_OSCORE0_TASK_PRIO50_VAR_NOINIT_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_19.6 */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_1.1 */
# pragma ghs enddata /* PRQA S 3116 */ /* MD_MSR_1.1 */
# undef OS_STOP_SEC_STACK_OSCORE0_TASK_PRIO50_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif


