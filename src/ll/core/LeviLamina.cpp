#include "ll/core/LeviLamina.h"

#include <csignal>
#include <iostream>
#include <string>

#include "ll/api/Logger.h"
#include "ll/api/ServerInfo.h"
#include "ll/api/base/ErrorInfo.h"
#include "ll/api/memory/Hook.h"
#include "ll/api/service/Bedrock.h"
#include "ll/api/utils/StringUtils.h"

#include "ll/api/service/PlayerInfo.h"
#include "ll/core/Config.h"
#include "ll/core/CrashLogger.h"
#include "ll/core/Version.h"

#include "mc/world/Minecraft.h"

#include "windows.h"

#include "psapi.h"
#include "tlhelp32.h"

namespace ll {

using namespace hash;
using namespace hash_literals;
using namespace i18n_literals;

namespace fs = std::filesystem;

Logger                                logger("LeviLamina");
std::chrono::steady_clock::time_point severStartBeginTime;
std::chrono::steady_clock::time_point severStartEndTime;

void fixCurrentDirectory() {
    std::wstring path(32767, '\0');
    GetModuleFileName(nullptr, path.data(), 32767);
    SetCurrentDirectory(path.substr(0, path.find_last_of(L'\\')).c_str());
}

void checkOtherBdsInstance() {
    // get all processes id with name "bedrock_server.exe" or "bedrock_server_mod.exe"
    // and pid is not current process
    std::vector<DWORD> pids;
    PROCESSENTRY32     pe32;
    pe32.dwSize         = sizeof(PROCESSENTRY32);
    HANDLE hProcessSnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    if (hProcessSnap == INVALID_HANDLE_VALUE) {
        return;
    }
    if (Process32First(hProcessSnap, &pe32)) {
        do {
            if (pe32.th32ProcessID != GetCurrentProcessId()
                && (wcscmp(pe32.szExeFile, L"bedrock_server.exe") == 0
                    || wcscmp(pe32.szExeFile, L"bedrock_server_mod.exe") == 0)) {
                pids.push_back(pe32.th32ProcessID);
            }
        } while (Process32Next(hProcessSnap, &pe32));
    }
    CloseHandle(hProcessSnap);

    // Get current process path
    std::wstring currentPath(32767, '\0');
    GetModuleFileName(nullptr, currentPath.data(), 32767);

    // Get the BDS process paths
    for (auto& pid : pids) {
        // Open process handle
        auto handle = OpenProcess(PROCESS_QUERY_INFORMATION | PROCESS_VM_READ | PROCESS_TERMINATE, false, pid);
        if (handle) {
            // Get the full path of the process
            std::wstring path;
            GetModuleFileNameEx(handle, nullptr, path.data(), 32767);

            // Compare the path
            if (path == currentPath) {
                logger.error("ll.main.checkOtherBdsInstance.detected"_tr);
                logger.error("ll.main.checkOtherBdsInstance.tip"_tr);
                while (true) {
                    logger.error("ll.main.checkOtherBdsInstance.ask"_tr, pid);
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

    logger.info("ll.notice.license"_tr, "LGPLv3");
    logger.info("ll.notice.newForum"_tr, "https://forum.litebds.com");
    logger.info("ll.notice.translateText"_tr, "https://crowdin.com/project/liteloaderbds");
    logger.info("ll.notice.sponsor.thanks"_tr);
    logger.info("");
}

void checkProtocolVersion() {
    auto currentProtocol = getServerProtocolVersion();
    if (TARGET_BDS_PROTOCOL_VERSION != currentProtocol) {
        logger.warn("ll.main.warning.protocolVersionNotMatch.1"_tr, TARGET_BDS_PROTOCOL_VERSION, currentProtocol);
        logger.warn("ll.main.warning.protocolVersionNotMatch.2"_tr);
    }
}

BOOL WINAPI ConsoleExitHandler(DWORD CEvent) {
    switch (CEvent) {
    case CTRL_C_EVENT:
    case CTRL_CLOSE_EVENT:
    case CTRL_SHUTDOWN_EVENT: {
        if (service::getMinecraft()) {
            service::getMinecraft()->requestServerShutdown("");
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
        if (service::getMinecraft()) service::getMinecraft()->requestServerShutdown("");
        else std::terminate();
        break;
    }
    default:
        break;
    }
}

// extern
extern void registerLeviCommands();

namespace i18n {
extern std::string globalDefaultLocaleName;
}

void startCrashLogger() {
#if !LL_BUILTIN_CRASHLOGGER
    CrashLogger::initCrashLogger(globalConfig.modules.crashLogger.enabled);
#else
    static CrashLoggerNew crashLogger{};
#endif
}

void leviLaminaMain() {
    error_info::setSehTranslator();

    // Prohibit pop-up windows to facilitate automatic restart
    SetErrorMode(SEM_FAILCRITICALERRORS | SEM_NOGPFAULTERRORBOX | SEM_NOALIGNMENTFAULTEXCEPT);

    // Init LL Logger
    Logger::setDefaultFile(u8"logs/LeviLamina-latest.log", false);

    // Create Plugin Directory
    std::error_code ec;
    fs::create_directories(u8"plugins", ec);

    i18n::load(u8"plugins/LeviLamina/LangPack");

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
        ll::PlayerInfo::getInstance();
    }
    if (globalConfig.modules.crashLogger.enabled) {
        startCrashLogger();
    }

    // Register Exit Event Handler.
    SetConsoleCtrlHandler(ConsoleExitHandler, true);
    signal(SIGTERM, unixSignalHandler);
    signal(SIGINT, unixSignalHandler);

    printWelcomeMsg();

#if defined(LL_DEBUG)
    logger.warn("ll.main.warning.inDebugMode"_tr);
#endif

    // if (globalConfig.enableAddonsHelper) InitAddonsHelper();

    // plugin::PluginManager::getInstance().loadAllPlugins();

    registerLeviCommands();
}


LL_AUTO_STATIC_HOOK(LeviLaminaMainHook, HookPriority::High, "main", int, int argc, char* argv[]) {
    getServerStatus()   = ServerStatus::Default;
    severStartBeginTime = std::chrono::steady_clock::now();
    for (int i = 0; i < argc; ++i) {
        switch (do_hash(argv[i])) {
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
    leviLaminaMain();
    getServerStatus() = ServerStatus::Running;
    auto res          = origin(argc, argv);
    getServerStatus() = ServerStatus::Default;
    return res;
}
} // namespace ll

[[maybe_unused]] BOOL WINAPI DllMain(HMODULE, DWORD, LPVOID) { return true; }
