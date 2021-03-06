// COPYRIGHT Dassault Systemes 2016
//===================================================================
//
// CDlgModelProperties.h
// The dialog : CDlgModelProperties
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
//  Dec 2016  Creation: Code generated by the CAA wizard  WANGJIAPENG
//===================================================================
#ifndef CDlgModelProperties_H
#define CDlgModelProperties_H

#include "CATDlgDialog.h"
#include "CATDlgInclude.h"
#include "CAATreeCtrl.h"
#include "TreeNodeSelectNotif.h"

//----------------------------------------------------------------------

/**
 * Describe the purpose of your panel here.
 * <p>
 * Using this prefered syntax will enable mkdoc to document your class.
 * <p>
 * refer to programming resources of Dialog framework.
 * (consult base class description).
 */
class CDlgModelProperties: public CATDlgDialog
{
  // Allows customization/internationalization of command's messages
  // ---------------------------------------------------------------
  DeclareResource( CDlgModelProperties, CATDlgDialog )

  public:

  CDlgModelProperties();
  virtual ~CDlgModelProperties();

  void Build ();
  //����BOM��
  CATBoolean GenerateBOMTree(CATDlgFrame* frame);

  protected:
  /**
  * Callback on DiaCANCEL of _CDlgModelProperties
  *
  * <br><b>Role</b>: This method handles the DiaCANCEL event and does
  *   a check on ...
  *
  * @param Command [in]
  *   Pointer to the publisher of the event.
  * @param Notification [in]
  *   Pointer to the notification representing the event.
  * @param data [in]
  *   Possible useful data transmitted to the command OnCDlgModelPropertiesDiaCANCELNotification
  *
  *
  */
  virtual void OnCDlgModelPropertiesDiaCANCELNotification (CATCommand *, CATNotification* , CATCommandClientData data);
  /**
  * Callback on DiaOK of _CDlgModelProperties
  *
  * <br><b>Role</b>: This method handles the DiaOK event and does
  *   a check on ...
  *
  * @param Command [in]
  *   Pointer to the publisher of the event.
  * @param Notification [in]
  *   Pointer to the notification representing the event.
  * @param data [in]
  *   Possible useful data transmitted to the command OnCDlgModelPropertiesDiaOKNotification
  *
  *
  */
  virtual void OnCDlgModelPropertiesDiaOKNotification (CATCommand *, CATNotification* , CATCommandClientData data);

  private:


//CAA2 WIZARD WIDGET DECLARATION SECTION
 CATDlgFrame*      _Frame001;
 CATDlgCheckButton*      _CheckButton002;
 CATDlgCombo*      _Combo003;
 CATDlgCheckButton*      _CheckButton004;
 CATDlgCombo*      _Combo005;
 CATDlgCombo*      _Combo006;
 CATDlgCheckButton*      _CheckButton007;
 CATDlgCheckButton*      _CheckButton008;
 CATDlgCombo*      _Combo009;
 CATDlgCheckButton*      _CheckButton010;
 CATDlgCombo*      _Combo012;
 CATDlgCheckButton*      _CheckButton013;
 CATDlgCombo*      _Combo014;
 CATDlgCheckButton*      _CheckButton015;
 CATDlgCombo*      _Combo016;
 CATDlgCheckButton*      _CheckButton017;
 CATDlgCombo*      _Combo018;
 CATDlgCombo*      _Combo020;
 CATDlgCheckButton*      _CheckButton021;
 CATDlgCheckButton*      _CheckButton022;
 CATDlgCombo*      _Combo023;
//END CAA2 WIZARD WIDGET DECLARATION SECTION
  CAATreeCtrl			*pTreeCtrl;
};

//----------------------------------------------------------------------

#endif
