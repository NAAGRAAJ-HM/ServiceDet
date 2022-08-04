#pragma once
/******************************************************************************/
/* File   : ServiceDet.hpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "ConstServiceDet.hpp"
#include "CfgServiceDet.hpp"
#include "ServiceDet_core.hpp"
#include "infServiceDet_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_ServiceDet:
      INTERFACES_EXPORTED_DET
      public abstract_module
   ,  public infServiceDetClient
   ,  public class_ServiceDet_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstServiceDet_Type* lptrConst = (ConstServiceDet_Type*)NULL_PTR;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
   public:
      FUNC(void, DET_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, DET_CONST,       DET_APPL_CONST) lptrConstModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   DET_CONFIG_DATA, DET_APPL_CONST) lptrCfgModule
      );
      FUNC(void, DET_CODE) DeInitFunction (void);
      FUNC(void, DET_CODE) MainFunction   (void);
      DET_CORE_FUNCTIONALITIES

      FUNC(Std_TypeReturn, DET_CODE) ReportError(
            uint16 IdModule
         ,  uint8  IdInstance
         ,  uint8  IdApi
         ,  uint8  IdError
      );
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern VAR(module_ServiceDet, DET_VAR) ServiceDet;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
