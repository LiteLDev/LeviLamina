#include "liteloader/LiteLoader.h"

#include <csignal>
#include <minwindef.h>
#include <processenv.h>
#include <string>
#include <iostream>

#include "llapi/utils/StringHelper.h"
#include "llapi/utils/FileHelper.h"
#include "llapi/utils/SehTranslator.h"

#include "llapi/LoggerAPI.h"
#include "llapi/ServerAPI.h"
#include "llapi/HookAPI.h"
#include "llapi/EventAPI.h"

#include "llapi/mc/Minecraft.hpp"

#include "liteloader/Config.h"
#include "liteloader/Loader.h"
#include "liteloader/CrashLogger.h"
#include "liteloader/AddonsHelper.h"
#include "liteloader/Version.h"
#include "liteloader/SimpleServerLogger.h"
#include "liteloader/PlayerDeathPositions.h"

#include <windows.h>
#include <TlHelp32.h>
#include <Psapi.h>

Logger ll::logger("LiteLoader");
time_t ll::startTime;
time_t ll::endTime;

using namespace std;
using namespace ll;

// Add plugins folder to path
void fixPluginsLibDir() {
    constexpr const DWORD MAX_PATH_LEN = 32767;

    auto* buffer = new (nothrow) wchar_t[MAX_PATH_LEN];
    if (!buffer)
        return;

    GetEnvironmentVariableW(L"PATH", buffer, MAX_PATH_LEN);
    wstring path(buffer);

    GetCurrentDirectoryW(MAX_PATH_LEN, buffer);
    wstring currentDir(buffer);

    // append plugins path to environment path
    SetEnvironmentVariableW(L"PATH", (currentDir + L"\\plugins;" + path).c_str());
}

void fixUpCWD() {
    constexpr const DWORD MAX_PATH_LEN = 32767;

    auto* buffer = new (nothrow) wchar_t[MAX_PATH_LEN];
    if (!buffer)
        return;

    GetModuleFileNameW(nullptr, buffer, MAX_PATH_LEN);
    wstring path(buffer);

    SetCurrentDirectoryW(path.substr(0, path.find_last_of(L'\\')).c_str());
}

void unzipNodeModules() {
    if (std::filesystem::exists(std::filesystem::path(TEXT(".\\plugins\\lib\\node_modules.tar")))) {
        std::error_code ec;
        // if(std::filesystem::exists(".\\plugins\\lib\\node_modules\\"))
        //     filesystem::remove_all(".\\plugins\\lib\\node_modules\\", ec);
        auto res = NewProcessSync(
            fmt::format(R"({} x "{}" -o".\plugins\lib\" -aoa)", ZIP_PROGRAM_PATH, R"(.\plugins\lib\node_modules.tar)"),
            30000);
        if (res.first != 0) {
            logger.error(tr("ll.unzipNodeModules.fail"));
        } else {
            filesystem::remove(R"(.\plugins\lib\node_modules.tar)", ec);
        }
    }
}

void decompressResourcePacks() {
    if (std::filesystem::exists(
            std::filesystem::path(TEXT(".\\plugins\\LiteLoader\\ResourcePacks\\LiteLoaderBDS-CUI.tar")))) {
        std::error_code ec;
        // if(std::filesystem::exists(".\\plugins\\lib\\node_modules\\"))
        //     filesystem::remove_all(".\\plugins\\lib\\node_modules\\", ec);
        auto res =
            NewProcessSync(fmt::format(R"({} x "{}" -o".\plugins\LiteLoader\ResourcePacks\" -aoa)", ZIP_PROGRAM_PATH,
                                       R"(.\plugins\LiteLoader\ResourcePacks\LiteLoaderBDS-CUI.tar)"),
                           30000);
        if (res.first != 0) {
            logger.error(tr("ll.decompressResourcePacks.fail"));
        } else {
            filesystem::remove(R"(.\plugins\LiteLoader\ResourcePacks\LiteLoaderBDS-CUI.tar)", ec);
        }
    }
}

void checkRunningBDS() {

    constexpr const DWORD MAX_PATH_LEN = 32767;
    auto* buffer = new wchar_t[MAX_PATH_LEN];

    if (!ll::globalConfig.enableCheckRunningBDS)
        return;

    // get all processes id with name "bedrock_server.exe" or "bedrock_server_mod.exe"
    // and pid is not current process
    std::vector<DWORD> pids;
    PROCESSENTRY32 pe32;
    pe32.dwSize = sizeof(PROCESSENTRY32);
    HANDLE hProcessSnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    if (hProcessSnap == INVALID_HANDLE_VALUE) {
        return;
    }
    if (Process32First(hProcessSnap, &pe32)) {
        do {
            if (pe32.th32ProcessID != GetCurrentProcessId() &&
                (wcscmp(pe32.szExeFile, L"bedrock_server.exe") == 0 ||
                 wcscmp(pe32.szExeFile, L"bedrock_server_mod.exe") == 0)) {
                pids.push_back(pe32.th32ProcessID);
            }
        } while (Process32Next(hProcessSnap, &pe32));
    }
    CloseHandle(hProcessSnap);

    // Get current process path
    std::wstring currentPath;
    GetModuleFileNameW(nullptr, buffer, MAX_PATH_LEN);
    currentPath = buffer;

    // Get the BDS process paths
    for (auto& pid : pids) {
        // Open process handle
        auto handle = OpenProcess(PROCESS_QUERY_INFORMATION | PROCESS_VM_READ | PROCESS_TERMINATE, false, pid);
        if (handle) {
            // Get the full path of the process
            std::wstring path;
            GetModuleFileNameExW(handle, nullptr, buffer, MAX_PATH_LEN);
            path = buffer;

            // Compare the path
            if (path == currentPath) {
                logger.error(tr("ll.main.checkRunningBDS.detected"));
                logger.error(tr("ll.main.checkRunningBDS.tip"));
                while (true) {
                    logger.error(tr("ll.main.checkRunningBDS.ask", pid));
                    char input;
                    rewind(stdin);
                    input = getchar();
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
                        break;
                    }
                }
            }
            CloseHandle(handle);
        }
    }
    delete[] buffer;
}

void fixAllowList() {
    if (filesystem::exists("whitelist.json")) {
        if (filesystem::exists("allowlist.json")) {
            auto res = ReadAllFile("allowlist.json");
            if (res && (res->empty() || nlohmann::json::parse(*res, nullptr, true, true).empty())) {
                logger.warn(tr("ll.main.fixAllowList.removeEmptyAllowlist"));
                filesystem::remove("allowlist.json");
            } else {
                logger.warn(tr("ll.main.fixAllowList.checkManually"));
                return;
            }
        }
        std::error_code ec;
        // Rename whitelist.json to allowlist.json
        filesystem::copy_file("whitelist.json", "allowlist.json", filesystem::copy_options::overwrite_existing, ec);
        filesystem::remove("whitelist.json", ec);
        logger.warn(tr("ll.main.fixAllowList.renamed"));
    }
}

void printLogo() {
    if (!ll::globalConfig.enableWelcomeText)
        return;

    cout << R"(
                                                                       
          _     _ _       _                    _                       
         | |   (_) |_ ___| |    ___   __ _  __| | ___ _ __             
         | |   | | __/ _ \ |   / _ \ / _` |/ _` |/ _ \ '__|            
         | |___| | ||  __/ |__| (_) | (_| | (_| |  __/ |               
         |_____|_|\__\___|_____\___/ \__,_|\__,_|\___|_|               
                                                                       
       --------   Light-Weight BDS Plugin Loader   ----------          
                                                                       
    )" << endl;
}

void checkDevMode() {
    if (ll::globalConfig.debugMode)
        logger.warn(tr("ll.main.warning.inDevMode"));
}

void checkBetaVersion() {
    if constexpr (LITELOADER_VERSION_STATUS != ll::Version::Release) {
        logger.warn(tr("ll.main.warning.betaVersion"));
        logger.warn(tr("ll.main.warning.productionEnv"));
    }
}

void checkProtocolVersion() {
    auto currentProtocol = ll::getServerProtocolVersion();
    if (TARGET_BDS_PROTOCOL_VERSION != currentProtocol) {
        std::string tmp = tr("ll.main.warning.protocolVersionNotMatch.1");
        logger.warn(tmp, TARGET_BDS_PROTOCOL_VERSION, currentProtocol);
        logger.warn(tr("ll.main.warning.protocolVersionNotMatch.2"));
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}

BOOL WINAPI ConsoleExitHandler(DWORD CEvent) {
    switch (CEvent) {
        case CTRL_C_EVENT:
        case CTRL_CLOSE_EVENT:
        case CTRL_SHUTDOWN_EVENT: {
            if (Global<Minecraft>) {
                Global<Minecraft>->requestServerShutdown("");
            } else {
                std::terminate();
            }
            return TRUE;
        }
        default:
            break;
    }
    return FALSE;
}

void unixSignalHandler(int signum) {
    switch (signum) {
        case SIGINT:
        case SIGTERM: {
            if (Global<Minecraft>) {
                Global<Minecraft>->requestServerShutdown("");
            } else {
                std::terminate();
            }
            break;
        }
        default:
            break;
    }
}

// extern

extern void RegisterCommands();

extern bool InitPlayerDatabase();

extern void EndScheduleSystem();

namespace bstats {
void registerBStats();
}

void liteloaderMain() {
    // Set global SEH-Exception handler
    auto oldSeTranslator = _set_se_translator(seh_exception::TranslateSEHtoCE);

    // Prohibit pop-up windows to facilitate automatic restart
    SetErrorMode(SEM_FAILCRITICALERRORS | SEM_NOGPFAULTERRORBOX | SEM_NOALIGNMENTFAULTEXCEPT);

    // Disable Output-Sync
    std::ios::sync_with_stdio(false);

    // Create Plugin Directory
    std::error_code ec;
    std::filesystem::create_directories("plugins", ec);

    // I18n
    auto i18n = Translation::load("plugins/LiteLoader/LangPack/");

    // Load Config
    ll::LoadLLConfig();

    // Unzip packed Node Modules
    unzipNodeModules();

    // Decompress resource packs
    decompressResourcePacks();

    // If SEH Protection is not enabled (Debug mode), restore old SE translator
    if (!ll::isDebugMode())
        _set_se_translator(oldSeTranslator);

    // Update default language
    if (i18n && ll::globalConfig.language != "system") {
        i18n->defaultLocaleName = ll::globalConfig.language;
    }

    // Check Protocol Version
    checkProtocolVersion();

    // Fix problems
    fixUpCWD();
    fixPluginsLibDir();

    // Check whether allowlist.json exists/is empty or not
    fixAllowList();

    // Init LL Logger
    Logger::setDefaultFile("logs/LiteLoader-latest.log", false);

    // Check Running BDS(Requires Config)
    checkRunningBDS();

    // Builtin CrashLogger
    ll::CrashLogger::initCrashLogger(ll::globalConfig.enableCrashLogger);

    // Initialize Player Database
    InitPlayerDatabase();

    // Rename Window
    HWND hwnd = GetConsoleWindow();
    std::wstring s = L"Bedrock Dedicated Server " + str2wstr(ll::getBdsVersion().substr(1));
    SetWindowText(hwnd, s.c_str());

    // Register Exit Event Handler.
    SetConsoleCtrlHandler(ConsoleExitHandler, TRUE);
    signal(SIGTERM, unixSignalHandler);
    signal(SIGINT, unixSignalHandler);

    // Welcome
    printLogo();

    // DebugMode
    checkDevMode();

    // Addon Helper
    if (ll::globalConfig.enableAddonsHelper) {
        InitAddonsHelper();
    }

    // Load plugins
    ll::LoadMain();

    // Register built-in commands
    RegisterCommands();

    // Register simple server logger
    ll::SimpleServerLogger::registerSimpleServerLogger();

    // Register BStats
    bstats::registerBStats();

    // Register Started
    Event::ServerStartedEvent::subscribe([](Event::ServerStartedEvent) {
        logger.info(tr("ll.notice.license", "LGPLv3"));
        logger.info(tr("ll.notice.newForum", "https://forum.litebds.com"));
        logger.info(tr("ll.notice.translateText", "https://crowdin.com/project/liteloaderbds"));
        logger.info("Thanks to RhyMC(rhymc.com) for the support");
        return true;
    });

    // Register Cleanup
    Event::ServerStoppedEvent::subscribe([](Event::ServerStoppedEvent) {
        EndScheduleSystem();
        return true;
    });

    // Initialize PlayerDeathPosition counter
    PlayerDeathPositions::deathEventListener();
}

// Call LLMain
THook(int, "main", int a, void* b) {
    startTime = clock();
    char** str = static_cast<char**>(b);
    for (int i = 0; i < a; ++i) {
        if (strcmp(str[i], "--noColor") == 0) {
            ll::commandLineOption.noColorOption = true;
            break;
        }
    }
    liteloaderMain();
    return original(a, b);
}
