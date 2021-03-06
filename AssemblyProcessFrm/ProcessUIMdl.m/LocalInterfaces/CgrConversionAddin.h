// COPYRIGHT Dassault Systemes 2015
//===================================================================
//
// CgrConversionAddin.h
// Provide implementation to interface
//    CATIPRDWorkshopAddin

//
//===================================================================
//
// Usage notes:
//
//===================================================================
//CAA2 Wizard Generation Report
//IMPLEMENTATION
//    TIE: CATIPRDWorkshopAddin

//End CAA2 Wizard Generation Report
//
//  Oct 2015  Creation: Code generated by the CAA wizard  WANGJIAPENG
//===================================================================
#ifndef CgrConversionAddin_H
#define CgrConversionAddin_H

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
*  <li>@href CATIPRDWorkshopAddin
*  </ol>
*
* @href ClassReference, Class#MethodReference, #InternalMethod...
*/
class CgrConversionAddin: public CATBaseUnknown

{
  CATDeclareClass;

  public:

  // Standard constructors and destructors for an implementation class
  // -----------------------------------------------------------------
     CgrConversionAddin ();
     virtual ~CgrConversionAddin ();

	 void CreateCommands();
	 CATCmdContainer* CreateToolbars();


  private:
  // The copy constructor and the equal operator must not be implemented
  // -------------------------------------------------------------------
  CgrConversionAddin (CgrConversionAddin &);
  CgrConversionAddin& operator=(CgrConversionAddin&);

};

//-----------------------------------------------------------------------

#endif
