#include "CrashLogger.h"
#include "Config.h"
#include <LoggerAPI.h>
#include <Utils/StringHelper.h>
#include <Utils/WinHelper.h>
#include <Windows.h>
using namespace LL;

bool StartCrashLogger() {
    if (IsDebuggerPresent()) {
        Logger::Info("Existing debugger detected. Builtin CrashLogger will not work.");
        return true;
    }

    STARTUPINFO si;
    ZeroMemory(&si, sizeof(si));
    si.cb = sizeof(si);
    PROCESS_INFORMATION pi;

    SECURITY_ATTRIBUTES sa;
    sa.bInheritHandle = TRUE;
    sa.lpSecurityDescriptor = NULL;
    sa.nLength = sizeof(SECURITY_ATTRIBUTES);

    wchar_t daemonPath[MAX_PATH];

    wsprintf(daemonPath, L"%ls %u", str2wstr(globalConfig.crashLoggerPath).c_str(), GetCurrentProcessId());
    if (!CreateProcess(NULL, daemonPath, &sa, &sa, TRUE, 0, NULL, NULL, &si, &pi)) {
        Logger::Error("Could not Create CrashLogger Daemon Process!");
        Logger::Error() << GetLastErrorMessage() << Logger::endl;
        return false;
    }

    CloseHandle(pi.hProcess);
    CloseHandle(pi.hThread);
    return true;
}