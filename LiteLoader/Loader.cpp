#include <Windows.h>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <string>
#include <thread>
#include <unordered_map>
#include <vector>

#include <Config.h>
#include <HookAPI.h>
#include <LLAPI.h>
#include <LoggerAPI.h>
#include <PluginManager.h>
#include <ServerAPI.h>
#include <Utils/StringHelper.h>
#include <Utils/WinHelper.h>

using namespace std;

vector<std::wstring> GetPreloadList() {
    //若在preload.conf中，则不加载
    vector<std::wstring> preload_list{};

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
                preload_list.push_back(dllName);
            }
            dllList.close();
        }
    }
    return preload_list;
}

void LoadMain() {
    Logger::Info("Loading plugins...");

    // Load plugins
    int pluginCount = 0;
    vector<std::wstring> preloadList = GetPreloadList();

    filesystem::directory_iterator ent("plugins");
    for (auto& file : ent)
    {
        if (!file.is_regular_file() || file.path().extension().u8string() != ".dll")
            continue;

        string path = file.path().u8string();

        bool loaded = false;
        for (auto& p : preloadList)
            if (p.find(str2wstr(path)) != std::wstring::npos) {
                loaded = true;
                break;
            }
        if (loaded)
            continue;

        auto lib = LoadLibrary(str2wstr(path).c_str());
        if (lib) {
            pluginCount++;
            auto pluginFileName = filesystem::path(path).filename().u8string();
            Logger::Info("Plugin <{}> loaded", pluginFileName);

            if (GetPlugin(lib) == nullptr) {
                RegisterPlugin(lib, pluginFileName, pluginFileName, "1.0.0");
            }
        } else {
            Logger::Error("Error when loading plugin <{}>", path);
            Logger::Error() << GetLastErrorMessage() << Logger::endl;
        }
    }

    //Call onPostInit
    auto plugins = GetAllPlugins();
    for (auto& [name, plugin] : plugins) {
        auto fn = GetProcAddress(plugin.handler, "onPostInit");
        if (fn) {
            try {
                ((void (*)())fn)();
            } catch (...) {
                Logger::Error("Plugin <{}> throws an exception in onPostInit", name);
                Logger::Error("Fail to init this plugin!");
            }
        }
    }
    Logger::Info() << std::to_string(pluginCount) + " plugin(s) loaded" << Logger::endl;
}