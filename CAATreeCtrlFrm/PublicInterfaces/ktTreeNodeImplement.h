#ifdef  _WINDOWS_SOURCE
#ifdef  __ktTreeNodeImplement
#define ExportedByktTreeNodeImplement     __declspec(dllexport)
#else
#define ExportedByktTreeNodeImplement     __declspec(dllimport)
#endif
#else
#define ExportedByktTreeNodeImplement
#endif
