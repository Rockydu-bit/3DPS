// COPYRIGHT Dassault Systemes 2016
//===================================================================
//
// DisAssemblyAddin.h
// Provide implementation to interface
//    CATIWSPROCAddin

//
//===================================================================
//
// Usage notes:
//
//===================================================================
//CAA2 Wizard Generation Report
//IMPLEMENTATION
//    TIE: CATIWSPROCAddin

//End CAA2 Wizard Generation Report
//
//  Dec 2016  Creation: Code generated by the CAA wizard  WANGJIAPENG
//===================================================================
#ifndef DisAssemblyAddin_H
#define DisAssemblyAddin_H

class CATCmdContainer;
#include "CATBaseUnknown.h"

//-----------------------------------------------------------------------

/**
* Class representing xxx.
*
* <br><b>Role</b>: Provide the basic class function...
* <p>
* It implements the interfaces :
*  <ol>
*  <li>@href CATIWSPROCAddin
*  </ol>
*
* @href ClassReference, Class#MethodReference, #InternalMethod...
*/
class DisAssemblyAddin: public CATBaseUnknown

{
  CATDeclareClass;

  public:

  // Standard constructors and destructors for an implementation class
  // -----------------------------------------------------------------
     DisAssemblyAddin ();
     virtual ~DisAssemblyAddin ();

	 void CreateCommands();
	 CATCmdContainer* CreateToolbars();


  private:
  // The copy constructor and the equal operator must not be implemented
  // -------------------------------------------------------------------
  DisAssemblyAddin (DisAssemblyAddin &);
  DisAssemblyAddin& operator=(DisAssemblyAddin&);

};

//-----------------------------------------------------------------------

#endif
