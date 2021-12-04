#include "Bomb.h"
#pragma comment(lib, "Lib/bedrock_server_api.lib")
#pragma comment(lib, "Lib/bedrock_server_var.lib")
#pragma comment(lib, "Lib/SymDBHelper.lib")
#pragma comment(lib, "../Release/Chakra.lib")
#include <Windows.h>
#pragma comment(linker, "/export:HookFunction=Chakra.HookFunction")
#pragma comment(linker, "/export:dlsym_real=Chakra.dlsym_real")
BOOL WINAPI DllMain(HMODULE, DWORD ul_reason_for_call, LPVOID)
{
    switch (ul_reason_for_call) {
        case DLL_PROCESS_ATTACH:
        case DLL_THREAD_ATTACH:
        case DLL_THREAD_DETACH:
        case DLL_PROCESS_DETACH:
            break;
    }
    return TRUE;
}