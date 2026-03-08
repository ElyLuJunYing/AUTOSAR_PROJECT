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
 *          File:  TSC_Test_SWC.h
 *        Config:  S32K144_Start.dpa
 *   ECU-Project:  MyECU
 *
 *     Generator:  MICROSAR RTE Generator Version 4.19.0
 *                 RTE Core Version 1.19.0
 *       License:  CBD1800257
 *
 *   Description:  Header of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/


/** Sender receiver - explicit read services */
Std_ReturnType TSC_Test_SWC_Rte_Read_Test_SWC_Read_Element(uint8 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_Test_SWC_Rte_Write_Test_SWC_Write_Element(uint8 data);
Std_ReturnType TSC_Test_SWC_Rte_Write_Voltage_Record_Write_St_Signal(const Voltage_Record *data);
Std_ReturnType TSC_Test_SWC_Rte_Write_Voltage_Write_u16_Signal(Voltage_uint16 data);




