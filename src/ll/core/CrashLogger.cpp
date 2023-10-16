#include "ll/core/CrashLogger.h"

#include <filesystem>

#include "mc/common/Common.h"
#include "mc/common/SharedConstants.h"

#include "ll/api/LoggerAPI.h"
#include "ll/api/ServerAPI.h"
#include "ll/api/utils/StringUtils.h"
#include "ll/api/utils/WinHelper.h"
#include "ll/core/Config.h"

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
    sa.bInheritHandle       = TRUE;
    sa.lpSecurityDescriptor = nullptr;
    sa.nLength              = sizeof(SECURITY_ATTRIBUTES);

    wchar_t     daemonCmd[MAX_PATH];
    std::string serverVersion = fmt::format("{}.{:0>2}", ll::getBdsVersion(), SharedConstants::RevisionVersion);
    wsprintf(
        daemonCmd,
        L"%ls %u \"%ls\"",
        ll::StringUtils::str2wstr(globalConfig.crashLoggerPath).c_str(),
        GetCurrentProcessId(),
        ll::StringUtils::str2wstr(serverVersion).c_str()
    );
    if (!CreateProcess(nullptr, daemonCmd, &sa, &sa, TRUE, 0, nullptr, nullptr, &si, &pi)) {
        crashLogger.error(tr("ll.crashLogger.error.cannotCreateDaemonProcess"));
        crashLogger.error(GetLastErrorMessage());
        return false;
    }

    CloseHandle(pi.hProcess);
    CloseHandle(pi.hThread);
    return true;
}

void ll::CrashLogger::initCrashLogger(bool enableCrashLogger) {

    if (!enableCrashLogger) {
        crashLogger.warn(tr("ll.crashLogger.warning.crashLoggerDisabled.1"));
        crashLogger.warn(tr("ll.crashLogger.warning.crashLoggerDisabled.2"));
        crashLogger.warn(tr("ll.crashLogger.warning.crashLoggerDisabled.3"));
        crashLogger.warn("");
        crashLogger.warn(tr("ll.crashLogger.warning.crashLoggerDisabled.4"));
        return;
    }
    // Start CrashLogger
    if (startCrashLoggerProcess()) {
        // Logger::Info("CrashLogger Daemon Process attached.");
    } else {
        crashLogger.warn(tr("ll.crashLogger.init.fail.msg"));
        crashLogger.warn(tr("ll.crashLogger.init.fail.tip"));
    }
}