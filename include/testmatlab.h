//
// MATLAB Compiler: 6.3 (R2016b)
// Date: Sat May 07 11:45:17 2022
// Arguments: "-B" "macro_default" "-W" "cpplib:testmatlab" "-T" "link:lib"
// "-d" "E:\MatlabCode\FRFT_matlab\frfrcode190414\testmatlab\for_testing" "-v"
// "E:\MatlabCode\FRFT_matlab\frfrcode190414\testmatlab.m" 
//

#ifndef __testmatlab_h
#define __testmatlab_h 1

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

#ifdef EXPORTING_testmatlab
#define PUBLIC_testmatlab_C_API __global
#else
#define PUBLIC_testmatlab_C_API /* No import statement needed. */
#endif

#define LIB_testmatlab_C_API PUBLIC_testmatlab_C_API

#elif defined(_HPUX_SOURCE)

#ifdef EXPORTING_testmatlab
#define PUBLIC_testmatlab_C_API __declspec(dllexport)
#else
#define PUBLIC_testmatlab_C_API __declspec(dllimport)
#endif

#define LIB_testmatlab_C_API PUBLIC_testmatlab_C_API


#else

#define LIB_testmatlab_C_API

#endif

/* This symbol is defined in shared libraries. Define it here
 * (to nothing) in case this isn't a shared library. 
 */
#ifndef LIB_testmatlab_C_API 
#define LIB_testmatlab_C_API /* No special import/export declaration */
#endif

extern LIB_testmatlab_C_API 
bool MW_CALL_CONV testmatlabInitializeWithHandlers(
       mclOutputHandlerFcn error_handler, 
       mclOutputHandlerFcn print_handler);

extern LIB_testmatlab_C_API 
bool MW_CALL_CONV testmatlabInitialize(void);

extern LIB_testmatlab_C_API 
void MW_CALL_CONV testmatlabTerminate(void);



extern LIB_testmatlab_C_API 
void MW_CALL_CONV testmatlabPrintStackTrace(void);

extern LIB_testmatlab_C_API 
bool MW_CALL_CONV mlxTestmatlab(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus

/* On Windows, use __declspec to control the exported API */
#if defined(_MSC_VER) || defined(__BORLANDC__)

#ifdef EXPORTING_testmatlab
#define PUBLIC_testmatlab_CPP_API __declspec(dllexport)
#else
#define PUBLIC_testmatlab_CPP_API __declspec(dllimport)
#endif

#define LIB_testmatlab_CPP_API PUBLIC_testmatlab_CPP_API

#else

#if !defined(LIB_testmatlab_CPP_API)
#if defined(LIB_testmatlab_C_API)
#define LIB_testmatlab_CPP_API LIB_testmatlab_C_API
#else
#define LIB_testmatlab_CPP_API /* empty! */ 
#endif
#endif

#endif

extern LIB_testmatlab_CPP_API void MW_CALL_CONV testmatlab(int nargout, mwArray& c, const mwArray& a, const mwArray& b);

#endif
#endif
