#ifndef GOBSDTMAGERDIFFTIME_GLOBAL_H
#define GOBSDTMAGERDIFFTIME_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(GOBSDTMAGERDIFFTIME_LIBRARY)
#define GOBSDTMAGERDIFFTIME_EXPORT  Q_DECL_EXPORT
#else
#define GOBSDTMAGERDIFFTIME_EXPORT  Q_DECL_IMPORT
#endif

#endif // GOBSDTMAGERDIFFTIME_GLOBAL_H
