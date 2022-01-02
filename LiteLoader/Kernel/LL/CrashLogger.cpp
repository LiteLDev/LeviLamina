#include "LL/CrashLogger.h"
#include "LL/Config.h"
#include <LoggerAPI.h>
#include <Utils/StringHelper.h>
#include <Utils/WinHelper.h>
#include <filesystem>
using namespace std;
using namespace LL;

Logger crashLogger("CrashLogger");

bool StartCrashLoggerProcess()
{
    if (IsDebuggerPresent()) {
        crashLogger.info("Existing debugger detected. Builtin CrashLogger will not work.");
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

    wchar_t daemonPath[MAX_PATH];

    wsprintf(daemonPath, L"%ls %u", str2wstr(globalConfig.crashLoggerPath).c_str(), GetCurrentProcessId());
    if (!CreateProcess(nullptr, daemonPath, &sa, &sa, TRUE, 0, nullptr, nullptr, &si, &pi)) {
        crashLogger.error("Could not Create CrashLogger Daemon Process!");
        crashLogger.error << GetLastErrorMessage() << Logger::endl;
        return false;
    }

    CloseHandle(pi.hProcess);
    CloseHandle(pi.hThread);
    return true;
}

void InitCrashLogger(bool enableCrashLogger)
{

    if (!enableCrashLogger)
    {
        crashLogger.warn("Builtin CrashLogger is not enabled because the configuration disabled it.");
        crashLogger.warn("There will be no crash log when unhandled exception occurs,");
        crashLogger.warn("which makes it almost impossible to find out the reason for crash and the source of crash.");
        crashLogger.warn("");
        crashLogger.warn("We strongly recommend you to enable it to ensure server stability");
        return;
    }
    string noCrashLoggerReason = "";

    // Get file list
    filesystem::directory_iterator ent("plugins");

    for (auto& i : ent) {
        if (i.is_regular_file() && i.path().extension().u8string() == u8".dll") {
            auto path = i.path().u8string();

            //Check crashLogger
            for (auto name : NoCrashLogger) {
                if (path.find(name) != string::npos) {
                    noCrashLoggerReason = string(name) + ".dll";
                    break;
                }
            }
        }
    }

    if (noCrashLoggerReason != "") {
        crashLogger.warn("Builtin CrashLogger is not enabled because plugin <{}> conflicts with it", noCrashLoggerReason);
        crashLogger.warn("There will be no crash log when unhandled exception occurs,");
        crashLogger.warn("which makes it almost impossible to find out the reason for crash and the source of crash.");
        crashLogger.warn("");
        crashLogger.warn("Since CrashLogger is an important component which ensures server stability");
        crashLogger.warn("We recommend you to think twice about the usage of plugin <{}>", noCrashLoggerReason);
        return;
    }

    //Start CrashLogger
    if (StartCrashLoggerProcess()) {
        //Logger::Info("CrashLogger Daemon Process attached.");
    }
    else {
        crashLogger.warn("Builtin CrashLogger failed to start!");
        crashLogger.warn("There will be no crash log when unhandled exception occurs.");
    }

}