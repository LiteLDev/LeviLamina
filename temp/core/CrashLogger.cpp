#include "liteloader/core/CrashLogger.h"
#include "liteloader/core/Config.h"
#include "liteloader/api/LoggerAPI.h"
#include "liteloader/api/utils/StringHelper.h"
#include "liteloader/api/utils/WinHelper.h"
#include <filesystem>
#include "mc/Common.hpp"
#include "mc/SharedConstants.hpp"
#include <Windows.h>
using namespace std;
using namespace ll;

Logger crashLogger("CrashLogger");

bool ll::CrashLogger::startCrashLoggerProcess() {
    if (IsDebuggerPresent()) {
        crashLogger.info(tr("ll.crashLogger.existsingDebuggerDetected"));
        return true;
    }
    if (IsWineEnvironment()) {
        crashLogger.info(tr("ll.crashLogger.wineDetected"));
        return true;
    }

    STARTUPINFO si;
    ZeroMemory(&si, sizeof(si));
    si.cb = sizeof(si);
    PROCESS_INFORMATION pi;

    SECURITY_ATTRIBUTES sa;
    sa.bInheritHandle = TRUE;
    sa.lpSecurityDescriptor = nullptr;
    sa.nLength = sizeof(SECURITY_ATTRIBUTES);

    wchar_t daemonCmd[MAX_PATH];
    std::string serverVersion =
        fmt::format("{}.{:0>2}", Common::getGameVersionStringNet(), SharedConstants::RevisionVersion);
    wsprintf(daemonCmd, L"%ls %u \"%ls\"", str2wstr(globalConfig.crashLoggerPath).c_str(), GetCurrentProcessId(),
             str2wstr(serverVersion).c_str());
    if (!CreateProcess(nullptr, daemonCmd, &sa, &sa, TRUE, 0, nullptr, nullptr, &si, &pi)) {
        crashLogger.error(tr("ll.crashLogger.error.cannotCreateDaemonProcess"));
        crashLogger.error << GetLastErrorMessage() << Logger::endl;
        return false;
    }

    CloseHandle(pi.hProcess);
    CloseHandle(pi.hThread);
    return true;
}

void ll::CrashLogger::initCrashLogger(bool enableCrashLogger) {
    // constexpr auto DEPRECATED_CRASH_LOGGER_PATH = "plugins/LiteLoader/CrashLogger.dll";
    // Remove deprecated CrashLogger
    // std::filesystem::remove(DEPRECATED_CRASH_LOGGER_PATH);

    if (!enableCrashLogger) {
        crashLogger.warn(tr("ll.crashLogger.warning.crashLoggerDisabled.1"));
        crashLogger.warn(tr("ll.crashLogger.warning.crashLoggerDisabled.2"));
        crashLogger.warn(tr("ll.crashLogger.warning.crashLoggerDisabled.3"));
        crashLogger.warn("");
        crashLogger.warn(tr("ll.crashLogger.warning.crashLoggerDisabled.4"));
        return;
    }
    //string noCrashLoggerReason;

    // Get file list
    filesystem::directory_iterator ent("plugins");

    for (auto& i : ent) {
        if (i.is_regular_file() && i.path().extension() == ".dll") {
            auto path = i.path().string();
            // Check crashLogger
            /*
            for (auto name : ll::NO_CRASH_LOGGER_PLUGIN_LIST) {
                if (path.find(name) != string::npos) {
                    noCrashLoggerReason = string(name) + ".dll";
                    break;
                }
            }
            */
        }
    }
    /*
    if (!noCrashLoggerReason.empty()) {
        // Plugin conflicts with CrashLogger
        crashLogger.warn(tr("ll.crashLogger.warning.conflicts.1", noCrashLoggerReason));
        crashLogger.warn(tr("ll.crashLogger.warning.conflicts.2"));
        crashLogger.warn(tr("ll.crashLogger.warning.conflicts.3"));
        crashLogger.warn("");
        crashLogger.warn(tr("ll.crashLogger.warning.conflicts.4"));
        crashLogger.warn(tr("ll.crashLogger.warning.conflicts.5", noCrashLoggerReason));
        return;
    }
    */
    // Start CrashLogger
    if (startCrashLoggerProcess()) {
        // Logger::Info("CrashLogger Daemon Process attached.");
    } else {
        crashLogger.warn(tr("ll.crashLogger.init.fail.msg"));
        crashLogger.warn(tr("ll.crashLogger.init.fail.tip"));
    }
}