// dllmain.cpp : 定义 DLL 应用程序的入口点。
#include "framework.h"
#include "pch.h"
#include <filesystem>
#include <iostream>
#include <lbpch.h>

LIAPI string GetDataPath(const string& myname) {
    using namespace std::filesystem;
    create_directory("plugins\\LiteLoader");
    return "plugins\\LiteLoader\\" + myname;
}

BOOL WINAPI DllMain(HMODULE, DWORD ul_reason_for_call, LPVOID) {
    switch (ul_reason_for_call) {
        case DLL_PROCESS_ATTACH:
        case DLL_THREAD_ATTACH:
        case DLL_THREAD_DETACH:
        case DLL_PROCESS_DETACH:
            break;
    }
    return TRUE;
}
