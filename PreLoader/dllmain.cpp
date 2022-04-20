// dllmain.cpp : 定义 DLL 应用程序的入口点。
#include "pch.h"
#include "Logger.h"
void fixUpLibDir();
void loadDlls();
#pragma comment(linker, "/export:GetServerSymbol=LLPreLoader.dlsym_real")

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
    if (ul_reason_for_call == DLL_PROCESS_ATTACH)
    {
        system("chcp 65001>nul");
        loadconfig();
        fixUpLibDir();
        loadDlls();
    }
    if (ul_reason_for_call == DLL_PROCESS_DETACH)
    {
    }
    return TRUE;
}