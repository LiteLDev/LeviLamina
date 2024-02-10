#pragma once

#include "vcruntime.h"

#if _HAS_CXX23
#define LL_BUILTIN_CRASHLOGGER 0
#else
#define LL_BUILTIN_CRASHLOGGER 0
#endif

namespace ll {
class CrashLogger {
public:
    static void initCrashLogger();
};
#if _HAS_CXX23
class CrashLoggerNew {
    void* previous{};

public:
    CrashLoggerNew();
    ~CrashLoggerNew();
};
#endif
} // namespace ll
