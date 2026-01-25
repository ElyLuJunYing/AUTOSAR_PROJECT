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
 *            Module: Ea
 *           Program: MSR_Vector_SLP4
 *          Customer: Harman International (China) Holdings Co., Ltd.
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: FS32K148UAT0VLQR
 *    License Scope : The usage is restricted to CBD1800257_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Ea_Cfg.c
 *   Generation Time: 2018-11-27 15:30:01
 *           Project: TsiStandard - Version 1
 *          Delivery: CBD1800257_D01
 *      Tool Version: DaVinci Configurator  5.18.37 SP1
 *
 *
 *********************************************************************************************************************/

#define EA_IMPLEMENTATION_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "Ea.h"

/**********************************************************************************************************************
 *  VERSION CHECK
 *********************************************************************************************************************/
 
#if (   (EA_CFG_MAJOR_VERSION != (5u)) \
     || (EA_CFG_MINOR_VERSION != (2u)))
# error "Version numbers of Ea_Cfg.c and Ea_Cfg.h are inconsistent!"
#endif

#if (   (EA_SW_MAJOR_VERSION != (3u)) \
     || (EA_SW_MINOR_VERSION != (2u)))
# error "Version numbers of Ea_Cfg.c and Ea.h are inconsistent!"
#endif

/**********************************************************************************************************************
 *  LOCAL DATA
 *********************************************************************************************************************/

#ifndef EA_LOCAL /* COV_EA_COMPATIBILITY */
# define EA_LOCAL static
#endif

#if !defined (EA_LOCAL_INLINE) /* COV_EA_COMPATIBILITY */
# define EA_LOCAL_INLINE LOCAL_INLINE
#endif

#define EA_START_SEC_CONST_8BIT
#include "MemMap.h"    /* PRQA S 5087 */ /* MD_MSR_19.1 */

CONST(uint8, EA_PRIVATE_CONST) Ea_DatasetSelectionBits = (4u);

#define EA_STOP_SEC_CONST_8BIT
#include "MemMap.h"   /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define EA_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* PRQA S 686 PARTITIONLIST */ /* MD_EA_9.2 */
CONST(Ea_PartitionConfigType, EA_PRIVATE_CONST) Ea_PartitionConfigList[EA_NUMBER_OF_PARTITIONS] = 
{
   /*  EAPARTITIONCONFIGURATION  */ {
     /*  Partition Start Address  */ 0x00000000uL, 
     /*  Partition Address Alignment  */ 0x0001u, 
     /*  Partition Write Alignment  */ 0x0001u, 
     /*  Partition Read Alignment  */ 0x0001u, 
     /*  EEP Device Index  */ 0x0000u, 
     /*  EEP API Reference  */ &Ea_EepApi0, 
     /*  EEP Erase Value  */ 0xFFu, 
    {
       /*  EaBlockConfiguration_AdminDB  */ 0x0010u, 
       /*  EaBlockDescriptor  */ 0x00E0u, 
       /*  EaBlockConfiguration_SA2  */ 0x00D0u, 
       /*  EaBlockConfiguration_SA1  */ 0x00C0u, 
       /*  EaBlockConfiguration_ConfigB  */ 0x00B0u, 
       /*  EaBlockConfiguration_StatusDB  */ 0x00A0u, 
       /*  EaBlockConfiguration7  */ 0x0090u, 
       /*  EaBlockConfiguration6  */ 0x0080u, 
       /*  EaBlockConfiguration5  */ 0x0070u, 
       /*  EaBlockConfiguration4  */ 0x0060u, 
       /*  EaBlockConfiguration3  */ 0x0050u, 
       /*  EaBlockConfiguration2  */ 0x0040u, 
       /*  EaBlockConfiguration1  */ 0x0030u, 
       /*  EaBlockConfiguration0  */ 0x0020u
    }
  }
};
/* PRQA L: PARTITIONLIST */

/* BlockConfigList is sorted by BlockNumbers in ascending order */
CONST(Ea_BlockConfigType, EA_PRIVATE_CONST) Ea_BlockConfigList[EA_NUMBER_OF_BLOCKS] =
{
  {
     /*  Block Start Address  */ 0x00000000uL, 
     /*  Data Length  */ 0x000Cu, 
     /*  Number of Instances  */ 0x01u, 
     /*  Number of Datasets  */ 0x01u, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x000000DFuL, 
     /*  Data Length  */ 0x000Eu, 
     /*  Number of Instances  */ 0x01u, 
     /*  Number of Datasets  */ 0x01u, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x000000CFuL, 
     /*  Data Length  */ 0x000Eu, 
     /*  Number of Instances  */ 0x01u, 
     /*  Number of Datasets  */ 0x01u, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x000000BFuL, 
     /*  Data Length  */ 0x000Eu, 
     /*  Number of Instances  */ 0x01u, 
     /*  Number of Datasets  */ 0x01u, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x000000AFuL, 
     /*  Data Length  */ 0x000Eu, 
     /*  Number of Instances  */ 0x01u, 
     /*  Number of Datasets  */ 0x01u, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x0000009FuL, 
     /*  Data Length  */ 0x000Eu, 
     /*  Number of Instances  */ 0x01u, 
     /*  Number of Datasets  */ 0x01u, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x0000008FuL, 
     /*  Data Length  */ 0x000Eu, 
     /*  Number of Instances  */ 0x01u, 
     /*  Number of Datasets  */ 0x01u, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x0000007FuL, 
     /*  Data Length  */ 0x000Eu, 
     /*  Number of Instances  */ 0x01u, 
     /*  Number of Datasets  */ 0x01u, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x0000006FuL, 
     /*  Data Length  */ 0x000Eu, 
     /*  Number of Instances  */ 0x01u, 
     /*  Number of Datasets  */ 0x01u, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000029uL, 
     /*  Data Length  */ 0x0044u, 
     /*  Number of Instances  */ 0x01u, 
     /*  Number of Datasets  */ 0x01u, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x0000001DuL, 
     /*  Data Length  */ 0x0004u, 
     /*  Number of Instances  */ 0x01u, 
     /*  Number of Datasets  */ 0x02u, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000018uL, 
     /*  Data Length  */ 0x0003u, 
     /*  Number of Instances  */ 0x01u, 
     /*  Number of Datasets  */ 0x01u, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000013uL, 
     /*  Data Length  */ 0x0003u, 
     /*  Number of Instances  */ 0x01u, 
     /*  Number of Datasets  */ 0x01u, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x0000000EuL, 
     /*  Data Length  */ 0x0003u, 
     /*  Number of Instances  */ 0x01u, 
     /*  Number of Datasets  */ 0x01u, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification  */ FALSE
  }
};
#define EA_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h"   /* PRQA S 5087 */ /* MD_MSR_19.1 */
/**********************************************************************************************************************
 *  EEP Function Pointer Tables
 *********************************************************************************************************************/

/**-- EEP Read, Write, Compare and Erase Wrapper Functions --**/ 
#define EA_START_SEC_CODE
#include "MemMap.h"     /* PRQA S 5087 */ /* MD_MSR_19.1 */
EA_LOCAL FUNC (Std_ReturnType, EA_PRIVATE_CODE) Ea_Eep0_ReadWrapper(Ea_AddressType EepAddress, Ea_DataBufferPtrType TargetAddressPtr, uint16 Length); 
EA_LOCAL FUNC (Std_ReturnType, EA_PRIVATE_CODE) Ea_Eep0_WriteWrapper(Ea_AddressType EepAddress, Ea_DataBufferPtrType SourceAddressPtr, uint16 Length); 
EA_LOCAL FUNC (Std_ReturnType, EA_PRIVATE_CODE) Ea_Eep0_CompareWrapper(Ea_AddressType EepAddress, Ea_DataBufferPtrType DataBufferPtr, uint16 Length); 
EA_LOCAL FUNC (Std_ReturnType, EA_PRIVATE_CODE) Ea_Eep0_EraseWrapper(Ea_AddressType EepAddress, uint16 Length); 

 
EA_LOCAL FUNC (Std_ReturnType, EA_PRIVATE_CODE) Ea_Eep0_ReadWrapper(Ea_AddressType EepAddress, Ea_DataBufferPtrType TargetAddressPtr, uint16 Length) /* PRQA S 3673 */ /* MD_EA_16.7 */ 
{
    return Eep_Read((Eep_AddressType) EepAddress, TargetAddressPtr, (Eep_LengthType) Length); /* SBSW_EA_101 */
}
 
EA_LOCAL FUNC (Std_ReturnType, EA_PRIVATE_CODE) Ea_Eep0_WriteWrapper(Ea_AddressType EepAddress, Ea_DataBufferPtrType SourceAddressPtr, uint16 Length) /* PRQA S 3673 */ /* MD_EA_16.7 */ 
{
    return Eep_Write((Eep_AddressType) EepAddress, SourceAddressPtr, (Eep_LengthType) Length); /* SBSW_EA_101 */
}
 
EA_LOCAL FUNC (Std_ReturnType, EA_PRIVATE_CODE) Ea_Eep0_CompareWrapper(Ea_AddressType EepAddress, Ea_DataBufferPtrType DataBufferPtr, uint16 Length) /* PRQA S 3673 */ /* MD_EA_16.7 */ 
{
    return Eep_Compare((Eep_AddressType) EepAddress, DataBufferPtr, (Eep_LengthType) Length); /* SBSW_EA_101 */
}
 
EA_LOCAL FUNC (Std_ReturnType, EA_PRIVATE_CODE) Ea_Eep0_EraseWrapper(Ea_AddressType EepAddress, uint16 Length) /* PRQA S 3673 */ /* MD_EA_16.7 */ 
{
    return Eep_Erase((Eep_AddressType) EepAddress, (Eep_LengthType) Length); /* SBSW_EA_101 */
}
 

#define EA_STOP_SEC_CODE
#include "MemMap.h"     /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**-- EEP Function Pointers --**/
#define EA_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_19.1 */
CONST(Ea_EepApiType, EA_PRIVATE_CONST) Ea_EepApi0 = 
{
   /*  Read Service  */ Ea_Eep0_ReadWrapper, 
   /*  Write Service  */ Ea_Eep0_WriteWrapper, 
   /*  Compare Service  */ Ea_Eep0_CompareWrapper, 
   /*  Erase Service  */ Ea_Eep0_EraseWrapper, 
   /*  Cancel Service  */ Eep_Cancel, 
   /*  Get Status Service  */ Eep_GetStatus, 
   /*  Get Job Result Service  */ Eep_GetJobResult, 
   /*  Set Mode Service  */ Eep_SetMode
}; 
 


/**********************************************************************************************************************
 *  NVM Callback Assignments
 *********************************************************************************************************************/
CONST(Ea_CbkJobEndNotificationType, EA_PRIVATE_CONST) Ea_CbkJobEndNotification =
  NULL_PTR;
CONST(Ea_CbkJobErrorNotificationType, EA_PRIVATE_CONST) Ea_CbkJobErrorNotification =
  NULL_PTR;

#define EA_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h"   /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Justification for module-specific MISRA deviations:
  MD_EA_9.2: rule 9.2
      Reason:     Array size of Ea_PartitionConfigType.BlockNumberList depends on maximum number of blocks in one partition.             
      Risk:       No risk. Partitions with fewer blocks and thus BlockNumberLists with fewer initializers are implicitly 
                  initialized to zero.
      Prevention: Program flow has been verified by component tests and review.
      
  MD_EA_16.7: rule 16.7
      Reason:     Buffer pointer is not declared const in order to support both EEP interfaces with const and non-const buffers.
      Risk:       No risk. By using this wrapper functions without const pointers compiler warnings are solved.
      Prevention: Program flow has been verified by component tests and review.
*/

/* SBSW_JUSTIFICATION_BEGIN
    \ID SBSW_EA_101
      \DESCRIPTION EEP function is called with pointer parameter
      \COUNTERMEASURE \N  Pointer parameter is passed by caller of the function, thus caller has to ensure that pointer is valid.
SBSW_JUSTIFICATION_END */

/**********************************************************************************************************************
 *  END OF FILE: Ea_Cfg.c
 *********************************************************************************************************************/

