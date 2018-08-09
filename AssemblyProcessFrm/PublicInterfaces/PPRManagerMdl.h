#ifdef  _WINDOWS_SOURCE
#ifdef  __PPRManagerMdl
#define ExportedByPPRManagerMdl     __declspec(dllexport)
#else
#define ExportedByPPRManagerMdl     __declspec(dllimport)
#endif
#else
#define ExportedByPPRManagerMdl
#endif
