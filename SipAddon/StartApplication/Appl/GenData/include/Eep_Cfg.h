/**
*   @file    Eep_Cfg.h 
*   @implements Eep_Cfg.h_Artifact
*   @version 1.0.0
*
*   @brief   AUTOSAR Eep - AUTOSAR Module Eeprom Driver.
*   @details Definitions of all pre-compile configuration parameters.
*
*   @addtogroup EEP
*   @{
*/
/*==================================================================================================
*   Project              : AUTOSAR 4.2 MCAL
*   Platform             : ARM
*   Peripheral           : IPV_FTFE
*   Dependencies         : 
*
*   Autosar Version      : 4.2.2
*   Autosar Revision     : ASR_REL_4_2_REV_0002
*   Autosar Conf.Variant :
*   SW Version           : 1.0.0
*   Build Version        : S32K14x_MCAL_1_0_0_RTM_ASR_REL_4_2_REV_0002_20170824
*
*   (c) Copyright 2006-2016 Freescale Semiconductor, Inc. 
*       Copyright 2017 NXP
*   All Rights Reserved.
==================================================================================================*/
/*==================================================================================================
==================================================================================================*/

#ifndef EEP_CFG_H
#define EEP_CFG_H

#ifdef __cplusplus
extern "C"{
#endif

/**
* @page misra_violations MISRA-C:2004 violations
*
* @section Eep_Cfg_H_REF_1
* Violates MISRA 2004 Required Rule 19.15, Repeated include files, Precautions shall be taken in
* order to prevent the contents of a header file being included twice.
* Because of Autosar requirement MEMMAP003 of memory mapping
* 
* @section Eep_Cfg_H_REF_2
* Violates MISRA 2004 Required Rule 8.7, could define variable at block scope.
* The data structure of type Eep_ConfigType shall be defined as external according to EEP352.
* 
* @section Eep_Cfg_H_REF_3
* Violates MISRA 2004 Required Rule 19.4, C macros shall only expand to a storage class specifier.
* This violation due to collecting configuration sets which were defined by user
* 
* @section [global]
* Violates MISRA 2004 Required Rule 5.1,
* Identifiers (internal and external) shall not rely on the significance of more than 31 characters. 
* The used compilers use more than 31 chars for identifiers.
*
* @section [global]
* Violates MISRA 2004 Required Rule 20.2, The names of standard library macros,
* objects and functions shall not be reused. All defines starting with upper
* letter E are reserved for future use inside <error.h> header file.
* All module define options and enumerations are restricted by smcal coding rules
* 5.6 and 5.8 and must follow format <MSN>_<NAME> where MSN is equal to EEP.
* It was agreed that this violation will not be commented above each line but
* only in header of affected file.
*/

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Eep_InternalTypes.h"
#include "Eep_Types.h"
#include "Mcal.h"
#include "Dem.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define EEP_VENDOR_ID_CFG                    43
#define EEP_MODULE_ID_CFG                    90
#define EEP_AR_RELEASE_MAJOR_VERSION_CFG     4
#define EEP_AR_RELEASE_MINOR_VERSION_CFG     2
#define EEP_AR_RELEASE_REVISION_VERSION_CFG  2
#define EEP_SW_MAJOR_VERSION_CFG             1
#define EEP_SW_MINOR_VERSION_CFG             0
#define EEP_SW_PATCH_VERSION_CFG             0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and Eep configuration header file are of the same vendor */
#if (EEP_TYPES_VENDOR_ID != EEP_VENDOR_ID_CFG)
#error "Eep_Types.h and Eep_Cfg.h have different vendor ids"
#endif
/* Check if current file and Eep configuration header file are of the same Autosar version */
#if ((EEP_TYPES_AR_RELEASE_MAJOR_VERSION    != EEP_AR_RELEASE_MAJOR_VERSION_CFG) || \
     (EEP_TYPES_AR_RELEASE_MINOR_VERSION    != EEP_AR_RELEASE_MINOR_VERSION_CFG) || \
     (EEP_TYPES_AR_RELEASE_REVISION_VERSION != EEP_AR_RELEASE_REVISION_VERSION_CFG) \
    )
#error "AutoSar Version Numbers of Eep_Types.h and Eep_Cfg.h are different"
#endif
/* Check if current file and Eep configuration header file are of the same software version */
#if ((EEP_TYPES_SW_MAJOR_VERSION != EEP_SW_MAJOR_VERSION_CFG) || \
     (EEP_TYPES_SW_MINOR_VERSION != EEP_SW_MINOR_VERSION_CFG) || \
     (EEP_TYPES_SW_PATCH_VERSION != EEP_SW_PATCH_VERSION_CFG) \
    )
#error "Software Version Numbers of Eep_Types.h and Eep_Cfg.h are different"
#endif

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Check if current file and Std_Types header file are of the same version */
    #if ((EEP_AR_RELEASE_MAJOR_VERSION_CFG != MCAL_AR_RELEASE_MAJOR_VERSION) || \
         (EEP_AR_RELEASE_MINOR_VERSION_CFG != MCAL_AR_RELEASE_MINOR_VERSION)\
        )
        #error "AutoSar Version Numbers of Eep_Types.h and Mcal.h are different"
    #endif
#endif
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
 /* Check if source file and Dem header file are of the same version */
 #if ((EEP_AR_RELEASE_MAJOR_VERSION_CFG != DEM_AR_RELEASE_MAJOR_VERSION) || \
      (EEP_AR_RELEASE_MINOR_VERSION_CFG != DEM_AR_RELEASE_MINOR_VERSION) \
     )
 #error "AutoSar Version Numbers of Eep_Cfg.h and Dem.h are different"
 #endif
#endif



/*==================================================================================================
                                       DEFINES AND MACROS
==================================================================================================*/

/* STD_ON: Eeprom access code loaded on job start / unloaded on job end or error */
#define EEP_AC_LOAD_ON_JOB_START    (STD_OFF)

/* Compile switch to enable and disable the Eep_Cancel function */
#define EEP_CANCEL_API              (STD_ON)

/* Compile switch to enable and disable the Eep_Compare function */
#define EEP_COMPARE_API             (STD_ON)

/* Pre-processor switch to enable and disable development error detection */
#define EEP_DEV_ERROR_DETECT        (STD_ON)

/* Compile switch to enable and disable the Eep_GetJobResult function */
#define EEP_GET_JOB_RESULT_API      (STD_ON)

/* Compile switch to enable and disable the Eep_GetStatus function */
#define EEP_GET_STATUS_API          (STD_ON)

/* Compile switch to enable and disable the Eep_SetMode function */
#define EEP_SET_MODE_API            (STD_ON)

/* Compile switch to enable and disable the Eep_QuickWrite function */
#define EEP_ENABLE_QUICK_WRITES_API   (STD_OFF)

/* Pre-processor switch to enable / disable the API to use interrupts for erase and write jobs */
#define EEP_USE_INTERRUPTS          (STD_OFF)

/* Pre-processor switch to enable / disable the API to read out the modules version information */
#define EEP_VERSION_INFO_API        (STD_ON)

/* Timeout handling enabled */
#define EEP_TIMEOUT_HANDLING       (STD_OFF)

/* Timeout value for Erase and Write operation */
#define EEP_ASYNC_WRITE_TIMEOUT_VALUE     0U
#define EEP_SYNC_WRITE_TIMEOUT_VALUE      0U

/* Timeout value for Abort operation */
#define EEP_ABT_TIMEOUT_VALUE        0U

/* The contents of an erased eeprom memory cell */
#define EEP_ERASED_VALUE_U32         (0xffUL)
#define EEP_ERASED_VALUE_U8          (0xFFU)

/* The EEP size */
#define EEP_SIZE                    (0x1000UL)
/* Eep Driver Index */
#define EEP_DRIVER_INDEX            0U

/**
* @brief   Switches the Production Error Detection and Notification OFF
*/
#define EEP_DISABLE_DEM_REPORT_ERROR_STATUS        (STD_OFF)


/* page syze of 1 byte */
#define EEP_PAGE_SIZE_1BYTE                      1U
/* page syze of 2 bytes */
#define EEP_PAGE_SIZE_2BYTES                     2U
/* page syze of 4 bytes */
#define EEP_PAGE_SIZE_4BYTES                     4U
/* page syze of 0 bytes */
#define EEP_PAGE_SIZE_0BYTES                     0U
 
/* defines if the write operation will be executed in asynchronuos mode or not*/
#define EEP_ASYNC_OPERATIONS_ENABLED             (STD_OFF) 
/* User mode support */
#define EEP_ENABLE_USER_MODE_SUPPORT            (STD_OFF)


/*==================================================================================================
                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/* Map access routine type according to the timeout handling setting */
/* access routine without timeout parameters */
typedef Eep_Eeprom_AcErasePtrNoTOType Eep_Eeprom_AcErasePtrType;
typedef Eep_Eeprom_AcWritePtrNoTOType Eep_Eeprom_AcWritePtrType;


/**
* @brief          Eep Config Type
* @details        Eep module initialization data structure
*
*/
typedef struct 
{
    /** 
    * @brief pointer to erase access code function in RAM or ROM
    */
    Eep_Eeprom_AcErasePtrType acErasePtr; 
    /** 
    * @brief pointer to write access code function in RAM or ROM 
    */
    Eep_Eeprom_AcWritePtrType acWritePtr; 
    /** 
    * @brief pointer to ac callback function 
    */  
    Eep_ACCallbackPtrType acCallBackPtr;
    /** 
    * @brief pointer to job end notification function 
    */
    Eep_JobEndNotificationPtrType jobEndNotificationPtr; 
    /** 
    * @brief pointer to job error notification function 
    */
    Eep_JobErrorNotificationPtrType jobErrorNotificationPtr; 
    /** 
    * @brief pointer to start eeprom access notification 
    */
    Eep_StartEepromAccessNotifPtrType startEepromAccessNotifPtr; 
    /** 
    * @brief pointer to finished eeprom access notification
    */
    Eep_FinishedEepromAccessNotifPtrType finishedEepromAccessNotifPtr; 
    /** 
    * @brief default EEP device mode after initialization (MEMIF_MODE_FAST, MEMIF_MODE_SLOW) 
    */
    MemIf_ModeType eDefaultMode; 
    /** 
    * @brief max number of bytes to read in one cycle of Eep_MainFunction (fast mode) 
    */
    Eep_LengthType u32MaxReadFastMode; 
    /** 
    * @brief max number of bytes to read in one cycle of  Eep_MainFunction (normal mode) 
    */
    Eep_LengthType u32MaxReadNormalMode; 
    /** 
    * @brief max number of bytes to write in one cycle of Eep_MainFunction (fast mode) 
    */
    Eep_LengthType u32MaxWriteFastMode; 
    /** 
    * @brief max number of bytes to write in one cycle of  Eep_MainFunction (normal mode) 
    */
    Eep_LengthType u32MaxWriteNormalMode; 
    
    /** 
     * @brief EEP Driver DEM Error: EEP_E_COMPARE_FAILED     
     */    
    CONST(Mcal_DemErrorType, EEP_CONST) Eep_E_CompareFailedCfg;
    /** 
     * @brief EEP Driver DEM Error: EEP_E_ERASE_FAILED
     */    
    CONST(Mcal_DemErrorType, EEP_CONST) Eep_E_EraseFailedCfg;
    /** 
     * @brief EEP Driver DEM Error: EEP_E_READ_FAILED
     */    
    CONST(Mcal_DemErrorType, EEP_CONST) Eep_E_ReadFailedCfg;
    /** 
     * @brief EEP Driver DEM Error: EEP_E_WRITE_FAILED
     */    
    CONST(Mcal_DemErrorType, EEP_CONST) Eep_E_WriteFailedCfg;
    /** 
     * @brief EEP Driver DEM Error: EEP_E_BO_MAINTENANCE
     */    
    CONST(Mcal_DemErrorType, EEP_CONST) Eep_E_BOMaintenanceCfg;
    /** 
     * @brief EEP Driver DEM Error: EEP_E_BO_QUICK_WRITES
     */    
    CONST(Mcal_DemErrorType, EEP_CONST) Eep_E_BOQuickWritesCfg;
    /** 
     * @brief EEP Driver DEM Error: EEP_E_BO_NORMAL_WRITES
     */    
    CONST(Mcal_DemErrorType, EEP_CONST) Eep_E_BONormalWritesCfg;
    /** 
     * @brief EEP Config Set CRC checksum     
     */    
    Eep_CrcType u16ConfigCrc;
     
} Eep_ConfigType;

/*==================================================================================================
                                 GLOBAL CONSTANT DECLARATIONS
==================================================================================================*/

#define EEP_START_SEC_CONFIG_DATA_UNSPECIFIED
/**
* @violates @ref Eep_Cfg_H_REF_1 MISRA 2004 Required Rule 19.15, Repeated include file
*/
#include "Eep_MemMap.h"


/* Declaration of post-build configuration set structure */ 
 /* @violates @ref Eep_Cfg_H_REF_2 Could define variable at block scope */
 extern CONST(Eep_ConfigType, EEP_CONST) EepInitConfiguration;


#define EEP_STOP_SEC_CONFIG_DATA_UNSPECIFIED
/**
* @violates @ref Eep_Cfg_H_REF_1 MISRA 2004 Required Rule 19.15, Repeated include file
*/
#include "Eep_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /* EEP_CFG_H */
