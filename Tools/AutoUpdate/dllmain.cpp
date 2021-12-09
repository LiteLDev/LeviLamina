#include <thread>
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

extern void LLUpdate();

HMODULE hDll = NULL;

DWORD WINAPI UnloadProc(PVOID param)
{
    FreeLibraryAndExitThread(hDll, 0);
    return 0;
}

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    {
        LLUpdate();

        hDll = hModule;
        HANDLE hThread = CreateThread(NULL, 0, UnloadProc, NULL, 0, NULL);
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

