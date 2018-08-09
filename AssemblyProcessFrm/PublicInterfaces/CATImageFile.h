// COPYRIGHT Dassault Systemes 2015
//===================================================================
//
// CATImageFile.h
// Header definition of CATImageFile
//
//===================================================================
//
// Usage notes:
//
//===================================================================
//
//  Oct 2015  Creation: Code generated by the CAA wizard  WANGJIAPENG
//===================================================================
#ifndef CATImageFile_H
#define CATImageFile_H

#include "FileManagerMdl.h"
#include "CATFile.h"

class ExportedByFileManagerMdl CATImageFile: public CATFile
{
  CATDeclareClass;

  public:

  // Standard constructors and destructors
  // -------------------------------------
     CATImageFile ();
     virtual ~CATImageFile ();

public:
	static CATImageFile* GetInstance();
public:
	static CATImageFile* m_pImageFile;

  // Copy constructor and equal operator
  // -----------------------------------
  CATImageFile (CATImageFile &);
  CATImageFile& operator=(CATImageFile&);

};

//-----------------------------------------------------------------------

#endif
