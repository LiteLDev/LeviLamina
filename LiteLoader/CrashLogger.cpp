#include "CrashLogger.h"
#include "Config.h"
#include <LoggerAPI.h>
#include <Utils/StringHelper.h>
#include <Utils/WinHelper.h>
#include <Windows.h>
#include <filesystem>
using namespace std;
using namespace LL;

bool StartCrashLoggerProcess()
{
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

void InitCrashLogger(bool enableCrashLogger)
{
    Logger::setTitle("CrashLogger");

    if (!enableCrashLogger)
    {
        Logger::Warn("Builtin CrashLogger is not enabled because the configuration disabled it.");
        Logger::Warn("There will be no crash log when unhandled exception occurs,");
        Logger::Warn("which makes it almost impossible to find out the reason for crash and the source of crash.");
        Logger::Warn("");
        Logger::Warn("We strongly recommend you to enable it to ensure server stability");
        Logger::setTitle("LiteLoader");
        return;
    }
    string noCrashLoggerReason = "";

    // Get file list
    filesystem::directory_iterator ent("plugins");

    for (auto& i : ent) {
        if (i.is_regular_file() && i.path().extension().u8string() == ".dll") {
            auto path = i.path().u8string();

            //Check crashlogger
            for (auto name : NoCrashLogger) {
                if (path.find(name) != string::npos) {
                    noCrashLoggerReason = string(name) + ".dll";
                    break;
                }
            }
        }
    }

    if (noCrashLoggerReason != "") {
        Logger::Warn("Builtin CrashLogger is not enabled because plugin <{}> conflicts with it", noCrashLoggerReason);
        Logger::Warn("There will be no crash log when unhandled exception occurs,");
        Logger::Warn("which makes it almost impossible to find out the reason for crash and the source of crash.");
        Logger::Warn("");
        Logger::Warn("Since CrashLogger is an important component which ensures server stability,");
        Logger::Warn("we recommend you to think twice about the usage of plugin <{}>", noCrashLoggerReason);
        Logger::setTitle("LiteLoader");
        return;
    }

    //Start CrashLogger
    if (StartCrashLoggerProcess()) {
        //Logger::Info("CrashLogger Deamon Process attached.");
    }
    else {
        Logger::Warn("Builtin CrashLogger failed to start!");
        Logger::Warn("There will be no crash log when unhandled exception occurs.");
    }
    
    Logger::setTitle("LiteLoader");
}