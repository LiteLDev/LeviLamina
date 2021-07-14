// Chakra.cpp : 定义 DLL 的导出函数。
//

#include "Chakra.h"
#include "framework.h"
#include "pch.h"

#define MAX_PATH_LENGTH 8192

void fixupLibDir() {
    WCHAR *buffer = new (std::nothrow) WCHAR[MAX_PATH_LENGTH];
    if (!buffer)
        return;

    DWORD length = GetEnvironmentVariableW(TEXT("PATH"), buffer, MAX_PATH_LENGTH);
    std::wstring PATH(buffer, length);
    length = GetCurrentDirectoryW(MAX_PATH_LENGTH, buffer);
    std::wstring CWD(buffer, length);

    SetEnvironmentVariableW(TEXT("PATH"), (CWD + L"\\plugins\\lib;" + PATH).c_str());
    delete[] buffer;
}

bool LoadLib(LPCTSTR libName, bool showFailInfo = true) {
    if (LoadLibrary(libName)) {
        std::wcout << "[Chakra] " << libName << " Injected." << std::endl;
        return true;
    } else {
        if (showFailInfo) {
            std::wcout << "[Chakra][Error] Can't load " << libName << "!" << std::endl;
            std::wcout << "[Chakra][Error] Error Code:" << GetLastError() << std::endl;
        }
        return false;
    }
}

void LoadCSR() {
    if(std::filesystem::exists(std::filesystem::path(TEXT("./plugins/BDSNetRunner.dll"))))
    {
        LoadLib(TEXT("./plugins/BDSNetRunner.dll"));
    }
}

bool LoadLiteLoader() {
    if (!std::filesystem::exists(std::filesystem::path(TEXT("LiteLoader.dll"))))
        return false;
    if (!LoadLib(TEXT("LiteLoader.dll")))
        return false;
    return true;
}

void loadDlls() {
    if (!LoadLiteLoader()) {
        Sleep(3000);
        exit(GetLastError());
    }
    LoadCSR();

    if (std::filesystem::exists(std::filesystem::path(TEXT(".\\plugins\\preload.conf")))) {
        std::wifstream dllList(TEXT(".\\plugins\\preload.conf"));
        if (dllList) {
            std::wstring dllName;
            while (getline(dllList, dllName)) {
                if (dllName.back() == TEXT('\n'))
                    dllName.pop_back();
                if (dllName.back() == TEXT('\r'))
                    dllName.pop_back();

                if (dllName.empty() || dllName.front() == TEXT('#'))
                    continue;
                if (dllName.find(L"LiteLoader.dll") != std::wstring::npos ||
                    dllName.find(L"BDSNetRunner.dll") != std::wstring::npos)
                    continue;
                LoadLib(dllName.c_str());
            }
            dllList.close();
        }
    } else {
        std::wofstream dllList(TEXT(".\\plugins\\preload.conf"));
        dllList.close();
    }
}

#pragma comment(linker, "/export:HookFunction=LiteLoader.HookFunction")
#pragma comment(linker, "/export:GetServerSymbol=LiteLoader.dlsym_real")