#include <Windows.h>
#include <filesystem>
#include <string>
#include <vector>

#include <LoggerAPI.h>
#include <PluginManager.h>
#include <Utils/StringHelper.h>
#include <Utils/WinHelper.h>
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
#include <KVDBAPI.h>
void LoadMain() {
    logger.info("Loading plugins...");

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

        string pluginFileName = filesystem::path(path).filename().u8string();
        auto lib = LoadLibrary(str2wstr(path).c_str());
        if (lib) {
            pluginCount++;

            logger.info("Plugin <{}> loaded", pluginFileName);

            if (GetPlugin(lib) == nullptr) {
                RegisterPlugin(lib, pluginFileName, pluginFileName, LL::Version(), {});
            }
        } else {
            logger.error("Fail to load plugin <{}>", pluginFileName);
            logger.error("Error: Code[{}] {}", GetLastError(), GetLastErrorMessage());
        }
    }

    //Call onPostInit
    auto plugins = GetAllPlugins();
    for (auto& [name, plugin] : plugins) {
        auto fn = GetProcAddress(plugin.handler, "onPostInit");
        if (fn) {
            try {
                ((void (*)())fn)();
            } catch (std::exception e) {
                logger.error("Plugin <{}> throws an std::exception in onPostInit", name);
                logger.error("Exception: ", e.what());
                logger.error("Fail to init this plugin!");
            } catch (...) {
                logger.error("Plugin <{}> throws an exception in onPostInit", name);
                logger.error("Fail to init this plugin!");
            }
        }
    }
    logger.info << pluginCount << " plugin(s) loaded" << Logger::endl;
}