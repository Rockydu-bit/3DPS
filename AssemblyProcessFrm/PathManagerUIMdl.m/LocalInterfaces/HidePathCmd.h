// COPYRIGHT Dassault Systemes 2015
//===================================================================
//
// HidePathCmd.h
// The state chart based command: HidePathCmd
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
#ifndef HidePathCmd_H
#define HidePathCmd_H

#include "CATStateCommand.h"
#include "CATBoolean.h"
#include "CATPPRProcess.h"

class CATIndicationAgent;

//----------------------------------------------------------------------

/**
 * Describe your command here.
 * <p>
 * Using this prefered syntax will enable mkdoc to document your class.
 * <p>
 * refer to programming resources of Dialog engine framework.
 * (consult base class description).
 */
class HidePathCmd: public CATStateCommand
{
  // Allows customization/internationalization of command's messages
  // ---------------------------------------------------------------
  DeclareResource( HidePathCmd, CATStateCommand )

  public:

  HidePathCmd();
  virtual ~HidePathCmd();

    /**
     * Defines the command automata.
     * <br>
     * <i>(states, transitions and agents)</i>
     */
  virtual void     BuildGraph();

    /**
     * Action associated to state transitions.
     */
  virtual CATBoolean  ActionOne(void * data);

  private:

  CATIndicationAgent	* _Indication;
};

//----------------------------------------------------------------------

#endif
