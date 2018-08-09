#ifdef  _WINDOWS_SOURCE
#ifdef  __ktTreeCtrlFrameUUID
#define ExportedByktTreeCtrlFrameUUID     __declspec(dllexport)
#else
#define ExportedByktTreeCtrlFrameUUID     __declspec(dllimport)
#endif
#else
#define ExportedByktTreeCtrlFrameUUID
#endif
