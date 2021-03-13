// dllmain.cpp : 定义 DLL 应用程序的入口点。
#include "pch.h"

void preload();
void fixupLibDir();

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH: {
        system("chcp 65001");
        fixupLibDir();
        preload();
        if (LoadLibrary(TEXT("LiteLoader.dll"))) {
            std::wcout << "LiteLoader Injected" << std::endl;
        } else {
            std::wcout << "[Error] Can't load LiteLoader  " << GetLastError() << std::endl;
            exit(1);
        }
    }
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

