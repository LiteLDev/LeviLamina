#include "Main/CrashLogger.h"
#include "Main/Config.h"
#include <LoggerAPI.h>
#include <Utils/StringHelper.h>
#include <Utils/WinHelper.h>
#include <filesystem>
#include <MC/Common.hpp>
#include <MC/SharedConstants.hpp>
using namespace std;
using namespace LL;

Logger crashLogger("CrashLogger");

inline bool isWine()
{
    HMODULE ntdll = GetModuleHandle(L"ntdll.dll");
    auto pwine_get_version = GetProcAddress(ntdll, "wine_get_version");
    if (pwine_get_version)
        return true;
    else
        return false;
}

bool LL::StartCrashLoggerProcess()
{
    if (IsDebuggerPresent())
    {
        crashLogger.info("Existing debugger detected. Builtin CrashLogger will not work.");
        return true;
    }
    if (isWine())
    {
        crashLogger.info("Wine Environment detected. Builtin CrashLogger will not work.");
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
    std::string serverVersion = fmt::format("{}.{:0>2}", Common::getGameVersionStringNet(), SharedConstants::RevisionVersion);
    wsprintf(daemonCmd, L"%ls %u \"%ls\"", str2wstr(globalConfig.crashLoggerPath).c_str(), GetCurrentProcessId(), str2wstr(serverVersion).c_str());
    if (!CreateProcess(nullptr, daemonCmd, &sa, &sa, TRUE, 0, nullptr, nullptr, &si, &pi))
    {
        crashLogger.error("Could not Create CrashLogger Daemon Process!");
        crashLogger.error << GetLastErrorMessage() << Logger::endl;
        return false;
    }

    CloseHandle(pi.hProcess);
    CloseHandle(pi.hThread);
    return true;
}

void LL::InitCrashLogger(bool enableCrashLogger)
{
    // Enable PreLog Module
    try
    {
        LoadLibrary(CL_PRELOG_MODULE);
    }
    catch (...) {}

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
            auto path = UTF82String(i.path().u8string());

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

    // Start CrashLogger
    if (StartCrashLoggerProcess()) {
        //Logger::Info("CrashLogger Daemon Process attached.");
    }
    else {
        crashLogger.warn("Builtin CrashLogger failed to start!");
        crashLogger.warn("There will be no crash log when unhandled exception occurs.");
    }

}