#pragma once

#include "vcruntime.h"

namespace ll {
class CrashLogger {
public:
    static void initCrashLogger();
};
class CrashLoggerNew {
    void* previous{};

public:
    CrashLoggerNew();
    ~CrashLoggerNew();
};
} // namespace ll
