#include "pch.h"
#include <string>
#include <cstdio>
#include <cstring>
#include "../include/LoggerShareData.h"

bool InitDaemonProcess()
{
    STARTUPINFO si;
    ZeroMemory(&si, sizeof(si));
    si.cb = sizeof(si);
    PROCESS_INFORMATION pi;

    SECURITY_ATTRIBUTES sa;
    sa.bInheritHandle = TRUE;
    sa.lpSecurityDescriptor = NULL;
    sa.nLength = sizeof(SECURITY_ATTRIBUTES);

    wchar_t daemonPath[MAX_PATH];

    wsprintf(daemonPath, L"%ls %u", DAEMON_PROCESS_PATH, GetCurrentProcessId());
    if (!CreateProcess(NULL, daemonPath, &sa, &sa, TRUE, 0, NULL, NULL, &si, &pi))
    {
        printf("[CrashLogger][ERROR] Could not Create Daemon Process! Error Code: %d\n", GetLastError());
        return false;
    }

    CloseHandle(pi.hProcess);
    CloseHandle(pi.hThread);
    return true;
}

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        if (IsDebuggerPresent())
        {
            printf("[CrashLogger][Warning] Existing debugger detected. CrashLogger will not work.\n");
            return TRUE;
        }
        if (!InitDaemonProcess())
            return FALSE;
        printf("[CrashLogger] CrashLogger loaded.\n");
        break;
    case DLL_THREAD_ATTACH:
        break;
    case DLL_THREAD_DETACH:
        break;
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

