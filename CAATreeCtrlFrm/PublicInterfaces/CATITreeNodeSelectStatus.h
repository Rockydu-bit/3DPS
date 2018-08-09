// COPYRIGHT Dassault Systemes 2010
//===================================================================
//
// CATITreeNodeSelectStatus.h
// Define the CATITreeNodeSelectStatus interface
//
//===================================================================
//
// Usage notes:
//   New interface: describe its use here
//
//===================================================================
//
//  Feb 2010  Creation: Code generated by the CAA wizard  user
//===================================================================
#ifndef CATITreeNodeSelectStatus_H
#define CATITreeNodeSelectStatus_H

#include "ktTreeNodeInterface.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByktTreeNodeInterface IID IID_CATITreeNodeSelectStatus;
#else
extern "C" const IID IID_CATITreeNodeSelectStatus ;
#endif

//------------------------------------------------------------------

/**
* Interface representing xxx.
*
* <br><b>Role</b>: Components that implement
* CATITreeNodeSelectStatus are ...
* <p>
* Do not use the CATITreeNodeSelectStatus interface for such and such

*
* @example
*  // example is optional
*  CATITreeNodeSelectStatus* currentDisplay = NULL;
*  rc = window-&gt;QueryInterface(IID_CATITreeNodeSelectStatus,
*                                     (void**) &amp;currentDisplay);
*
* @href ClassReference, Class#MethodReference, #InternalMethod...
*/
class ExportedByktTreeNodeInterface CATITreeNodeSelectStatus: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
     * Remember that interfaces define only virtual pure methods.
     * Dont forget to document your methods.
     * <dl>
     * <dt><b>Example:</b>
     * <pre>
     *       
           *   MyFunction does this and that
           *   @param Arg1
           *      The first argument of MyFunction.
           *   @return
           *      Error code of function.
           * 
     * virtual int MyFunction (int Arg1) = 0;
     * </pre>
     * </dl>
     */

  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------

	  virtual HRESULT SetSelectStatus(int iSelectStatus) = 0;
	  virtual HRESULT GetSelectStatus(int * poSelectStatus) = 0;
};

//------------------------------------------------------------------

#endif