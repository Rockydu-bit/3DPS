// COPYRIGHT Dassault Systemes 2015
//===================================================================
//
// CDlgStepModel.cpp
// The dialog : CDlgStepModel
//
//===================================================================
//
// Usage notes:
//
//===================================================================
//
//  Nov 2015  Creation: Code generated by the CAA wizard  WANGJIAPENG
//===================================================================
#include "CDlgStepModel.h"
#include "CATApplicationFrame.h"
#include "CATDlgGridConstraints.h"
#include "CATMsgCatalog.h"
#include "CATProcessFile.h"
#include "CATModelGenerator.h"
#include "CDlgModelViewer.h"
#include "CDlgFigureReview.h"

#ifdef CDlgStepModel_ParameterEditorInclude
#include "CATIParameterEditorFactory.h"
#include "CATIParameterEditor.h"
#include "CATICkeParm.h"
#endif



CDlgStepModel* CDlgStepModel::m_pDlgStepModel = NULL;
//-------------------------------------------------------------------------
// Constructor
//-------------------------------------------------------------------------
CDlgStepModel::CDlgStepModel() :
CATDlgDialog ((CATApplicationFrame::GetApplicationFrame())->GetMainWindow(),
			  //CAA2 WIZARD CONSTRUCTOR DECLARATION SECTION
"CDlgStepModel",CATDlgWndBtnOKCancel|CATDlgGridLayout
			  //END CAA2 WIZARD CONSTRUCTOR DECLARATION SECTION
			  )
{
	//CAA2 WIZARD CONSTRUCTOR INITIALIZATION SECTION
 _TabContainer001 = NULL;
 _TabPageStep = NULL;
 _LabelStepNum = NULL;
 _EditorStepNum = NULL;
 _LabelStepName = NULL;
 _EditorStepName = NULL;
 _LabelBeginTime = NULL;
 _EditorBeginTime = NULL;
 _LabelEndTime = NULL;
 _EditorEndTime = NULL;
 _FrameStepContent = NULL;
 _EditorStepContent = NULL;
 _FrameStepRemark = NULL;
 _EditorStepRemark = NULL;
 _TabPageStepMaterial = NULL;
 _LabelMaterialNum = NULL;
 _EditorMaterialNum = NULL;
 _LabelMaterialName = NULL;
 _EditorMaterialName = NULL;
 _FrameMaterialRemark = NULL;
 _EditorMaterialRemark = NULL;
 _TabPageEquiAndTool = NULL;
 _LabelEquiName = NULL;
 _EditorEquiName = NULL;
 _LabelEquiVersion = NULL;
 _EditorEquiVersion = NULL;
 _LabelEquiNum = NULL;
 _EditorEquiNum = NULL;
 _LabelSpecEqui = NULL;
 _EditorSpecEqui = NULL;
 _LabelSpecTool = NULL;
 _EditorSpecTool = NULL;
 _LabelSpecFixture = NULL;
 _EditorSpecFixture = NULL;
 _LabelSpecGage = NULL;
 _EditorSpecGage = NULL;
 _FrameEquiRemark = NULL;
 _EditorEquiRemark = NULL;
 _TabPageOperations = NULL;
 _MultiListPartDetails = NULL;
 _Frame019 = NULL;
 _Label020 = NULL;
 _FrameTree = NULL;
 _Frame021 = NULL;
 _PushButtonSaveStepModel = NULL;
 _PushButtonReviewStepModel = NULL;
 _PushButtonSaveStepFigure = NULL;
 _PushButtonReviewStepFigure = NULL;
//END CAA2 WIZARD CONSTRUCTOR INITIALIZATION SECTION
m_nCurrentNum = -1;
pPPRProcess = new CATPPRProcess();
int layer = 0;
pPPRProcess->GetPPRRootPointer(pPPRProcess->GetCurrentDocument());
pPPRProcess->GetPPRNodeInfo(pPPRProcess->FirstLayerActivity,layer);
ProcessNodeArray.Copy(pPPRProcess->ProcessNodeArray);
//获取保存的工艺信息
CATProcessFile *pProcessFile = CATProcessFile::GetInstance();
pProcessFile->ParseProcessInfo();
if (pProcessFile->PPRProcessArray.GetSize() == 0)
{
	AfxMessageBox(_T("请先设置工序属性信息！"));
}
PPRProcessArray.Copy(pProcessFile->PPRProcessArray);
}

//-------------------------------------------------------------------------
// Destructor
//-------------------------------------------------------------------------
CDlgStepModel::~CDlgStepModel()
{
	//  Do not delete the control elements of your dialog: 
	//     this is done automatically
	//  --------------------------------------------------
	//CAA2 WIZARD DESTRUCTOR DECLARATION SECTION
 _TabContainer001 = NULL;
 _TabPageStep = NULL;
 _LabelStepNum = NULL;
 _EditorStepNum = NULL;
 _LabelStepName = NULL;
 _EditorStepName = NULL;
 _LabelBeginTime = NULL;
 _EditorBeginTime = NULL;
 _LabelEndTime = NULL;
 _EditorEndTime = NULL;
 _FrameStepContent = NULL;
 _EditorStepContent = NULL;
 _FrameStepRemark = NULL;
 _EditorStepRemark = NULL;
 _TabPageStepMaterial = NULL;
 _LabelMaterialNum = NULL;
 _EditorMaterialNum = NULL;
 _LabelMaterialName = NULL;
 _EditorMaterialName = NULL;
 _FrameMaterialRemark = NULL;
 _EditorMaterialRemark = NULL;
 _TabPageEquiAndTool = NULL;
 _LabelEquiName = NULL;
 _EditorEquiName = NULL;
 _LabelEquiVersion = NULL;
 _EditorEquiVersion = NULL;
 _LabelEquiNum = NULL;
 _EditorEquiNum = NULL;
 _LabelSpecEqui = NULL;
 _EditorSpecEqui = NULL;
 _LabelSpecTool = NULL;
 _EditorSpecTool = NULL;
 _LabelSpecFixture = NULL;
 _EditorSpecFixture = NULL;
 _LabelSpecGage = NULL;
 _EditorSpecGage = NULL;
 _FrameEquiRemark = NULL;
 _EditorEquiRemark = NULL;
 _TabPageOperations = NULL;
 _MultiListPartDetails = NULL;
 _Frame019 = NULL;
 _Label020 = NULL;
 _FrameTree = NULL;
 _Frame021 = NULL;
 _PushButtonSaveStepModel = NULL;
 _PushButtonReviewStepModel = NULL;
 _PushButtonSaveStepFigure = NULL;
 _PushButtonReviewStepFigure = NULL;
//END CAA2 WIZARD DESTRUCTOR DECLARATION SECTION
if (pTreeCtrl)
{
	delete pTreeCtrl;
	pTreeCtrl = NULL;
}
if (pPPRProcess)
{
	delete pPPRProcess;
	pPPRProcess = NULL;
}
}

CDlgStepModel* CDlgStepModel::GetInstance()
{
	if (m_pDlgStepModel == NULL)
	{
		m_pDlgStepModel = new CDlgStepModel();
	}
	return m_pDlgStepModel;
}

void CDlgStepModel::Build()
{
	//  TODO: This call builds your dialog from the layout declaration file
	//  -------------------------------------------------------------------

	//CAA2 WIZARD WIDGET CONSTRUCTION SECTION
 SetGridRowResizable(0,1);
 SetGridColumnResizable(0,1);
 SetGridColumnResizable(1,1);
 _TabContainer001 = new CATDlgTabContainer(this, "TabContainer001");
_TabContainer001 -> SetGridConstraints(0, 1, 1, 1, CATGRID_4SIDES);
 _TabPageStep = new CATDlgTabPage(_TabContainer001, "TabPageStep", CATDlgGridLayout);
 _TabPageStep -> SetGridRowResizable(2,1);
 _TabPageStep -> SetGridRowResizable(3,1);
 _TabPageStep -> SetGridColumnResizable(3,1);
 _LabelStepNum = new CATDlgLabel(_TabPageStep, "LabelStepNum");
_LabelStepNum -> SetGridConstraints(0, 0, 1, 1, CATGRID_4SIDES);
 _EditorStepNum = new CATDlgEditor(_TabPageStep, "EditorStepNum", CATDlgEdtReadOnly);
 _EditorStepNum -> SetVisibleTextWidth(4);
_EditorStepNum -> SetGridConstraints(0, 1, 1, 1, CATGRID_4SIDES);
 _LabelStepName = new CATDlgLabel(_TabPageStep, "LabelStepName");
_LabelStepName -> SetGridConstraints(0, 2, 1, 1, CATGRID_4SIDES);
 _EditorStepName = new CATDlgEditor(_TabPageStep, "EditorStepName");
_EditorStepName -> SetGridConstraints(0, 3, 1, 1, CATGRID_4SIDES);
 _LabelBeginTime = new CATDlgLabel(_TabPageStep, "LabelBeginTime");
_LabelBeginTime -> SetGridConstraints(1, 0, 1, 1, CATGRID_4SIDES);
 _EditorBeginTime = new CATDlgEditor(_TabPageStep, "EditorBeginTime");
 _EditorBeginTime -> SetVisibleTextWidth(4);
_EditorBeginTime -> SetGridConstraints(1, 1, 1, 1, CATGRID_4SIDES);
 _LabelEndTime = new CATDlgLabel(_TabPageStep, "LabelEndTime");
_LabelEndTime -> SetGridConstraints(1, 2, 1, 1, CATGRID_4SIDES);
 _EditorEndTime = new CATDlgEditor(_TabPageStep, "EditorEndTime");
_EditorEndTime -> SetGridConstraints(1, 3, 1, 1, CATGRID_4SIDES);
 _FrameStepContent = new CATDlgFrame(_TabPageStep, "FrameStepContent", CATDlgGridLayout);
_FrameStepContent -> SetGridConstraints(2, 0, 4, 1, CATGRID_4SIDES);
 _FrameStepContent -> SetGridRowResizable(0,1);
 _FrameStepContent -> SetGridColumnResizable(0,1);
 _EditorStepContent = new CATDlgEditor(_FrameStepContent, "EditorStepContent", CATDlgEdtMultiline);
_EditorStepContent -> SetGridConstraints(0, 0, 1, 1, CATGRID_4SIDES);
 _FrameStepRemark = new CATDlgFrame(_TabPageStep, "FrameStepRemark", CATDlgGridLayout);
_FrameStepRemark -> SetGridConstraints(3, 0, 4, 1, CATGRID_4SIDES);
 _FrameStepRemark -> SetGridRowResizable(0,1);
 _FrameStepRemark -> SetGridColumnResizable(0,1);
 _EditorStepRemark = new CATDlgEditor(_FrameStepRemark, "EditorStepRemark", CATDlgEdtMultiline);
_EditorStepRemark -> SetGridConstraints(0, 0, 1, 1, CATGRID_4SIDES);
 _TabPageStepMaterial = new CATDlgTabPage(_TabContainer001, "TabPageStepMaterial", CATDlgGridLayout);
 _TabPageStepMaterial -> SetGridRowResizable(2,1);
 _TabPageStepMaterial -> SetGridColumnResizable(1,1);
 _LabelMaterialNum = new CATDlgLabel(_TabPageStepMaterial, "LabelMaterialNum");
_LabelMaterialNum -> SetGridConstraints(0, 0, 1, 1, CATGRID_4SIDES);
 _EditorMaterialNum = new CATDlgEditor(_TabPageStepMaterial, "EditorMaterialNum");
_EditorMaterialNum -> SetGridConstraints(0, 1, 1, 1, CATGRID_4SIDES);
 _LabelMaterialName = new CATDlgLabel(_TabPageStepMaterial, "LabelMaterialName");
_LabelMaterialName -> SetGridConstraints(1, 0, 1, 1, CATGRID_4SIDES);
 _EditorMaterialName = new CATDlgEditor(_TabPageStepMaterial, "EditorMaterialName");
_EditorMaterialName -> SetGridConstraints(1, 1, 1, 1, CATGRID_4SIDES);
 _FrameMaterialRemark = new CATDlgFrame(_TabPageStepMaterial, "FrameMaterialRemark", CATDlgGridLayout);
_FrameMaterialRemark -> SetGridConstraints(2, 0, 2, 1, CATGRID_4SIDES);
 _FrameMaterialRemark -> SetGridRowResizable(0,1);
 _FrameMaterialRemark -> SetGridColumnResizable(0,1);
 _EditorMaterialRemark = new CATDlgEditor(_FrameMaterialRemark, "EditorMaterialRemark", CATDlgEdtMultiline);
_EditorMaterialRemark -> SetGridConstraints(0, 0, 1, 1, CATGRID_4SIDES);
 _TabPageEquiAndTool = new CATDlgTabPage(_TabContainer001, "TabPageEquiAndTool", CATDlgGridLayout);
 _TabPageEquiAndTool -> SetGridRowResizable(7,1);
 _TabPageEquiAndTool -> SetGridColumnResizable(1,1);
 _LabelEquiName = new CATDlgLabel(_TabPageEquiAndTool, "LabelEquiName");
_LabelEquiName -> SetGridConstraints(0, 0, 1, 1, CATGRID_4SIDES);
 _EditorEquiName = new CATDlgEditor(_TabPageEquiAndTool, "EditorEquiName");
_EditorEquiName -> SetGridConstraints(0, 1, 1, 1, CATGRID_4SIDES);
 _LabelEquiVersion = new CATDlgLabel(_TabPageEquiAndTool, "LabelEquiVersion");
_LabelEquiVersion -> SetGridConstraints(1, 0, 1, 1, CATGRID_4SIDES);
 _EditorEquiVersion = new CATDlgEditor(_TabPageEquiAndTool, "EditorEquiVersion");
_EditorEquiVersion -> SetGridConstraints(1, 1, 1, 1, CATGRID_4SIDES);
 _LabelEquiNum = new CATDlgLabel(_TabPageEquiAndTool, "LabelEquiNum");
_LabelEquiNum -> SetGridConstraints(2, 0, 1, 1, CATGRID_4SIDES);
 _EditorEquiNum = new CATDlgEditor(_TabPageEquiAndTool, "EditorEquiNum");
_EditorEquiNum -> SetGridConstraints(2, 1, 1, 1, CATGRID_4SIDES);
 _LabelSpecEqui = new CATDlgLabel(_TabPageEquiAndTool, "LabelSpecEqui");
_LabelSpecEqui -> SetGridConstraints(3, 0, 1, 1, CATGRID_4SIDES);
 _EditorSpecEqui = new CATDlgEditor(_TabPageEquiAndTool, "EditorSpecEqui");
_EditorSpecEqui -> SetGridConstraints(3, 1, 1, 1, CATGRID_4SIDES);
 _LabelSpecTool = new CATDlgLabel(_TabPageEquiAndTool, "LabelSpecTool");
_LabelSpecTool -> SetGridConstraints(4, 0, 1, 1, CATGRID_4SIDES);
 _EditorSpecTool = new CATDlgEditor(_TabPageEquiAndTool, "EditorSpecTool");
_EditorSpecTool -> SetGridConstraints(4, 1, 1, 1, CATGRID_4SIDES);
 _LabelSpecFixture = new CATDlgLabel(_TabPageEquiAndTool, "LabelSpecFixture");
_LabelSpecFixture -> SetGridConstraints(5, 0, 1, 1, CATGRID_4SIDES);
 _EditorSpecFixture = new CATDlgEditor(_TabPageEquiAndTool, "EditorSpecFixture");
_EditorSpecFixture -> SetGridConstraints(5, 1, 1, 1, CATGRID_4SIDES);
 _LabelSpecGage = new CATDlgLabel(_TabPageEquiAndTool, "LabelSpecGage");
_LabelSpecGage -> SetGridConstraints(6, 0, 1, 1, CATGRID_4SIDES);
 _EditorSpecGage = new CATDlgEditor(_TabPageEquiAndTool, "EditorSpecGage");
_EditorSpecGage -> SetGridConstraints(6, 1, 1, 1, CATGRID_4SIDES);
 _FrameEquiRemark = new CATDlgFrame(_TabPageEquiAndTool, "FrameEquiRemark", CATDlgGridLayout);
_FrameEquiRemark -> SetGridConstraints(7, 0, 2, 1, CATGRID_4SIDES);
 _FrameEquiRemark -> SetGridRowResizable(0,1);
 _FrameEquiRemark -> SetGridColumnResizable(0,1);
 _EditorEquiRemark = new CATDlgEditor(_FrameEquiRemark, "EditorEquiRemark", CATDlgEdtMultiline);
_EditorEquiRemark -> SetGridConstraints(0, 0, 1, 1, CATGRID_4SIDES);
 _TabPageOperations = new CATDlgTabPage(_TabContainer001, "TabPageOperations", CATDlgGridLayout);
 _TabPageOperations -> SetGridRowResizable(0,1);
 _TabPageOperations -> SetGridColumnResizable(0,1);
 _MultiListPartDetails = new CATDlgMultiList(_TabPageOperations, "MultiListPartDetails");
 CATUnicodeString MultiListPartDetailsTitles [ 4 ];
 MultiListPartDetailsTitles[0] = CATMsgCatalog::BuildMessage("CDlgStepModel", "TabContainer001.TabPageOperations.MultiListPartDetails.ColumnTitle1");
 MultiListPartDetailsTitles[1] = CATMsgCatalog::BuildMessage("CDlgStepModel", "TabContainer001.TabPageOperations.MultiListPartDetails.ColumnTitle2");
 MultiListPartDetailsTitles[2] = CATMsgCatalog::BuildMessage("CDlgStepModel", "TabContainer001.TabPageOperations.MultiListPartDetails.ColumnTitle3");
 MultiListPartDetailsTitles[3] = CATMsgCatalog::BuildMessage("CDlgStepModel", "TabContainer001.TabPageOperations.MultiListPartDetails.ColumnTitle4");
 _MultiListPartDetails -> SetColumnTitles(4, MultiListPartDetailsTitles);
 _MultiListPartDetails -> SetVisibleColumnCount( 4 );
 _MultiListPartDetails->SetColumnTextWidth (0, 8);
 _MultiListPartDetails->SetColumnTextWidth (1, 10);
 _MultiListPartDetails->SetColumnTextWidth (2, 3);
 _MultiListPartDetails->SetColumnTextWidth (3, 3);
_MultiListPartDetails -> SetGridConstraints(0, 0, 1, 1, CATGRID_4SIDES);
 _Frame019 = new CATDlgFrame(this, "Frame019", CATDlgFraNoFrame|CATDlgGridLayout);
_Frame019 -> SetGridConstraints(0, 0, 1, 1, CATGRID_4SIDES);
 _Frame019 -> SetGridRowResizable(1,1);
 _Frame019 -> SetGridColumnResizable(0,1);
 _Label020 = new CATDlgLabel(_Frame019, "Label020");
_Label020 -> SetGridConstraints(0, 0, 1, 1, CATGRID_4SIDES);
 _FrameTree = new CATDlgFrame(_Frame019, "FrameTree", CATDlgGridLayout);
_FrameTree -> SetGridConstraints(1, 0, 1, 1, CATGRID_4SIDES);
 _Frame021 = new CATDlgFrame(this, "Frame021", CATDlgFraNoFrame|CATDlgGridLayout);
_Frame021 -> SetGridConstraints(1, 1, 1, 1, CATGRID_4SIDES);
 _PushButtonSaveStepModel = new CATDlgPushButton(_Frame021, "PushButtonSaveStepModel");
_PushButtonSaveStepModel -> SetGridConstraints(0, 0, 1, 1, CATGRID_4SIDES);
 _PushButtonReviewStepModel = new CATDlgPushButton(_Frame021, "PushButtonReviewStepModel");
_PushButtonReviewStepModel -> SetGridConstraints(0, 1, 1, 1, CATGRID_4SIDES);
 _PushButtonSaveStepFigure = new CATDlgPushButton(_Frame021, "PushButtonSaveStepFigure");
_PushButtonSaveStepFigure -> SetGridConstraints(0, 2, 1, 1, CATGRID_4SIDES);
 _PushButtonReviewStepFigure = new CATDlgPushButton(_Frame021, "PushButtonReviewStepFigure");
_PushButtonReviewStepFigure -> SetGridConstraints(0, 3, 1, 1, CATGRID_4SIDES);
//END CAA2 WIZARD WIDGET CONSTRUCTION SECTION
CATDlgWindow *pFrmWindow = NULL;
pFrmWindow = (CATApplicationFrame::GetApplicationFrame())->GetApplicationDocument();
DRECT rect;
pFrmWindow->GetRectDimensions(&rect);
int width = 500;
int height = 400;
this->SetRectDimensions((rect.dx-width)/2,(rect.dy-height)/2,height,width);
//生成BOM树
GenerateBOMTree(_FrameTree,ProcessNodeArray);
//CAA2 WIZARD CALLBACK DECLARATION SECTION
     AddAnalyseNotificationCB (_PushButtonReviewStepFigure, 
                               _PushButtonReviewStepFigure->GetPushBActivateNotification(),
                               (CATCommandMethod)&CDlgStepModel::OnPushButtonReviewStepFigurePushBActivateNotification,
                               NULL);
     AddAnalyseNotificationCB (_PushButtonSaveStepFigure, 
                               _PushButtonSaveStepFigure->GetPushBActivateNotification(),
                               (CATCommandMethod)&CDlgStepModel::OnPushButtonSaveStepFigurePushBActivateNotification,
                               NULL);
     AddAnalyseNotificationCB (_PushButtonReviewStepModel, 
                               _PushButtonReviewStepModel->GetPushBActivateNotification(),
                               (CATCommandMethod)&CDlgStepModel::OnPushButtonReviewStepModelPushBActivateNotification,
                               NULL);
     AddAnalyseNotificationCB (_PushButtonSaveStepModel, 
                               _PushButtonSaveStepModel->GetPushBActivateNotification(),
                               (CATCommandMethod)&CDlgStepModel::OnPushButtonSaveStepModelPushBActivateNotification,
                               NULL);
AddAnalyseNotificationCB (this, 
	GetDiaOKNotification(),
	(CATCommandMethod)&CDlgStepModel::OnCDlgStepModelDiaOKNotification,
	NULL);
//END CAA2 WIZARD CALLBACK DECLARATION SECTION

}

void CDlgStepModel::InitDialogBox()
{
	_EditorStepNum->ClearLine();
	_EditorStepName->ClearLine();
	_EditorStepContent->ClearLine();
	_EditorStepRemark->ClearLine();
	_EditorMaterialName->ClearLine();
	_EditorMaterialRemark->ClearLine();
	_EditorMaterialNum->ClearLine();
	_EditorEquiName->ClearLine();
	_EditorSpecEqui->ClearLine();
	_EditorSpecTool->ClearLine();
	_EditorSpecFixture->ClearLine();
	_EditorEquiNum->ClearLine();
	_EditorEquiRemark->ClearLine();
	_EditorEquiVersion->ClearLine();
	_EditorSpecGage->ClearLine();
	_MultiListPartDetails->ClearLine();
}

CATBoolean CDlgStepModel::InitLayerArray()
{
	int layer = pPPRProcess->GetLayerCount(ProcessNodeArray);
	if (layer == 0)
	{
		return FALSE;
	}
	LayerArray.RemoveAll();
	for (int i=1; i<=layer; i++)
	{
		LayerArray.Add(1);
	}

	return TRUE;
}

CATBoolean CDlgStepModel::GenerateBOMTree(CATDlgFrame* frame,CArray<ProcessNode*,ProcessNode*>& ProcessNodeArray)
{
	if (ProcessNodeArray.GetSize() == 0)
	{
		return FALSE;
	}
	InitLayerArray();
	frame->SetGridRowResizable(0,1);
	frame->SetGridColumnResizable(0,1);
	pTreeCtrl = new CAATreeCtrl(frame,"TreeCtrl");
	pTreeCtrl->SetGridConstraints(0,0,1,1,CATGRID_4SIDES);
	pTreeCtrl->AddRootTreeNode(pPPRProcess->ConvertToCATString(ProcessNodeArray.GetAt(0)->ProcessNum+_T(".")+ProcessNodeArray.GetAt(0)->ProcessName),"");
	CATBaseUnknown *pTreeNode = NULL;
	CATBaseUnknown* pFatherNode = NULL;
	pTreeCtrl->GetRootTreeNodeAt(1,&pTreeNode);
	CString strNameAndNum;
	for (int i=1; i<ProcessNodeArray.GetSize(); i++)
	{
		int num = ProcessNodeArray.GetAt(i)->layer - ProcessNodeArray.GetAt(i-1)->layer;
		//同级
		if (num == 0)
		{
			pTreeCtrl->GetFatherTreeNode(pTreeNode,&pFatherNode);
			pTreeNode = pFatherNode;
			strNameAndNum = _T("");
			LayerArray.GetAt(ProcessNodeArray.GetAt(i)->layer-1) = LayerArray.GetAt(ProcessNodeArray.GetAt(i)->layer-1) + 1;
			for (int k=0; k<ProcessNodeArray.GetAt(i)->layer; k++)
			{
				if (k == 0)
				{
					strNameAndNum.Format(_T("%d"),LayerArray.GetAt(0));
				}
				if (k > 0)
				{
					strNameAndNum.Format(_T("%s-%d"),strNameAndNum,LayerArray.GetAt(k));
				}
			}
			ProcessNodeArray.GetAt(i)->ProcessStep = strNameAndNum;
			strNameAndNum = strNameAndNum + _T(".") + ProcessNodeArray.GetAt(i)->ProcessName;
			pTreeNode = pTreeCtrl->AddChildTreeNode(pTreeNode,pPPRProcess->ConvertToCATString(strNameAndNum),"");
		}
		//下一级
		if (num == 1)
		{
			strNameAndNum = _T("");
			for (int k=0; k<ProcessNodeArray.GetAt(i)->layer; k++)
			{
				if (k == 0)
				{
					strNameAndNum.Format(_T("%d"),LayerArray.GetAt(0));
				}
				if (k > 0)
				{
					strNameAndNum.Format(_T("%s-%d"),strNameAndNum,LayerArray.GetAt(k));
				}
			}
			ProcessNodeArray.GetAt(i)->ProcessStep = strNameAndNum;
			strNameAndNum = strNameAndNum + _T(".") + ProcessNodeArray.GetAt(i)->ProcessName;
			pTreeNode = pTreeCtrl->AddChildTreeNode(pTreeNode,pPPRProcess->ConvertToCATString(strNameAndNum),"");
		}
		//上N级
		if (num < 0)
		{
			num = -num;
			for (int j=0; j<=num; j++)
			{
				pTreeCtrl->GetFatherTreeNode(pTreeNode,&pFatherNode);
				pTreeNode = pFatherNode;
			}
			strNameAndNum = _T("");
			for (int m=0; m<num; m++)
			{
				LayerArray.GetAt(ProcessNodeArray.GetAt(i-1)->layer-1-m) = 1;
			}
			LayerArray.GetAt(ProcessNodeArray.GetAt(i)->layer-1) = LayerArray.GetAt(ProcessNodeArray.GetAt(i)->layer-1) + 1;
			for (int k=0; k<ProcessNodeArray.GetAt(i)->layer; k++)
			{
				if (k == 0)
				{
					strNameAndNum.Format(_T("%d"),LayerArray.GetAt(0));
				}
				if (k > 0)
				{
					strNameAndNum.Format(_T("%s-%d"),strNameAndNum,LayerArray.GetAt(k));
				}
			}
			ProcessNodeArray.GetAt(i)->ProcessStep = strNameAndNum;
			strNameAndNum = strNameAndNum + _T(".") + ProcessNodeArray.GetAt(i)->ProcessName;
			pTreeNode = pTreeCtrl->AddChildTreeNode(pTreeNode,pPPRProcess->ConvertToCATString(strNameAndNum),"");
		}
	}
	//设置第一个为选中状态
	int iTreeNodeRank = 1;
	CATBaseUnknown *opTreeNodeObject = new CATBaseUnknown();
	pTreeCtrl->GetRootTreeNodeAt(iTreeNodeRank,&opTreeNodeObject);
	pTreeCtrl->SelectTreeNode(opTreeNodeObject);
	AddCallback(pTreeCtrl,TreeNodeSelectNotif::ClassName(),(CATSubscriberMethod)&CDlgStepModel::OnTreeNodeSelect,NULL);

	return TRUE;
}

void CDlgStepModel::OnTreeNodeSelect(CATCallbackEvent event, void * client, CATNotification * iNotification, CATSubscriberData data, 
									 CATCallback callback)
{
	CATBaseUnknown * pTreeNode = NULL;
	pTreeCtrl -> GetSelectedTreeNode(&pTreeNode);
	pTreeCtrl -> GetCertainRootTreeNodeLocate(m_NodeLocate,pTreeNode);
	CATUnicodeString strName;
	pTreeCtrl->GetTreeNodeText(pTreeNode,strName);
	strNameAndNum = pPPRProcess->ConvertToCString(strName);
	CATUnicodeString strLocate;
	strLocate.BuildFromNum(m_NodeLocate);
	SetFocusOn(pTreeCtrl);
	if (GetProcessType(strNameAndNum))
	{
		GetStepContent(GetEditorContent(_EditorStepContent));
		m_nCurrentNum = GetSelectedProcessNode(strNameAndNum);
		SetDialogContent(m_nCurrentNum);
	}
}

CString CDlgStepModel::GetTreeNodeNum(CString strNode)
{
	CString strtemp;
	int start = 0;
	int end = strNode.Find(_T("."));
	strtemp = strNode.Mid(start,end);

	return strtemp;
}

int CDlgStepModel::GetSelectedProcessNode(CString strNode)
{
	CString strtemp = GetTreeNodeNum(strNode);
	for (int i=0; i<ProcessNodeArray.GetSize(); i++)
	{
		if (strtemp == ProcessNodeArray.GetAt(i)->ProcessStep)
		{
			return i;
		}
	}

	return -1;
}

CATBoolean CDlgStepModel::GetProcessType(CString strNodeName)
{
	if (strNodeName.Find(_T("-")) == -1)
	{
		return FALSE;
	}

	return TRUE;
}

int CDlgStepModel::GetStepBelongProcess(CString strNodeName,int step)
{
	CString strtemp = strNodeName;
	CString strResult = _T("");
	int start = 0;
	int end = -1;
	for (int i=0; i<step; i++)
	{
		strtemp = strtemp.Mid(end + 1,strtemp.GetLength());
		end = strtemp.Find(_T("-"));
		strResult = strtemp.Mid(start,end);
	}

	return _ttoi(strResult);
}

CATBoolean CDlgStepModel::GetStepBelongArray(CString strNodeName,CArray<CATPPRStepModel*,CATPPRStepModel*>& PPRStepModelArray)
{
	PPRStepModelArray.RemoveAll();
	int num = 0;
	for (int i=0; i<strNodeName.GetLength(); i++)
	{
		if (strNodeName.GetAt(i) == '-')
		{
			num++;
		}
	}
	//工步
	if (num == 1)
	{
		int n = GetStepBelongProcess(strNodeName,1)-1;
		if (n >= PPRProcessArray.GetSize())
		{
			return FALSE;
		}
		PPRStepModelArray.Copy(PPRProcessArray.GetAt(n)->PPRStepArray);
		return TRUE;
	}
	//子工步
	if (num == 2)
	{
		int n1 = GetStepBelongProcess(strNodeName,1)-1;
		int n2 = GetStepBelongProcess(strNodeName,2)-1;
		if (n1 >= PPRProcessArray.GetSize())
		{
			return FALSE;
		}
		if (n2 >= PPRProcessArray.GetAt(n1)->PPRStepArray.GetSize())
		{
			return FALSE;
		}
		PPRStepModelArray.Copy(PPRProcessArray.GetAt(n1)->PPRStepArray.GetAt(n2)->PPRStepArray);
		return TRUE;
	}
	//子工步
	if (num == 3)
	{
		int n1 = GetStepBelongProcess(strNodeName,1)-1;
		int n2 = GetStepBelongProcess(strNodeName,2)-1;
		int n3 = GetStepBelongProcess(strNodeName,3)-1;
		if (n1 >= PPRProcessArray.GetSize())
		{
			return FALSE;
		}
		if (n2 >= PPRProcessArray.GetAt(n1)->PPRStepArray.GetSize())
		{
			return FALSE;
		}
		if (n3 >= PPRProcessArray.GetAt(n1)->PPRStepArray.GetAt(n2)->PPRStepArray.GetSize())
		{
			return FALSE;
		}
		PPRStepModelArray.Copy(PPRProcessArray.GetAt(n1)->PPRStepArray.GetAt(n2)->PPRStepArray.GetAt(n3)->PPRStepArray);
		return TRUE;
	}

	return FALSE;
}

CATBoolean CDlgStepModel::SetStepBelongArray(CString strNodeName,CArray<CATPPRStepModel*,CATPPRStepModel*>& PPRStepModelArray)
{
	int num = 0;
	for (int i=0; i<strNodeName.GetLength(); i++)
	{
		if (strNodeName.GetAt(i) == '-')
		{
			num++;
		}
	}
	//工步
	if (num == 1)
	{
		int n = GetStepBelongProcess(strNodeName,1)-1;
		PPRProcessArray.GetAt(n)->PPRStepArray.Copy(PPRStepModelArray);
		return TRUE;
	}
	//子工步
	if (num == 2)
	{
		int n1 = GetStepBelongProcess(strNodeName,1)-1;
		int n2 = GetStepBelongProcess(strNodeName,2)-1;
		PPRProcessArray.GetAt(n1)->PPRStepArray.GetAt(n2)->PPRStepArray.Copy(PPRStepModelArray);
		return TRUE;
	}
	//子工步
	if (num == 3)
	{
		int n1 = GetStepBelongProcess(strNodeName,1)-1;
		int n2 = GetStepBelongProcess(strNodeName,2)-1;
		int n3 = GetStepBelongProcess(strNodeName,3)-1;
		PPRProcessArray.GetAt(n1)->PPRStepArray.GetAt(n2)->PPRStepArray.GetAt(n3)->PPRStepArray.Copy(PPRStepModelArray);
		return TRUE;
	}

	return FALSE;
}

CATBoolean CDlgStepModel::SetDialogContent(int Num)
{
	InitDialogBox();
	if (Num == -1)
	{
		return FALSE;
	}
	if (Num >= ProcessNodeArray.GetSize())
	{
		return FALSE;
	}
	CATUnicodeString strLayer;
	CATUnicodeString strTime;
	_EditorStepNum->SetLine(pPPRProcess->ConvertToCATString(ProcessNodeArray.GetAt(Num)->ProcessStep),0);
	_EditorStepName->SetLine(pPPRProcess->ConvertToCATString(ProcessNodeArray.GetAt(Num)->ProcessName),0);
	strTime.BuildFromNum(ProcessNodeArray.GetAt(Num)->beginTime);
	_EditorBeginTime->SetLine(strTime,0);
	strTime.BuildFromNum(ProcessNodeArray.GetAt(Num)->endTime);
	_EditorEndTime->SetLine(strTime,0);
	CString strPartName = _T("");
	for (int i=0; i<ProcessNodeArray.GetAt(Num)->MoveArray.GetSize(); i++)
	{
		_MultiListPartDetails->SetColumnItem(0,pPPRProcess->ConvertToCATString(ProcessNodeArray.GetAt(Num)->MoveArray.GetAt(i)->MoveName),i+1);
		strPartName = GetArrayContent(ProcessNodeArray.GetAt(Num)->MoveArray.GetAt(i)->ProcessItemArray);
		_MultiListPartDetails->SetColumnItem(1,pPPRProcess->ConvertToCATString(strPartName),i+1);
		strTime.BuildFromNum(ProcessNodeArray.GetAt(Num)->MoveArray.GetAt(i)->beginTime);
		_MultiListPartDetails->SetColumnItem(2,strTime,i+1);
		strTime.BuildFromNum(ProcessNodeArray.GetAt(Num)->MoveArray.GetAt(i)->endTime);
		_MultiListPartDetails->SetColumnItem(3,strTime,i+1);
	}
	GetOtherContent(pPPRProcess->ConvertToCATString(ProcessNodeArray.GetAt(Num)->ProcessStep));

	return TRUE;
}

CString CDlgStepModel::GetArrayContent(CArray<CString,CString>& ProcessItemArray)
{
	if (ProcessItemArray.IsEmpty())
	{
		return _T("");
	}
	CString strContent("");
	for (int i=0; i<ProcessItemArray.GetSize(); i++)
	{
		strContent = strContent + ProcessItemArray.GetAt(i) + _T(";");
	}

	return strContent;
}

CATUnicodeString CDlgStepModel::GetEditorContent(CATDlgEditor* _Editor)
{
	CATUnicodeString content("");
	CATUnicodeString linecontent("");
	int count = _Editor->GetLineCount();
	for (int i=0; i<count; i++)
	{
		_Editor->GetLine(linecontent,i);
		content = content + linecontent;
	}

	return content;
}

void CDlgStepModel::GetOtherContent(CATUnicodeString strNum)
{
	if (PPRProcessArray.IsEmpty())
	{
		return;
	}
	int num = GetStepBelongProcess(pPPRProcess->ConvertToCString(strNum),1);
	if (num == -1)
	{
		AfxMessageBox(_T("请先设置工序属性！"));
		return;
	}
	CArray<CATPPRStepModel*,CATPPRStepModel*> PPRStepModelArray;
	GetStepBelongArray(GetTreeNodeNum(strNameAndNum),PPRStepModelArray);
	for (int i=0; i<PPRStepModelArray.GetSize(); i++)
	{
		if (strNum == PPRStepModelArray.GetAt(i)->StepNum)
		{
			_EditorStepContent->SetLine(PPRStepModelArray.GetAt(i)->StepContent);
			_EditorStepRemark->SetLine(PPRStepModelArray.GetAt(i)->StepRemark);
			_EditorMaterialName->SetLine(PPRStepModelArray.GetAt(i)->StepMaterialName);
			_EditorMaterialRemark->SetLine(PPRStepModelArray.GetAt(i)->StepMaterialRemark);
			_EditorMaterialNum->SetLine(PPRStepModelArray.GetAt(i)->StepMaterialNum);
			_EditorEquiName->SetLine(PPRStepModelArray.GetAt(i)->StepEquiName);
			_EditorSpecEqui->SetLine(PPRStepModelArray.GetAt(i)->StepSpecEqui);
			_EditorSpecTool->SetLine(PPRStepModelArray.GetAt(i)->StepSpecTool);
			_EditorSpecFixture->SetLine(PPRStepModelArray.GetAt(i)->StepSpecFixture);
			_EditorEquiNum->SetLine(PPRStepModelArray.GetAt(i)->StepEquiNum);
			_EditorEquiRemark->SetLine(PPRStepModelArray.GetAt(i)->StepEquiRemark);
			_EditorEquiVersion->SetLine(PPRStepModelArray.GetAt(i)->StepEquiVersion);
			break;
		}
	}
	PPRStepModelArray.FreeExtra();
}

CATBoolean CDlgStepModel::GetRefreshContent(CATUnicodeString EditorStepNum)
{
	CATBoolean flag = FALSE;
	CArray<CATPPRStepModel*,CATPPRStepModel*> PPRStepModelArray;
	GetStepBelongArray(pPPRProcess->ConvertToCString(EditorStepNum),PPRStepModelArray);
	for (int i=0; i<PPRStepModelArray.GetSize(); i++)
	{
		if (EditorStepNum == PPRStepModelArray.GetAt(i)->StepNum)
		{
			PPRStepModelArray.GetAt(i)->StepNum = GetEditorContent(_EditorStepNum);
			PPRStepModelArray.GetAt(i)->StepName = GetEditorContent(_EditorStepName);
			PPRStepModelArray.GetAt(i)->StepStart = GetEditorContent(_EditorBeginTime);
			PPRStepModelArray.GetAt(i)->StepEnd = GetEditorContent(_EditorEndTime);
			PPRStepModelArray.GetAt(i)->StepContent = GetEditorContent(_EditorStepContent);
			PPRStepModelArray.GetAt(i)->StepRemark = GetEditorContent(_EditorStepRemark);
			PPRStepModelArray.GetAt(i)->StepMaterialNum = GetEditorContent(_EditorMaterialNum);
			PPRStepModelArray.GetAt(i)->StepMaterialName = GetEditorContent(_EditorMaterialName);
			PPRStepModelArray.GetAt(i)->StepMaterialRemark = GetEditorContent(_EditorMaterialRemark);
			PPRStepModelArray.GetAt(i)->StepEquiName = GetEditorContent(_EditorEquiName);
			PPRStepModelArray.GetAt(i)->StepEquiVersion = GetEditorContent(_EditorEquiVersion);
			PPRStepModelArray.GetAt(i)->StepEquiNum = GetEditorContent(_EditorEquiNum);
			PPRStepModelArray.GetAt(i)->StepSpecEqui = GetEditorContent(_EditorSpecEqui);
			PPRStepModelArray.GetAt(i)->StepSpecTool = GetEditorContent(_EditorSpecTool);
			PPRStepModelArray.GetAt(i)->StepSpecFixture = GetEditorContent(_EditorSpecFixture);
			PPRStepModelArray.GetAt(i)->StepSpecGage = GetEditorContent(_EditorSpecGage);
			PPRStepModelArray.GetAt(i)->StepEquiRemark = GetEditorContent(_EditorEquiRemark);
			int num = GetSelectedProcessNode(strNameAndNum);//确定该道工序或工步下的Move
			PPRStepModelArray.GetAt(i)->MoveArray.Copy(ProcessNodeArray.GetAt(num)->MoveArray);
			SetStepBelongArray(pPPRProcess->ConvertToCString(EditorStepNum),PPRStepModelArray);
			PPRStepModelArray.FreeExtra();
			flag = TRUE;
			break;
		}
	}

	return flag;
}

CATBoolean CDlgStepModel::GetStepContent(CATUnicodeString strContent)
{
	if (pPPRProcess->ConvertToCString(strContent) == _T(""))
	{
		return FALSE;
	}
	if (!GetRefreshContent(GetEditorContent(_EditorStepNum)))
	{
		CArray<CATPPRStepModel*,CATPPRStepModel*> PPRStepModelArray;
		GetStepBelongArray(pPPRProcess->ConvertToCString(GetEditorContent(_EditorStepNum)),PPRStepModelArray);
		CATPPRStepModel *pStep = new CATPPRStepModel();
		pStep->StepNum = GetEditorContent(_EditorStepNum);
		pStep->StepName = GetEditorContent(_EditorStepName);
		pStep->StepStart = GetEditorContent(_EditorBeginTime);
		pStep->StepEnd = GetEditorContent(_EditorEndTime);
		pStep->StepContent = GetEditorContent(_EditorStepContent);
		pStep->StepRemark = GetEditorContent(_EditorStepRemark);
		pStep->StepMaterialNum = GetEditorContent(_EditorMaterialNum);
		pStep->StepMaterialName = GetEditorContent(_EditorMaterialName);
		pStep->StepMaterialRemark = GetEditorContent(_EditorMaterialRemark);
		pStep->StepEquiName = GetEditorContent(_EditorEquiName);
		pStep->StepEquiVersion = GetEditorContent(_EditorEquiVersion);
		pStep->StepEquiNum = GetEditorContent(_EditorEquiNum);
		pStep->StepSpecEqui = GetEditorContent(_EditorSpecEqui);
		pStep->StepSpecTool = GetEditorContent(_EditorSpecTool);
		pStep->StepSpecFixture = GetEditorContent(_EditorSpecFixture);
		pStep->StepSpecGage = GetEditorContent(_EditorSpecGage);
		pStep->StepEquiRemark = GetEditorContent(_EditorEquiRemark);
		pStep->MoveArray.Copy(ProcessNodeArray.GetAt(m_nCurrentNum)->MoveArray);
		PPRStepModelArray.Add(pStep);
		SetStepBelongArray(pPPRProcess->ConvertToCString(GetEditorContent(_EditorStepNum)),PPRStepModelArray);
		PPRStepModelArray.FreeExtra();
	}

	return TRUE;
}

//-------------------------------------------------------------------------
// Callback on DiaOK of _CDlgStepModel
//-------------------------------------------------------------------------
void CDlgStepModel::OnCDlgStepModelDiaOKNotification(CATCommand* cmd, CATNotification* evt, CATCommandClientData data)
{
	// Add your code here
	GetStepContent(GetEditorContent(_EditorStepContent));
	CATProcessFile *pProcessFile = CATProcessFile::GetInstance();
	pProcessFile->PPRProcessArray.RemoveAll();
	pProcessFile->PPRProcessArray.Copy(PPRProcessArray);
	pProcessFile->SaveProcessInfo();
}
//-------------------------------------------------------------------------
// Callback on PushBActivate of _PushButtonSaveStepModel
//-------------------------------------------------------------------------
void CDlgStepModel::OnPushButtonSaveStepModelPushBActivateNotification(CATCommand* cmd, CATNotification* evt, CATCommandClientData data)
{
  // Add your code here
	CATUnicodeString str;
	CString strProcessName;
	//获取序号
	_EditorStepNum->GetLine(str,0);
	strProcessName = pPPRProcess->ConvertToCString(str);
	if (strProcessName.Find(_T("-")) == -1)
	{
		AfxMessageBox(_T("请选择工步节点！"));
		return;
	}
	//获取名称
	_EditorStepName->GetLine(str,0);
	strProcessName = strProcessName + _T(".") + pPPRProcess->ConvertToCString(str);
	CATModelGenerator *pModelGenerator = CATModelGenerator::GetInstance();
	pModelGenerator->GenerateHSFAndCGRModel(strProcessName);
}


//-------------------------------------------------------------------------
// Callback on PushBActivate of _PushButtonReviewStepModel
//-------------------------------------------------------------------------
void CDlgStepModel::OnPushButtonReviewStepModelPushBActivateNotification(CATCommand* cmd, CATNotification* evt, CATCommandClientData data)
{
  // Add your code here
	CDlgModelViewer *pModelViewer = CDlgModelViewer::GetInstance();
	CATUnicodeString str;
	CString strProcessName;
	//获取序号
	_EditorStepNum->GetLine(str,0);
	strProcessName = pPPRProcess->ConvertToCString(str);
	if (strProcessName.Find(_T("-")) == -1)
	{
		AfxMessageBox(_T("请选择工步节点！"));
		return;
	}
	//获取名称
	_EditorStepName->GetLine(str,0);
	strProcessName = strProcessName + _T(".") + pPPRProcess->ConvertToCString(str);
	pModelViewer->ProcessModelReview(strProcessName);
}


//-------------------------------------------------------------------------
// Callback on PushBActivate of _PushButtonSaveStepFigure
//-------------------------------------------------------------------------
void CDlgStepModel::OnPushButtonSaveStepFigurePushBActivateNotification(CATCommand* cmd, CATNotification* evt, CATCommandClientData data)
{
  // Add your code here
	CATUnicodeString str;
	CString strProcessName;
	//获取序号
	_EditorStepNum->GetLine(str,0);
	strProcessName = pPPRProcess->ConvertToCString(str);
	if (strProcessName.Find(_T("-")) == -1)
	{
		AfxMessageBox(_T("请选择工步节点！"));
		return;
	}
	//获取名称
	_EditorStepName->GetLine(str,0);
	strProcessName = strProcessName + _T(".") + pPPRProcess->ConvertToCString(str);
	CDlgFigureReview *pFigureReview = CDlgFigureReview::GetInstance();
	pFigureReview->InterceptCurrentView(strProcessName);
}


//-------------------------------------------------------------------------
// Callback on PushBActivate of _PushButtonReviewStepFigure
//-------------------------------------------------------------------------
void CDlgStepModel::OnPushButtonReviewStepFigurePushBActivateNotification(CATCommand* cmd, CATNotification* evt, CATCommandClientData data)
{
  // Add your code here
	CDlgFigureReview *pFigureReview = CDlgFigureReview::GetInstance();
	CATUnicodeString str;
	CString strProcessName;
	//获取序号
	_EditorStepNum->GetLine(str,0);
	strProcessName = pPPRProcess->ConvertToCString(str);
	if (strProcessName == _T(""))
	{
		AfxMessageBox(_T("请选择工序节点！"));
		return;
	}
	//获取名称
	_EditorStepName->GetLine(str,0);
	strProcessName = strProcessName + _T(".") + pPPRProcess->ConvertToCString(str);
	pFigureReview->ProcessFigureReview(strProcessName);
}

