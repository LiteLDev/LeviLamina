// dllmain.cpp : 定义 DLL 应用程序的入口点。
#include "pch.h"
#include "Logger.h"
void fixUpLibDir();
void loadDlls();
#pragma comment(linker, "/export:GetServerSymbol=LLPreLoader.dlsym_real")

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
    if (ul_reason_for_call == DLL_PROCESS_ATTACH) {
        system("chcp 65001>nul");
        
        // For #683, Change CWD to current module path
        WCHAR cpath[MAX_PATH];
        GetModuleFileName(hModule, cpath, MAX_PATH);
        std::wstring path(cpath);
        auto cwd = path.substr(0, path.find_last_of('\\'));
        _wchdir(cwd.c_str());

        loadconfig();
        fixUpLibDir();
        loadDlls();
    }
    if (ul_reason_for_call == DLL_PROCESS_DETACH) {
    }
    return TRUE;
}