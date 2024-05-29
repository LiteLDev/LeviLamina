#include "ll/core/LeviLamina.h"

#include <chrono>
#include <csignal>
#include <cstdio>
#include <cwchar>
#include <exception>
#include <filesystem>
#include <string>
#include <system_error>
#include <vector>

#include "fmt/core.h"

#include "ll/api/Logger.h"
#include "ll/api/i18n/I18n.h"
#include "ll/api/memory/Hook.h"
#include "ll/api/plugin/Plugin.h"
#include "ll/api/service/Bedrock.h"
#include "ll/api/service/PlayerInfo.h"
#include "ll/api/service/ServerInfo.h"
#include "ll/api/utils/ErrorUtils.h"
#include "ll/api/utils/HashUtils.h"
#include "ll/api/utils/WinUtils.h"

#include "mc/server/common/DedicatedServer.h"
#include "mc/server/common/commands/StopCommand.h"

#include "ll/core/Config.h"
#include "ll/core/CrashLogger.h"
#include "ll/core/Version.h"
#include "ll/core/command/BuiltinCommands.h"
#include "ll/core/plugin/PluginRegistrar.h"

#include <windows.h>

#include <consoleapi.h>
#include <errhandlingapi.h>
#include <handleapi.h>
#include <libloaderapi.h>
#include <minwindef.h>
#include <processenv.h>
#include <processthreadsapi.h>
#include <psapi.h>
#include <tlhelp32.h>
#include <winbase.h>
#include <winnt.h>

#if defined(LL_DEBUG) && _HAS_CXX23
#include "ll/api/utils/StacktraceUtils.h"
#endif

namespace ll {

using namespace hash_utils;
using namespace hash_literals;
using namespace i18n_literals;

namespace fs = std::filesystem;

Logger                                logger("LeviLamina");
std::chrono::steady_clock::time_point severStartBeginTime;
std::chrono::steady_clock::time_point severStartEndTime;

void fixCurrentDirectory() { SetCurrentDirectoryW(win_utils::getModulePath(nullptr).value().parent_path().c_str()); }

void checkOtherBdsInstance() {
    auto currentPath = win_utils::getModulePath(nullptr).value();
    // and pid is not current process
    std::vector<DWORD> pids;
    ::PROCESSENTRY32W  pe32;
    pe32.dwSize         = sizeof(PROCESSENTRY32W);
    HANDLE hProcessSnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    if (hProcessSnap == INVALID_HANDLE_VALUE) {
        return;
    }
    if (::Process32FirstW(hProcessSnap, &pe32)) {
        std::wstring currentExe = currentPath.filename().wstring();
        do {
            if (pe32.th32ProcessID != GetCurrentProcessId()
                && (wcscmp(pe32.szExeFile, L"bedrock_server.exe") == 0
                    || wcscmp(pe32.szExeFile, L"bedrock_server_mod.exe") == 0 || pe32.szExeFile == currentExe)) {
                pids.push_back(pe32.th32ProcessID);
            }
        } while (::Process32NextW(hProcessSnap, &pe32));
    }
    CloseHandle(hProcessSnap);
    // Get the BDS process paths
    for (auto& pid : pids) {
        // Open process handle
        auto handle = OpenProcess(PROCESS_QUERY_INFORMATION | PROCESS_VM_READ | PROCESS_TERMINATE, false, pid);
        if (handle) {
            // Get the full path of the process
            auto path = win_utils::getModulePath(nullptr, handle).value();
            // Compare the path
            if (path == currentPath) {
                logger.error("Detected the existence of another BDS process with the same path!"_tr());
                logger.error("This may cause the network port and the level to be occupied"_tr());
                while (true) {
                    logger.error("Do you want to terminate the process with PID {0}?  (y=Yes, n=No, e=Exit)"_tr(pid));
                    char input;
                    rewind(stdin);
                    input = static_cast<char>(getchar());
                    rewind(stdin);
                    if (input == 'n' || input == 'N') {
                        break;
                    }
                    if (input == 'y' || input == 'Y') {
                        TerminateProcess(handle, 1);
                        break;
                    }
                    if (input == 'e' || input == 'E') {
                        std::terminate();
                    }
                }
            }
            CloseHandle(handle);
        }
    }
}

void printWelcomeMsg() {
    auto lock = Logger::lock();
    logger.info(R"(                                                                      )");
    logger.info(R"(         _               _ _                    _                     )");
    logger.info(R"(        | |    _____   _(_) |    __ _ _ __ ___ (_)_ __   __ _         )");
    logger.info(R"(        | |   / _ \ \ / / | |   / _` | '_ ` _ \| | '_ \ / _` |        )");
    logger.info(R"(        | |__|  __/\ V /| | |__| (_| | | | | | | | | | | (_| |        )");
    logger.info(R"(        |_____\___| \_/ |_|_____\__,_|_| |_| |_|_|_| |_|\__,_|        )");
    logger.info(R"(                                                                      )");
    logger.info(R"(        --------   Light-Weight BDS Plugin Loader   ----------        )");
    logger.info(R"(                                                                      )");
    logger.info(R"(                                                                      )");

    logger.info("LeviLamina is a free software licensed under {0}"_tr("LGPLv3"));
    logger.info("Help us translate & improve text -> {0}"_tr("https://translate.liteldev.com/"));
}

void checkProtocolVersion() {
    auto currentProtocol = getServerProtocolVersion();
    if (TARGET_BDS_PROTOCOL_VERSION != currentProtocol) {
        logger.warn("Protocol version not match, target version: {0}, current version: {1}"_tr(
            TARGET_BDS_PROTOCOL_VERSION,
            currentProtocol
        ));
        logger.warn(
            "This will most likely crash the server, please use the LeviLamina that matches the BDS version!"_tr()
        );
    }
}

BOOL WINAPI ConsoleExitHandler(DWORD CEvent) {
    switch (CEvent) {
    case CTRL_C_EVENT:
    case CTRL_CLOSE_EVENT:
    case CTRL_SHUTDOWN_EVENT: {
        if (StopCommand::mServer) {
            StopCommand::mServer->requestServerShutdown("");
        } else {
            std::terminate();
        }
        return true;
    }
    default:
        break;
    }
    return false;
}

void unixSignalHandler(int signum) {
    switch (signum) {
    case SIGINT:
    case SIGTERM: {
        if (StopCommand::mServer) StopCommand::mServer->requestServerShutdown("");
        else std::terminate();
        break;
    }
    default:
        break;
    }
}

namespace i18n {
extern std::string globalDefaultLocaleName;
}

void leviLaminaMain() {
    error_utils::setSehTranslator();

    // Prohibit pop-up windows to facilitate automatic restart
    SetErrorMode(SEM_FAILCRITICALERRORS | SEM_NOGPFAULTERRORBOX | SEM_NOOPENFILEERRORBOX | SEM_NOALIGNMENTFAULTEXCEPT);

    // Init LL Logger
    Logger::setDefaultFile(u8"logs/LeviLamina-latest.log", false);

    // Create Plugin Directory
    std::error_code ec;
    fs::create_directories(plugin::getPluginsRoot(), ec);

    ::ll::i18n::load(plugin::getPluginsRoot() / u8"LeviLamina/lang");

    loadLeviConfig();

    // Update default language
    if (globalConfig.language != "system") {
        i18n::globalDefaultLocaleName = globalConfig.language;
    }

    checkProtocolVersion();

    // Fix problems
    fixCurrentDirectory();

    if (globalConfig.modules.checkRunningBDS) {
        checkOtherBdsInstance();
    }
    if (globalConfig.modules.playerInfo.alwaysLaunch) {
        service::PlayerInfo::getInstance();
    }
    if (globalConfig.modules.crashLogger.enabled) {
        if (globalConfig.modules.crashLogger.useBuiltin) {
#if _HAS_CXX23
            static CrashLoggerNew crashLogger{};
#endif
        } else {
            CrashLogger::initCrashLogger();
        }
    }

    // Register Exit Event Handler.
    SetConsoleCtrlHandler(ConsoleExitHandler, true);
    signal(SIGTERM, unixSignalHandler);
    signal(SIGINT, unixSignalHandler);

    printWelcomeMsg();

#ifdef LL_DEBUG
    logger.warn("LeviLamina is running in DEBUG mode!"_tr());
#endif

    command::registerCommands();

    plugin::PluginRegistrar::getInstance().loadAllPlugins();
}


LL_AUTO_STATIC_HOOK(LeviLaminaMainHook, HookPriority::High, "main", int, int argc, char* argv[]) {

#if defined(LL_DEBUG) && _HAS_CXX23
    static stacktrace_utils::SymbolLoader symbols{};
#endif
    setServerStatus(ServerStatus::Default);
    severStartBeginTime = std::chrono::steady_clock::now();
    for (int i = 0; i < argc; ++i) {
        switch (doHash(argv[i])) {
        case "--noColor"_h:
            globalConfig.logger.colorLog = false;
            break;
        case "-v"_h:
        case "--version"_h:
            fmt::print("{}", getBdsVersion().to_string());
            return 0;
        case "--protocolversion"_h:
            fmt::print("{}", getServerProtocolVersion());
            return 0;
        default:
            break;
        }
    }
    setServerStatus(ServerStatus::Starting);
    try {
        leviLaminaMain();
    } catch (...) {
        error_utils::printCurrentException(logger);
    }
    auto res = origin(argc, argv);
    setServerStatus(ServerStatus::Default);
    return res;
}
} // namespace ll
