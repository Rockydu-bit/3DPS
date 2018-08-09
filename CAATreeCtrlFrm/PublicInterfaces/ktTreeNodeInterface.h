#ifdef  _WINDOWS_SOURCE
#ifdef  __ktTreeNodeInterface
#define ExportedByktTreeNodeInterface     __declspec(dllexport)
#else
#define ExportedByktTreeNodeInterface     __declspec(dllimport)
#endif
#else
#define ExportedByktTreeNodeInterface
#endif
