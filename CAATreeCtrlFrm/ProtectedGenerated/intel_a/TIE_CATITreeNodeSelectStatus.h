#ifndef __TIE_CATITreeNodeSelectStatus
#define __TIE_CATITreeNodeSelectStatus

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATITreeNodeSelectStatus.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATITreeNodeSelectStatus */
#define declare_TIE_CATITreeNodeSelectStatus(classe) \
 \
 \
class TIECATITreeNodeSelectStatus##classe : public CATITreeNodeSelectStatus \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATITreeNodeSelectStatus, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT SetSelectStatus(int iSelectStatus) ; \
      virtual HRESULT GetSelectStatus(int * poSelectStatus) ; \
};



#define ENVTIEdeclare_CATITreeNodeSelectStatus(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT SetSelectStatus(int iSelectStatus) ; \
virtual HRESULT GetSelectStatus(int * poSelectStatus) ; \


#define ENVTIEdefine_CATITreeNodeSelectStatus(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::SetSelectStatus(int iSelectStatus)  \
{ \
return (ENVTIECALL(CATITreeNodeSelectStatus,ENVTIETypeLetter,ENVTIELetter)SetSelectStatus(iSelectStatus)); \
} \
HRESULT  ENVTIEName::GetSelectStatus(int * poSelectStatus)  \
{ \
return (ENVTIECALL(CATITreeNodeSelectStatus,ENVTIETypeLetter,ENVTIELetter)GetSelectStatus(poSelectStatus)); \
} \


/* Name of the TIE class */
#define class_TIE_CATITreeNodeSelectStatus(classe)    TIECATITreeNodeSelectStatus##classe


/* Common methods inside a TIE */
#define common_TIE_CATITreeNodeSelectStatus(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATITreeNodeSelectStatus, classe) \
 \
 \
CATImplementTIEMethods(CATITreeNodeSelectStatus, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATITreeNodeSelectStatus, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATITreeNodeSelectStatus, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATITreeNodeSelectStatus, classe) \
 \
HRESULT  TIECATITreeNodeSelectStatus##classe::SetSelectStatus(int iSelectStatus)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSelectStatus(iSelectStatus)); \
} \
HRESULT  TIECATITreeNodeSelectStatus##classe::GetSelectStatus(int * poSelectStatus)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSelectStatus(poSelectStatus)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATITreeNodeSelectStatus(classe) \
 \
 \
declare_TIE_CATITreeNodeSelectStatus(classe) \
 \
 \
CATMetaClass * __stdcall TIECATITreeNodeSelectStatus##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATITreeNodeSelectStatus,"CATITreeNodeSelectStatus",CATITreeNodeSelectStatus::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATITreeNodeSelectStatus(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATITreeNodeSelectStatus, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATITreeNodeSelectStatus##classe(classe::MetaObject(),CATITreeNodeSelectStatus::MetaObject(),(void *)CreateTIECATITreeNodeSelectStatus##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATITreeNodeSelectStatus(classe) \
 \
 \
declare_TIE_CATITreeNodeSelectStatus(classe) \
 \
 \
CATMetaClass * __stdcall TIECATITreeNodeSelectStatus##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATITreeNodeSelectStatus,"CATITreeNodeSelectStatus",CATITreeNodeSelectStatus::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATITreeNodeSelectStatus(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATITreeNodeSelectStatus, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATITreeNodeSelectStatus##classe(classe::MetaObject(),CATITreeNodeSelectStatus::MetaObject(),(void *)CreateTIECATITreeNodeSelectStatus##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATITreeNodeSelectStatus(classe) TIE_CATITreeNodeSelectStatus(classe)
#else
#define BOA_CATITreeNodeSelectStatus(classe) CATImplementBOA(CATITreeNodeSelectStatus, classe)
#endif

#endif
