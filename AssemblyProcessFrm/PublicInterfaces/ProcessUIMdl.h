#ifdef  _WINDOWS_SOURCE
#ifdef  __ProcessUIMdl
#define ExportedByProcessUIMdl     __declspec(dllexport)
#else
#define ExportedByProcessUIMdl     __declspec(dllimport)
#endif
#else
#define ExportedByProcessUIMdl
#endif
