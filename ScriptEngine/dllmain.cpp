#pragma comment(lib, "../third-party/LiteLoader/Lib/bedrock_server_api.lib")
#pragma comment(lib, "../third-party/LiteLoader/Lib/bedrock_server_var.lib")
#pragma comment(lib, "../third-party/LiteLoader/Lib/SymDBHelper.lib")
#pragma comment(lib, "../third-party/LiteLoader/Lib/LiteLoader.lib")

#include <windows.h>
#include <iostream>

extern void entry();

extern "C" {
    _declspec(dllexport) void onPostInit() {
        std::ios::sync_with_stdio(false);
        entry();
    }
}

BOOL APIENTRY DllMain(HMODULE hModule,DWORD  ul_reason_for_call,LPVOID lpReserved)
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

