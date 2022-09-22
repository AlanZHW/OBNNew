//
// MATLAB Compiler: 6.3 (R2016b)
// Date: Sun Jul 31 15:03:25 2022
// Arguments: "-B" "macro_default" "-W" "cpplib:FrftProcess" "-T" "link:lib"
// "-d" "E:\nnn\FrftProcess\for_testing" "-v"
// "D:\gobs\frfrcode190414\frftMtlab\bandpass10to15k.m"
// "D:\gobs\frfrcode190414\frftMtlab\frft.m"
// "D:\gobs\frfrcode190414\frftMtlab\frftProcess.m" 
//

#ifndef __FrftProcess_h
#define __FrftProcess_h 1

#if defined(__cplusplus) && !defined(mclmcrrt_h) && defined(__linux__)
#  pragma implementation "mclmcrrt.h"
#endif
#include "mclmcrrt.h"
#include "mclcppclass.h"
#ifdef __cplusplus
extern "C" {
#endif

#if defined(__SUNPRO_CC)
/* Solaris shared libraries use __global, rather than mapfiles
 * to define the API exported from a shared library. __global is
 * only necessary when building the library -- files including
 * this header file to use the library do not need the __global
 * declaration; hence the EXPORTING_<library> logic.
 */

#ifdef EXPORTING_FrftProcess
#define PUBLIC_FrftProcess_C_API __global
#else
#define PUBLIC_FrftProcess_C_API /* No import statement needed. */
#endif

#define LIB_FrftProcess_C_API PUBLIC_FrftProcess_C_API

#elif defined(_HPUX_SOURCE)

#ifdef EXPORTING_FrftProcess
#define PUBLIC_FrftProcess_C_API __declspec(dllexport)
#else
#define PUBLIC_FrftProcess_C_API __declspec(dllimport)
#endif

#define LIB_FrftProcess_C_API PUBLIC_FrftProcess_C_API


#else

#define LIB_FrftProcess_C_API

#endif

/* This symbol is defined in shared libraries. Define it here
 * (to nothing) in case this isn't a shared library. 
 */
#ifndef LIB_FrftProcess_C_API 
#define LIB_FrftProcess_C_API /* No special import/export declaration */
#endif

extern LIB_FrftProcess_C_API 
bool MW_CALL_CONV FrftProcessInitializeWithHandlers(
       mclOutputHandlerFcn error_handler, 
       mclOutputHandlerFcn print_handler);

extern LIB_FrftProcess_C_API 
bool MW_CALL_CONV FrftProcessInitialize(void);

extern LIB_FrftProcess_C_API 
void MW_CALL_CONV FrftProcessTerminate(void);



extern LIB_FrftProcess_C_API 
void MW_CALL_CONV FrftProcessPrintStackTrace(void);

extern LIB_FrftProcess_C_API 
bool MW_CALL_CONV mlxBandpass10to15k(int nlhs, mxArray *plhs[], int nrhs, mxArray 
                                     *prhs[]);

extern LIB_FrftProcess_C_API 
bool MW_CALL_CONV mlxFrft(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);

extern LIB_FrftProcess_C_API 
bool MW_CALL_CONV mlxFrftProcess(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus

/* On Windows, use __declspec to control the exported API */
#if defined(_MSC_VER) || defined(__BORLANDC__)

#ifdef EXPORTING_FrftProcess
#define PUBLIC_FrftProcess_CPP_API __declspec(dllexport)
#else
#define PUBLIC_FrftProcess_CPP_API __declspec(dllimport)
#endif

#define LIB_FrftProcess_CPP_API PUBLIC_FrftProcess_CPP_API

#else

#if !defined(LIB_FrftProcess_CPP_API)
#if defined(LIB_FrftProcess_C_API)
#define LIB_FrftProcess_CPP_API LIB_FrftProcess_C_API
#else
#define LIB_FrftProcess_CPP_API /* empty! */ 
#endif
#endif

#endif

extern LIB_FrftProcess_CPP_API void MW_CALL_CONV bandpass10to15k(int nargout, mwArray& Hd);

extern LIB_FrftProcess_CPP_API void MW_CALL_CONV frft(int nargout, mwArray& Faf, const mwArray& f, const mwArray& a);

extern LIB_FrftProcess_CPP_API void MW_CALL_CONV frftProcess(const mwArray& N1, const mwArray& fs, const mwArray& distance, const mwArray& B, const mwArray& time, const mwArray& pAcuFName);

#endif
#endif
