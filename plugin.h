#ifndef UVBOOK_PLUGIN_SYSTEM
#define UVBOOK_PLUGIN_SYSTEM

#if defined (WIN32) && defined (BUILD_SHARED_LIBS)
#if defined (_MSC_VER)
#pragma warning(disable: 4251)
#endif
   #if defined(hello_EXPORT)
     #define  MYLIB_EXPORT __declspec(dllexport)
   #else
     #define  MYLIB_EXPORT __declspec(dllimport)
   #endif
#else
  #define MYLIB_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

// Plugin authors should use this to register their plugins with mfp.
MYLIB_EXPORT void mfp_register(const char *name);

#ifdef __cplusplus
}
#endif

#endif
