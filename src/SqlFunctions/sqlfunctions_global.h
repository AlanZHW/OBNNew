#ifndef SQLFUNCTIONS_GLOBAL_H
#define SQLFUNCTIONS_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(SQLFUNCTIONS_LIBRARY)
#define SQLFUNCTIONSSHARED_EXPORT  Q_DECL_EXPORT
#else
#define SQLFUNCTIONSSHARED_EXPORT  Q_DECL_IMPORT
#endif

#endif // SQLFUNCTIONS_GLOBAL_H
