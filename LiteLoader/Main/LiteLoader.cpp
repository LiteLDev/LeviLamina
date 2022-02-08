#include <Windows.h>
#include <TlHelp32.h>
#include <Psapi.h>
#include <string>
#include <iostream>
#include <LoggerAPI.h>
#include <Utils/StringHelper.h>
#include <seh_exception/seh_exception.hpp>
#include <ServerAPI.h>
#include <HookAPI.h>
#include <Main/Config.h>
#include "Main/Loader.h"
#include "Main/AutoUpgrade.h"
#include "Main/CrashLogger.h"
#include <TranslationAPI.h>
#include <EventAPI.h>

using namespace std;

Logger logger("LiteLoader");

// Add plugins folder to path
void FixPluginsLibDir()
{
    auto buffer = new WCHAR[8192];
    auto sz = GetEnvironmentVariableW(TEXT("PATH"), buffer, 8192);
    std::wstring PATH{buffer, sz};
    sz = GetCurrentDirectoryW(8192, buffer);
    std::wstring CWD{buffer, sz};
    SetEnvironmentVariableW(TEXT("PATH"), (CWD + L"\\plugins;" + PATH).c_str());
    delete[] buffer;
}

void FixUpCWD()
{
    string buf;
    buf.assign(8192, '\0');
    GetModuleFileNameA(nullptr, buf.data(), 8192);
    buf = buf.substr(0, buf.find_last_of('\\'));
    SetCurrentDirectoryA(buf.c_str());
}

void CheckRunningBDS()
{
    if (!LL::globalConfig.enableCheckRunningBDS) return;
    std::vector<DWORD> pids;
    PROCESSENTRY32 pe32{};
    pe32.dwSize = sizeof(pe32);
    HANDLE hProcessSnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    if (hProcessSnap == INVALID_HANDLE_VALUE) return;
    bool res = Process32First(hProcessSnap, &pe32); // Start traversing
    while (res)
    {
        std::wstring name = pe32.szExeFile;
        auto pid = pe32.th32ProcessID;
        if (_getpid() != pid && (name == L"bedrock_server.exe" || name == L"bedrock_server_mod.exe")) {
            pids.push_back(pid);
        }
        res = Process32Next(hProcessSnap, &pe32);
    }
    CloseHandle(hProcessSnap);
    // Get current process path
    auto buf = new WCHAR[8192];
    auto sz = GetModuleFileName(NULL, buf, 8192);
    std::wstring current{buf, sz}; // Copy
    delete[] buf;
    buf = 0;
    // Check the BDS process paths
    for (auto& pid : pids) {
        auto buf = new WCHAR[8196];
        // Open process handle
        auto handle = OpenProcess(PROCESS_QUERY_INFORMATION | PROCESS_VM_READ | PROCESS_TERMINATE, false, pid);
        if (handle)
        {
            DWORD sz = 0;
            buf = new WCHAR[8192];
            // Get the full path of the process
            if (sz = GetModuleFileNameEx(handle, NULL, buf, 8192))
            {
                std::wstring path{buf, sz};
                if (current == path)
                {
                    logger.error("Detected the existence of another bds process with the same path!");
                    logger.error("This may cause the network port and the level to be occupied");
                    logger.error("Do you want to terminate the process with PID {}?  (y=Yes, n=No)", pid);
                    char ch;
                    cin >> ch;
                    if (ch == 'y' || ch == 'Y')
                    {
                        //auto cmd = "taskkill /F /PID " + std::to_string(pid);
                        //system(cmd.c_str());
                        TerminateProcess(handle, 1);
                    }
                }
            }
            CloseHandle(handle);
            delete[] buf;
        }
    }
}

extern void RegisterCommands();

extern bool InitPlayerDatabase();

extern void RegisterSimpleServerLogger();

void Welcome()
{
    cout << "\r" << R"(                                                                                              )" << endl
         << "\r" << R"(         _       _  _          _                        _               ____   _____    _____ )" << endl
         << "\r" << R"(        | |     (_)| |        | |                      | |             |  _ \ |  __ \  / ____|)" << endl
         << "\r" << R"(        | |      _ | |_  ___  | |      ___    __ _   __| |  ___  _ __  | |_) || |  | || (___  )" << endl
         << "\r" << R"(        | |     | || __|/ _ \ | |     / _ \  / _` | / _` | / _ \| '__| |  _ < | |  | | \___ \ )" << endl
         << "\r" << R"(        | |____ | || |_|  __/ | |____| (_) || (_| || (_| ||  __/| |    | |_) || |__| | ____) |)" << endl
         << "\r" << R"(        |______||_| \__|\___| |______|\___/  \__,_| \__,_| \___||_|    |____/ |_____/ |_____/ )" << endl
         << "\r" << R"(                                                                                              )" << endl
         << "\r" << R"(                                                                                              )" << endl
         << "\r" << R"(                       =========   Light-Weight BDS Plugin Loader   =========                 )" << endl
         << "\r" << R"(                                                                                              )" << endl
         << "\r" << R"(                                                                                              )" << endl;
}

void CheckDevMode() {
    if (LL::globalConfig.debugMode) {
        //logger.info("");
        //logger.info("================= LiteLoader ================");
        //logger.info(" ____             __  __           _      ");
        //logger.info("|  _ \\  _____   _|  \\/  | ___   __| | ___ ");
        //logger.info(R"(| | | |/ _ \ \ / / |\/| |/ _ \ / _` |/ _ \)");
        //logger.info("| |_| |  __/\\ V /| |  | | (_) | (_| |  __/");
        //logger.info(R"(|____/ \___| \_/ |_|  |_|\___/ \__,_|\___|)");
        //logger.info("");
        logger.warn("You Are In DevelopMode!");
    }
}

// extern
extern void EndScheduleSystem();
extern void FixBugEvent();

void LLMain()
{
    // Set global SEH-Exception handler
    _set_se_translator(seh_exception::TranslateSEHtoCE);

    // Prohibit pop-up windows to facilitate automatic restart
    SetErrorMode(SEM_FAILCRITICALERRORS | SEM_NOGPFAULTERRORBOX | SEM_NOALIGNMENTFAULTEXCEPT);

    // Disable Output-Sync
    std::ios::sync_with_stdio(false);

    // Create Plugin Directory
    std::error_code ec;
    std::filesystem::create_directories("plugins", ec);

    // Fix problems
    FixUpCWD();
    FixPluginsLibDir();

    // Init LL Logger
    Logger::setDefaultFile("logs/LiteLoader-latest.log", false);

    // Load Config
    LL::LoadLLConfig();

    // Check Running BDS(Requires Config)
    CheckRunningBDS();

    // Initialize Player Database
    InitPlayerDatabase();

    //I18n
    Translation::load("plugins/LiteLoader/LangPack/" + LL::globalConfig.language + ".json");

    //Rename Window
    HWND hwnd = GetConsoleWindow();
    std::wstring s = L"Bedrock Dedicated Server " + str2wstr(LL::getBdsVersion().substr(1));
    SetWindowText(hwnd, s.c_str());

    //Welcome
    Welcome();

    //DebugMode
    CheckDevMode();

    // Builtin CrashLogger
    LL::InitCrashLogger(LL::globalConfig.enableCrashLogger);

    //Register Myself
    LL::registerPlugin("LiteLoaderBDS", "Strong DLL plugin loader for Bedrock Dedicated Server", LL::getLoaderVersion(),
    {
        {"GitHub","github.com/LiteLDev/LiteLoaderBDS"} 
    });

    //Load plugins
    LL::LoadMain();

    // Register built-in commands
    RegisterCommands();

    // Register simple server logger
    RegisterSimpleServerLogger();

    FixBugEvent();

    //Register Started
    Event::ServerStartedEvent::subscribe([](Event::ServerStartedEvent) {
        logger.info("LiteLoader is distributed under the GPLv3 License");
        logger.info("\u611f\u8c22\u65cb\u5f8b\u4e91 rhymc.com \u5bf9\u672c\u9879\u76ee\u7684\u652f\u6301");
        if (LL::globalConfig.enableAutoUpdate)
            LL::InitAutoUpdateCheck();
        return true;
    });

    // Register Cleanup
    Event::ServerStoppedEvent::subscribe([](Event::ServerStoppedEvent) {
        EndScheduleSystem();
        return true;
    });
}

// Call LLMain
THook(int, "main", int a, void* b)
{
    char** str = static_cast<char**>(b);
    for (int i = 0; i < a; ++i)
    {
        if (strcmp(str[i], "--noColor") == 0)
        {
            LL::commandLineOption.noColorOption = true;
            break;
        }
    }
    LLMain();
    return original(a, b);
}