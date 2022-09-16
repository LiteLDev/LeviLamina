#include <windows.h>
#include <TlHelp32.h>
#include <Psapi.h>
#include <string>
#include <iostream>
#include <llapi/LoggerAPI.h>
#include <llapi/utils/StringHelper.h>
#include <llapi/utils/FileHelper.h>
#include <llapi/utils/SehTranslator.h>
#include <llapi/ServerAPI.h>
#include <llapi/HookAPI.h>
#include <liteloader/Config.h>
#include <liteloader/Loader.h>
#include <liteloader/CrashLogger.h>
#include <liteloader/AddonsHelper.h>
#include <llapi/EventAPI.h>
#include <liteloader/Version.h>
#include <llapi/mc/Minecraft.hpp>
#include <csignal>

using namespace std;

Logger logger("LiteLoader");
time_t startTime;
time_t endTime;

// Add plugins folder to path
void FixPluginsLibDir() {
    auto buffer = new WCHAR[8192];
    auto sz = GetEnvironmentVariableW(TEXT("PATH"), buffer, 8192);
    std::wstring PATH{buffer, sz};
    sz = GetCurrentDirectoryW(8192, buffer);
    std::wstring CWD{buffer, sz};
    SetEnvironmentVariableW(TEXT("PATH"), (CWD + L"\\plugins;" + PATH).c_str());
    delete[] buffer;
}

void FixUpCWD() {
    string buf;
    buf.assign(8192, '\0');
    GetModuleFileNameA(nullptr, buf.data(), 8192);
    buf = buf.substr(0, buf.find_last_of('\\'));
    SetCurrentDirectoryA(buf.c_str());
}

#include <FMT/format.h>
void UnzipNodeModules() {
    if (std::filesystem::exists(std::filesystem::path(TEXT(".\\plugins\\lib\\node_modules.tar")))) {
        std::error_code ec;
        //if(std::filesystem::exists(".\\plugins\\lib\\node_modules\\"))
        //    filesystem::remove_all(".\\plugins\\lib\\node_modules\\", ec);
        auto res = NewProcessSync(fmt::format(R"({} x "{}" -o".\plugins\lib\" -aoa)", ZIP_PROGRAM_PATH, R"(.\plugins\lib\node_modules.tar)"), 30000);
        if (res.first != 0) {
            logger.error(tr("ll.unzipNodeModules.fail"));
        } else {
            filesystem::remove(R"(.\plugins\lib\node_modules.tar)", ec);
        }
    }
}

void DecompressResourcePacks() {
    if (std::filesystem::exists(std::filesystem::path(TEXT(".\\plugins\\LiteLoader\\ResourcePacks\\LiteLoaderBDS-CUI.tar")))) {
        std::error_code ec;
        // if(std::filesystem::exists(".\\plugins\\lib\\node_modules\\"))
        //     filesystem::remove_all(".\\plugins\\lib\\node_modules\\", ec);
        auto res = NewProcessSync(fmt::format(R"({} x "{}" -o".\plugins\LiteLoader\ResourcePacks\" -aoa)", ZIP_PROGRAM_PATH, R"(.\plugins\LiteLoader\ResourcePacks\LiteLoaderBDS-CUI.tar)"), 30000);
        if (res.first != 0) {
            logger.error(tr("ll.decompressResourcePacks.fail"));
        } else {
            filesystem::remove(R"(.\plugins\LiteLoader\ResourcePacks\LiteLoaderBDS-CUI.tar)", ec);
        }
    }
}

void CheckRunningBDS() {
    if (!ll::globalConfig.enableCheckRunningBDS)
        return;
    std::vector<DWORD> pids;
    PROCESSENTRY32 pe32{};
    pe32.dwSize = sizeof(pe32);
    HANDLE hProcessSnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    if (hProcessSnap == INVALID_HANDLE_VALUE)
        return;
    bool res = Process32First(hProcessSnap, &pe32); // Start traversing
    while (res) {
        std::wstring name = pe32.szExeFile;
        auto pid = pe32.th32ProcessID;
        if (_getpid() != pid && (name == L"bedrock_server.exe" || name == L"bedrock_server_mod.exe")) {
            pids.push_back(pid);
        }
        res = Process32Next(hProcessSnap, &pe32);
    }
    CloseHandle(hProcessSnap);
    // Get current process path
    WCHAR buf[8196] = {0};
    auto sz = GetModuleFileName(nullptr, buf, 8196);
    std::wstring current{buf, sz}; // Copy
    // Check the BDS process paths
    for (auto& pid : pids) {
        // Open process handle
        auto handle = OpenProcess(PROCESS_QUERY_INFORMATION | PROCESS_VM_READ | PROCESS_TERMINATE, false, pid);
        if (handle) {
            sz = NULL;
            buf[8196] = {0};
            // Get the full path of the process
            if ((sz = GetModuleFileNameEx(handle, nullptr, buf, 8196))) {
                std::wstring path{buf, sz};
                if (current == path) {
                    logger.error(tr("ll.main.checkRunningBDS.detected"));
                    logger.error(tr("ll.main.checkRunningBDS.tip"));
                    logger.error(tr("ll.main.checkRunningBDS.ask", pid));
                    char ch;
                    cin >> ch;
                    if (ch == 'y' || ch == 'Y') {
                        // auto cmd = "taskkill /F /PID " + std::to_string(pid);
                        // system(cmd.c_str());
                        TerminateProcess(handle, 1);
                    }
                }
            }
            CloseHandle(handle);
        }
    }
}

void FixAllowList() {
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

extern void RegisterCommands();

extern bool InitPlayerDatabase();

extern void RegisterSimpleServerLogger();

void Welcome() {
    if (!ll::globalConfig.enableWelcomeText)
        return;


    cout << "\r"
         << R"(                                                                       )" << endl
         << "\r"
         << R"(          _     _ _       _                    _                       )" << endl
         << "\r"
         << R"(         | |   (_) |_ ___| |    ___   __ _  __| | ___ _ __             )" << endl
         << "\r"
         << R"(         | |   | | __/ _ \ |   / _ \ / _` |/ _` |/ _ \ '__|            )" << endl
         << "\r"
         << R"(         | |___| | ||  __/ |__| (_) | (_| | (_| |  __/ |               )" << endl
         << "\r"
         << R"(         |_____|_|\__\___|_____\___/ \__,_|\__,_|\___|_|               )" << endl
         << "\r"
         << R"(                                                                       )" << endl
         << "\r"
         << R"(       --------   Light-Weight BDS Plugin Loader   ----------          )" << endl
         << "\r"
         << R"(                                                                       )" << endl;
}

void CheckDevMode() {
    if (ll::globalConfig.debugMode)
        logger.warn(tr("ll.main.warning.inDevMode"));
}

void CheckBetaVersion() {
    if (LITELOADER_VERSION_STATUS != ll::Version::Release) {
        logger.warn(tr("ll.main.warning.betaVersion"));
        logger.warn(tr("ll.main.warning.productionEnv"));
    }
}

void CheckProtocolVersion() {
    auto currentProtocol = ll::getServerProtocolVersion();
    if (TARGET_BDS_PROTOCOL_VERSION != currentProtocol) {
        logger.warn(tr("ll.main.warning.protocolVersionNotMatch.1"), TARGET_BDS_PROTOCOL_VERSION, currentProtocol);
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
                Global<Minecraft>->requestServerShutdown();
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

void UnixSignalHandler(int signum) {
    switch (signum) {
        case SIGINT:
        case SIGTERM: {
            if (Global<Minecraft>) {
                Global<Minecraft>->requestServerShutdown();
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
extern void EndScheduleSystem();
namespace bstats {
void registerBStats();
}

void LLMain() {
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

    //Unzip packed Node Modules
    UnzipNodeModules();

    //Decompress resource packs
    DecompressResourcePacks();

    // If SEH Protection is not enabled (Debug mode), restore old SE translator
    if (!ll::isDebugMode())
        _set_se_translator(oldSeTranslator);

    // Update default language
    if (i18n && ll::globalConfig.language != "system") {
        i18n->defaultLocaleName = ll::globalConfig.language;
    }

    // Check Protocol Version
    CheckProtocolVersion();

    // Fix problems
    FixUpCWD();
    FixPluginsLibDir();

    // Check whether allowlist.json exists/is empty or not
    FixAllowList();

    // Init LL Logger
    Logger::setDefaultFile("logs/LiteLoader-latest.log", false);

    // Check Running BDS(Requires Config)
    CheckRunningBDS();

    // Builtin CrashLogger
    ll::InitCrashLogger(ll::globalConfig.enableCrashLogger);

    // Initialize Player Database
    InitPlayerDatabase();

    // Rename Window
    HWND hwnd = GetConsoleWindow();
    std::wstring s = L"Bedrock Dedicated Server " + str2wstr(ll::getBdsVersion().substr(1));
    SetWindowText(hwnd, s.c_str());

    // Register Exit Event Handler.
    SetConsoleCtrlHandler(ConsoleExitHandler, TRUE);
    signal(SIGTERM, UnixSignalHandler);
    signal(SIGINT, UnixSignalHandler);

    // Welcome
    Welcome();

    // DebugMode
    CheckDevMode();

    // Addon Helper
    if (ll::globalConfig.enableAddonsHelper) {
        InitAddonsHelper();
    }

    // Load plugins
    ll::LoadMain();

    // Register built-in commands
    RegisterCommands();

    // Register simple server logger
    RegisterSimpleServerLogger();

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
    LLMain();
    return original(a, b);
}
