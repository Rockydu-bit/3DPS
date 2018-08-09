// COPYRIGHT Dassault Systemes 2015
//===================================================================
//
// CDlgStepModel.h
// The dialog : CDlgStepModel
//
//===================================================================
//
// Usage notes:
//
//===================================================================
//CAA2 Wizard Generation Report
//   DIALOG
//End CAA2 Wizard Generation Report
//
//  Nov 2015  Creation: Code generated by the CAA wizard  WANGJIAPENG
//===================================================================
#ifndef CDlgStepModel_H
#define CDlgStepModel_H

#include "ProcessUIMdl.h"
#include "CATDlgDialog.h"
#include "CATDlgInclude.h"
#include "CATPPRProcess.h"
#include "CAATreeCtrl.h"
#include "TreeNodeSelectNotif.h"
#include "CATPPRProcessModel.h"
#include "CATPPRStepModel.h"
#include "stdafx.h"

class ExportedByProcessUIMdl CDlgStepModel: public CATDlgDialog
{
	// Allows customization/internationalization of command's messages
	// ---------------------------------------------------------------
	DeclareResource( CDlgStepModel, CATDlgDialog )

public:

	CDlgStepModel();
	virtual ~CDlgStepModel();

public:
	static CDlgStepModel* GetInstance();
public:
	static CDlgStepModel* m_pDlgStepModel;

	int m_NodeLocate;
	int m_nCurrentNum;//当前节点的序号
	CString strNameAndNum;//树节点名称

	//Process所有工艺信息
	CArray<CATPPRProcessModel*,CATPPRProcessModel*> PPRProcessArray;
	//Process所有工步信息,从工艺文件获取
	CArray<CATPPRStepModel*,CATPPRStepModel*> PPRStepArray;
	//Process所有节点信息
	CArray<ProcessNode*,ProcessNode*> ProcessNodeArray;
	//Process所有层
	CArray<int,int> LayerArray;

	void Build ();

	//清空对话框的内容
	void InitDialogBox();
	//初始化层
	CATBoolean InitLayerArray();
	//生成BOM树
	CATBoolean GenerateBOMTree(CATDlgFrame* frame,CArray<ProcessNode*,ProcessNode*>& ProcessNodeArray);
	//添加对用户交互选择树形结构控件的响应
	void OnTreeNodeSelect(CATCallbackEvent event,void * client,CATNotification* iNotification,CATSubscriberData data,CATCallback callback);
	//从名称中获取编号
	CString GetTreeNodeNum(CString strNode);
	//获取当前选中的树节点对应的总工序节点
	int GetSelectedProcessNode(CString strNode);
	//判断当前选定的节点是否为工步节点或者工步的子节点
	CATBoolean GetProcessType(CString strNodeName);
	//判断一个工步属于第几个工序，返回序号
	int GetStepBelongProcess(CString strNodeName,int step);
	//判断一个工步属于第几个工序或者工步
	CATBoolean GetStepBelongArray(CString strNodeName,CArray<CATPPRStepModel*,CATPPRStepModel*>& PPRStepModelArray);
	//设置一个工步属于第几个工序或者工步
	CATBoolean SetStepBelongArray(CString strNodeName,CArray<CATPPRStepModel*,CATPPRStepModel*>& PPRStepModelArray);
	//设置对话框的内容
	CATBoolean SetDialogContent(int Num);
	//获取一个Array中的所有名称
	CString GetArrayContent(CArray<CString,CString>& ProcessItemArray);
	//获取Editor的内容，可能多行
	CATUnicodeString GetEditorContent(CATDlgEditor* _Editor);
	//从XML文件中获取其它工艺内容
	void GetOtherContent(CATUnicodeString strNodeName);
	//判断工序内容是否修改
	CATBoolean GetRefreshContent(CATUnicodeString EditorStepNum);
	//点击树不同节点时，更新工步内容
	CATBoolean GetStepContent(CATUnicodeString strContent);

protected:
  /**
  * Callback on PushBActivate of _PushButtonReviewStepFigure
  *
  * <br><b>Role</b>: This method handles the PushBActivate event and does
  *   a check on ...
  *
  * @param Command [in]
  *   Pointer to the publisher of the event.
  * @param Notification [in]
  *   Pointer to the notification representing the event.
  * @param data [in]
  *   Possible useful data transmitted to the command OnPushButtonReviewStepFigurePushBActivateNotification
  *
  *
  */
  virtual void OnPushButtonReviewStepFigurePushBActivateNotification (CATCommand *, CATNotification* , CATCommandClientData data);
  /**
  * Callback on PushBActivate of _PushButtonSaveStepFigure
  *
  * <br><b>Role</b>: This method handles the PushBActivate event and does
  *   a check on ...
  *
  * @param Command [in]
  *   Pointer to the publisher of the event.
  * @param Notification [in]
  *   Pointer to the notification representing the event.
  * @param data [in]
  *   Possible useful data transmitted to the command OnPushButtonSaveStepFigurePushBActivateNotification
  *
  *
  */
  virtual void OnPushButtonSaveStepFigurePushBActivateNotification (CATCommand *, CATNotification* , CATCommandClientData data);
  /**
  * Callback on PushBActivate of _PushButtonReviewStepModel
  *
  * <br><b>Role</b>: This method handles the PushBActivate event and does
  *   a check on ...
  *
  * @param Command [in]
  *   Pointer to the publisher of the event.
  * @param Notification [in]
  *   Pointer to the notification representing the event.
  * @param data [in]
  *   Possible useful data transmitted to the command OnPushButtonReviewStepModelPushBActivateNotification
  *
  *
  */
  virtual void OnPushButtonReviewStepModelPushBActivateNotification (CATCommand *, CATNotification* , CATCommandClientData data);
  /**
  * Callback on PushBActivate of _PushButtonSaveStepModel
  *
  * <br><b>Role</b>: This method handles the PushBActivate event and does
  *   a check on ...
  *
  * @param Command [in]
  *   Pointer to the publisher of the event.
  * @param Notification [in]
  *   Pointer to the notification representing the event.
  * @param data [in]
  *   Possible useful data transmitted to the command OnPushButtonSaveStepModelPushBActivateNotification
  *
  *
  */
  virtual void OnPushButtonSaveStepModelPushBActivateNotification (CATCommand *, CATNotification* , CATCommandClientData data);

	virtual void OnCDlgStepModelDiaOKNotification (CATCommand *, CATNotification* , CATCommandClientData data);

private:

	//CAA2 WIZARD WIDGET DECLARATION SECTION
 CATDlgTabContainer*      _TabContainer001;
 CATDlgTabPage*      _TabPageStep;
 CATDlgLabel*      _LabelStepNum;
 CATDlgEditor*      _EditorStepNum;
 CATDlgLabel*      _LabelStepName;
 CATDlgEditor*      _EditorStepName;
 CATDlgLabel*      _LabelBeginTime;
 CATDlgEditor*      _EditorBeginTime;
 CATDlgLabel*      _LabelEndTime;
 CATDlgEditor*      _EditorEndTime;
 CATDlgFrame*      _FrameStepContent;
 CATDlgEditor*      _EditorStepContent;
 CATDlgFrame*      _FrameStepRemark;
 CATDlgEditor*      _EditorStepRemark;
 CATDlgTabPage*      _TabPageStepMaterial;
 CATDlgLabel*      _LabelMaterialNum;
 CATDlgEditor*      _EditorMaterialNum;
 CATDlgLabel*      _LabelMaterialName;
 CATDlgEditor*      _EditorMaterialName;
 CATDlgFrame*      _FrameMaterialRemark;
 CATDlgEditor*      _EditorMaterialRemark;
 CATDlgTabPage*      _TabPageEquiAndTool;
 CATDlgLabel*      _LabelEquiName;
 CATDlgEditor*      _EditorEquiName;
 CATDlgLabel*      _LabelEquiVersion;
 CATDlgEditor*      _EditorEquiVersion;
 CATDlgLabel*      _LabelEquiNum;
 CATDlgEditor*      _EditorEquiNum;
 CATDlgLabel*      _LabelSpecEqui;
 CATDlgEditor*      _EditorSpecEqui;
 CATDlgLabel*      _LabelSpecTool;
 CATDlgEditor*      _EditorSpecTool;
 CATDlgLabel*      _LabelSpecFixture;
 CATDlgEditor*      _EditorSpecFixture;
 CATDlgLabel*      _LabelSpecGage;
 CATDlgEditor*      _EditorSpecGage;
 CATDlgFrame*      _FrameEquiRemark;
 CATDlgEditor*      _EditorEquiRemark;
 CATDlgTabPage*      _TabPageOperations;
 CATDlgMultiList*      _MultiListPartDetails;
 CATDlgFrame*      _Frame019;
 CATDlgLabel*      _Label020;
 CATDlgFrame*      _FrameTree;
 CATDlgFrame*      _Frame021;
 CATDlgPushButton*      _PushButtonSaveStepModel;
 CATDlgPushButton*      _PushButtonReviewStepModel;
 CATDlgPushButton*      _PushButtonSaveStepFigure;
 CATDlgPushButton*      _PushButtonReviewStepFigure;
//END CAA2 WIZARD WIDGET DECLARATION SECTION
CATPPRProcess			*pPPRProcess;
CAATreeCtrl				*pTreeCtrl;
};

//----------------------------------------------------------------------

#endif