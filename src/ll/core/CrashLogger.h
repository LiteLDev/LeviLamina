#pragma once

namespace ll {
class CrashLogger {
public:
    static bool startCrashLoggerProcess();
    static void initCrashLogger(bool enableCrashLogger);
};
} // namespace ll
