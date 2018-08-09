#ifdef  _WINDOWS_SOURCE
#ifdef  __ktTreeCtrlModule
#define ExportedByktTreeCtrlModule     __declspec(dllexport)
#else
#define ExportedByktTreeCtrlModule     __declspec(dllimport)
#endif
#else
#define ExportedByktTreeCtrlModule
#endif
