#define WIN32_LEAN_AND_MEAN

#include <Windows.h>

extern void LLUpdate();

HMODULE hDll = nullptr;

DWORD WINAPI UnloadProc(PVOID param) {
    FreeLibraryAndExitThread(hDll, 0);
}

BOOL APIENTRY DllMain(HMODULE hModule,
                      DWORD ul_reason_for_call,
                      LPVOID lpReserved
) {
    switch (ul_reason_for_call) {
        case DLL_PROCESS_ATTACH: {
            LLUpdate();

            hDll = hModule;
            HANDLE hThread = CreateThread(nullptr, 0, UnloadProc, nullptr, 0, nullptr);
            CloseHandle(hThread);
            break;
        }
        case DLL_THREAD_ATTACH:
        case DLL_THREAD_DETACH:
        case DLL_PROCESS_DETACH:
            break;
    }
    return TRUE;
}

