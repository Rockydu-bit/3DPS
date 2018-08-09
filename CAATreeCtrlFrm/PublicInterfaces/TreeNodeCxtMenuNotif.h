// COPYRIGHT Dassault Systemes 2010
//===================================================================
//
// TreeNodeCxtMenuNotif.h
// Header definition of TreeNodeCxtMenuNotif
//
//===================================================================
//
// Usage notes:
//
//===================================================================
//
//  Feb 2010  Creation: Code generated by the CAA wizard  user
//===================================================================
#ifndef TreeNodeCxtMenuNotif_H
#define TreeNodeCxtMenuNotif_H

#include "ktTreeNodeImplement.h"
#include "CATNotification.h"

//-----------------------------------------------------------------------

/**
* Class representing xxx.
*
* <br><b>Role</b>: Provide the basic class function...
* <p>
* Do not use the @href TreeNodeCxtMenuNotif constructor to
* do such and such but instead...
*
* @example
*  // example is optional
*  pObject = new TreeNodeCxtMenuNotif;
*  pObject->SetXXX(...);
*
* @href ClassReference, Class#MethodReference, #InternalMethod...
*/
class ExportedByktTreeNodeImplement TreeNodeCxtMenuNotif: public CATNotification
{
  CATDeclareClass;

  public:

  // Standard constructors and destructors
  // -------------------------------------
     TreeNodeCxtMenuNotif ();
     virtual ~TreeNodeCxtMenuNotif ();

  // Copy constructor and equal operator
  // -----------------------------------
  TreeNodeCxtMenuNotif (TreeNodeCxtMenuNotif &);
  TreeNodeCxtMenuNotif& operator=(TreeNodeCxtMenuNotif&);

   CATBaseUnknown * GetRequestCxtMenuTreeNode();
   void  SetRequestCxtMenuTreeNode(CATBaseUnknown * pTreeNode);

private:
	CATBaseUnknown * _pRequestCxtMenuTreeNode;



};

//-----------------------------------------------------------------------

#endif