#include <Windows.h>
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
#include <EventAPI.h>

using namespace std;

Logger logger("LiteLoader");

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
        logger.info("");
        logger.info("================= LiteLoader ================");
        logger.info(" ____             __  __           _      ");
        logger.info("|  _ \\  _____   _|  \\/  | ___   __| | ___ ");
        logger.info(R"(| | | |/ _ \ \ / / |\/| |/ _ \ / _` |/ _ \)");
        logger.info("| |_| |  __/\\ V /| |  | | (_) | (_| |  __/");
        logger.info(R"(|____/ \___| \_/ |_|  |_|\___/ \__,_|\___|)");
        logger.info("");
        logger.warn("You Are In DevelopMode!");
    }
}

//extern
extern void EndScheduleSystem();
extern void FixBugEvent();

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
    Logger::setDefaultFile("logs/LiteLoader-latest.log", false);

    //Load Config
    LL::LoadLLConfig();
    InitPlayerDatabase();

    //Rename Window
    HWND hwnd = GetConsoleWindow();
    std::wstring s = L"Bedrock Dedicated Server " + str2wstr(LL::getBdsVersion().substr(1));
    SetWindowText(hwnd, s.c_str());

    //DebugMode
    CheckDevMode();

    //Builtin CrashLogger
    LL::InitCrashLogger(LL::globalConfig.enableCrashLogger);

    //Register Myself
    //LL::registerPlugin("LiteLoaderBDS", "Strong DLL plugin loader for bedrock delicated server", LITELOADER_VERSION,
    //    { {"GitHub","github.com/LiteLDev/LiteLoaderBDS"} 
    //});

    //Load plugins
    LL::LoadMain();

    //Register built-in commands
    RegisterCommands();

    //Register simple server logger
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

    //Register Cleanup
    Event::ServerStoppedEvent::subscribe([](Event::ServerStoppedEvent) {
        EndScheduleSystem();
        return true;
    });

}

// Call LLMain
THook(int, "main", int a, void *b) {
    char **str = static_cast<char **>(b);
    for (int i = 0; i < a; ++i) {
        if (strcmp(str[i], "--noColor") == 0) {
            LL::commandLineOption.noColorOption = true;
            break;
        }
    }
    LLMain();
    return original(a, b);
}

