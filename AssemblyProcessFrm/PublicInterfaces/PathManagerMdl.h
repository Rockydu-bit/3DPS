#ifdef  _WINDOWS_SOURCE
#ifdef  __PathManagerMdl
#define ExportedByPathManagerMdl     __declspec(dllexport)
#else
#define ExportedByPathManagerMdl     __declspec(dllimport)
#endif
#else
#define ExportedByPathManagerMdl
#endif
