#include "pch.h"
#include "Logger.h"
#include <string>
#include <set>
#include <filesystem>
#include <windows.h>

using std::string;
using std::wstring;
using namespace std::filesystem;

#define MAX_PATH_LENGTH 8192

std::set<std::string> preloadList;

void fixUpLibDir() {
    WCHAR* buffer = new (std::nothrow) WCHAR[MAX_PATH_LENGTH];
    if (!buffer)
        return;

    DWORD length = GetEnvironmentVariableW(TEXT("PATH"), buffer, MAX_PATH_LENGTH);
    std::wstring PATH(buffer, length);
    length = GetCurrentDirectoryW(MAX_PATH_LENGTH, buffer);
    std::wstring CWD(buffer, length);

    SetEnvironmentVariableW(TEXT("PATH"), (CWD + L"\\plugins\\lib;" + PATH).c_str());
    delete[] buffer;
}

std::wstring str2wstr(const std::string& str, UINT codePage) {
    auto len = MultiByteToWideChar(codePage, 0, str.c_str(), -1, nullptr, 0);
    auto* buffer = new wchar_t[len + 1];
    MultiByteToWideChar(codePage, 0, str.c_str(), -1, buffer, len + 1);
    buffer[len] = L'\0';

    wstring result = wstring(buffer);
    delete[] buffer;
    return result;
}

wstring str2wstr(const string& str) {
    return str2wstr(str, CP_UTF8);
}

string wstr2str(wstring wstr) {
    auto len = WideCharToMultiByte(CP_UTF8, 0, wstr.c_str(), -1, NULL, 0, NULL, NULL);
    char* buffer = new char[len + 1];
    WideCharToMultiByte(CP_UTF8, 0, wstr.c_str(), -1, buffer, len + 1, NULL, NULL);
    buffer[len] = '\0';

    string result = string(buffer);
    delete[] buffer;
    return result;
}

bool loadLib(LPCTSTR libName, bool showFailInfo = true) {
    if (LoadLibrary(libName)) {
        Info("{} Injected.", std::filesystem::path(wstr2str(libName)).filename().u8string());
        return true;
    } else {
        if (showFailInfo) {
            DWORD error_message_id = GetLastError();
            Error("Can't load {} !", wstr2str(libName));
            Error("Error code: {} !", error_message_id);
            LPWSTR message_buffer = nullptr;
            FormatMessage(FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_IGNORE_INSERTS |
                              FORMAT_MESSAGE_FROM_SYSTEM,
                          NULL, error_message_id, MAKELANGID(0x09, SUBLANG_DEFAULT),
                          (LPWSTR)&message_buffer, 0, NULL);
            Error("{}", wstr2str(message_buffer));
            LocalFree(message_buffer);
        }
        return false;
    }
}

void loadPlugins() {
    std::filesystem::create_directories("plugins");
    directory_iterator ent("plugins");
    for (auto& file : ent) {
        if (!file.is_regular_file())
            continue;

        auto& path = file.path();
        auto fileName = path.u8string();
        if (fileName.find("LiteLoader") != string::npos || fileName.find("LiteXLoader") != string::npos) // Skip Wrong file path
            continue;

        string ext = path.extension().u8string();
        if (ext != ".dll") {
            continue;
        }

        if (preloadList.count(fileName))
            continue;

        string pluginFileName = path.filename().u8string();
        auto lib = LoadLibrary(str2wstr(fileName).c_str());
        if (lib) {
            Info("Plugin <{}> Injected", pluginFileName);
        } else {
            Error("Fail to load plugin [{}]", pluginFileName);
            Error("Error: Code[{}]", GetLastError());
        }
    }
}

bool loadLiteLoader() {
    if (!exists(path(TEXT("LiteLoader.dll"))))
        return false;
    if (!loadLib(TEXT("LiteLoader.dll")))
        return false;
    return true;
}

void loadDlls() {
    if (exists(path(TEXT(".\\plugins\\preload.conf")))) {
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
                if (dllName.find(L"LiteLoader.dll") != std::wstring::npos)
                    continue;
                loadLib(dllName.c_str());
                preloadList.insert(wstr2str(dllName));
            }
            dllList.close();
        }
    } else {
        std::wofstream dllList(TEXT(".\\plugins\\preload.conf"));
        dllList.close();
    }
    if (!loadLiteLoader()) {
        Info("[LiteLoader] PreLoader is running as LiteLoaderCore...");
        loadPlugins();
    }
}