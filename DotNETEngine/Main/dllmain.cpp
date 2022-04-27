#pragma comment(lib, "../LiteLoader/Lib/bedrock_server_api.lib")
#pragma comment(lib, "../LiteLoader/Lib/bedrock_server_var.lib")
#pragma comment(lib, "../LiteLoader/Lib/SymDBHelper.lib")
#pragma comment(lib, "../LiteLoader/Lib/LiteLoader.lib")

#pragma unmanaged
#include <windows.h>
#include <iostream>
#include "Global.hpp"
#include <Utils/WinHelper.h>

#pragma unmanaged
extern void entry();

#pragma unmanaged
extern "C" _declspec(dllexport) void onPostInit()
{
    std::ios::sync_with_stdio(false);
    MODULE = GetCurrentModule();
    entry();
}

#pragma unmanaged
BOOL APIENTRY DllMain(HMODULE hModule,
                      DWORD ul_reason_for_call,
                      LPVOID lpReserved)
{
    switch (ul_reason_for_call)
    {
        case DLL_PROCESS_ATTACH:
        case DLL_THREAD_ATTACH:
        case DLL_THREAD_DETACH:
        case DLL_PROCESS_DETACH:
            break;
    }
    return TRUE;
}
