#pragma once

namespace ll {
class CrashLogger {
public:
    static void init();
    static bool isExternalRunning();
};
} // namespace ll
