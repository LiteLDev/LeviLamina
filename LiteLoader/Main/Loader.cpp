#include <Main/Loader.h>
#include <Windows.h>
#include <filesystem>
#include <string>
#include <vector>

#include <LoggerAPI.h>
#include <Main/PluginManager.h>
#include <Main/LiteLoader.h>
#include <Utils/StringHelper.h>
#include <Utils/WinHelper.h>
#include <LLAPI.h>
#include <I18nAPI.h>
#include "Config.h"
#include "Version.h"
#include <ScriptEngine/Configs.h>

using namespace std;

vector<std::wstring> GetPreloadList()
{
    //若在preload.conf中，则不加载
    vector<std::wstring> preloadList{};

    if (std::filesystem::exists(std::filesystem::path(TEXT(".\\plugins\\preload.conf"))))
    {
        std::wifstream dllList(TEXT(".\\plugins\\preload.conf"));
        if (dllList)
        {
            std::wstring dllName;
            while (getline(dllList, dllName))
            {
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

void CleanOldScriptEngine()
{
    std::error_code ec;
    if (filesystem::exists("plugins/LiteXLoader", ec))
        filesystem::remove_all("plugins/LiteXLoader", ec);
    if (filesystem::exists("plugins/LiteXLoader.Js.dll", ec))
        filesystem::remove("plugins/LiteXLoader.Js.dll", ec);
    if (filesystem::exists("plugins/LiteXLoader.Lua.dll", ec))
        filesystem::remove("plugins/LiteXLoader.Lua.dll", ec);
}

void LoadScriptEngine()
{
    for (string backend : LLSE_VALID_BACKENDS)
    {
        auto lib = LoadLibrary(str2wstr("plugins/LiteLoader/LiteLoader." + backend + ".dll").c_str());     //eg. LiteLoader.Js.dll
        if (lib) {
            logger.info("* ScriptEngine for " + backend + " loaded");
            //Fake Register
            RegisterPlugin(lib, "ScriptEngine-" + backend, "ScriptEngine-" + backend, LITELOADER_VERSION,
            {
                {"GitHub","github.com/LiteLDev/LiteLoaderBDS"}
            });
        }
        else {
            logger.error("* Fail to load ScriptEngine for " + backend + "!");
            logger.error("* Error: Code[{}] - {}", GetLastError(), GetLastErrorMessage());
        }
    }
}

void LoadDotNETEngine()
{
    auto lib = LoadLibrary(str2wstr("plugins/LiteLoader/LiteLoader.NET.dll").c_str());
    if (lib) {
        logger.info("* DotNETEngine loaded");
        //Fake Register
        RegisterPlugin(lib, "DotNETEngine", "DotNETEngine", LITELOADER_VERSION,
        {
            {"GitHub","github.com/LiteLDev/LiteLoaderBDS"}
        });
    }
    else {
        logger.error("* Fail to load DotNETEngine!");
        logger.error("* Error: Code[{}] - {}", GetLastError(), GetLastErrorMessage());
    }
}

void LL::LoadMain() {
    logger.info("Loading plugins...");

    CleanOldScriptEngine();
    std::set<string> scriptExts = LLSE_VALID_PLUGIN_EXTENSIONS;
    bool hasScriptPlugin = false;

    // Load plugins
    int pluginCount = 0;
    vector<std::wstring> preloadList = GetPreloadList();

    filesystem::directory_iterator ent("plugins");
    for (auto &file: ent) {
        if (!file.is_regular_file())
            continue;

        auto path = file.path();
        auto fileName = path.u8string();
        if (fileName.find("LiteLoader.dll") != string::npos
            || fileName.find("LiteXLoader") != string::npos)      //Skip Wrong file path
            continue;

        string ext = path.extension().u8string();
        if (ext != ".dll")
        {
            if (scriptExts.find(ext) != scriptExts.end())
                hasScriptPlugin = true;
            continue;
        }

        bool loaded = false;
        for (auto &p: preloadList)
            if (p.find(str2wstr(fileName)) != std::wstring::npos) {
                loaded = true;
                break;
            }
        if (loaded)
            continue;

        string pluginFileName = path.filename().u8string();
        auto lib = LoadLibrary(str2wstr(fileName).c_str());
        if (lib) {
            pluginCount++;

            logger.info("Plugin <{}> loaded", pluginFileName);

            if (PluginManager::getPlugin(lib) == nullptr) {
                if (!RegisterPlugin(lib, pluginFileName, pluginFileName, LL::Version(1, 0, 0), {}))
                {
                    logger.error("Failed to register plugin {}!", path.u8string());
                    if (getPlugin(pluginFileName))
                        logger.error("A plugin named {} has been registered", pluginFileName);
                }
            }
        }
        else
        {
            logger.error("Fail to load plugin <{}>", pluginFileName);
            logger.error("Error: Code[{}] {}", GetLastError(), GetLastErrorMessage());
        }
    }

    // Load ScriptEngine
    if (LL::globalConfig.enableScriptEngine)
        if(LL::globalConfig.alwaysLaunchScriptEngine || hasScriptPlugin)
            LoadScriptEngine();

    // Load DotNETEngine
    LoadDotNETEngine();

    //  Call onPostInit
    auto plugins = PluginManager::getAllPlugins(false);
    for (auto&[name, plugin]: plugins) {
        auto fn = GetProcAddress(plugin->handler, "onPostInit");
        if (fn) {
            try {
                ((void (*)()) fn)();
            } catch (std::exception &e) {
                logger.error("Plugin <{}> throws an std::exception in onPostInit", name);
                logger.error("Exception: ", TextEncoding::toUTF8(e.what()));
                logger.error("Fail to init this plugin!");
            }
            catch (...)
            {
                logger.error("Plugin <{}> throws an exception in onPostInit", name);
                logger.error("Fail to init this plugin!");
            }
        }
    }
    logger.info << pluginCount << " plugin(s) loaded" << Logger::endl;
}