#ifndef UVBOOK_PLUGIN_SYSTEM
#define UVBOOK_PLUGIN_SYSTEM

#if defined (_WIN32)
#define  EXTERN __declspec(dllexport)
#else /* defined (_WIN32) */
 #define EXTERN
#endif


#ifdef __cplusplus
extern "C" {
#endif

// Plugin authors should use this to register their plugins with mfp.
EXTERN void mfp_register(const char *name);
EXTERN void initialize();

#ifdef __cplusplus
}
#endif

#endif
