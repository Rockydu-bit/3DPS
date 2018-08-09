#ifdef  _WINDOWS_SOURCE
#ifdef  __ObjectBaseMdl
#define ExportedByObjectBaseMdl     __declspec(dllexport)
#else
#define ExportedByObjectBaseMdl     __declspec(dllimport)
#endif
#else
#define ExportedByObjectBaseMdl
#endif
