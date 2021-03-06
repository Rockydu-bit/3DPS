// COPYRIGHT Dassault Systemes 2015
//===================================================================
//
// CATAppSettings.cpp
// Header definition of CATAppSettings
//
//===================================================================
//
// Usage notes:
//
//===================================================================
//
//  Oct 2015  Creation: Code generated by the CAA wizard  WANGJIAPENG
//===================================================================
#include "CATAppSettings.h"
 
CATImplementClass( CATAppSettings,
                   Implementation, 
                   CATStringObject,
                   CATNull );
 
int CATAppSettings::m_nFont = 0;
int CATAppSettings::m_nColor = 0;
int CATAppSettings::m_nSize = 0;
int CATAppSettings::m_nFigure = 0;
int CATAppSettings::m_nPosition = 0;
//-----------------------------------------------------------------------------
// CATAppSettings : constructor
//-----------------------------------------------------------------------------
CATAppSettings::CATAppSettings():
    CATStringObject()
{
}

//-----------------------------------------------------------------------------
// CATAppSettings : destructor
//-----------------------------------------------------------------------------
CATAppSettings::~CATAppSettings()
{
}
 
//-----------------------------------------------------------------------------
// CATAppSettings : copy constructor
//-----------------------------------------------------------------------------
CATAppSettings::CATAppSettings(CATAppSettings& original):
   CATStringObject(original)
{
}
 
//-----------------------------------------------------------------------------
// CATAppSettings : equal operator
//-----------------------------------------------------------------------------
CATAppSettings& CATAppSettings::operator=(CATAppSettings& original)
{
   CATStringObject::operator=(original);
   return *this;
}

bool CATAppSettings::GetSettings()
{
	CString strContent;

	TCHAR filename[_MAX_PATH+_MAX_FNAME];
	::GetModuleFileName(NULL,filename,sizeof(filename));
	CString strSldexeLoation(filename);
	CString strDirectory(strSldexeLoation.Left(strSldexeLoation.ReverseFind(_T('\\'))));
	strDirectory.FreeExtra();

	CString strPath = strDirectory;
	strPath = strPath + _T("\\CAppSettings.ini");
	CStdioFile fifFile(strPath,CFile::modeRead|CFile::modeReadWrite);
	fifFile.ReadString(strContent);
	m_nFont = _ttoi(strContent);
	fifFile.ReadString(strContent);
	m_nColor = _ttoi(strContent);
	fifFile.ReadString(strContent);
	m_nSize = _ttoi(strContent);
	fifFile.ReadString(strContent);
	m_nFigure = _ttoi(strContent);
	fifFile.ReadString(strContent);
	m_nPosition = _ttoi(strContent);

	return false;
}
