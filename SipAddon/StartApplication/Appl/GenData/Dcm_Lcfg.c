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
 *            Module: Dcm
 *           Program: MSR_Vector_SLP4
 *          Customer: Harman International (China) Holdings Co., Ltd.
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: FS32K148UAT0VLQR
 *    License Scope : The usage is restricted to CBD1800257_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Dcm_Lcfg.c
 *   Generation Time: 2018-11-27 15:30:02
 *           Project: TsiStandard - Version 1
 *          Delivery: CBD1800257_D01
 *      Tool Version: DaVinci Configurator  5.18.37 SP1
 *
 *
 *********************************************************************************************************************/



#define DCM_LCFG_SOURCE
/* ----------------------------------------------
 ~&&&   Includes
---------------------------------------------- */
                                                                                                                                                     /* PRQA S 0857, 0828 EOF */ /* MD_MSR_1.1_857, MD_MSR_1.1_828 */
#include "Dcm.h"
#include "Rte_Dcm.h"
#include "Det.h"
#include "Dcm_Int.h"
#include "PduR_Dcm.h"
#include "ComM_Dcm.h"
/* ----------------------------------------------
 ~&&&   Defines
---------------------------------------------- */
#if (DCM_DIDMGR_NVM_READ_ENABLED == STD_ON) || \
    (DCM_DIDMGR_NVM_WRITE_ENABLED == STD_ON)
# if defined(NVM_VENDOR_ID)
#  if (NVM_VENDOR_ID == 30u)
/* Only Vector NvM supports this feature up to now */
#   define Dcm_GetDcmNvMBlockId(blockId)                             (uint16)(NvM_GetDcmBlockId(blockId))                                            /* PRQA S 3453 */ /* QAC 7.0:  A function could probably be used instead of this function-like macro */ /* Macro is more efficient! */
#  endif
# endif

/* Default NvM handle offset */
# if !defined(Dcm_GetDcmNvMBlockId)
#  define Dcm_GetDcmNvMBlockId(blockId)                              (uint16)(blockId)                                                               /* PRQA S 3453 */ /* QAC 7.0:  A function could probably be used instead of this function-like macro */ /* Macro is more efficient! */
# endif
#endif
/* ----------------------------------------------
 ~&&&   Call-back function declarations
---------------------------------------------- */
#define DCM_START_SEC_CALLOUT_CODE
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore */
/***********************************************************************************************************************
 *  Dcm_ServiceNoPostProcessor()
***********************************************************************************************************************/
/*! \brief         Dummy post-processor
 *  \details       This post-processor is called for diagnostic services which do not require any post processing.
 *  \param[in]     status  The post-processing status
 *  \context       TASK
 *  \reentrant     FALSE
 *  \pre           -
***********************************************************************************************************************/
DCM_LOCAL FUNC(void, DCM_CALLOUT_CODE) Dcm_ServiceNoPostProcessor(Dcm_ConfirmationStatusType status);
/***********************************************************************************************************************
 *  Dcm_ServiceNoUpdater()
***********************************************************************************************************************/
/*! \brief         Realizes a dummy paged buffer updater.
 *  \details       This function is never called.
 *  \param[in]     opStatus      The operation status
 *  \param[in,out] pDataContext  Pointer to the data context
 *  \param[out]    ErrorCode     Negative response code
 *  \return        DCM_E_NOT_OK  Operation failed. Take the NRC from ErrorCode. Do not call again
 *  \context       TASK
 *  \reentrant     FALSE
 *  \pre           -
***********************************************************************************************************************/
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_ServiceNoUpdater(Dcm_OpStatusType opStatus, Dcm_DiagDataContextPtrType pDataContext, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_ServiceNoCancel()
***********************************************************************************************************************/
/*! \brief         Dummy service cancellation.
 *  \details       -
 *  \param[in,out] pDataContext  Pointer to the data context
 *  \context       TASK
 *  \reentrant     FALSE
 *  \pre           -
***********************************************************************************************************************/
DCM_LOCAL FUNC(void, DCM_CALLOUT_CODE) Dcm_ServiceNoCancel(Dcm_DiagDataContextPtrType pDataContext);
#define DCM_STOP_SEC_CALLOUT_CODE
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore */
/* ----------------------------------------------
 ~&&&   Uninitialized RAM 8-Bit
---------------------------------------------- */
#define DCM_START_SEC_VAR_NO_INIT_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore */
/*! DCM protocol descriptor */
DCM_LOCAL VAR(Dcm_MsgItemType, DCM_VAR_NOINIT) Dcm_CfgNetBuffer_000[53];
#define DCM_STOP_SEC_VAR_NO_INIT_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore */
/* ----------------------------------------------
 ~&&&   ROM 8-Bit
---------------------------------------------- */
#define DCM_START_SEC_CONST_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore */
/*! TxPduId to DCM connection map */
CONST(Dcm_NetConnRefMemType, DCM_CONST) Dcm_CfgNetTxPduInfo[2]=
{
    0u
  , 0u
};
/*! Map of DCM relevant network handles */
CONST(Dcm_CfgNetNetIdRefMemType, DCM_CONST) Dcm_CfgNetConnComMChannelMap[1]=
{
    0u
};
/*! Service 0x28 list of channels for the all-comm-channel parameter */
CONST(Dcm_CfgNetNetIdRefMemType, DCM_CONST) Dcm_CfgNetComCtrlChannelListAll[2]=
{
   1u
  , 0u
};
/*! Look up table of all supported ALFIDs */
CONST(uint8, DCM_CONST) Dcm_CfgMemMgrAlfidLookUpTable[17]=
{
   16u
  ,0x11u
  ,0x12u
  ,0x13u
  ,0x14u
  ,0x21u
  ,0x22u
  ,0x23u
  ,0x24u
  ,0x31u
  ,0x32u
  ,0x33u
  ,0x34u
  ,0x41u
  ,0x42u
  ,0x43u
  ,0x44u
};
/*! Look up table of DCM service identifiers */
CONST(uint8, DCM_CONST) Dcm_CfgDiagSvcIdLookUpTable[14]=
{
   13u
  ,0x10u
  ,0x11u
  ,0x14u
  ,0x19u
  ,0x22u
  ,0x23u
  ,0x27u
  ,0x28u
  ,0x2Eu
  ,0x31u
  ,0x3Du
  ,0x3Eu
  ,0x85u
};
/*! Service 0x10 look up table  */
CONST(uint8, DCM_CONST) Dcm_CfgSvc10SubFuncLookUpTable[3]=
{
   2u
  ,0x01u
  ,0x03u
};
/*! Service 0x11 look up table  */
CONST(uint8, DCM_CONST) Dcm_CfgSvc11SubFuncLookUpTable[3]=
{
   2u
  ,0x01u
  ,0x03u
};
/*! Service 0x19 look up table  */
CONST(uint8, DCM_CONST) Dcm_CfgSvc19SubFuncLookUpTable[6]=
{
   5u
  ,0x01u
  ,0x02u
  ,0x04u
  ,0x06u
  ,0x0Au
};
/*! Service 0x27 look up table  */
CONST(uint8, DCM_CONST) Dcm_CfgSvc27SubFuncLookUpTable[3]=
{
   2u
  ,0x01u
  ,0x02u
};
/*! Service 0x28 look up table  */
CONST(uint8, DCM_CONST) Dcm_CfgSvc28SubFuncLookUpTable[3]=
{
   2u
  ,0x00u
  ,0x03u
};
/*! Service 0x28 look up table  */
CONST(uint8, DCM_CONST) Dcm_CfgSvc28MessageTypeLookUpTable[4]=
{
   3u
  ,0x01u
  ,0x02u
  ,0x03u
};
/*! Service 0x28 network ID lookup */
CONST(uint8, DCM_CONST) Dcm_CfgSvc28SubNetIdLookUp[3]=
{
   2u
  ,0x00u
  ,0x0Fu
};
/*! Service 0x3E look up table  */
CONST(uint8, DCM_CONST) Dcm_CfgSvc3ESubFuncLookUpTable[2]=
{
   1u
  ,0x00u
};
/*! Look up table of service 0x85 */
CONST(uint8, DCM_CONST) Dcm_CfgSvc85SubFuncLookUpTable[3]=
{
   2u
  ,0x01u
  ,0x02u
};
#define DCM_STOP_SEC_CONST_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore */
/* ----------------------------------------------
 ~&&&   ROM 16-Bit
---------------------------------------------- */
#define DCM_START_SEC_CONST_16
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore */
/*! DID look up table  */
CONST(uint16, DCM_CONST) Dcm_CfgDidMgrDidLookUpTable[86]=
{
   85u
  ,0x0055u
  ,0xD001u
  ,0xD002u
  ,0xD003u
  ,0xD004u
  ,0xD005u
  ,0xE001u
  ,0xE002u
  ,0xE003u
  ,0xE005u
  ,0xE006u
  ,0xE007u
  ,0xE008u
  ,0xE009u
  ,0xE00Au
  ,0xE00Bu
  ,0xE00Cu
  ,0xE00Du
  ,0xE00Eu
  ,0xE00Fu
  ,0xE010u
  ,0xE011u
  ,0xE012u
  ,0xE013u
  ,0xE014u
  ,0xE015u
  ,0xE016u
  ,0xE017u
  ,0xE018u
  ,0xE019u
  ,0xE01Au
  ,0xE01Cu
  ,0xF187u
  ,0xF18Au
  ,0xF18Cu
  ,0xF190u
  ,0xF193u
  ,0xF195u
  ,0xF1A1u
  ,0xF1A2u
  ,0xFD01u
  ,0xFD02u
  ,0xFD04u
  ,0xFD05u
  ,0xFD06u
  ,0xFD07u
  ,0xFD08u
  ,0xFD11u
  ,0xFD12u
  ,0xFD13u
  ,0xFD14u
  ,0xFD18u
  ,0xFD20u
  ,0xFD21u
  ,0xFD30u
  ,0xFD31u
  ,0xFD33u
  ,0xFD34u
  ,0xFD36u
  ,0xFD37u
  ,0xFD38u
  ,0xFD39u
  ,0xFD40u
  ,0xFD41u
  ,0xFD50u
  ,0xFD52u
  ,0xFD60u
  ,0xFD61u
  ,0xFD62u
  ,0xFD63u
  ,0xFD64u
  ,0xFD67u
  ,0xFD6Bu
  ,0xFD6Du
  ,0xFD6Eu
  ,0xFD70u
  ,0xFD71u
  ,0xFD72u
  ,0xFD73u
  ,0xFD80u
  ,0xFD90u
  ,0xFD92u
  ,0xFD93u
  ,0xFDF0u
  ,0xFDF1u
};
/*! RID look up table  */
CONST(uint16, DCM_CONST) Dcm_CfgRidMgrRidLookUpTable[2]=
{
   1u
  ,0xE101u
};
#define DCM_STOP_SEC_CONST_16
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore */
/* ----------------------------------------------
 ~&&&   ROM of unspecified size
---------------------------------------------- */
#define DCM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore */
/*! DCM buffer descriptor */
CONST(Dcm_CfgNetBufferInfoType, DCM_CONST) Dcm_CfgNetBufferInfo[1]=
{
   { Dcm_CfgNetBuffer_000,  53u}
};
/*! RxPduId map */
CONST(Dcm_CfgNetRxPduInfoType, DCM_CONST) Dcm_CfgNetRxPduInfo[2]=
{
   { TRUE, 0u}
  ,{ FALSE, 0u}
};
/*! DCM connection descriptor */
CONST(Dcm_CfgNetConnectionInfoType, DCM_CONST) Dcm_CfgNetConnectionInfo[1]=
{
   { 0x00E0u,PduRConf_PduRSrcPdu_PduRSrcPdu_f3446321, 0u,0u}
};
/*! DCM protocol descriptor */
CONST(Dcm_CfgNetProtocolInfoType, DCM_CONST) Dcm_CfgNetProtocolInfo[1]=
{
   { {    0u,   0u},4095u, 3u,TRUE,0u,DemConf_DemClient_DemClient}
};
/*! Map of all relevant for DCM network handles */
CONST(NetworkHandleType, DCM_CONST) Dcm_CfgNetAllComMChannelMap[1]=
{
   ComMConf_ComMChannel_CN_CAN_fe6ecc87
};
/*! Look up table of DCM relevant network handles */
CONST(NetworkHandleType, DCM_CONST) Dcm_CfgNetNetworkHandleLookUpTable[2]=
{
   1u
  ,ComMConf_ComMChannel_CN_CAN_fe6ecc87
};
/*! Diagnostic service execution conditions */
CONST(Dcm_CfgStatePreconditionInfoType, DCM_CONST) Dcm_CfgStatePreconditions[3]=
{
   { { 0x03u,0x03u}}
  ,{ { 0x02u,0x03u}}
  ,{ { 0x02u,0x02u}}
};
/*! Session state properties */
CONST(Dcm_CfgStateSessionInfoType, DCM_CONST) Dcm_CfgStateSessionInfo[2]=
{
   { {    5u, 500u},RTE_MODE_DcmDiagnosticSessionControl_DEFAULT_SESSION,0x01u}
  ,{ {    5u, 500u},RTE_MODE_DcmDiagnosticSessionControl_EXTENDED_SESSION,0x03u}
};
/*! Security Access state properties */
CONST(Dcm_CfgStateSecurityInfoType, DCM_CONST) Dcm_CfgStateSecurityInfo[1]=
{
   { 1000u, 3u,0x01u} /* SecLvl: UnlockedL1 */
};
/*! DID properties */
CONST(Dcm_CfgDidMgrDidInfoType, DCM_CONST) Dcm_CfgDidMgrDidInfo[85]=
{
   {    2u,   2u,   2u,   0u,0x03u} /* DID: 0x0055 */
  ,{    2u,   2u,   2u,   2u,0x01u} /* DID: 0xD001 */
  ,{    2u,   2u,   2u,   3u,0x01u} /* DID: 0xD002 */
  ,{    1u,   1u,   1u,   4u,0x01u} /* DID: 0xD003 */
  ,{    3u,   3u,   3u,   5u,0x01u} /* DID: 0xD004 */
  ,{    4u,   4u,   4u,   6u,0x01u} /* DID: 0xD005 */
  ,{    1u,   1u,   1u,   7u,0x01u} /* DID: 0xE001 */
  ,{    4u,   4u,   4u,   8u,0x01u} /* DID: 0xE002 */
  ,{    4u,   4u,   4u,   9u,0x01u} /* DID: 0xE003 */
  ,{    1u,   1u,   1u,  10u,0x01u} /* DID: 0xE005 */
  ,{    1u,   1u,   1u,  11u,0x01u} /* DID: 0xE006 */
  ,{    1u,   1u,   1u,  12u,0x01u} /* DID: 0xE007 */
  ,{    1u,   1u,   1u,  13u,0x01u} /* DID: 0xE008 */
  ,{   16u,  16u,  16u,  14u,0x01u} /* DID: 0xE009 */
  ,{    1u,   1u,   1u,  15u,0x01u} /* DID: 0xE00A */
  ,{    1u,   1u,   1u,  16u,0x01u} /* DID: 0xE00B */
  ,{    1u,   1u,   1u,  17u,0x01u} /* DID: 0xE00C */
  ,{    4u,   4u,   4u,  18u,0x01u} /* DID: 0xE00D */
  ,{    4u,   4u,   4u,  19u,0x01u} /* DID: 0xE00E */
  ,{    4u,   4u,   4u,  20u,0x01u} /* DID: 0xE00F */
  ,{    4u,   4u,   4u,  21u,0x01u} /* DID: 0xE010 */
  ,{    1u,   1u,   1u,  22u,0x01u} /* DID: 0xE011 */
  ,{    1u,   1u,   1u,  23u,0x01u} /* DID: 0xE012 */
  ,{    1u,   1u,   1u,  24u,0x01u} /* DID: 0xE013 */
  ,{   16u,  16u,  16u,  25u,0x01u} /* DID: 0xE014 */
  ,{   16u,  16u,  16u,  26u,0x01u} /* DID: 0xE015 */
  ,{   16u,  16u,  16u,  27u,0x01u} /* DID: 0xE016 */
  ,{   16u,  16u,  16u,  28u,0x01u} /* DID: 0xE017 */
  ,{   16u,  16u,  16u,  29u,0x01u} /* DID: 0xE018 */
  ,{   16u,  16u,  16u,  30u,0x01u} /* DID: 0xE019 */
  ,{    1u,   1u,   1u,  31u,0x01u} /* DID: 0xE01A */
  ,{    1u,   1u,   1u,  32u,0x01u} /* DID: 0xE01C */
  ,{   15u,  15u,  15u,  33u,0x01u} /* DID: 0xF187 */
  ,{   10u,  10u,  10u,  34u,0x01u} /* DID: 0xF18A */
  ,{   16u,  16u,  16u,  35u,0x03u} /* DID: 0xF18C */
  ,{   17u,  17u,  17u,  37u,0x03u} /* DID: 0xF190 */
  ,{   16u,  16u,  16u,  39u,0x01u} /* DID: 0xF193 */
  ,{   16u,  16u,  16u,  40u,0x01u} /* DID: 0xF195 */
  ,{   17u,  17u,  17u,  41u,0x03u} /* DID: 0xF1A1 */
  ,{   10u,  10u,  10u,  43u,0x01u} /* DID: 0xF1A2 */
  ,{    1u,   1u,   1u,  44u,0x02u} /* DID: 0xFD01 */
  ,{    1u,   1u,   1u,  45u,0x02u} /* DID: 0xFD02 */
  ,{    0u,  50u,  50u,  46u,0x01u} /* DID: 0xFD04 */
  ,{    1u,   1u,   1u,  47u,0x02u} /* DID: 0xFD05 */
  ,{   28u,  28u,  28u,  48u,0x01u} /* DID: 0xFD06 */
  ,{   28u,  28u,  28u,  49u,0x02u} /* DID: 0xFD07 */
  ,{    0u,  17u,  17u,  50u,0x01u} /* DID: 0xFD08 */
  ,{    1u,   1u,   1u,  51u,0x01u} /* DID: 0xFD11 */
  ,{    1u,   1u,   1u,  52u,0x02u} /* DID: 0xFD12 */
  ,{    2u,   2u,   2u,  53u,0x01u} /* DID: 0xFD13 */
  ,{    2u,   2u,   2u,  54u,0x01u} /* DID: 0xFD14 */
  ,{    2u,   2u,   2u,  55u,0x02u} /* DID: 0xFD18 */
  ,{    1u,   1u,   1u,  56u,0x02u} /* DID: 0xFD20 */
  ,{    1u,   1u,   1u,  57u,0x02u} /* DID: 0xFD21 */
  ,{    1u,   1u,   1u,  58u,0x02u} /* DID: 0xFD30 */
  ,{    1u,   1u,   1u,  59u,0x02u} /* DID: 0xFD31 */
  ,{    1u,   1u,   1u,  60u,0x02u} /* DID: 0xFD33 */
  ,{    1u,   1u,   1u,  61u,0x02u} /* DID: 0xFD34 */
  ,{    2u,   2u,   2u,  62u,0x02u} /* DID: 0xFD36 */
  ,{    1u,   1u,   1u,  63u,0x02u} /* DID: 0xFD37 */
  ,{    1u,   1u,   1u,  64u,0x02u} /* DID: 0xFD38 */
  ,{    1u,   1u,   1u,  65u,0x02u} /* DID: 0xFD39 */
  ,{    1u,   1u,   1u,  66u,0x02u} /* DID: 0xFD40 */
  ,{    1u,   1u,   1u,  67u,0x02u} /* DID: 0xFD41 */
  ,{    3u,   3u,   3u,  68u,0x02u} /* DID: 0xFD50 */
  ,{    2u,   2u,   2u,  69u,0x02u} /* DID: 0xFD52 */
  ,{    0u,   6u,   6u,  70u,0x01u} /* DID: 0xFD60 */
  ,{    7u,   7u,   7u,  71u,0x02u} /* DID: 0xFD61 */
  ,{    2u,   2u,   2u,  72u,0x02u} /* DID: 0xFD62 */
  ,{    7u,   7u,   7u,  73u,0x02u} /* DID: 0xFD63 */
  ,{    1u,   1u,   1u,  74u,0x02u} /* DID: 0xFD64 */
  ,{    1u,   1u,   1u,  75u,0x02u} /* DID: 0xFD67 */
  ,{    1u,   1u,   1u,  76u,0x02u} /* DID: 0xFD6B */
  ,{    1u,   1u,   1u,  77u,0x02u} /* DID: 0xFD6D */
  ,{    5u,   5u,   5u,  78u,0x02u} /* DID: 0xFD6E */
  ,{    1u,   1u,   1u,  79u,0x02u} /* DID: 0xFD70 */
  ,{    1u,   1u,   1u,  80u,0x01u} /* DID: 0xFD71 */
  ,{    3u,   3u,   3u,  81u,0x01u} /* DID: 0xFD72 */
  ,{    1u,   1u,   1u,  82u,0x01u} /* DID: 0xFD73 */
  ,{    1u,   1u,   1u,  83u,0x01u} /* DID: 0xFD80 */
  ,{    2u,   2u,   2u,  84u,0x01u} /* DID: 0xFD90 */
  ,{    2u,   2u,   2u,  85u,0x01u} /* DID: 0xFD92 */
  ,{    2u,   2u,   2u,  86u,0x02u} /* DID: 0xFD93 */
  ,{    0u,   2u,   2u,  87u,0x03u} /* DID: 0xFDF0 */
  ,{    1u,   1u,   1u,  89u,0x02u} /* DID: 0xFDF1 */
};
/*! DID operation properties */
CONST(Dcm_CfgDidMgrDidOpInfoType, DCM_CONST) Dcm_CfgDidMgrDidOpInfo[90]=
{
   {    0u,   0u,0x05u} /* DID: 0x0055 */
  ,{    0u,   2u,0x01u} /* DID: 0x0055 */
  ,{    0u,   3u,0x05u} /* DID: 0xD001 */
  ,{    0u,   5u,0x05u} /* DID: 0xD002 */
  ,{    0u,   7u,0x05u} /* DID: 0xD003 */
  ,{    0u,   9u,0x05u} /* DID: 0xD004 */
  ,{    0u,  11u,0x05u} /* DID: 0xD005 */
  ,{    0u,  13u,0x05u} /* DID: 0xE001 */
  ,{    0u,  15u,0x05u} /* DID: 0xE002 */
  ,{    0u,  17u,0x05u} /* DID: 0xE003 */
  ,{    0u,  19u,0x05u} /* DID: 0xE005 */
  ,{    0u,  21u,0x05u} /* DID: 0xE006 */
  ,{    0u,  23u,0x05u} /* DID: 0xE007 */
  ,{    0u,  25u,0x05u} /* DID: 0xE008 */
  ,{    0u,  27u,0x05u} /* DID: 0xE009 */
  ,{    0u,  29u,0x05u} /* DID: 0xE00A */
  ,{    0u,  31u,0x05u} /* DID: 0xE00B */
  ,{    0u,  33u,0x05u} /* DID: 0xE00C */
  ,{    0u,  35u,0x05u} /* DID: 0xE00D */
  ,{    0u,  37u,0x05u} /* DID: 0xE00E */
  ,{    0u,  39u,0x05u} /* DID: 0xE00F */
  ,{    0u,  41u,0x05u} /* DID: 0xE010 */
  ,{    0u,  43u,0x05u} /* DID: 0xE011 */
  ,{    0u,  45u,0x05u} /* DID: 0xE012 */
  ,{    0u,  47u,0x05u} /* DID: 0xE013 */
  ,{    0u,  49u,0x05u} /* DID: 0xE014 */
  ,{    0u,  51u,0x05u} /* DID: 0xE015 */
  ,{    0u,  53u,0x05u} /* DID: 0xE016 */
  ,{    0u,  55u,0x05u} /* DID: 0xE017 */
  ,{    0u,  57u,0x05u} /* DID: 0xE018 */
  ,{    0u,  59u,0x05u} /* DID: 0xE019 */
  ,{    0u,  61u,0x05u} /* DID: 0xE01A */
  ,{    0u,  63u,0x05u} /* DID: 0xE01C */
  ,{    0u,  65u,0x05u} /* DID: 0xF187 */
  ,{    0u,  67u,0x05u} /* DID: 0xF18A */
  ,{    0u,  69u,0x05u} /* DID: 0xF18C */
  ,{    2u,  71u,0x01u} /* DID: 0xF18C */
  ,{    0u,  72u,0x05u} /* DID: 0xF190 */
  ,{    2u,  74u,0x01u} /* DID: 0xF190 */
  ,{    0u,  75u,0x05u} /* DID: 0xF193 */
  ,{    0u,  77u,0x05u} /* DID: 0xF195 */
  ,{    0u,  79u,0x05u} /* DID: 0xF1A1 */
  ,{    2u,  81u,0x01u} /* DID: 0xF1A1 */
  ,{    0u,  82u,0x05u} /* DID: 0xF1A2 */
  ,{    0u,  84u,0x01u} /* DID: 0xFD01 */
  ,{    0u,  85u,0x01u} /* DID: 0xFD02 */
  ,{    0u,  86u,0x07u} /* DID: 0xFD04 */
  ,{    0u,  89u,0x01u} /* DID: 0xFD05 */
  ,{    0u,  90u,0x05u} /* DID: 0xFD06 */
  ,{    0u,  92u,0x01u} /* DID: 0xFD07 */
  ,{    0u,  93u,0x07u} /* DID: 0xFD08 */
  ,{    0u,  96u,0x05u} /* DID: 0xFD11 */
  ,{    0u,  98u,0x01u} /* DID: 0xFD12 */
  ,{    0u,  99u,0x05u} /* DID: 0xFD13 */
  ,{    0u, 101u,0x05u} /* DID: 0xFD14 */
  ,{    0u, 103u,0x01u} /* DID: 0xFD18 */
  ,{    0u, 104u,0x01u} /* DID: 0xFD20 */
  ,{    0u, 105u,0x01u} /* DID: 0xFD21 */
  ,{    0u, 106u,0x01u} /* DID: 0xFD30 */
  ,{    0u, 107u,0x01u} /* DID: 0xFD31 */
  ,{    0u, 108u,0x01u} /* DID: 0xFD33 */
  ,{    0u, 109u,0x01u} /* DID: 0xFD34 */
  ,{    0u, 110u,0x01u} /* DID: 0xFD36 */
  ,{    0u, 111u,0x01u} /* DID: 0xFD37 */
  ,{    0u, 112u,0x01u} /* DID: 0xFD38 */
  ,{    0u, 113u,0x01u} /* DID: 0xFD39 */
  ,{    0u, 114u,0x01u} /* DID: 0xFD40 */
  ,{    0u, 115u,0x01u} /* DID: 0xFD41 */
  ,{    0u, 116u,0x01u} /* DID: 0xFD50 */
  ,{    0u, 117u,0x01u} /* DID: 0xFD52 */
  ,{    0u, 118u,0x07u} /* DID: 0xFD60 */
  ,{    0u, 121u,0x01u} /* DID: 0xFD61 */
  ,{    0u, 122u,0x01u} /* DID: 0xFD62 */
  ,{    0u, 123u,0x01u} /* DID: 0xFD63 */
  ,{    0u, 124u,0x01u} /* DID: 0xFD64 */
  ,{    0u, 125u,0x01u} /* DID: 0xFD67 */
  ,{    0u, 126u,0x01u} /* DID: 0xFD6B */
  ,{    1u, 127u,0x01u} /* DID: 0xFD6D */
  ,{    0u, 128u,0x01u} /* DID: 0xFD6E */
  ,{    0u, 129u,0x01u} /* DID: 0xFD70 */
  ,{    0u, 130u,0x05u} /* DID: 0xFD71 */
  ,{    0u, 132u,0x05u} /* DID: 0xFD72 */
  ,{    0u, 134u,0x05u} /* DID: 0xFD73 */
  ,{    0u, 136u,0x05u} /* DID: 0xFD80 */
  ,{    0u, 138u,0x05u} /* DID: 0xFD90 */
  ,{    0u, 140u,0x05u} /* DID: 0xFD92 */
  ,{    0u, 142u,0x01u} /* DID: 0xFD93 */
  ,{    0u, 143u,0x07u} /* DID: 0xFDF0 */
  ,{    0u, 146u,0x01u} /* DID: 0xFDF0 */
  ,{    0u, 147u,0x01u} /* DID: 0xFDF1 */
};
/*! DID operation classes */
CONST(Dcm_CfgDidMgrDidOpClassInfoType, DCM_CONST) Dcm_CfgDidMgrDidOpClassInfo[149]=
{
   {  0u}
  ,{  1u}
  ,{  2u}
  ,{  3u}
  ,{  4u}
  ,{  5u}
  ,{  6u}
  ,{  7u}
  ,{  8u}
  ,{  9u}
  ,{ 10u}
  ,{ 11u}
  ,{ 12u}
  ,{ 13u}
  ,{ 14u}
  ,{ 15u}
  ,{ 17u}
  ,{ 19u}
  ,{ 20u}
  ,{ 21u}
  ,{ 22u}
  ,{ 23u}
  ,{ 24u}
  ,{ 25u}
  ,{ 26u}
  ,{ 27u}
  ,{ 28u}
  ,{ 29u}
  ,{ 30u}
  ,{ 31u}
  ,{ 32u}
  ,{ 33u}
  ,{ 34u}
  ,{ 35u}
  ,{ 36u}
  ,{ 37u}
  ,{ 38u}
  ,{ 39u}
  ,{ 40u}
  ,{ 41u}
  ,{ 42u}
  ,{ 43u}
  ,{ 44u}
  ,{ 45u}
  ,{ 46u}
  ,{ 47u}
  ,{ 48u}
  ,{ 49u}
  ,{ 50u}
  ,{ 51u}
  ,{ 52u}
  ,{ 53u}
  ,{ 54u}
  ,{ 55u}
  ,{ 56u}
  ,{ 57u}
  ,{ 58u}
  ,{ 59u}
  ,{ 60u}
  ,{ 61u}
  ,{ 62u}
  ,{ 63u}
  ,{ 64u}
  ,{ 65u}
  ,{ 66u}
  ,{ 67u}
  ,{ 68u}
  ,{ 69u}
  ,{ 70u}
  ,{ 71u}
  ,{ 72u}
  ,{ 73u}
  ,{ 74u}
  ,{ 75u}
  ,{ 76u}
  ,{ 77u}
  ,{ 78u}
  ,{ 79u}
  ,{ 80u}
  ,{ 81u}
  ,{ 82u}
  ,{ 83u}
  ,{ 84u}
  ,{ 85u}
  ,{ 86u}
  ,{ 87u}
  ,{ 88u}
  ,{ 89u}
  ,{ 90u}
  ,{ 91u}
  ,{ 92u}
  ,{ 93u}
  ,{ 94u}
  ,{ 95u}
  ,{ 96u}
  ,{ 97u}
  ,{ 98u}
  ,{ 99u}
  ,{ 100u}
  ,{ 101u}
  ,{ 102u}
  ,{ 103u}
  ,{ 104u}
  ,{ 105u}
  ,{ 107u}
  ,{ 108u}
  ,{ 109u}
  ,{ 110u}
  ,{ 111u}
  ,{ 112u}
  ,{ 113u}
  ,{ 115u}
  ,{ 116u}
  ,{ 117u}
  ,{ 118u}
  ,{ 119u}
  ,{ 120u}
  ,{ 121u}
  ,{ 122u}
  ,{ 123u}
  ,{ 124u}
  ,{ 125u}
  ,{ 132u}
  ,{ 134u}
  ,{ 136u}
  ,{ 137u}
  ,{ 138u}
  ,{ 139u}
  ,{ 140u}
  ,{ 145u}
  ,{ 146u}
  ,{ 147u}
  ,{ 148u}
  ,{ 151u}
  ,{ 154u}
  ,{ 155u}
  ,{ 156u}
  ,{ 157u}
  ,{ 158u}
  ,{ 159u}
  ,{ 160u}
  ,{ 161u}
  ,{ 162u}
  ,{ 164u}
  ,{ 165u}
  ,{ 166u}
  ,{ 167u}
  ,{ 168u}
  ,{ 169u}
};
/*! DID signal operation classes */
CONST(Dcm_CfgDidMgrSignalOpClassInfoType, DCM_CONST) Dcm_CfgDidMgrSignalOpClassInfo[169]=
{
   { ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DID_StartApplication_ReadData)),   2u,   2u,0x0001u} /* DID: 0x0055 */                       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DID_StartApplication_ConditionCheckRead)),   0u,   0u,0x0200u} /* DID: 0x0055 */             /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DID_StartApplication_WriteData)),   2u,   2u,0x1001u} /* DID: 0x0055 */                      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Vehicle_Speed_D001_Vehicle_Speed_ReadData)),   2u,   2u,0x0002u} /* DID: 0xD001 */                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Vehicle_Speed_D001_Vehicle_Speed_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD001 */      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Engine_Speed_D002_Engine_Speed_ReadData)),   2u,   2u,0x0002u} /* DID: 0xD002 */                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Engine_Speed_D002_Engine_Speed_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD002 */        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Operating_Voltage_Value_D003_Operating_Voltage_Value_ReadData)),   1u,   1u,0x0002u} /* DID: 0xD003 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Operating_Voltage_Value_D003_Operating_Voltage_Value_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD003 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Odometer_D004_Odometer_ReadData)),   3u,   3u,0x0002u} /* DID: 0xD004 */                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Odometer_D004_Odometer_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD004 */                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DTC_Occurrence_Timer_D005_Occure_Time_Inforamation_ReadData)),   4u,   4u,0x0002u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DTC_Occurrence_Timer_D005_Occure_Time_Inforamation_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xD005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Number_of_installed_cameras_E001_Number_of_installed_cameras_ReadData)),   1u,   1u,0x0002u} /* DID: 0xE001 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Number_of_installed_cameras_E001_Number_of_installed_cameras_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE001 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Screen_resolution_E002_Width_ReadData)),   2u,   2u,0x0002u} /* DID: 0xE002 */                    /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Screen_resolution_E002_Height_ReadData)),   2u,   2u,0x0002u} /* DID: 0xE002 */                   /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Screen_resolution_E002_Width_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE002 */          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Screen_resolution_E002_Height_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE002 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Present_GPS_coordinates_shift_data_E003_GPS_coordinates_ReadData)),   4u,   4u,0x0002u} /* DID: 0xE003 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Present_GPS_coordinates_shift_data_E003_GPS_coordinates_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE003 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Bluetooth_Current_Discoverability_modes_E005_Bluetooth_Current_Discoverability_modes_ReadData)),   1u,   1u,0x0002u} /* DID: 0xE005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Bluetooth_Current_Discoverability_modes_E005_Bluetooth_Current_Discoverability_modes_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Bluetooth_Status_E006_Bluetooth_Status_ReadData)),   1u,   1u,0x0002u} /* DID: 0xE006 */          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Bluetooth_Status_E006_Bluetooth_Status_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE006 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_BT_Power_Class_E007_BT_Power_Class_ReadData)),   1u,   1u,0x0002u} /* DID: 0xE007 */              /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_BT_Power_Class_E007_BT_Power_Class_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE007 */    /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_BT_active_profile_list_E008_BT_active_profile_list_ReadData)),   1u,   1u,0x0002u} /* DID: 0xE008 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_BT_active_profile_list_E008_BT_active_profile_list_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE008 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_BT_firmware_version_E009_BT_firmware_version_ReadData)),  16u,  16u,0x0002u} /* DID: 0xE009 */    /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_BT_firmware_version_E009_BT_firmware_version_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE009 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Audio_jack_status_E00A_Audio_jack_status_ReadData)),   1u,   1u,0x0002u} /* DID: 0xE00A */        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Audio_jack_status_E00A_Audio_jack_status_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE00A */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Number_of_external_USB_devices_plugged_E00B_Number_of_external_USB_devices_plugged_ReadData)),   1u,   1u,0x0002u} /* DID: 0xE00B */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Number_of_external_USB_devices_plugged_E00B_Number_of_external_USB_devices_plugged_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE00B */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Currently_connected_USB_Type_E00C_Currently_connected_USB_Type_ReadData)),   1u,   1u,0x0002u} /* DID: 0xE00C */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Currently_connected_USB_Type_E00C_Currently_connected_USB_Type_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE00C */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Support_AM_frequency_Min_E00D_Support_AM_frequency_Min_ReadData)),   4u,   4u,0x0002u} /* DID: 0xE00D */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Support_AM_frequency_Min_E00D_Support_AM_frequency_Min_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE00D */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Support_AM_frequency_Max_E00E_Support_AM_frequency_Max_ReadData)),   4u,   4u,0x0002u} /* DID: 0xE00E */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Support_AM_frequency_Max_E00E_Support_AM_frequency_Max_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE00E */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Support_FM_frequency_Min_E00F_Support_FM_frequency_Min_ReadData)),   4u,   4u,0x0002u} /* DID: 0xE00F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Support_FM_frequency_Min_E00F_Support_FM_frequency_Min_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE00F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Support_FM_frequency_Max_E010_Support_FM_frequency_Max_ReadData)),   4u,   4u,0x0002u} /* DID: 0xE010 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Support_FM_frequency_Max_E010_Support_FM_frequency_Max_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE010 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AM_signal_Strength_E011_AM_signal_Strength_ReadData)),   1u,   1u,0x0002u} /* DID: 0xE011 */      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AM_signal_Strength_E011_AM_signal_Strength_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE011 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_FM_signal_Strength_E012_FM_signal_Strength_ReadData)),   1u,   1u,0x0002u} /* DID: 0xE012 */      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_FM_signal_Strength_E012_FM_signal_Strength_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE012 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Wi_Fi_Module_Status_E013_Wi_Fi_Module_Status_ReadData)),   1u,   1u,0x0002u} /* DID: 0xE013 */    /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Wi_Fi_Module_Status_E013_Wi_Fi_Module_Status_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE013 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Wi_Fi_Module_Firmware_Version_E014_Wi_Fi_Module_Firmware_Version_ReadData)),  16u,  16u,0x0002u} /* DID: 0xE014 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Wi_Fi_Module_Firmware_Version_E014_Wi_Fi_Module_Firmware_Version_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE014 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Wi_Fi_Module_Hardware_Part_Number_E015_Wi_Fi_Module_Hardware_Part_Number_ReadData)),  16u,  16u,0x0002u} /* DID: 0xE015 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Wi_Fi_Module_Hardware_Part_Number_E015_Wi_Fi_Module_Hardware_Part_Number_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE015 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Tbox_IP_Address_E016_Tbox_IP_Address_ReadData)),  16u,  16u,0x0002u} /* DID: 0xE016 */            /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Tbox_IP_Address_E016_Tbox_IP_Address_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE016 */  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Tbox_Gateway_sub_mask_E017_Tbox_Gateway_sub_mask_ReadData)),  16u,  16u,0x0002u} /* DID: 0xE017 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Tbox_Gateway_sub_mask_E017_Tbox_Gateway_sub_mask_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE017 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Tbox_Last_connection_lost_time_stamp_E018_Tbox_Last_connection_lost_time_stamp_ReadData)),  16u,  16u,0x0002u} /* DID: 0xE018 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Tbox_Last_connection_lost_time_stamp_E018_Tbox_Last_connection_lost_time_stamp_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE018 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Tbox_geographical_coordinates_when_connection_lost_E019_Tbox_geographical_coordinates_when_connection_lost_ReadData)),  16u,  16u,0x0002u} /* DID: 0xE019 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Tbox_geographical_coordinates_when_connection_lost_E019_Tbox_geographical_coordinates_when_connection_lost_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE019 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Telematics_Module_Status_E01A_Telematics_Module_Status_ReadData)),   1u,   1u,0x0002u} /* DID: 0xE01A */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Telematics_Module_Status_E01A_Telematics_Module_Status_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE01A */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Number_of_installed_speakers_E01C_Number_of_installed_speakers_ReadData)),   1u,   1u,0x0002u} /* DID: 0xE01C */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Number_of_installed_speakers_E01C_Number_of_installed_speakers_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE01C */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Vehicle_Manufacture_Spare_Part_Number_F187_Vehicle_Manufacture_Spare_Part_Number_ReadData)),  15u,  15u,0x0002u} /* DID: 0xF187 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Vehicle_Manufacture_Spare_Part_Number_F187_Vehicle_Manufacture_Spare_Part_Number_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF187 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_System_Supplier_Identifier_F18A_System_Supplier_Identifier_ReadData)),  10u,  10u,0x0002u} /* DID: 0xF18A */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_System_Supplier_Identifier_F18A_System_Supplier_Identifier_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF18A */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_ECU_Serial_Number_F18C_ECU_Serial_Number_ReadData)),  16u,  16u,0x0002u} /* DID: 0xF18C */        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_ECU_Serial_Number_F18C_ECU_Serial_Number_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF18C */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_ECU_Serial_Number_F18C_ECU_Serial_Number_WriteData)),  16u,  16u,0x1002u} /* DID: 0xF18C */       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Vehicle_Identification_Number_F190_VIN_ReadData)),  17u,  17u,0x0002u} /* DID: 0xF190 */          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Vehicle_Identification_Number_F190_VIN_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF190 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Vehicle_Identification_Number_F190_VIN_WriteData)),  17u,  17u,0x1002u} /* DID: 0xF190 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_System_Supplier_ECU_Hardware_Version_Number_F193_Hardware_Version_Number_ReadData)),  16u,  16u,0x0002u} /* DID: 0xF193 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_System_Supplier_ECU_Hardware_Version_Number_F193_Hardware_Version_Number_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF193 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_System_Supplier_ECU_Software_Version_Number_F195_Software_Version_Number_ReadData)),  16u,  16u,0x0002u} /* DID: 0xF195 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_System_Supplier_ECU_Software_Version_Number_F195_Software_Version_Number_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF195 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_VehicleNetworkConfiguration_F1A1_VehicleNetworkConfiguration_ReadData)),  17u,  17u,0x0002u} /* DID: 0xF1A1 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_VehicleNetworkConfiguration_F1A1_VehicleNetworkConfiguration_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF1A1 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_VehicleNetworkConfiguration_F1A1_VehicleNetworkConfiguration_WriteData)),  17u,  17u,0x1002u} /* DID: 0xF1A1 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_C_matrix_Version_of_the_ECU_product_F1A2_C_matrix_Version_ReadData)),  10u,  10u,0x0002u} /* DID: 0xF1A2 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_C_matrix_Version_of_the_ECU_product_F1A2_C_matrix_Version_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF1A2 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Power_Control_FD01_Power_Control_WriteData)),   1u,   1u,0x1002u} /* DID: 0xFD01 */           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Switch_BIOS_Mode_FD02_Switch_BIOS_WriteData)),   1u,   1u,0x1002u} /* DID: 0xFD02 */          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Read_SW_and_HW_Version_FD04_CombinedDataElement_ReadData)),   0u,  50u,0x0002u} /* DID: 0xFD04 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Read_SW_and_HW_Version_FD04_CombinedDataElement_ReadDataLength)),   0u,   0u,0x0102u} /* DID: 0xFD04 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Read_SW_and_HW_Version_FD04_CombinedDataElement_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xFD04 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_INVALID_SHORTNAME_AME_Reset_Factory_Mode_FD05_Reset_Factory_Mode_WriteData)),   1u,   1u,0x1002u} /* DID: 0xFD05 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Read_harman_manufactory_part_number_FD06_Harman_Manufactory_Part_Number_ReadData)),  28u,  28u,0x0002u} /* DID: 0xFD06 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Read_harman_manufactory_part_number_FD06_Harman_Manufactory_Part_Number_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xFD06 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Write_harman_manufactory_part_number_FD07_Harman_Manufactory_Part_Number_WriteData)),  28u,  28u,0x1002u} /* DID: 0xFD07 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Read_AME_diagnostic_version_FD08_CombinedDataElement_ReadData)),   0u,  17u,0x0002u} /* DID: 0xFD08 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Read_AME_diagnostic_version_FD08_CombinedDataElement_ReadDataLength)),   0u,   0u,0x0102u} /* DID: 0xFD08 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Read_AME_diagnostic_version_FD08_CombinedDataElement_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xFD08 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Read_FAN_speed_FD11_FAN_Speed_ReadData)),   1u,   1u,0x0002u} /* DID: 0xFD11 */               /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Read_FAN_speed_FD11_FAN_Speed_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xFD11 */     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Set_FAN_speed_FD12_FAN_Speed_WriteData)),   1u,   1u,0x1002u} /* DID: 0xFD12 */               /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Read_system_temperature_FD13_CombinedDataElement_ReadData)),   2u,   2u,0x0002u} /* DID: 0xFD13 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Read_system_temperature_FD13_CombinedDataElement_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xFD13 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Read_system_voltage_FD14_CombinedDataElement_ReadData)),   2u,   2u,0x0002u} /* DID: 0xFD14 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Read_system_voltage_FD14_CombinedDataElement_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xFD14 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Input_Output_OnOff_control_FD18_OnOffModule_WriteData)),   1u,   1u,0x1002u} /* DID: 0xFD18 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Input_Output_OnOff_control_FD18_OnOffValue_WriteData)),   1u,   1u,0x1002u} /* DID: 0xFD18 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Skip_welcome_confirm_FD20_Reserved_Byte_WriteData)),   1u,   1u,0x1002u} /* DID: 0xFD20 */    /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Set_HMI_Language_FD21_Set_HMI_Language_WriteData)),   1u,   1u,0x1002u} /* DID: 0xFD21 */     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Set_Volume_FD30_Set_Volume_WriteData)),   1u,   1u,0x1002u} /* DID: 0xFD30 */                 /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Set_Mute_Control_FD31_Set_Mute_Control_WriteData)),   1u,   1u,0x1002u} /* DID: 0xFD31 */     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Select_Speaker_Zone_FD33_Select_Speaker_Zone_WriteData)),   1u,   1u,0x1002u} /* DID: 0xFD33 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Select_Speaker_Test_Tone_FD34_Select_tone_WriteData)),   1u,   1u,0x1002u} /* DID: 0xFD34 */      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Route_MIC_To_Internal_Speaker_FD36_Mic_WriteData)),   1u,   1u,0x1002u} /* DID: 0xFD36 */     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Route_MIC_To_Internal_Speaker_FD36_Control_WriteData)),   1u,   1u,0x1002u} /* DID: 0xFD36 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Route_Video_To_HMI_FD37_Route_Vedio_To_HMI_WriteData)),   1u,   1u,0x1002u} /* DID: 0xFD37 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Display_Color_Bar_Control_FD38_Display_Color_Bar_Control_WriteData)),   1u,   1u,0x1002u} /* DID: 0xFD38 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Select_Audio_Buffer_Channel_Output_FD39_SelectAudioBufferChannelOutput_WriteData)),   1u,   1u,0x1002u} /* DID: 0xFD39 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Switch_Source_FD40_SelectAudioBufferChannelOutput_WriteData)),   1u,   1u,0x1002u} /* DID: 0xFD40 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_TrackMedia_Audio_Source_Play_FD41_TrackMedia_AudioSourcePlay_WriteData)),   1u,   1u,0x1002u} /* DID: 0xFD41 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Set_FM_Frequency_FD50_FM_Frequency_WriteData)),   3u,   3u,0x1002u} /* DID: 0xFD50 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Set_AM_Frequency_FD52_AM_Frequency_WriteData)),   2u,   2u,0x1002u} /* DID: 0xFD52 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Read_MAC_Address_FD60_CombinedDataElement_ReadData)),   0u,   6u,0x0002u} /* DID: 0xFD60 */   /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Read_MAC_Address_FD60_CombinedDataElement_ReadDataLength)),   0u,   0u,0x0102u} /* DID: 0xFD60 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Read_MAC_Address_FD60_CombinedDataElement_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xFD60 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Write_MAC_Address_FD61_subID_WriteData)),   1u,   1u,0x1002u} /* DID: 0xFD61 */               /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Write_MAC_Address_FD61_A0_WriteData)),   1u,   1u,0x1002u} /* DID: 0xFD61 */                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Write_MAC_Address_FD61_A1_WriteData)),   1u,   1u,0x1002u} /* DID: 0xFD61 */                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Write_MAC_Address_FD61_A2_WriteData)),   1u,   1u,0x1002u} /* DID: 0xFD61 */                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Write_MAC_Address_FD61_A3_WriteData)),   1u,   1u,0x1002u} /* DID: 0xFD61 */                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Write_MAC_Address_FD61_A4_WriteData)),   1u,   1u,0x1002u} /* DID: 0xFD61 */                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Write_MAC_Address_FD61_A5_WriteData)),   1u,   1u,0x1002u} /* DID: 0xFD61 */                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Connectivy_OnOff_Control_FD62_BT_WiFi_WriteData)),   1u,   1u,0x1002u} /* DID: 0xFD62 */      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Connectivy_OnOff_Control_FD62_ON_OFF_WriteData)),   1u,   1u,0x1002u} /* DID: 0xFD62 */       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_BT_Auto_Pairing_FD63_BT_Chip_WriteData)),   1u,   1u,0x1002u} /* DID: 0xFD63 */               /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_BT_Auto_Pairing_FD63_BT_MAC_Address_WriteData)),   6u,   6u,0x1002u} /* DID: 0xFD63 */        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Play_BT_Audio_Control_FD64_Reserved_Byte_WriteData)),   1u,   1u,0x1002u} /* DID: 0xFD64 */   /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Set_WIFI_Mode_FD67_WiFi_Mode_WriteData)),   1u,   1u,0x1002u} /* DID: 0xFD67 */               /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_BT_Handfree_Loopback_Test_FD6B_Reserved_Byte_WriteData)),   1u,   1u,0x1002u} /* DID: 0xFD6B */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Mirror_Link_connection_FD6D_Mirror_Link_connection_WriteData)),   1u,   1u,0x1002u} /* DID: 0xFD6D */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Ethernet_IP_Ping_Function_FD6E_Ethernet_Channel_WriteData)),   1u,   1u,0x1002u} /* DID: 0xFD6E */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Ethernet_IP_Ping_Function_FD6E_IPAddress_Byte1_WriteData)),   1u,   1u,0x1002u} /* DID: 0xFD6E */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Ethernet_IP_Ping_Function_FD6E_IPAddress_Byte2_WriteData)),   1u,   1u,0x1002u} /* DID: 0xFD6E */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Ethernet_IP_Ping_Function_FD6E_IPAddress_Byte3_WriteData)),   1u,   1u,0x1002u} /* DID: 0xFD6E */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Ethernet_IP_Ping_Function_FD6E_IPAddress_Byte4_WriteData)),   1u,   1u,0x1002u} /* DID: 0xFD6E */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Enter_NAV_Demo_Mode_FD70_Demo_Mode_WriteData)),   1u,   1u,0x1002u} /* DID: 0xFD70 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Read_GYRO_Status_FD71_GYRO_Status_ReadData)),   1u,   1u,0x0002u} /* DID: 0xFD71 */           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Read_GYRO_Status_FD71_GYRO_Status_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xFD71 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Read_GPS_Info_FD72_Number_of_visible_staellite_ReadData)),   1u,   1u,0x0002u} /* DID: 0xFD72 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Read_GPS_Info_FD72_Number_of_fix_ReadData)),   1u,   1u,0x0002u} /* DID: 0xFD72 */            /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Read_GPS_Info_FD72_Number_of_used_satellite_ReadData)),   1u,   1u,0x0002u} /* DID: 0xFD72 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Read_GPS_Info_FD72_Number_of_visible_staellite_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xFD72 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Read_GPS_Info_FD72_Number_of_fix_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xFD72 */  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Read_GPS_Info_FD72_Number_of_used_satellite_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xFD72 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_ReadGPSSNR_FD73_GPSSNR_ReadData)),   1u,   1u,0x0002u} /* DID: 0xFD73 */                      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_ReadGPSSNR_FD73_GPSSNR_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xFD73 */            /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_TBOX_communication_status_check_FD80_TBOX_status_ReadData)),   1u,   1u,0x0002u} /* DID: 0xFD80 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_TBOX_communication_status_check_FD80_TBOX_status_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xFD80 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Read_Head_Unit_Connector_Status_FD90_CombinedDataElement_ReadData)),   2u,   2u,0x0002u} /* DID: 0xFD90 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Read_Head_Unit_Connector_Status_FD90_CombinedDataElement_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xFD90 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Read_Detection_Input_Info_FD92_CombinedDataElement_ReadData)),   2u,   2u,0x0002u} /* DID: 0xFD92 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Read_Detection_Input_Info_FD92_CombinedDataElement_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xFD92 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Set_External_Output_Status_FD93_HW_WriteData)),   1u,   1u,0x1002u} /* DID: 0xFD93 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AME_Set_External_Output_Status_FD93_Status_WriteData)),   1u,   1u,0x1002u} /* DID: 0xFD93 */     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Set_debug_on_off_control_FDF0_CombinedDataElement_ReadData)),   0u,   2u,0x0002u} /* DID: 0xFDF0 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Set_debug_on_off_control_FDF0_CombinedDataElement_ReadDataLength)),   0u,   0u,0x0102u} /* DID: 0xFDF0 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Set_debug_on_off_control_FDF0_CombinedDataElement_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xFDF0 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Set_debug_on_off_control_FDF0_CombinedDataElement_WriteData)),   0u,   2u,0x1004u} /* DID: 0xFDF0 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Switch_HU_boot_mode_FDF1_Boot_Mode_WriteData)),   1u,   1u,0x1002u} /* DID: 0xFDF1 */             /* PRQA S 0313 */ /* MD_Dcm_0313 */
};
/*! RID properties */
CONST(Dcm_CfgRidMgrRidInfoType, DCM_CONST) Dcm_CfgRidMgrRidInfo[1]=
{
   {    0u,   2u,0x07u, 0u} /* RID: 0xE101 */
};
/*! RID operation properties */
CONST(Dcm_CfgRidMgrOpInfoType, DCM_CONST) Dcm_CfgRidMgrOpInfo[3]=
{
   { ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_HUT_self_check_Start)),   0u,   0u,   0u,   0u, 0u} /* RID: 0xE101 */                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_HUT_self_check_Stop)),   0u,   0u,   0u,   0u, 0u} /* RID: 0xE101 */                           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_HUT_self_check_RequestResults)),   0u,   0u,   0u,   0u, 0u} /* RID: 0xE101 */                 /* PRQA S 0313 */ /* MD_Dcm_0313 */
};
/*! Properties of the MIDs */
CONST(Dcm_CfgMemMgrMemIdInfoType, DCM_CONST) Dcm_CfgMemMgrMidInfo[1]=
{
   { Dcm_CfgMemMgrMemMap,   1u}
};
/*! Properties of the memory map of a specific MID */
CONST(Dcm_CfgMemMgrMemMapInfoType, DCM_CONST) Dcm_CfgMemMgrMemMap[1]=
{
   { 0x00000000u,0x00000000u,{    1u,   1u}}
};
/*! DCM service initializers */
CONST(Dcm_DiagSvcInitFuncType, DCM_CONST) Dcm_CfgDiagSvcInitializers[2]=
{
   Dcm_Service27Init
  ,NULL_PTR /* end marker */
};
/*! DCM service properties */
CONST(Dcm_CfgDiagServiceInfoType, DCM_CONST) Dcm_CfgDiagServiceInfo[14]=
{
   { Dcm_Service10Processor,0x01u, 1u,   1u,   2u, 0u, 0u} /* SID: 0x10 */
  ,{ Dcm_Service11Processor,0x01u, 1u,   3u,   4u, 0u, 0u} /* SID: 0x11 */
  ,{ Dcm_Service14Processor,0x00u, 3u,   0u,   0u, 0u, 0u} /* SID: 0x14 */
  ,{ Dcm_Service19Processor,0x01u, 1u,   5u,   0u, 2u, 0u} /* SID: 0x19 */
  ,{ Dcm_Service22Processor,0x00u, 2u,   0u,   0u, 0u, 0u} /* SID: 0x22 */
  ,{ Dcm_Service23Processor,0x00u, 3u,   0u,   0u, 0u, 0u} /* SID: 0x23 */
  ,{ Dcm_Service27Processor,0x03u, 1u,   6u,   0u, 0u, 0u} /* SID: 0x27 */
  ,{ Dcm_Service28Processor,0x01u, 1u,   7u,   0u, 0u, 0u} /* SID: 0x28 */
  ,{ Dcm_Service2EProcessor,0x00u, 3u,   0u,   0u, 0u, 0u} /* SID: 0x2E */
  ,{ Dcm_Service31Processor,0x01u, 3u,   0u,   0u, 0u, 0u} /* SID: 0x31 */
  ,{ Dcm_Service3DProcessor,0x00u, 4u,   0u,   0u, 0u, 0u} /* SID: 0x3D */
  ,{ Dcm_Service3EProcessor,0x01u, 1u,   0u,   0u, 0u, 0u} /* SID: 0x3E */
  ,{ Dcm_Service85Processor,0x01u, 1u,   8u,   0u, 0u, 0u} /* SID: 0x85 */
  ,{ Dcm_RepeaterDeadEnd,0x00u, 0u,   0u,   0u, 0u, 0u} /* Dcm_RepeaterDeadEnd */
};
/*! Indirection from diag service info to execution pre conditions */
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgDiagSvcIdExecPrecondTable[13]=
{
      0u /* SID: 0x10 */
  ,   0u /* SID: 0x11 */
  ,   0u /* SID: 0x14 */
  ,   0u /* SID: 0x19 */
  ,   0u /* SID: 0x22 */
  ,   0u /* SID: 0x23 */
  ,   1u /* SID: 0x27 */
  ,   1u /* SID: 0x28 */
  ,   0u /* SID: 0x2E */
  ,   2u /* SID: 0x31 */
  ,   0u /* SID: 0x3D */
  ,   0u /* SID: 0x3E */
  ,   1u /* SID: 0x85 */
};
/*! DCM service post processors */
CONST(Dcm_DiagSvcConfirmationFuncType, DCM_CONST) Dcm_CfgDiagSvcPostProcessors[9]=
{
   Dcm_ServiceNoPostProcessor
  ,Dcm_Service10PostProcessor
  ,Dcm_Service10FastPostProcessor
  ,Dcm_Service11PostProcessor
  ,Dcm_Service11FastPostProcessor
  ,Dcm_Service19PostProcessor
  ,Dcm_Service27PostProcessor
  ,Dcm_Service28PostProcessor
  ,Dcm_Service85PostProcessor
};
/*! DCM service paged buffer updater */
CONST(Dcm_DiagSvcUpdateFuncType, DCM_CONST) Dcm_CfgDiagSvcUpdaters[3]=
{
   Dcm_ServiceNoUpdater
  ,Dcm_PagedBufferDataPadding
  ,Dcm_Service19Updater
};
/*! DCM service paged buffer canceller */
CONST(Dcm_DiagSvcCancelFuncType, DCM_CONST) Dcm_CfgDiagSvcCancellers[1]=
{
   Dcm_ServiceNoCancel
};
/*! Service 0x10 sub-service properties table  */
CONST(Dcm_CfgSvc10SubFuncInfoType, DCM_CONST) Dcm_CfgSvc10SubFuncInfo[2]=
{
   { { 50u, 500u}} /* Session ID: 0x01 */
  ,{ { 50u, 500u}} /* Session ID: 0x03 */
};
/*! Indirection from service 0x10 sub functions to execution pre conditions */
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc10SubFuncExecPrecondTable[2]=
{
      0u /* Session ID: 0x01 */
  ,   0u /* Session ID: 0x03 */
};
/*! Service 0x11 sub-service properties table  */
CONST(Dcm_CfgSvc11SubFuncInfoType, DCM_CONST) Dcm_CfgSvc11SubFuncInfo[2]=
{
   { Dcm_Service11_01Processor} /* SF: 0x01 */
  ,{ Dcm_Service11_03Processor} /* SF: 0x03 */
};
/*! Indirection from service 0x11 sub functions to execution pre conditions */
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc11SubFuncExecPrecondTable[2]=
{
      0u /* SF: 0x01 */
  ,   0u /* SF: 0x03 */
};
/*! Service 0x19 sub-service properties table  */
CONST(Dcm_CfgSvc19SubFuncInfoType, DCM_CONST) Dcm_CfgSvc19SubFuncInfo[5]=
{
   { Dcm_Service19_01Processor, 2u} /* SF: 0x01 */
  ,{ Dcm_Service19_02Processor, 2u} /* SF: 0x02 */
  ,{ Dcm_Service19_04Processor, 5u} /* SF: 0x04 */
  ,{ Dcm_Service19_06Processor, 5u} /* SF: 0x06 */
  ,{ Dcm_Service19_0AProcessor, 1u} /* SF: 0x0A */
};
/*! Indirection from service 0x19 sub functions to execution pre conditions */
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc19SubFuncExecPrecondTable[5]=
{
      0u /* SF: 0x01 */
  ,   0u /* SF: 0x02 */
  ,   0u /* SF: 0x04 */
  ,   0u /* SF: 0x06 */
  ,   0u /* SF: 0x0A */
};
/*! Service 0x27 sub-service properties table  */
CONST(Dcm_CfgSvc27SubFuncInfoType, DCM_CONST) Dcm_CfgSvc27SubFuncInfo[2]=
{
   { Dcm_Service27SeedProcessor,   1u} /* SF: 0x01 */                                                                                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ Dcm_Service27KeyProcessor,   5u} /* SF: 0x02 */                                                                                                 /* PRQA S 0313 */ /* MD_Dcm_0313 */
};
/*! Service 0x27 security level properties table  */
CONST(Dcm_CfgSvc27SecLevelInfoType, DCM_CONST) Dcm_CfgSvc27SecLevelInfo[1]=
{
   { ((Dcm_Svc27GetSeedFuncType)(Rte_Call_SecurityAccess_UnlockedL1_GetSeed)),Rte_Call_SecurityAccess_UnlockedL1_CompareKey,   4u, 0u} /* SecLvl: UnlockedL1 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
};
/*! Indirection from service 0x27 sub functions to execution pre conditions */
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc27SubFuncExecPrecondTable[2]=
{
      1u /* SF: 0x01 */
  ,   1u /* SF: 0x02 */
};
/*! Service 0x28 sub-service properties table  */
CONST(Dcm_CfgSvc28SubFuncInfoType, DCM_CONST) Dcm_CfgSvc28SubFuncInfo[2]=
{
   { Dcm_Service28_XXProcessor, 2u} /* SF: 0x00 */
  ,{ Dcm_Service28_XXProcessor, 2u} /* SF: 0x03 */
};
/*! Indirection from service 0x28 sub functions to execution pre conditions */
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc28SubFuncExecPrecondTable[2]=
{
      1u /* SF: 0x00 */
  ,   1u /* SF: 0x03 */
};
/*! Service 0x28 network ID to ComM channel map */
CONST(NetworkHandleType, DCM_CONST) Dcm_CfgSvc28SubNetIdMap[2]=
{
   DCM_SVC_28_NETWORK_ALL
  ,DCM_SVC_28_NETWORK_CURRENT
};
/*! Indirection from service 0x3E sub functions to execution pre conditions */
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc3ESubFuncExecPrecondTable[1]=
{
      0u /* SF: 0x00 */
};
/*! Indirection from service 0x85 sub functions to execution pre conditions */
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc85SubFuncExecPrecondTable[2]=
{
      1u /* SF: 0x01 */
  ,   1u /* SF: 0x02 */
};
/*! DCM service 0x85 properties */
CONST(Dcm_CfgSvc85SubFuncInfoType, DCM_CONST) Dcm_CfgSvc85SubFuncInfo[2]=
{
   { Dem_EnableDTCSetting,RTE_MODE_DcmControlDtcSetting_ENABLEDTCSETTING} /* SF: 0x01 */
  ,{ Dem_DisableDTCSetting,RTE_MODE_DcmControlDtcSetting_DISABLEDTCSETTING} /* SF: 0x02 */
};
#define DCM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore */
/* ----------------------------------------------
 ~&&&   Module call-out implementations
---------------------------------------------- */
#define DCM_START_SEC_CALLOUT_CODE
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore */
/***********************************************************************************************************************
 *  Dcm_ServiceNoPostProcessor()
***********************************************************************************************************************/
/* Implements CDD Dcm_ServiceNoPostProcessor() */
DCM_LOCAL FUNC(void, DCM_CALLOUT_CODE) Dcm_ServiceNoPostProcessor(Dcm_ConfirmationStatusType status)
{
  DCM_IGNORE_UNREF_PARAM(status);                                                                                                                    /* PRQA S 3112 */ /* MD_Dcm_3112 */
}
/***********************************************************************************************************************
 *  Dcm_ServiceNoUpdater()
***********************************************************************************************************************/
/* Implements CDD Dcm_ServiceNoUpdater() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_ServiceNoUpdater(Dcm_OpStatusType opStatus, Dcm_DiagDataContextPtrType pDataContext, Dcm_NegativeResponseCodePtrType ErrorCode) /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  DCM_IGNORE_UNREF_PARAM(opStatus);                                                                                                                  /* PRQA S 3112 */ /* MD_Dcm_3112 */
  DCM_IGNORE_UNREF_PARAM(pDataContext);                                                                                                              /* PRQA S 3112 */ /* MD_Dcm_3112 */
  DCM_IGNORE_UNREF_PARAM(ErrorCode);                                                                                                                 /* PRQA S 3112 */ /* MD_Dcm_3112 */
  return E_NOT_OK;
}
/***********************************************************************************************************************
 *  Dcm_ServiceNoCancel()
***********************************************************************************************************************/
/* Implements CDD Dcm_ServiceNoCancel() */
DCM_LOCAL FUNC(void, DCM_CALLOUT_CODE) Dcm_ServiceNoCancel(Dcm_DiagDataContextPtrType pDataContext)                                                  /* PRQA S 3673 */ /* MD_Dcm_Design_3673 */
{
  DCM_IGNORE_UNREF_PARAM(pDataContext);                                                                                                              /* PRQA S 3112 */ /* MD_Dcm_3112 */
  /* nothing to do */
}
#define DCM_STOP_SEC_CALLOUT_CODE
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore */
/* ********************************************************************************************************************
 * END OF FILE: Dcm_Lcfg.c
 * ******************************************************************************************************************** */

