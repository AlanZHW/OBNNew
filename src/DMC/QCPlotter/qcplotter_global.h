﻿#ifndef  QCPLOTTER_GLOBAL_H
#define QCPLOTTER_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(QCPLOTTER_LIBRARY)
#define QCPLOTTERSHARED_EXPORT  Q_DECL_EXPORT
#else
#define QCPLOTTERSHARED_EXPORT  Q_DECL_IMPORT
#endif

#endif // QCPLOTTER_GLOBAL_H