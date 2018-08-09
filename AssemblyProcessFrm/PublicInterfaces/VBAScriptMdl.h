#ifdef  _WINDOWS_SOURCE
#ifdef  __VBAScriptMdl
#define ExportedByVBAScriptMdl     __declspec(dllexport)
#else
#define ExportedByVBAScriptMdl     __declspec(dllimport)
#endif
#else
#define ExportedByVBAScriptMdl
#endif
