// COPYRIGHT Dassault Systemes 2015
//===================================================================
//
// OutPutProcessCmd.h
// The state chart based command: OutPutProcessCmd
//
//===================================================================
//
// Usage notes:
//
//===================================================================
//CAA2 Wizard Generation Report
//   STATECOMMAND
//End CAA2 Wizard Generation Report
//
//  Nov 2015  Creation: Code generated by the CAA wizard  WANGJIAPENG
//===================================================================
#ifndef OutPutProcessCmd_H
#define OutPutProcessCmd_H

#include "CATStateCommand.h"
#include "CATBoolean.h"
#include "CDlgOutputFile.h"

//----------------------------------------------------------------------

/**
 * Describe your command here.
 * <p>
 * Using this prefered syntax will enable mkdoc to document your class.
 * <p>
 * refer to programming resources of Dialog engine framework.
 * (consult base class description).
 */
class OutPutProcessCmd: public CATStateCommand
{
  // Allows customization/internationalization of command's messages
  // ---------------------------------------------------------------
  DeclareResource( OutPutProcessCmd, CATStateCommand )

  public:

  OutPutProcessCmd();
  virtual ~OutPutProcessCmd();


  virtual void     BuildGraph();

  virtual CATBoolean  ActionCancel(void * data);
  virtual CATBoolean  ActionClose(void * data);


  private:
	  CATDialogAgent		* pCancelBut,
							* pCloseBut;
	  CDlgOutputFile        * pDlgOutputFile;

};

//----------------------------------------------------------------------

#endif
