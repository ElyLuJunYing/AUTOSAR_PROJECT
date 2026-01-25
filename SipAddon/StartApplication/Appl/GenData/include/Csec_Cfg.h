/**
* @file    Csec_Cfg.h
*
* @version 1.0.0
* @brief   AUTOSAR Csec - CSEC driver configuration.
* @details This is the CSEC driver configuration header.
*
* @addtogroup Csec
* @{
*/
/*=================================================================================================
*   Project              : AUTOSAR 4.2 MCAL
*   Platform             : ARM
*   Peripheral           : Csec
*   Dependencies         : none
*
*   Autosar Version      : 4.2.2
*   Autosar Revision     : ASR_REL_4_2_REV_0002
*   Autosar Conf.Variant :
*   SW Version           : 1.0.0
*   Build Version        : S32K14x_MCAL_1_0_0_RTM_ASR_REL_4_2_REV_0002_20170831
*
*   (c) Copyright 2006-2016 Freescale Semiconductor, Inc. 
*       Copyright 2017 NXP
*   All Rights Reserved.
=================================================================================================*/
/*=================================================================================================
=================================================================================================*/


#ifndef CSEC_CFG_H
#define CSEC_CFG_H

#ifdef __cplusplus
extern "C" {
#endif

/**
* @page misra_violations MISRA-C:2004 violations
*
* @section [global]
*          Violates MISRA 2004 Required Rule 5.1, Identifiers (internal and external) shall not rely 
*          on the significance of more than 31 characters. The used compilers use more than 31 chars 
*          for identifiers.
*
* @section [global]
*          Violates MISRA 2004 Required Rule 1.4, The compiler/linker shall be checked to ensure that 31 
*          character significance and case sensitivity are supported for external
*          identifiers. The used compilers use more than 31 chars for identifiers.
*/

/*=================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
=================================================================================================*/


/*=================================================================================================
*                              SOURCE FILE VERSION INFORMATION
=================================================================================================*/

#define CSEC_VENDOR_ID_CFG                       43
#define CSEC_AR_RELEASE_MAJOR_VERSION_CFG        4
#define CSEC_AR_RELEASE_MINOR_VERSION_CFG        2
#define CSEC_AR_RELEASE_REVISION_VERSION_CFG     2
#define CSEC_SW_MAJOR_VERSION_CFG                1
#define CSEC_SW_MINOR_VERSION_CFG                0
#define CSEC_SW_PATCH_VERSION_CFG                0

/*=================================================================================================
*                               FILE VERSION CHECKS
=================================================================================================*/

/*=================================================================================================
*                                          CONSTANTS
=================================================================================================*/


/*=================================================================================================
*                                      DEFINES AND MACROS
=================================================================================================*/

#define CSEC_TIMEOUT_DURATION                   2147483647

#define CSEC_DEV_ERROR_DETECT                   (STD_OFF)

#define CSEC_VERSION_INFO_API                   (STD_ON)

/* User mode support */
#define CSEC_ENABLE_USER_MODE_SUPPORT           (STD_OFF)

/*=================================================================================================
*                                             ENUMS
=================================================================================================*/


/*=================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
=================================================================================================*/


/*=================================================================================================
                                 GLOBAL VARIABLE DECLARATIONS
=================================================================================================*/


/*=================================================================================================
*                                    FUNCTION PROTOTYPES
=================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif /* CSEC_CFG_H */
