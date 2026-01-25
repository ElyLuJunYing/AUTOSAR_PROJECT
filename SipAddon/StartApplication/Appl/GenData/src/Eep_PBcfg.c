/**
*   @file    Eep_PBcfg.c
*   @implements Eep_PBcfg.c_Artifact
*   @version 1.0.0
*
*   @brief   AUTOSAR Eep - AUTOSAR Module Eeprom Driver.
*   @details Definitions of all post-build configuration structures.
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

#ifdef __cplusplus
extern "C"{
#endif

/**
* @page misra_violations MISRA-C:2004 violations
*
* @section eep_pbcfg_c_REF_1
* Violates MISRA 2004 Advisory Rule 19.1, Only preprocessor statements and comments before 
* '#include'
* Because of Autosar requirement MEMMAP003 of memory mapping.
* 
* @section eep_pbcfg_c_REF_2
* Violates MISRA 2004 Required Rule 11.1, Conversions involing function pointers must be to/from integral types.
* This violation is due to EEP213.
* 
* @section eep_pbcfg_c_REF_3
* Violates MISRA 2004 Advisory Rule 11.4, Cast from pointer to pointer.
* This violation is due to EEP213.
* 
* @section eep_pbcfg_c_REF_4
* Violates MISRA 2004 Required Rule 8.8, Object/function previously declared.
* The rule 8.8 requires that 'An external object or function shall be declared in one and only one file'.
* This requirement is fulfilled since the function is declared as external in and only in one configuration 
* C file (Eep_Cfg.c or Eep_PBcfg.c). There is no need to put the declaration into Eep_Cfg.h and made it 
* accessible for all modules which includes Eep.h/Eep_Cfg.h.
* 
* @section eep_pbcfg_c_REF_5
* Violates MISRA 2004 Required Rule 8.10, Could be made static.  
* Making EepInitConfiguration_0 static would make it unaccessible to the application.
*
* @section eep_pbcfg_c_REF_6
* Violates MISRA 2004 Required Rule 20.2, Re-use of C90 identifier pattern.
* This is just a matter of a symbol specified in the configuration.
* 
* @section eep_pbcfg_c_REF_7
* Violates MISRA 2004 Required Rule 8.8,
* An external object or function shall be declared in one and only one file.
* Possible MISRA error if the same callback function or variable name is used in multiple configuration variants. 
* Callback function/variable name is set by the driver user so this cannot be fixed by updating the driver code.*
*
* @section eep_pbcfg_c_REF_8
* Violates MISRA 2004 Advisory Rule 11.3, A cast should not be performed between a pointer type and
* an integral type.
* This violation is due to EEP213.
* 
* @section [global]
* Violates MISRA 2004 Required Rule 5.1,
* Identifiers (internal and external) shall not rely on the significance of more than 31 characters. 
* The used compilers use more than 31 chars for identifiers.
*
* @section [global]
* Violates MISRA 2004 Required Rule 1.4, The compiler/linker shall be checked to ensure that
* 31 character significance and case sensitivity are supported for external identifiers
* This violation is due to the requirement that requests to have a file version check.
*
* @section [global]
* Violates MISRA 2004 Required Rule 19.15, Repeated include files, Precautions shall be taken in
* order to prevent the contents of a header file being included twice This is not a violation since
* all header files are protected against multiple inclusions
*
* @section [global]
* Violates MISRA 2004 Required Rule 20.2, The names of standard library macros,
* objects and functions shall not be reused. All defines starting with upper
* letter E are reserved for future use inside <error.h> header file.
* All module define options and enumerations are restricted by smcal coding rules
* 5.6 and 5.8 and must follow format <MSN>_<NAME> where MSN is equal to EEP.
* It was agreed that this violation will not be commented above each line but
* only in header of affected file.
*  
*/

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Eep.h"
#include "Dem.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define EEP_VENDOR_ID_CFG_C                      43
#define EEP_AR_RELEASE_MAJOR_VERSION_CFG_C       4
#define EEP_AR_RELEASE_MINOR_VERSION_CFG_C       2
#define EEP_AR_RELEASE_REVISION_VERSION_CFG_C    2
#define EEP_SW_MAJOR_VERSION_CFG_C               1
#define EEP_SW_MINOR_VERSION_CFG_C               0
#define EEP_SW_PATCH_VERSION_CFG_C               0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and Eep header file are of the same vendor */
#if (EEP_VENDOR_ID_CFG_C != EEP_VENDOR_ID)
    #error "Eep_PBcfg.c and Eep.h have different vendor ids"
#endif
/* Check if current file and Eep header file are of the same Autosar version */
#if ((EEP_AR_RELEASE_MAJOR_VERSION_CFG_C    != EEP_AR_RELEASE_MAJOR_VERSION) || \
     (EEP_AR_RELEASE_MINOR_VERSION_CFG_C    != EEP_AR_RELEASE_MINOR_VERSION) || \
     (EEP_AR_RELEASE_REVISION_VERSION_CFG_C != EEP_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Eep_PBcfg.c and Eep.h are different"
#endif
/* Check if current file and Eep header file are of the same Software version */
#if ((EEP_SW_MAJOR_VERSION_CFG_C != EEP_SW_MAJOR_VERSION) || \
     (EEP_SW_MINOR_VERSION_CFG_C != EEP_SW_MINOR_VERSION) || \
     (EEP_SW_PATCH_VERSION_CFG_C != EEP_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Eep_PBcfg.c and Eep.h are different"
#endif

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
 /* Check if source file and Dem header file are of the same version */
 #if ((EEP_AR_RELEASE_MAJOR_VERSION_CFG_C != DEM_AR_RELEASE_MAJOR_VERSION) || \
      (EEP_AR_RELEASE_MINOR_VERSION_CFG_C != DEM_AR_RELEASE_MINOR_VERSION) \
     )
 #error "AutoSar Version Numbers of Eep_Cfg.c and Dem.h are different"
 #endif
#endif


/*==================================================================================================
                                     FUNCTION PROTOTYPES
==================================================================================================*/
#define EEP_START_SEC_CODE_AC
/* 
* @violates @ref eep_pbcfg_c_REF_1 Only preprocessor statements
* and comments before '#include'
*/
#include "Eep_MemMap.h"

#ifdef _LINARO_C_S32K14x_     
/* @violates @ref eep_pbcfg_c_REF_4 Object/function previously declared */
void Eep_Eeprom_AccessCode(   P2FUNC(void, EEP_CODE, CallBack)( void ),VAR(uint8, AUTOMATIC) u8PageSize ) __attribute__ ((section (".aceep_code_rom")));
#else
/* @violates @ref eep_pbcfg_c_REF_4 Object/function previously declared */
void Eep_Eeprom_AccessCode(   P2FUNC(void, EEP_CODE, CallBack)( void ),VAR(uint8, AUTOMATIC) u8PageSize );
#endif /* #ifdef _LINARO_C_S32K14x_ */

#define EEP_STOP_SEC_CODE_AC
/* 
* @violates @ref eep_pbcfg_c_REF_1 Only preprocessor statements
* and comments before '#include'
*/
#include "Eep_MemMap.h"

/*==================================================================================================
                                           CONSTANTS
==================================================================================================*/



                                        
    
    



#define EEP_START_SEC_CONFIG_DATA_UNSPECIFIED
/* 
* @violates @ref eep_pbcfg_c_REF_1 Only preprocessor statements
* and comments before '#include'
*/
#include "Eep_MemMap.h"
/**
* @brief        Structure used to set function pointers notification, working mode
*/
/* Eep module initialization data (EepInitConfiguration)*/
/* @violates @ref eep_pbcfg_c_REF_5 Could be made static */

CONST(Eep_ConfigType, EEP_CONST) EepInitConfiguration =
{
    /* @violates @ref eep_pbcfg_c_REF_2 Conversions involing function pointers must be to/from integral types */
    /* @violates @ref eep_pbcfg_c_REF_3 Cast from pointer to pointer */
    /* @violates @ref eep_pbcfg_c_REF_8 A cast should not be performed between a pointer type and an integral type.*/
    (Eep_Eeprom_AcErasePtrType)&Eep_Eeprom_AccessCode, /* EepAcWrite */
    /* @violates @ref eep_pbcfg_c_REF_2 Conversions involing function pointers must be to/from integral types */
    /* @violates @ref eep_pbcfg_c_REF_3 Cast from pointer to pointer */
    /* @violates @ref eep_pbcfg_c_REF_8 A cast should not be performed between a pointer type and an integral type.*/
    (Eep_Eeprom_AcWritePtrType)&Eep_Eeprom_AccessCode, /* EepAcWrite */
    NULL_PTR, /* EepACCallback */  
    NULL_PTR, /* EepJobEndNotification */
    NULL_PTR, /* EepJobErrorNotification */  
    NULL_PTR, /* EepStartEepromAccessNotif */
    NULL_PTR, /* EepFinishedEepromAccessNotif */
    MEMIF_MODE_SLOW, /* EepDefaultMode */
    128U, /* EepFastReadBlockSize */
    128U, /* EepNormalReadBlockSize */
    128U, /* EepFastWriteBlockSize */
    128U, /* EepNormalWriteBlockSize */

    /**
     * @brief   DEM error parameters
     */
        {(uint32)STD_OFF, 0U},   /* EEP_E_COMPARE_FAILED parameters */
            {(uint32)STD_OFF, 0U},   /* EEP_E_ERASE_FAILED parameters */
            {(uint32)STD_OFF, 0U},   /* EEP_E_READ_FAILED parameters */
            {(uint32)STD_OFF, 0U},   /* EEP_E_WRITE_FAILED parameters */
            {(uint32)STD_OFF, 0U},   /* EEP_E_BO_MAINTENANCE parameters */
            {(uint32)STD_OFF, 0U},   /* EEP_E_BO_QUICK_WRITES parameters */
            {(uint32)STD_OFF, 0U},   /* EEP_E_BO_NORMAL_WRITES parameters */
                27762U /* configCrc */
};
#define EEP_STOP_SEC_CONFIG_DATA_UNSPECIFIED
/* 
* @violates @ref eep_pbcfg_c_REF_1 Only preprocessor statements
* and comments before '#include'
*/
#include "Eep_MemMap.h"


#ifdef __cplusplus
}
#endif

/** @}*/
