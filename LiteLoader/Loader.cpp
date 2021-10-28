#include <Windows.h>
#include <vector>
#include <string>
#include <unordered_map>
#include <iostream>
#include <fstream>
#include <thread>
#include <filesystem>

#include <Utils/Logger.h>
#include <Utils/WinHelper.h>
#include <Utils/StringHelper.h>
#include <HookAPI.h>
#include <ServerAPI.h>
#include <Version.h>
#include <PluginManager.h>
#include <LLAPI.h>
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

void LoadMain()
{
    std::filesystem::create_directory("plugins");
    std::filesystem::directory_iterator ent("plugins");
    int pluginCount  = 0;
    vector<std::wstring> preloadList = GetPreloadList();

    Logger::Info("Loading plugins");
    for (auto& i : ent) {
        if (i.is_regular_file() && i.path().extension().u8string() == ".dll") {
            bool loaded = false;
            for (auto& p : preloadList)
                if (p.find(std::wstring(i.path())) != std::wstring::npos) {
                    loaded = true;
                    break;
                }
            if (loaded)
                continue;

            auto lib = LoadLibrary(i.path().c_str());
            if (lib) {
                pluginCount++;
                auto pluginFileName = canonical(i.path()).filename().u8string();
                Logger::Info("Plugin " + pluginFileName + " loaded");

                if (GetPlugin(lib) == nullptr) {
                    RegisterPlugin(lib, pluginFileName, pluginFileName, "1.0.0");
                }
            } else {
                Logger::Error("Error when loading " + i.path().filename().u8string());
                Logger::Error() << GetLastErrorMessage() << Logger::endl;
            }
        }
    }

    //Call onPostInit
    auto plugins = GetAllPlugins();
    for (auto& [name, plugin] : plugins) {
        auto fn = GetProcAddress(plugin.handler, "onPostInit");
        if (!fn) {
            // std::wcerr << "Warning!!! mod" << name << " doesnt have a onPostInit\n";
        } else {
            try {
                ((void (*)())fn)();
            } catch (...) {
                std::wcerr << "[Error] plugin " << name.c_str() << " throws an exception when onPostInit\n";
                std::this_thread::sleep_for(std::chrono::seconds(10));
                exit(1);
            }
        }
    }
    Logger::Info(std::to_string(pluginCount) + " plugin(s) loaded");
}