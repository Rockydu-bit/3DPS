#ifdef  _WINDOWS_SOURCE
#ifdef  __FileManagerMdl
#define ExportedByFileManagerMdl     __declspec(dllexport)
#else
#define ExportedByFileManagerMdl     __declspec(dllimport)
#endif
#else
#define ExportedByFileManagerMdl
#endif
