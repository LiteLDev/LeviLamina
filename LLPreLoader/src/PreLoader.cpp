#include "Logger.h"
#include <string>
#include <set>
#include <filesystem>
#include <windows.h>

using std::string;
using std::wstring;
using namespace std::filesystem;

constexpr const int MAX_PATH_LENGTH = 8192;

std::set<std::string> preloadList;

void fixUpLibDir() {
    auto* buffer = new (std::nothrow) WCHAR[MAX_PATH_LENGTH];
    if (!buffer)
        return;

    DWORD length = GetEnvironmentVariableW(L"PATH", buffer, MAX_PATH_LENGTH);
    std::wstring path(buffer, length);
    length = GetCurrentDirectoryW(MAX_PATH_LENGTH, buffer);
    std::wstring currentDir(buffer, length);

    SetEnvironmentVariableW(L"PATH", (currentDir + L"\\plugins\\lib;" + path).c_str());
    delete[] buffer;
}

std::wstring str2wstr(const std::string& str, UINT codePage) {
    auto len = MultiByteToWideChar(codePage, 0, str.c_str(), -1, nullptr, 0);
    auto* buffer = new wchar_t[len];
    MultiByteToWideChar(codePage, 0, str.c_str(), -1, buffer, len);
    wstring result = wstring(buffer);
    delete[] buffer;
    return result;
}

wstring str2wstr(const string& str) {
    return str2wstr(str, CP_UTF8);
}

string wstr2str(const wstring& wstr) {
    auto len = WideCharToMultiByte(CP_UTF8, 0, wstr.c_str(), -1, nullptr, 0, nullptr, nullptr);
    char* buffer = new char[len];
    WideCharToMultiByte(CP_UTF8, 0, wstr.c_str(), -1, buffer, len, nullptr, nullptr);
    string result = string(buffer);
    delete[] buffer;
    return result;
}

bool loadLib(const string& libName, bool showFailInfo = true) {
    if (LoadLibraryW(str2wstr(libName).c_str())) {
        Info("{} Injected.", std::filesystem::path(libName).filename().u8string());
        return true;
    } else {
        if (showFailInfo) {
            DWORD error_message_id = GetLastError();
            Error("Can't load {} !", libName);
            Error("Error code: {} !", error_message_id);
            LPWSTR message_buffer = nullptr;
            FormatMessage(FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_IGNORE_INSERTS | FORMAT_MESSAGE_FROM_SYSTEM,
                          nullptr, error_message_id, NULL, (LPWSTR)&message_buffer, NULL,
                          nullptr);
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
        if (fileName.find("LiteLoader") != string::npos ||
            fileName.find("LiteXLoader") != string::npos) // Skip Wrong file path
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
    if (!exists(path("LiteLoader.dll")))
        return false;
    if (!loadLib("LiteLoader.dll"))
        return false;
    return true;
}

void loadDlls() {
    if (exists(path(".\\plugins\\preload.conf"))) {
        std::ifstream dllList(".\\plugins\\preload.conf");
        if (dllList) {
            std::string dllName;
            while (getline(dllList, dllName)) {
                if (dllName.back() == '\n')
                    dllName.pop_back();
                if (dllName.back() == '\r')
                    dllName.pop_back();

                if (dllName.empty() || dllName.front() == '#')
                    continue;
                if (dllName.find("LiteLoader.dll") != std::wstring::npos)
                    continue;
                std::cout << "Preload: " << dllName << std::endl;
                loadLib(dllName);
                preloadList.insert(dllName);
            }
            dllList.close();
        }
    } else {
        std::ofstream dllList(".\\plugins\\preload.conf");
        dllList.close();
    }
    if (!loadLiteLoader()) {
        Info("PreLoader is running as DLL Loader...");
        loadPlugins();
    }
}
