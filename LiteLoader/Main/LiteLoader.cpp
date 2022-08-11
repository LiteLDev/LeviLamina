#include <windows.h>
#include <TlHelp32.h>
#include <Psapi.h>
#include <string>
#include <iostream>
#include <LoggerAPI.h>
#include <Utils/StringHelper.h>
#include <Utils/FileHelper.h>
#include <seh_exception/seh_exception.hpp>
#include <ServerAPI.h>
#include <HookAPI.h>
#include "Config.h"
#include "Loader.h"
#include "CrashLogger.h"
#include "AddonsHelper.h"
#include <EventAPI.h>
#include "Version.h"

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

void CheckRunningBDS() {
    if (!LL::globalConfig.enableCheckRunningBDS)
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
        WCHAR buf[8196] = {0};
        // Open process handle
        auto handle = OpenProcess(PROCESS_QUERY_INFORMATION | PROCESS_VM_READ | PROCESS_TERMINATE, false, pid);
        if (handle) {
            DWORD sz = NULL;
            WCHAR buf[8196] = {0};
            // Get the full path of the process
            if (sz = GetModuleFileNameEx(handle, nullptr, buf, 8196)) {
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
    if (!LL::globalConfig.enableWelcomeText)
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
    if (LL::globalConfig.debugMode)
        logger.warn(tr("ll.main.warning.inDevMode"));
}

void CheckBetaVersion() {
    if (LITELOADER_VERSION_STATUS != LL::Version::Release) {
        logger.warn(tr("ll.main.warning.betaVersion"));
        logger.warn(tr("ll.main.warning.productionEnv"));
    }
}

void CheckProtocolVersion() {
    auto currentProtocol = LL::getServerProtocolVersion();
    if (TARGET_BDS_PROTOCOL_VERSION != currentProtocol) {
        logger.warn(tr("ll.main.warning.protocolVersionNotMatch.1"), TARGET_BDS_PROTOCOL_VERSION, currentProtocol);
        logger.warn(tr("ll.main.warning.protocolVersionNotMatch.2"));
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}

// extern
extern void EndScheduleSystem();
namespace bstats {
void registerBStats();
}

void LLMain() {
    // Set global SEH-Exception handler
    _set_se_translator(seh_exception::TranslateSEHtoCE);

    // Prohibit pop-up windows to facilitate automatic restart
    SetErrorMode(SEM_FAILCRITICALERRORS | SEM_NOGPFAULTERRORBOX | SEM_NOALIGNMENTFAULTEXCEPT);

    // Disable Output-Sync
    std::ios::sync_with_stdio(false);

    // Create Plugin Directory
    std::error_code ec;
    std::filesystem::create_directories("plugins", ec);

    // Load Config
    LL::LoadLLConfig();

    // I18n
    Translation::load("plugins/LiteLoader/LangPack/", (LL::globalConfig.language == "system" ? "" : LL::globalConfig.language));

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
    LL::InitCrashLogger(LL::globalConfig.enableCrashLogger);

    // Initialize Player Database
    InitPlayerDatabase();

    // Rename Window
    HWND hwnd = GetConsoleWindow();
    std::wstring s = L"Bedrock Dedicated Server " + str2wstr(LL::getBdsVersion().substr(1));
    SetWindowText(hwnd, s.c_str());

    // Welcome
    Welcome();

    // DebugMode
    CheckDevMode();

    // Addon Helper
    if (LL::globalConfig.enableAddonsHelper) {
        InitAddonsHelper();
    }

    // Load plugins
    LL::LoadMain();

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
            LL::commandLineOption.noColorOption = true;
            break;
        }
    }
    LLMain();
    return original(a, b);
}
