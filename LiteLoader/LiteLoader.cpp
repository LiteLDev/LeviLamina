#include <Windows.h>
#include <vector>
#include <string>
#include <iostream>
#include <Logger.h>
#include <Utils/WinHelper.h>
#include <Utils/StringHelper.h>
#include <seh_exception/seh_exception.hpp>
#include <ServerAPI.h>
#include <HookAPI.h>
#include <LLAPI.h>
#include <Version.h>
#include <Config.h>
#include "Loader.h"
#include "AutoUpgrade.h"
#include "CrashLogger.h"
#include <Header/EventAPI.h>

using namespace std;

Logger llLogger("LiteLoader");

void FixPluginsLibDir() {  // add plugins folder to path
    auto *buffer = new WCHAR[8192];
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

extern void RegisterCommands();
extern bool InitPlayerDatabase();
extern void RegisterSimpleServerLogger();

void CheckDevMode() {
    if (LL::globalConfig.debugMode) {
        llLogger.info(" ");
        llLogger.info("================= LiteLoader ================");
        llLogger.info(" ____             __  __           _      ");
        llLogger.info("|  _ \\  _____   _|  \\/  | ___   __| | ___ ");
        llLogger.info("| | | |/ _ \\ \\ / / |\\/| |/ _ \\ / _` |/ _ \\");
        llLogger.info("| |_| |  __/\\ V /| |  | | (_) | (_| |  __/");
        llLogger.info("|____/ \\___| \\_/ |_|  |_|\\___/ \\__,_|\\___|\n");
        llLogger.warn("You Are In DevelopMode!");
    }
}

void LLMain() {
    //Set global SEH-Exception handler
    _set_se_translator(seh_exception::TranslateSEHtoCE);

    //Prohibit pop-up windows to facilitate automatic restart
    SetErrorMode(SEM_FAILCRITICALERRORS | SEM_NOGPFAULTERRORBOX | SEM_NOALIGNMENTFAULTEXCEPT);

    //Disable Output-Sync
    std::ios::sync_with_stdio(false);

    //Create Plugin Directory
    std::error_code ec;
    std::filesystem::create_directories("plugins", ec);

    //Fix problems
    FixUpCWD();
    FixPluginsLibDir();

    //Init LL Logger
    Logger::setFile("logs/LiteLoader-latest.log", false);

    //Load Config
    LoadLLConfig();
    InitPlayerDatabase();
    
    //Rename Window
    HWND hwnd = GetConsoleWindow();
    std::wstring s = L"Bedrock Delicated Server " + str2wstr(LL::getBdsVersion().substr(1));
    SetWindowText(hwnd, s.c_str());

    //DebugMode
    CheckDevMode();

    //Builtin CrashLogger
    InitCrashLogger(LL::globalConfig.enableCrashLogger);

    //Load plugins
    LoadMain();

    //Register built-in commands
    RegisterCommands();

    //Register simple server logger
    RegisterSimpleServerLogger();

    Event::ServerStartedEvent::subscribe([](Event::ServerStartedEvent)
    { 
        // Server started event
        llLogger.info("LiteLoader is distributed under the GPLv3 License");
        llLogger.info("\u611f\u8c22\u65cb\u5f8b\u4e91 rhymc.com \u5bf9\u672c\u9879\u76ee\u7684\u652f\u6301");
        if (LL::globalConfig.enableAutoUpdate)
            InitAutoUpdateCheck();
        return true;
    });

}
// Call LLMain

THook(int, "main", int a, void* b) {
    LLMain();
    return original(a, b);
}

