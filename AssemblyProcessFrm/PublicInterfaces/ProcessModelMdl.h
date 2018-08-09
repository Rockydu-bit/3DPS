#ifdef  _WINDOWS_SOURCE
#ifdef  __ProcessModelMdl
#define ExportedByProcessModelMdl     __declspec(dllexport)
#else
#define ExportedByProcessModelMdl     __declspec(dllimport)
#endif
#else
#define ExportedByProcessModelMdl
#endif
