// COPYRIGHT Dassault Systemes 2015
//===================================================================
//
// NewFileCmd.cpp
// The state chart based command: NewFileCmd
//
//===================================================================
//
// Usage notes:
//
//===================================================================
//
//  Oct 2015  Creation: Code generated by the CAA wizard  WANGJIAPENG
//===================================================================
#include "NewFileCmd.h"
#include "CATCreateExternalObject.h"
CATCreateClass( NewFileCmd);


//-------------------------------------------------------------------------
// Constructor
//-------------------------------------------------------------------------
NewFileCmd::NewFileCmd() :
  CATStateCommand ("NewFileCmd", CATDlgEngOneShot, CATCommandModeExclusive) 
//  Valid states are CATDlgEngOneShot and CATDlgEngRepeat
, pOkBut(NULL), pCancelBut(NULL), pCloseBut(NULL)
{
	pDlgNewFile = new CDlgNewFile();
	pDlgNewFile->Build();
	pDlgNewFile->SetVisibility(CATDlgShow);
}

//-------------------------------------------------------------------------
// Destructor
//-------------------------------------------------------------------------
NewFileCmd::~NewFileCmd()
{
	if (pOkBut != NULL)
	{
		pOkBut->RequestDelayedDestruction();
		pOkBut = NULL;
	}
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
	if (pDlgNewFile != NULL) 
	{
		pDlgNewFile->RequestDelayedDestruction();
		pDlgNewFile = NULL;
	}
}


//-------------------------------------------------------------------------
// BuildGraph()
//-------------------------------------------------------------------------
void NewFileCmd::BuildGraph()
{
  // TODO: Define the StateChart 
  // ---------------------------
	pOkBut = new CATDialogAgent("OK");
	pCloseBut = new CATDialogAgent("Close");
	pCancelBut = new CATDialogAgent("Cancel");

	pOkBut->AcceptOnNotify(pDlgNewFile,pDlgNewFile->GetDiaOKNotification());
	pCancelBut->AcceptOnNotify(pDlgNewFile,pDlgNewFile->GetWindCloseNotification());
	pCloseBut->AcceptOnNotify(pDlgNewFile,pDlgNewFile->GetDiaCANCELNotification());

	CATDialogState* pState = GetInitialState("OK");
	pState->AddDialogAgent(pOkBut);
	pState->AddDialogAgent(pCloseBut);
	pState->AddDialogAgent(pCancelBut);

	AddTransition(pState,NULL,IsOutputSetCondition(pOkBut),Action((ActionMethod)&NewFileCmd::ActionOK));
	AddTransition(pState,NULL,IsOutputSetCondition(pCloseBut),Action((ActionMethod)&NewFileCmd::ActionClose));
	AddTransition(pState,NULL,IsOutputSetCondition(pCancelBut),Action((ActionMethod)&NewFileCmd::ActionCancel));
}

CATBoolean NewFileCmd::ActionOK( void *data )
{
	// TODO: Define the action associated with the transition 
	// ------------------------------------------------------
	pDlgNewFile->SetFileContent();
	if (pDlgNewFile)
	{
		pDlgNewFile->RequestDelayedDestruction();
		pDlgNewFile = NULL;
	}
	return TRUE;
}

CATBoolean NewFileCmd::ActionCancel( void *data )
{
	// TODO: Define the action associated with the transition 
	// ------------------------------------------------------
	if (pDlgNewFile)
	{
		pDlgNewFile->RequestDelayedDestruction();
		pDlgNewFile = NULL;
	}

	return TRUE;
}

CATBoolean NewFileCmd::ActionClose( void *data )
{
	// TODO: Define the action associated with the transition 
	// ------------------------------------------------------
	if (pDlgNewFile)
	{
		pDlgNewFile->RequestDelayedDestruction();
		pDlgNewFile = NULL;
	}

	return TRUE;
}
