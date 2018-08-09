#ifdef  _WINDOWS_SOURCE
#ifdef  __PathManagerUIMdl
#define ExportedByPathManagerUIMdl     __declspec(dllexport)
#else
#define ExportedByPathManagerUIMdl     __declspec(dllimport)
#endif
#else
#define ExportedByPathManagerUIMdl
#endif
