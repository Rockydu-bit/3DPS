#ifdef  _WINDOWS_SOURCE
#ifdef  __DisAssemblyUIMdl
#define ExportedByDisAssemblyUIMdl     __declspec(dllexport)
#else
#define ExportedByDisAssemblyUIMdl     __declspec(dllimport)
#endif
#else
#define ExportedByDisAssemblyUIMdl
#endif
