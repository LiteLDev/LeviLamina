#include "pch.h"
using std::vector;
Logger<stdio_commit> LOG(stdio_commit{"[LL] "});

static void PrintErrorMessage() {
    DWORD errorMessageID = ::GetLastError();
    if (errorMessageID == 0) {
        std::wcerr << "Error\n";
        return;
    }
    std::cerr << "[Error] ErrorMessageID: " << errorMessageID << std::endl;
    LPWSTR messageBuffer = nullptr;
    FormatMessage(
        FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_IGNORE_INSERTS | FORMAT_MESSAGE_FROM_SYSTEM,
        NULL, errorMessageID, MAKELANGID(0x09, SUBLANG_DEFAULT), (LPWSTR)&messageBuffer, 0, NULL);
    std::wcerr << "[Error] " << messageBuffer;
    LocalFree(messageBuffer);
}

static void pluginsLibDir() {  // add plugins folder to path to fix dependent problem
    WCHAR *buffer = new WCHAR[8192];
    auto sz       = GetEnvironmentVariableW(TEXT("PATH"), buffer, 8192);
    std::wstring PATH{buffer, sz};
    sz = GetCurrentDirectoryW(8192, buffer);
    std::wstring CWD{buffer, sz};
    SetEnvironmentVariableW(TEXT("PATH"), (CWD + L"\\plugins;" + PATH).c_str());
    delete[] buffer;
}

static vector<std::wstring> getPreloadList() {
    //若在preload.conf中，则不加载
    vector<std::wstring> preloadList{};

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
                preloadList.push_back(dllName);
            }
            dllList.close();
        }
    }
    return preloadList;
}
static std::vector<std::pair<std::wstring, HMODULE>> libs;
LIAPI std::vector<std::pair<std::wstring, HMODULE>> liteloader::getAllLibs() {
    return libs;
}
static void loadPlugins() {
    pluginsLibDir();
    std::filesystem::create_directory("plugins");
    std::filesystem::directory_iterator ent("plugins");
    short plugins                    = 0;
    vector<std::wstring> preloadList = getPreloadList();

    LOG("Loading plugins");
    for (auto &i : ent) {
        if (i.is_regular_file() && i.path().extension().u8string() == ".dll") {
            bool loaded = false;
            for (auto &p : preloadList)
                if (p.find(std::wstring(i.path())) != std::wstring::npos) {
                    loaded = true;
                    break;
                }
            if (loaded)
                continue;
            auto lib = LoadLibrary(i.path().c_str());
            if (lib) {
                plugins++;
                LOG("Plugin " + canonical(i.path()).filename().u8string() + " loaded");
                libs.push_back({std::wstring{i.path().c_str()}, lib});
            } else {
                LOG("Error when loading " + i.path().filename().u8string() + "");
                PrintErrorMessage();
            }
        }
    }
    for (auto &[name, h] : libs) {
        auto FN = GetProcAddress(h, "onPostInit");
        if (!FN) {
            // std::wcerr << "Warning!!! mod" << name << " doesnt have a onPostInit\n";
        } else {
            try {
                ((void (*)())FN)();
            } catch (...) {
                std::wcerr << "[Error] plugin " << name << " throws an exception when onPostInit\n";
                std::this_thread::sleep_for(std::chrono::seconds(10));
                exit(1);
            }
        }
    }
    // libs.clear();
    LOG(std::to_string(plugins) + " plugin(s) loaded");
}

vector<function<void(PostInitEV)>> PostInitCallBacks;
LIAPI void Event::addEventListener(function<void(PostInitEV)> callback) {
    PostInitCallBacks.push_back(callback);
}

void FixUpCWD() {
    string buf;
    buf.assign(8192, '\0');
    GetModuleFileNameA(nullptr, buf.data(), 8192);
    buf = buf.substr(0, buf.find_last_of('\\'));
    SetCurrentDirectoryA(buf.c_str());
}

void startWBThread();
bool versionCommand(CommandOrigin const &ori, CommandOutput &outp);
void updateCheck();

static void entry(bool fixcwd) {
    //禁止弹窗，便于自动重启
    SetErrorMode(SEM_FAILCRITICALERRORS | SEM_NOGPFAULTERRORBOX | SEM_NOALIGNMENTFAULTEXCEPT);

    if (fixcwd)
        FixUpCWD();
    std::filesystem::create_directory("logs");

    Event::addEventListener([](RegCmdEV ev) {  // Register commands
        CMDREG::SetCommandRegistry(ev.CMDRg);
        MakeCommand("version", "Gets the version of this server", 0);
        CmdOverload(version, versionCommand);
    });

    loadPlugins();
    XIDREG::initAll();  // Initialize the xuid database

    Event::addEventListener([](ServerStartedEV) {  // Server started event
        startWBThread();
        LOG("LiteLoader is distributed under the GPLv3 License");
#ifdef LiteLoaderVersionGithub
        LOG("Github: https://git.io/JOyw4 | Version: " + (std::string)LiteLoaderVersionGithub +
            " | Based on BedrockX Project");
#else
        LOG("Github: https://git.io/JOyw4 | Version: " + (std::string)LiteLoaderVersion +
            " | Based on BedrockX Project");
#endif
        LOG(u8"感谢旋律云(rhymc.com)对本项目的支持 | Thanks to [rhymc.com] for supporting this "
            u8"project");
        updateCheck();
    });

    PostInitEV PostInitEV;  // Register plugin loading event
    for (size_t count = 0; count < PostInitCallBacks.size(); count++) {
        PostInitCallBacks[count](PostInitEV);
    }
}

THook(int, "main", int a, void *b) {
    std::ios::sync_with_stdio(false);
    // system("chcp 65001");
    entry(a > 1);
    return original(a, b);
}