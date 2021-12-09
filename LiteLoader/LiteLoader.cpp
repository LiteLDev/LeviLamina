#include "Loader.h"
#include <Config.h>
#include <Header/EventAPI.h>
#include <HookAPI.h>
#include <LLAPI.h>
#include <LoggerAPI.h>
#include <ServerAPI.h>
#include <Utils/StringHelper.h>
#include <Utils/WinHelper.h>
#include <Version.h>
#include <Windows.h>
#include <iostream>
#include <seh_exception/seh_exception.hpp>
#include <string>
#include <vector>

using namespace std;


void FixPluginsLibDir() { // add plugins folder to path
    WCHAR* buffer = new WCHAR[8192];
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
        Logger::Log("=================LiteLoader================");
        Logger::Log(" ____             __  __           _      ");
        Logger::Log("|  _ \\  _____   _|  \\/  | ___   __| | ___ ");
        Logger::Log("| | | |/ _ \\ \\ / / |\\/| |/ _ \\ / _` |/ _ \\");
        Logger::Log("| |_| |  __/\\ V /| |  | | (_) | (_| |  __/");
        Logger::Log("|____/ \\___| \\_/ |_|  |_|\\___/ \\__,_|\\___|");
        Logger::Warn("You Are In DevelopMode!");
    }
}

void LLMain() {
    //Set global SEH-Exception handler
    _set_se_translator(seh_exception::TranslateSEHtoCE);

    //Prohibit pop-up windows to facilitate automatic restart
    SetErrorMode(SEM_FAILCRITICALERRORS | SEM_NOGPFAULTERRORBOX | SEM_NOALIGNMENTFAULTEXCEPT);

    //Disable Output-Sync
    std::ios::sync_with_stdio(false);

    //Fix problems
    FixUpCWD();
    FixPluginsLibDir();

    //Load Config
    LoadLLConfig();
    InitPlayerDatabase();

    //Rename Window
    HWND hwnd = GetConsoleWindow();
    std::wstring s = L"Bedrock Delicated Server " + str2wstr(LL::getBdsVersion().substr(1));
    SetWindowText(hwnd, s.c_str());

    //Init LL Logger
    Logger::setTitle("LiteLoader");
    Logger::setFile("logs/LiteLoader-latest.log", false);

    //DebugMode
    CheckDevMode();

    //Load plugins
    LoadMain();

    //Register built-in commands
    RegisterCommands();

    //Register simple server logger
    RegisterSimpleServerLogger();

    Event::ServerStartedEvent::subscribe([](Event::ServerStartedEvent) {
        // Server started event
        Logger::Info("LiteLoader is distributed under the GPLv3 License");
        Logger::Info("\u611f\u8c22\u65cb\u5f8b\u4e91 rhymc.com \u5bf9\u672c\u9879\u76ee\u7684\u652f\u6301");
        return true;
    });
}
// Call LLMain

THook(int, "main", int a, void* b) {
    LLMain();
    return original(a, b);
}
