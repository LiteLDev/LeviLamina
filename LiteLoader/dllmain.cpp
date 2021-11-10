#include <Windows.h>

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
#pragma comment(lib, "bedrock_server_api.lib")
#pragma comment(lib, "bedrock_server_var.lib")
#pragma comment(lib, "SymDBHelper.lib")