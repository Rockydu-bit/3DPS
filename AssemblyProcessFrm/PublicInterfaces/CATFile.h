// COPYRIGHT Dassault Systemes 2015
//===================================================================
//
// CATFile.h
// Header definition of CATFile
//
//===================================================================
//
// Usage notes:
//
//===================================================================
//
//  Oct 2015  Creation: Code generated by the CAA wizard  WANGJIAPENG
//===================================================================
#ifndef CATFile_H
#define CATFile_H

#include "FileManagerMdl.h"
#include "CATStringObject.h"
#include "stdafx.h"

class ExportedByFileManagerMdl CATFile: public CATStringObject
{
  CATDeclareClass;

  public:

  // Standard constructors and destructors
  // -------------------------------------
     CATFile ();
     virtual ~CATFile ();

  // Copy constructor and equal operator
  // -----------------------------------
  CATFile (CATFile &);
  CATFile& operator=(CATFile&);

public:
	static CATFile* GetInstance();
public:
	static CATFile* m_pFile;

  //选择一个文件夹并输入文件名
  CString OpenOneFileAndName();
  //打开一个文件
  CString OpenOneFile();
  //打开一个文件夹
  CString OpenOneFolder();
  //打开一个或多个文件,类型为.*
  CATBoolean OpenOneOrMoreFiles(CString strType,CArray<CString,CString>& PathArray);
  //获取文件名称，包括.*
  CString GetFileName(CString strFilePath);
  //获取文件名，不包括.*
  CString GetPartName(CString strPartName);
  //判断一个文件夹下文件的数量
  int GetFileCount(CString strPath,CStringArray &strPathArray,CStringArray &strArray);
  //删除文件夹下的某个文件
  CATBoolean DeletePathFile(CString strPath);
};

//-----------------------------------------------------------------------

#endif
