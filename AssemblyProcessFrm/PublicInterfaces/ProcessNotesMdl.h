#ifdef  _WINDOWS_SOURCE
#ifdef  __ProcessNotesMdl
#define ExportedByProcessNotesMdl     __declspec(dllexport)
#else
#define ExportedByProcessNotesMdl     __declspec(dllimport)
#endif
#else
#define ExportedByProcessNotesMdl
#endif
