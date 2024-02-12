#pragma once

#include "vcruntime.h"

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
