/******************************************************************************
*
*   Copyright 2013-2015 Freescale Semiconductor
*   Copyright 2016-2019 NXP
*
*   NXP Confidential. This software is owned or controlled by NXP and may only be used strictly in
*   accordance with the applicable license terms.  By expressly accepting such terms or by
*   downloading, installing, activating and/or otherwise using the software, you are agreeing that
*   you have read, and that you agree to comply with and are bound by, such license terms.  If you
*   do not agree to be bound by the applicable license terms, then you may not retain, install,
*   activate or otherwise use the software.
*
******************************************************************************/
/**
*
* @file       GMCLIB_ParkInv.h
*
* @version    1.0.10.0
*
* @date       17-April-2019
*
* @brief      Header file for GMCLIB_ParkInv function
*
******************************************************************************/
#ifndef GMCLIB_PARKINV_H
#define GMCLIB_PARKINV_H

#ifdef __cplusplus
extern "C" {
#endif

/**
* @page misra_violations MISRA-C:2004 violations
* 
* @section GMCLIB_ParkInv_h_REF_1
* Violates MISRA 2004 Required Rule 19.4, Disallowed definition for macro. 
* To allow the user utilize the benefits of using all three supported implementation of each 
* function in user application, the macro dispatcher inevitably requires use of disallowed macro 
* definition. 
* 
* @section GMCLIB_ParkInv_h_REF_2
* Violates MISRA 2004 Advisory Rule 19.7, Function-like macro defined. 
* To allow the user utilize the benefits of using all three supported implementation of each 
* function in user application, the macro dispatcher inevitably requires the function-like macro 
* definition. 
* 
* @section GMCLIB_ParkInv_h_REF_3
* Violates MISRA 2004 Required Rule 19.10, Unparenthesized macro parameter in definition of macro. 
* To allow the user utilize the benefits of using all three supported implementation of each 
* function in user application, the macro dispatcher inevitably requires use of unparenthesized 
* macro parameters. 
* 
* @section GMCLIB_ParkInv_h_REF_4
* Violates MISRA 2004 Advisory Rule 19.13, #/##' operator used in macro. 
* To allow the user utilize the benefits of using all three supported implementation of each 
* function in user application, the macro dispatcher inevitably requires use of '#/##' operators. 
*/
#include "SWLIBS_Typedefs.h"
#include "SWLIBS_Defines.h"
#include "SWLIBS_MacroDisp.h"
#include "mlib.h"

/****************************************************************************
* Defines and macros            (scope: module-local)
****************************************************************************/
#ifndef  _MATLAB_BAM_CREATE
  /*
  * @violates @ref GMCLIB_ParkInv_h_REF_1 MISRA 2004 Required Rule 19.4, Disallowed definition for 
  * macro. 
  * @violates @ref GMCLIB_ParkInv_h_REF_2 MISRA 2004 Advisory Rule 19.7, Function-like macro 
  * defined. 
  * @violates @ref GMCLIB_ParkInv_h_REF_3 MISRA 2004 Required Rule 19.10, Unparenthesized macro 
  * parameter in definition of macro. 
  */
  #define GMCLIB_ParkInv(...)     macro_dispatcher(GMCLIB_ParkInv, __VA_ARGS__)(__VA_ARGS__)     /* This function implements the inverse Park transformation. */

  #if (SWLIBS_DEFAULT_IMPLEMENTATION == SWLIBS_DEFAULT_IMPLEMENTATION_F32)
    /*
    * @violates @ref GMCLIB_ParkInv_h_REF_1 MISRA 2004 Required Rule 19.4, Disallowed definition for 
    * macro. 
    * @violates @ref GMCLIB_ParkInv_h_REF_2 MISRA 2004 Advisory Rule 19.7, Function-like macro 
    * defined. 
    * @violates @ref GMCLIB_ParkInv_h_REF_3 MISRA 2004 Required Rule 19.10, Unparenthesized macro 
    * parameter in definition of macro. 
    */
    /* @remarks Implements DGMCLIB00035 */
    #define GMCLIB_ParkInv_Dsptchr_3(pOut,pInAngle,pIn)     GMCLIB_ParkInv_Dsptchr_4(pOut,pInAngle,pIn,F32)     /* Function dispatcher for GMCLIB_ParkInv_Dsptchr_3, do not modify!!! */
  #endif 
  #if (SWLIBS_DEFAULT_IMPLEMENTATION == SWLIBS_DEFAULT_IMPLEMENTATION_F16)
    /*
    * @violates @ref GMCLIB_ParkInv_h_REF_1 MISRA 2004 Required Rule 19.4, Disallowed definition for 
    * macro. 
    * @violates @ref GMCLIB_ParkInv_h_REF_2 MISRA 2004 Advisory Rule 19.7, Function-like macro 
    * defined. 
    * @violates @ref GMCLIB_ParkInv_h_REF_3 MISRA 2004 Required Rule 19.10, Unparenthesized macro 
    * parameter in definition of macro. 
    */
    /* @remarks Implements DGMCLIB00035 */
    #define GMCLIB_ParkInv_Dsptchr_3(pOut,pInAngle,pIn)     GMCLIB_ParkInv_Dsptchr_4(pOut,pInAngle,pIn,F16)     /* Function dispatcher for GMCLIB_ParkInv_Dsptchr_3, do not modify!!! */
  #endif 

  /*
  * @violates @ref GMCLIB_ParkInv_h_REF_1 MISRA 2004 Required Rule 19.4, Disallowed definition for 
  * macro. 
  * @violates @ref GMCLIB_ParkInv_h_REF_2 MISRA 2004 Advisory Rule 19.7, Function-like macro 
  * defined. 
  * @violates @ref GMCLIB_ParkInv_h_REF_3 MISRA 2004 Required Rule 19.10, Unparenthesized macro 
  * parameter in definition of macro. 
  */
  #define GMCLIB_ParkInv_Dsptchr_4(pOut,pInAngle,pIn,Impl)    GMCLIB_ParkInv_Dsptchr_(pOut,pInAngle,pIn,Impl)     /* Function dispatcher for GMCLIB_ParkInv_Dsptchr_4, do not modify!!! */
  
  /*
  * @violates @ref GMCLIB_ParkInv_h_REF_1 MISRA 2004 Required Rule 19.4, Disallowed definition for 
  * macro. 
  * @violates @ref GMCLIB_ParkInv_h_REF_2 MISRA 2004 Advisory Rule 19.7, Function-like macro 
  * defined. 
  * @violates @ref GMCLIB_ParkInv_h_REF_3 MISRA 2004 Required Rule 19.10, Unparenthesized macro 
  * parameter in definition of macro. 
  * @violates @ref GMCLIB_ParkInv_h_REF_4 MISRA 2004 Advisory Rule 19.13, #/##' operator used in 
  * macro. 
  */
  /* @remarks Implements DGMCLIB00037 */
  #define GMCLIB_ParkInv_Dsptchr_(pOut,pInAngle,pIn,Impl)     GMCLIB_ParkInv_##Impl(pOut,pInAngle,pIn)            /* Function dispatcher for GMCLIB_ParkInv_Dsptchr_, do not modify!!! */
#endif
 
/****************************************************************************
* Typedefs and structures       (scope: module-local)
****************************************************************************/




/****************************************************************************
* Implementation variant: 32-bit fractional
****************************************************************************/
#if (SWLIBS_SUPPORT_F32 == SWLIBS_STD_ON)

/****************************************************************************
* Exported function prototypes
****************************************************************************/
  extern void GMCLIB_ParkInv_F32(SWLIBS_2Syst_F32 *const pOut, const SWLIBS_2Syst_F32 *const pInAngle, const SWLIBS_2Syst_F32 *const pIn);
#endif /* SWLIBS_SUPPORT_F32 == SWLIBS_STD_ON */




/****************************************************************************
* Implementation variant: 16-bit fractional
****************************************************************************/
#if (SWLIBS_SUPPORT_F16 == SWLIBS_STD_ON)

/****************************************************************************
* Exported function prototypes
****************************************************************************/
  extern void GMCLIB_ParkInv_F16(SWLIBS_2Syst_F16 *const pOut, const SWLIBS_2Syst_F16 *const pInAngle, const SWLIBS_2Syst_F16 *const pIn);
#endif /* SWLIBS_SUPPORT_F16 == SWLIBS_STD_ON */




#ifdef __cplusplus
}
#endif

#endif /* GMCLIB_PARKINV_H */
