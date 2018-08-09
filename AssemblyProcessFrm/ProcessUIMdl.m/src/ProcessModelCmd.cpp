// COPYRIGHT Dassault Systemes 2015
//===================================================================
//
// ProcessModelCmd.cpp
// The state chart based command: ProcessModelCmd
//
//===================================================================
//
// Usage notes:
//
//===================================================================
//
//  Oct 2015  Creation: Code generated by the CAA wizard  WANGJIAPENG
//===================================================================
#include "ProcessModelCmd.h"

#include "CATCreateExternalObject.h"
CATCreateClass( ProcessModelCmd);


//-------------------------------------------------------------------------
// Constructor
//-------------------------------------------------------------------------
ProcessModelCmd::ProcessModelCmd() :
  CATStateCommand ("ProcessModelCmd", CATDlgEngOneShot, CATCommandModeExclusive) 
//  Valid states are CATDlgEngOneShot and CATDlgEngRepeat
, pCancelBut(NULL), pCloseBut(NULL)
{
	pDlgProcessModel = new CDlgProcessModel();
	pDlgProcessModel->Build();
	pDlgProcessModel->SetVisibility(CATDlgShow);
}

//-------------------------------------------------------------------------
// Destructor
//-------------------------------------------------------------------------
ProcessModelCmd::~ProcessModelCmd()
{
	if (pCancelBut != NULL)
	{
		pCancelBut->RequestDelayedDestruction();
		pCancelBut = NULL;
	}
	if (pCloseBut != NULL)
	{
		pCloseBut->RequestDelayedDestruction();
		pCloseBut = NULL;
	}
	if (pDlgProcessModel != NULL) 
	{
		pDlgProcessModel->RequestDelayedDestruction();
		pDlgProcessModel = NULL;
	}
}


//-------------------------------------------------------------------------
// BuildGraph()
//-------------------------------------------------------------------------
void ProcessModelCmd::BuildGraph()
{
	pCloseBut = new CATDialogAgent("Close");
	pCancelBut = new CATDialogAgent("Cancel");

	pCancelBut->AcceptOnNotify(pDlgProcessModel,pDlgProcessModel->GetWindCloseNotification());
	pCloseBut->AcceptOnNotify(pDlgProcessModel,pDlgProcessModel->GetDiaCANCELNotification());

	CATDialogState* pState = GetInitialState("OK");
	pState->AddDialogAgent(pCloseBut);
	pState->AddDialogAgent(pCancelBut);

	AddTransition(pState,NULL,IsOutputSetCondition(pCloseBut),Action((ActionMethod)&ProcessModelCmd::ActionClose));
	AddTransition(pState,NULL,IsOutputSetCondition(pCancelBut),Action((ActionMethod)&ProcessModelCmd::ActionCancel));
}

CATBoolean ProcessModelCmd::ActionCancel( void *data )
{
	// TODO: Define the action associated with the transition 
	// ------------------------------------------------------
	if (pDlgProcessModel)
	{
		pDlgProcessModel->RequestDelayedDestruction();
		pDlgProcessModel = NULL;
	}

	return TRUE;
}

CATBoolean ProcessModelCmd::ActionClose( void *data )
{
	// TODO: Define the action associated with the transition 
	// ------------------------------------------------------
	if (pDlgProcessModel)
	{
		pDlgProcessModel->RequestDelayedDestruction();
		pDlgProcessModel = NULL;
	}

	return TRUE;
}
