#pragma once

namespace ll {
class CrashLogger {
public:
    static void init();
    static void submitCrashInfo();
};
} // namespace ll
