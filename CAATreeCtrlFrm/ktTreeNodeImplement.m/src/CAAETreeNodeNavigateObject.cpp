// COPYRIGHT Dassault Systemes 2010
//===================================================================
//
// CAAETreeNodeNavigateObject.cpp
// Provide implementation to interface
//    CATINavigateObject
//
//===================================================================
//
// Usage notes:
//
//===================================================================
//  Feb 2010  Creation: Code generated by the CAA wizard  user
//===================================================================
#include "CAAETreeNodeNavigateObject.h"

#include "CATUnicodeString.h"

#include "CATITreeNodeContent.h"
 
CATImplementClass(CAAETreeNodeNavigateObject,
                  DataExtension,
                  CATBaseUnknown,
                  CATTreeNodeObj );
 

//-----------------------------------------------------------------------------
// CAAETreeNodeNavigateObject : constructor
//-----------------------------------------------------------------------------
CAAETreeNodeNavigateObject::CAAETreeNodeNavigateObject():
    CATBaseUnknown()
{
}

//-----------------------------------------------------------------------------
// CAAETreeNodeNavigateObject : destructor
//-----------------------------------------------------------------------------
CAAETreeNodeNavigateObject::~CAAETreeNodeNavigateObject()
{
}
 
// Link the implementation to its interface
// ---------------------------------------



//TIE or TIEchain definitions
#include "TIE_CATINavigateObject.h"
TIE_CATINavigateObject( CAAETreeNodeNavigateObject);


//Methods implementation

//-----------------------------------------------------------------------------
// Implements CATINavigateObject::GetIdentificators
//-----------------------------------------------------------------------------
CATListValCATUnicodeString* CAAETreeNodeNavigateObject::GetIdentificators ()
{
	CATListOfCATUnicodeString * pIdent = new CATListOfCATUnicodeString;

	CATUnicodeString Name = "Children" ;

	CATITreeNodeContent * piTreeNodeContent = NULL ;
	HRESULT rc = QueryInterface(IID_CATITreeNodeContent,(void**)&piTreeNodeContent);

	if(SUCCEEDED(rc))
	{
		piTreeNodeContent -> GetName(Name);
		piTreeNodeContent -> Release();
		piTreeNodeContent = NULL;
	}

	pIdent -> Append(Name);

	return pIdent;
}

//-----------------------------------------------------------------------------
// Implements CATINavigateObject::GetChildren
//-----------------------------------------------------------------------------
CATListValCATBaseUnknown_var* CAAETreeNodeNavigateObject::GetChildren ()
{
	CATListValCATBaseUnknown_var *pList = NULL ;

	CATITreeNodeContent * piTreeNodeContent = NULL ;
	HRESULT rc = QueryInterface(IID_CATITreeNodeContent,(void**)&piTreeNodeContent);

	if(SUCCEEDED(rc))
	{
		int Count = 0;
		piTreeNodeContent -> GetNumberOfSubTreeNodeObj(&Count);

		if (Count > 0)
		{
			pList = new CATListValCATBaseUnknown_var();
			
			for(int i = 1;i<=Count;i++)
			{
				CATBaseUnknown * pObject = NULL ;
                piTreeNodeContent -> GetSubTreeNodeObj(i, &pObject);

				if(pObject != NULL)
				{
					pList -> Append(pObject);

					pObject -> Release();
					pObject = NULL;
				}
			}
		}

		piTreeNodeContent -> Release();
		piTreeNodeContent = NULL;
	}

	return pList;
}
