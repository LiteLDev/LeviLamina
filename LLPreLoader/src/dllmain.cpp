#include "pch.h"
#include "Logger.h"

void fixUpLibDir();
void loadDlls();

#pragma comment(linker, "/export:GetServerSymbol=LLPreLoader.dlsym_real")

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
    if (ul_reason_for_call == DLL_PROCESS_ATTACH) {
        SetConsoleCP(CP_UTF8);
        SetConsoleOutputCP(CP_UTF8);

        DWORD mode;
        GetConsoleMode(GetStdHandle(STD_OUTPUT_HANDLE), &mode);
        SetConsoleMode(GetStdHandle(STD_OUTPUT_HANDLE), mode | ENABLE_VIRTUAL_TERMINAL_PROCESSING);
        // For #683, Change CWD to current module path
        auto buffer = new wchar_t[MAX_PATH];
        GetModuleFileName(hModule, buffer, MAX_PATH);
        std::wstring path(buffer);
        auto cwd = path.substr(0, path.find_last_of('\\'));

        SetCurrentDirectoryW(cwd.c_str());

        loadConfig();
        fixUpLibDir();
        SetErrorMode(SEM_FAILCRITICALERRORS | SEM_NOGPFAULTERRORBOX | SEM_NOALIGNMENTFAULTEXCEPT | SEM_NOOPENFILEERRORBOX);
        loadDlls();
    }
    if (ul_reason_for_call == DLL_PROCESS_DETACH) {}
    return TRUE;
}
