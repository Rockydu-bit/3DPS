#ifndef __TIE_CATITreeNodeEventPublisher
#define __TIE_CATITreeNodeEventPublisher

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATITreeNodeEventPublisher.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATITreeNodeEventPublisher */
#define declare_TIE_CATITreeNodeEventPublisher(classe) \
 \
 \
class TIECATITreeNodeEventPublisher##classe : public CATITreeNodeEventPublisher \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATITreeNodeEventPublisher, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT PublishTreeNodeSelectEvent() ; \
      virtual HRESULT PublishTreeNodeCxtMenuEvent() ; \
};



#define ENVTIEdeclare_CATITreeNodeEventPublisher(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT PublishTreeNodeSelectEvent() ; \
virtual HRESULT PublishTreeNodeCxtMenuEvent() ; \


#define ENVTIEdefine_CATITreeNodeEventPublisher(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::PublishTreeNodeSelectEvent()  \
{ \
return (ENVTIECALL(CATITreeNodeEventPublisher,ENVTIETypeLetter,ENVTIELetter)PublishTreeNodeSelectEvent()); \
} \
HRESULT  ENVTIEName::PublishTreeNodeCxtMenuEvent()  \
{ \
return (ENVTIECALL(CATITreeNodeEventPublisher,ENVTIETypeLetter,ENVTIELetter)PublishTreeNodeCxtMenuEvent()); \
} \


/* Name of the TIE class */
#define class_TIE_CATITreeNodeEventPublisher(classe)    TIECATITreeNodeEventPublisher##classe


/* Common methods inside a TIE */
#define common_TIE_CATITreeNodeEventPublisher(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATITreeNodeEventPublisher, classe) \
 \
 \
CATImplementTIEMethods(CATITreeNodeEventPublisher, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATITreeNodeEventPublisher, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATITreeNodeEventPublisher, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATITreeNodeEventPublisher, classe) \
 \
HRESULT  TIECATITreeNodeEventPublisher##classe::PublishTreeNodeSelectEvent()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PublishTreeNodeSelectEvent()); \
} \
HRESULT  TIECATITreeNodeEventPublisher##classe::PublishTreeNodeCxtMenuEvent()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PublishTreeNodeCxtMenuEvent()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATITreeNodeEventPublisher(classe) \
 \
 \
declare_TIE_CATITreeNodeEventPublisher(classe) \
 \
 \
CATMetaClass * __stdcall TIECATITreeNodeEventPublisher##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATITreeNodeEventPublisher,"CATITreeNodeEventPublisher",CATITreeNodeEventPublisher::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATITreeNodeEventPublisher(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATITreeNodeEventPublisher, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATITreeNodeEventPublisher##classe(classe::MetaObject(),CATITreeNodeEventPublisher::MetaObject(),(void *)CreateTIECATITreeNodeEventPublisher##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATITreeNodeEventPublisher(classe) \
 \
 \
declare_TIE_CATITreeNodeEventPublisher(classe) \
 \
 \
CATMetaClass * __stdcall TIECATITreeNodeEventPublisher##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATITreeNodeEventPublisher,"CATITreeNodeEventPublisher",CATITreeNodeEventPublisher::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATITreeNodeEventPublisher(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATITreeNodeEventPublisher, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATITreeNodeEventPublisher##classe(classe::MetaObject(),CATITreeNodeEventPublisher::MetaObject(),(void *)CreateTIECATITreeNodeEventPublisher##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATITreeNodeEventPublisher(classe) TIE_CATITreeNodeEventPublisher(classe)
#else
#define BOA_CATITreeNodeEventPublisher(classe) CATImplementBOA(CATITreeNodeEventPublisher, classe)
#endif

#endif
