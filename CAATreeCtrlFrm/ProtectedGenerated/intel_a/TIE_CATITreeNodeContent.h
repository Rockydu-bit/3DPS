#ifndef __TIE_CATITreeNodeContent
#define __TIE_CATITreeNodeContent

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATITreeNodeContent.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATITreeNodeContent */
#define declare_TIE_CATITreeNodeContent(classe) \
 \
 \
class TIECATITreeNodeContent##classe : public CATITreeNodeContent \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATITreeNodeContent, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT SetNodeContent(int iContent) ; \
      virtual HRESULT GetNodeContent(int oContent) ; \
      virtual HRESULT SetName(const CATUnicodeString & iName) ; \
      virtual HRESULT GetName(CATUnicodeString & oName) ; \
      virtual HRESULT SetIconName(const CATUnicodeString & iIconName) ; \
      virtual HRESULT GetIconName(CATUnicodeString & oIconName) ; \
      virtual HRESULT GetFatherNode(CATBaseUnknown ** oFatherNode) ; \
      virtual HRESULT SetFatherNode(CATBaseUnknown * iFatherNode) ; \
      virtual HRESULT GetNumberOfSubTreeNodeObj(int * oCount) ; \
      virtual HRESULT GetSubTreeNodeObj(int iRank,CATBaseUnknown ** oObject) ; \
      virtual HRESULT Locate(CATBaseUnknown * iSubTreeNode, int * oRank) ; \
      virtual HRESULT AddSubTreeNodeObj(CATBaseUnknown * iObject) ; \
      virtual HRESULT RemoveSubTreeNodeObj(CATBaseUnknown * iObject) ; \
      virtual HRESULT EmptySubTree() ; \
};



#define ENVTIEdeclare_CATITreeNodeContent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT SetNodeContent(int iContent) ; \
virtual HRESULT GetNodeContent(int oContent) ; \
virtual HRESULT SetName(const CATUnicodeString & iName) ; \
virtual HRESULT GetName(CATUnicodeString & oName) ; \
virtual HRESULT SetIconName(const CATUnicodeString & iIconName) ; \
virtual HRESULT GetIconName(CATUnicodeString & oIconName) ; \
virtual HRESULT GetFatherNode(CATBaseUnknown ** oFatherNode) ; \
virtual HRESULT SetFatherNode(CATBaseUnknown * iFatherNode) ; \
virtual HRESULT GetNumberOfSubTreeNodeObj(int * oCount) ; \
virtual HRESULT GetSubTreeNodeObj(int iRank,CATBaseUnknown ** oObject) ; \
virtual HRESULT Locate(CATBaseUnknown * iSubTreeNode, int * oRank) ; \
virtual HRESULT AddSubTreeNodeObj(CATBaseUnknown * iObject) ; \
virtual HRESULT RemoveSubTreeNodeObj(CATBaseUnknown * iObject) ; \
virtual HRESULT EmptySubTree() ; \


#define ENVTIEdefine_CATITreeNodeContent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::SetNodeContent(int iContent)  \
{ \
return (ENVTIECALL(CATITreeNodeContent,ENVTIETypeLetter,ENVTIELetter)SetNodeContent(iContent)); \
} \
HRESULT  ENVTIEName::GetNodeContent(int oContent)  \
{ \
return (ENVTIECALL(CATITreeNodeContent,ENVTIETypeLetter,ENVTIELetter)GetNodeContent(oContent)); \
} \
HRESULT  ENVTIEName::SetName(const CATUnicodeString & iName)  \
{ \
return (ENVTIECALL(CATITreeNodeContent,ENVTIETypeLetter,ENVTIELetter)SetName(iName)); \
} \
HRESULT  ENVTIEName::GetName(CATUnicodeString & oName)  \
{ \
return (ENVTIECALL(CATITreeNodeContent,ENVTIETypeLetter,ENVTIELetter)GetName(oName)); \
} \
HRESULT  ENVTIEName::SetIconName(const CATUnicodeString & iIconName)  \
{ \
return (ENVTIECALL(CATITreeNodeContent,ENVTIETypeLetter,ENVTIELetter)SetIconName(iIconName)); \
} \
HRESULT  ENVTIEName::GetIconName(CATUnicodeString & oIconName)  \
{ \
return (ENVTIECALL(CATITreeNodeContent,ENVTIETypeLetter,ENVTIELetter)GetIconName(oIconName)); \
} \
HRESULT  ENVTIEName::GetFatherNode(CATBaseUnknown ** oFatherNode)  \
{ \
return (ENVTIECALL(CATITreeNodeContent,ENVTIETypeLetter,ENVTIELetter)GetFatherNode(oFatherNode)); \
} \
HRESULT  ENVTIEName::SetFatherNode(CATBaseUnknown * iFatherNode)  \
{ \
return (ENVTIECALL(CATITreeNodeContent,ENVTIETypeLetter,ENVTIELetter)SetFatherNode(iFatherNode)); \
} \
HRESULT  ENVTIEName::GetNumberOfSubTreeNodeObj(int * oCount)  \
{ \
return (ENVTIECALL(CATITreeNodeContent,ENVTIETypeLetter,ENVTIELetter)GetNumberOfSubTreeNodeObj(oCount)); \
} \
HRESULT  ENVTIEName::GetSubTreeNodeObj(int iRank,CATBaseUnknown ** oObject)  \
{ \
return (ENVTIECALL(CATITreeNodeContent,ENVTIETypeLetter,ENVTIELetter)GetSubTreeNodeObj(iRank,oObject)); \
} \
HRESULT  ENVTIEName::Locate(CATBaseUnknown * iSubTreeNode, int * oRank)  \
{ \
return (ENVTIECALL(CATITreeNodeContent,ENVTIETypeLetter,ENVTIELetter)Locate(iSubTreeNode,oRank)); \
} \
HRESULT  ENVTIEName::AddSubTreeNodeObj(CATBaseUnknown * iObject)  \
{ \
return (ENVTIECALL(CATITreeNodeContent,ENVTIETypeLetter,ENVTIELetter)AddSubTreeNodeObj(iObject)); \
} \
HRESULT  ENVTIEName::RemoveSubTreeNodeObj(CATBaseUnknown * iObject)  \
{ \
return (ENVTIECALL(CATITreeNodeContent,ENVTIETypeLetter,ENVTIELetter)RemoveSubTreeNodeObj(iObject)); \
} \
HRESULT  ENVTIEName::EmptySubTree()  \
{ \
return (ENVTIECALL(CATITreeNodeContent,ENVTIETypeLetter,ENVTIELetter)EmptySubTree()); \
} \


/* Name of the TIE class */
#define class_TIE_CATITreeNodeContent(classe)    TIECATITreeNodeContent##classe


/* Common methods inside a TIE */
#define common_TIE_CATITreeNodeContent(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATITreeNodeContent, classe) \
 \
 \
CATImplementTIEMethods(CATITreeNodeContent, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATITreeNodeContent, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATITreeNodeContent, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATITreeNodeContent, classe) \
 \
HRESULT  TIECATITreeNodeContent##classe::SetNodeContent(int iContent)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetNodeContent(iContent)); \
} \
HRESULT  TIECATITreeNodeContent##classe::GetNodeContent(int oContent)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNodeContent(oContent)); \
} \
HRESULT  TIECATITreeNodeContent##classe::SetName(const CATUnicodeString & iName)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetName(iName)); \
} \
HRESULT  TIECATITreeNodeContent##classe::GetName(CATUnicodeString & oName)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetName(oName)); \
} \
HRESULT  TIECATITreeNodeContent##classe::SetIconName(const CATUnicodeString & iIconName)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetIconName(iIconName)); \
} \
HRESULT  TIECATITreeNodeContent##classe::GetIconName(CATUnicodeString & oIconName)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetIconName(oIconName)); \
} \
HRESULT  TIECATITreeNodeContent##classe::GetFatherNode(CATBaseUnknown ** oFatherNode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFatherNode(oFatherNode)); \
} \
HRESULT  TIECATITreeNodeContent##classe::SetFatherNode(CATBaseUnknown * iFatherNode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetFatherNode(iFatherNode)); \
} \
HRESULT  TIECATITreeNodeContent##classe::GetNumberOfSubTreeNodeObj(int * oCount)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNumberOfSubTreeNodeObj(oCount)); \
} \
HRESULT  TIECATITreeNodeContent##classe::GetSubTreeNodeObj(int iRank,CATBaseUnknown ** oObject)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSubTreeNodeObj(iRank,oObject)); \
} \
HRESULT  TIECATITreeNodeContent##classe::Locate(CATBaseUnknown * iSubTreeNode, int * oRank)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Locate(iSubTreeNode,oRank)); \
} \
HRESULT  TIECATITreeNodeContent##classe::AddSubTreeNodeObj(CATBaseUnknown * iObject)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddSubTreeNodeObj(iObject)); \
} \
HRESULT  TIECATITreeNodeContent##classe::RemoveSubTreeNodeObj(CATBaseUnknown * iObject)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveSubTreeNodeObj(iObject)); \
} \
HRESULT  TIECATITreeNodeContent##classe::EmptySubTree()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->EmptySubTree()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATITreeNodeContent(classe) \
 \
 \
declare_TIE_CATITreeNodeContent(classe) \
 \
 \
CATMetaClass * __stdcall TIECATITreeNodeContent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATITreeNodeContent,"CATITreeNodeContent",CATITreeNodeContent::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATITreeNodeContent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATITreeNodeContent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATITreeNodeContent##classe(classe::MetaObject(),CATITreeNodeContent::MetaObject(),(void *)CreateTIECATITreeNodeContent##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATITreeNodeContent(classe) \
 \
 \
declare_TIE_CATITreeNodeContent(classe) \
 \
 \
CATMetaClass * __stdcall TIECATITreeNodeContent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATITreeNodeContent,"CATITreeNodeContent",CATITreeNodeContent::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATITreeNodeContent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATITreeNodeContent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATITreeNodeContent##classe(classe::MetaObject(),CATITreeNodeContent::MetaObject(),(void *)CreateTIECATITreeNodeContent##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATITreeNodeContent(classe) TIE_CATITreeNodeContent(classe)
#else
#define BOA_CATITreeNodeContent(classe) CATImplementBOA(CATITreeNodeContent, classe)
#endif

#endif
