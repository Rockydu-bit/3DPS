// COPYRIGHT Dassault Systemes 2015
//===================================================================
//
// CDlgOutputFile.h
// The dialog : CDlgOutputFile
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
#ifndef CDlgOutputFile_H
#define CDlgOutputFile_H

#include "ProcessUIMdl.h"
#include "CATDlgDialog.h"
#include "CATDlgInclude.h"
#include "CATPPRProcessModel.h"
#include "CATPPRStepModel.h"
#include "stdafx.h"
#include "afxcmn.h"
#include "locale.h"

//----------------------------------------------------------------------

/**
 * Describe the purpose of your panel here.
 * <p>
 * Using this prefered syntax will enable mkdoc to document your class.
 * <p>
 * refer to programming resources of Dialog framework.
 * (consult base class description).
 */
class ExportedByProcessUIMdl CDlgOutputFile: public CATDlgDialog
{
  // Allows customization/internationalization of command's messages
  // ---------------------------------------------------------------
  DeclareResource( CDlgOutputFile, CATDlgDialog )

  public:

  CDlgOutputFile();
  virtual ~CDlgOutputFile();

  CString strOutputPath;
  bool m_bProcess;
  bool m_bParts;
  bool m_bProcessEqui;

  //Process所有工艺信息
  CArray<CATPPRProcessModel*,CATPPRProcessModel*> PPRProcessArray;
  //Process所有工步信息,从工艺文件获取
  CArray<CATPPRStepModel*,CATPPRStepModel*> PPRStepArray;

  void Build ();
  CATBoolean OutputHtml();


  protected:

  virtual void OnCheckButtonProcessEquiChkBModifyNotification (CATCommand *, CATNotification* , CATCommandClientData data);

  virtual void OnCheckButtonPartsChkBModifyNotification (CATCommand *, CATNotification* , CATCommandClientData data);

  virtual void OnCheckButtonProcessChkBModifyNotification (CATCommand *, CATNotification* , CATCommandClientData data);

  virtual void OnPushButtonBrowserPushBActivateNotification (CATCommand *, CATNotification* , CATCommandClientData data);

  virtual void OnCDlgOutputFileDiaOKNotification (CATCommand *, CATNotification* , CATCommandClientData data);

  private:


//CAA2 WIZARD WIDGET DECLARATION SECTION
 CATDlgFrame*      _Frame006;
 CATDlgCheckButton*      _CheckButtonProcess;
 CATDlgCheckButton*      _CheckButtonParts;
 CATDlgCheckButton*      _CheckButtonProcessEqui;
 CATDlgFrame*      _Frame007;
 CATDlgEditor*      _EditorAddress;
 CATDlgPushButton*      _PushButtonBrowser;
//END CAA2 WIZARD WIDGET DECLARATION SECTION


//END CAA2 WIZARD WIDGET DECLARATION SECTION


//END CAA2 WIZARD WIDGET DECLARATION SECTION
};

//----------------------------------------------------------------------

#endif
