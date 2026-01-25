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
 *          File:  Rte_Cbk.h
 *        Config:  TsiStandard.dpa
 *   ECU-Project:  MyECU
 *
 *     Generator:  MICROSAR RTE Generator Version 4.19.0
 *                 RTE Core Version 1.19.0
 *       License:  CBD1800257
 *
 *   Description:  Callback header file
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CBK_H
# define _RTE_CBK_H

# include "Com.h"


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * COM Callbacks for Rx Indication
 *********************************************************************************************************************/

FUNC(void, RTE_CODE) Rte_COMCbk_Signal_StartAppl_RxCtrl_MyECU_omsg_StartAppl_Rx_MyECU_oCAN_09591065_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_COMCbk_Signal_StartAppl_RxData_MyECU_omsg_StartAppl_Rx_MyECU_oCAN_315f9453_Rx(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 * RTE Schedulable entity for COM-Access from different partitions
 *********************************************************************************************************************/

FUNC(void, RTE_CODE) Rte_ComSendSignalProxyPeriodic(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#endif /* _RTE_CBK_H */
