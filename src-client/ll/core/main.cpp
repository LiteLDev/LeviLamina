#include "windows.h"

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ulReasonForCall, LPVOID lpReserved) {
    if (ulReasonForCall != DLL_PROCESS_ATTACH) return TRUE;

    return TRUE;
}
