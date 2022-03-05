#include "Main/PluginManager.h"
#include <LLAPI.h>
#include <LoggerAPI.h>
#include <EventAPI.h>
#include <ScheduleAPI.h>
#include <Utils/StringHelper.h>
#include <Utils/WinHelper.h>
#include <Utils/STLHelper.h>
#include <I18nAPI.h>
#include <MC/Level.hpp>
#include <MC/Player.hpp>
#include <Windows.h>
#include <string>
#include <unordered_map>
#include <ScriptEngine/Configs.h>
using namespace std;

extern Logger logger;
std::unordered_map<std::string, LL::Plugin> plugins;

bool LL::PluginManager::registerPlugin(HMODULE handler, std::string name, std::string introduction, LL::Version version,
                    std::map<std::string, std::string> others)
{
    if (handler != nullptr)             // DLL Plugin
    {
        if (getPlugin(handler) != nullptr)
        {
            erase_if(plugins, [&handler](auto& data) {               //Allow plugins to overwrite their own plugin registory
                return data.second.handler == handler;
            });                           
        }
        else if (getPlugin(name) != nullptr) {
            return false;                                      //Reject overwriting other's data
        }
    }

    LL::Plugin plugin{name, introduction, version, others};
    plugin.handler = handler;
    try
    {
        plugin.type = others.at("PluginType") == "Script Plugin" ? Plugin::PluginType::ScriptPlugin : Plugin::PluginType::DllPlugin;
        others.erase("PluginType");
    }
    catch (...)
    {
        plugin.type = handler ? Plugin::PluginType::DllPlugin : Plugin::PluginType::ScriptPlugin;
    }

    try
    {
        plugin.filePath = filesystem::path(str2wstr(others.at("PluginFilePath"))).lexically_normal().u8string();
        others.erase("PluginFilePath");
    }
    catch (...)
    {
        if (handler)
            plugin.filePath = GetModulePath(handler);
    }

    plugins.emplace(name, plugin);
    return true;
}

bool LL::PluginManager::unRegisterPlugin(std::string name)
{
    if (getPlugin(name) == nullptr)
    { 
        return false;
    }
    else
    {
        plugins.erase(name);
        return true;
    }
}

//Helper
LL::Plugin* GetPlugin_Raw(std::string name, bool includeScriptPlugin) {
    for (auto& it : plugins) {
        if (it.second.name == name || filesystem::path(str2wstr(it.second.filePath)).filename().u8string() == name)
        {
            if (!includeScriptPlugin && it.second.type == LL::Plugin::PluginType::ScriptPlugin)
                continue;
            return &it.second;
        }
    }
    return nullptr;
}

LL::Plugin* LL::PluginManager::getPlugin(std::string name, bool includeScriptPlugin) {
    auto res = GetPlugin_Raw(name, includeScriptPlugin);
    if (res)
        return res;
    try
    {
        name = filesystem::path(str2wstr(name)).filename().replace_extension("").u8string();
        return GetPlugin_Raw(name, includeScriptPlugin);
    }
    catch(...)
    { }
    return nullptr;
}

LL::Plugin* LL::PluginManager::getPlugin(HMODULE handler) {
    if (!handler)
        return nullptr;

    for (auto& it : plugins) {
        if (it.second.handler == handler) {
            return &it.second;
        }
    }
    return nullptr;
}

bool LL::PluginManager::hasPlugin(std::string name, bool includeScriptPlugin) {
    return getPlugin(name, includeScriptPlugin) != nullptr;
}

std::unordered_map<std::string, LL::Plugin*> LL::PluginManager::getAllPlugins(bool includeScriptPlugin) {
    std::unordered_map<std::string, LL::Plugin*> res;
    for (auto& [k, v] : plugins)
    {
        if (!includeScriptPlugin && v.type == Plugin::PluginType::ScriptPlugin)
            continue;
        res[k] = &v;
    }
    return res;
}

bool LL::PluginManager::loadPlugin(string pluginFilePath, bool outputResult, bool isHotLoad)
{
    try
    {
        filesystem::path path(filesystem::path(str2wstr(pluginFilePath)).lexically_normal());
        pluginFilePath = path.u8string();

        string ext = path.extension().u8string();
        if (ext != ".dll")
        {
            if (LLSE_VALID_PLUGIN_EXTENSIONS.find(ext) != LLSE_VALID_PLUGIN_EXTENSIONS.end())   //LLSE Script Plugin
            {
                Event::ScriptPluginManagerEvent ev;
                ev.operation = Event::ScriptPluginManagerEvent::Operation::Load;
                ev.target = pluginFilePath;
                ev.pluginExtention = ext;
                ev.call();

                return ev.success;
            }
            else if (outputResult)
                logger.error("You need to give a correct type of file!");
            return false;
        }

        if (pluginFilePath.find("/") == string::npos && pluginFilePath.find("\\") == string::npos
            && loadPlugin("plugins/" + pluginFilePath))
        {
            if (outputResult)
                logger.error("No valid plugin found at {}!", pluginFilePath);
            return false;
        }

        string pluginFileName = path.filename().u8string();
        auto lib = LoadLibrary(str2wstr(pluginFilePath).c_str());
        if (lib)
        {
            if (getPlugin(lib) == nullptr) {
                if (!RegisterPlugin(lib, pluginFileName, pluginFileName, LL::Version(1, 0, 0), {}))
                {
                    logger.error("Failed to register plugin {}!", pluginFilePath);
                    if (getPlugin(pluginFileName))
                        logger.error("A plugin named {} has been registered", pluginFileName);
                    return false;
                }
            };
        }
        else
        {
            if (outputResult)
                logger.error("Fail to load the plugin {}!", pluginFileName);
            return false;
        }

        if (!getPlugin(lib))
            return false;
        //  Call onPostInit
        auto fn = GetProcAddress(getPlugin(lib)->handler, "onPostInit");
        if (fn) {
            try {
                ((void (*)()) fn)();
                return true;
            }
            catch (std::exception& e) {
                if (outputResult)
                {
                    logger.error("Plugin <{}> throws an std::exception in onPostInit", pluginFileName);
                    logger.error("Exception: ", TextEncoding::toUTF8(e.what()));
                    logger.error("Fail to init this plugin!");
                }
                return false;
            }
            catch (...) {
                if (outputResult)
                {
                    logger.error("Plugin <{}> throws an exception in onPostInit", pluginFileName);
                    logger.error("Fail to init this plugin!");
                }
                return false;
            }
        }
        else if (outputResult)
        {
            logger.error("Fail to get the initialize point of the plugin {}!", pluginFileName);
            return false;
        }

        //Hot Load
        if (isHotLoad)
        {
            callEventAtHotLoad(getPlugin(lib)->name);
        }
        return true;
    }
    catch (const std::exception& e)
    {
        if (outputResult)
        {
            logger.error("Error occurred when loading plugin {}!", pluginFilePath);
            logger.error(TextEncoding::toUTF8(e.what()));
        }
        return false;
    }
    catch (...)
    {
        if (outputResult)
        {
            logger.error("Error occurred when loading plugin {}!", pluginFilePath);
        }
        return false;
    }
}

bool LL::PluginManager::unloadPlugin(string pluginName, bool outputResult)
{
    try
    {
        LL::Plugin* plugin = getPlugin(pluginName);
        if (!plugin)
        {
            if (outputResult)
                logger.error("No match plugin found!");
            return false;
        }

        if (plugin->type == Plugin::PluginType::ScriptPlugin)        //Script Plugin
        {
            Event::ScriptPluginManagerEvent ev;
            ev.operation = Event::ScriptPluginManagerEvent::Operation::Unload;
            ev.target = pluginName;
            ev.pluginExtention = filesystem::path(str2wstr(plugin->filePath)).extension().u8string();
            ev.call();

            return ev.success;
        }

        //Hot unload
        //callEventAtHotUnload(pluginName);
        //unRegisterPlugin(pluginName);
        //removeAllEventListeners(pluginName);

        logger.warn("Unload function of dll plugins has not been finished.");                    //TODO
        return false;
    }
    catch (const std::exception& e)
    {
        if (outputResult)
        {
            logger.error("Error occurred when unloading plugin {}!", pluginName);
            logger.error(TextEncoding::toUTF8(e.what()));
        }
        return false;
    }
    catch (...)
    {
        if (outputResult)
        {
            logger.error("Error occurred when unloading plugin {}!", pluginName);
        }
        return false;
    }
}

bool LL::PluginManager::reloadPlugin(string pluginName, bool outputResult)
{
    try
    {
        LL::Plugin* plugin = getPlugin(pluginName);
        if (!plugin)
        {
            if (outputResult)
                logger.error("No match plugin found!");
            return false;
        }

        if (plugin->type == Plugin::PluginType::ScriptPlugin)        //Script Plugin
        {
            Event::ScriptPluginManagerEvent ev;
            ev.operation = Event::ScriptPluginManagerEvent::Operation::Reload;
            ev.target = pluginName;
            ev.pluginExtention = filesystem::path(str2wstr(plugin->filePath)).extension().u8string();
            ev.call();

            return ev.success;
        }

        /*string path = plugin->filePath;
        if (!unloadPlugin(pluginName))
            return false;
        return loadPlugin(path);*/

        logger.warn("Reload function of dll plugins has not been finished.");                    //TODO
        return false;
    }
    catch (const std::exception& e)
    {
        if (outputResult)
        {
            logger.error("Error occurred when reloading plugin {}!", pluginName);
            logger.error(TextEncoding::toUTF8(e.what()));
        }
        return false;
    }
    catch (...)
    {
        if (outputResult)
        {
            logger.error("Error occurred when reloading plugin {}!", pluginName);
        }
        return false;
    }
}

int LL::PluginManager::reloadAllPlugins(bool outputResult)
{
    try
    {
        auto plugins = getAllPlugins(true);
        int cnt = 0;
        for (auto& [name, plugin] : plugins)
        {
            if (plugin->type == Plugin::PluginType::ScriptPlugin)
            {
                Event::ScriptPluginManagerEvent ev;
                ev.operation = Event::ScriptPluginManagerEvent::Operation::Reload;
                ev.target = plugin->name;
                ev.pluginExtention = filesystem::path(str2wstr(plugin->filePath)).extension().u8string();
                ev.call();

                if (ev.success)
                    ++cnt;
            }
            else
            {
                if (reloadPlugin(name))
                    ++cnt;
                else
                    logger.error("Fail to reload plugin {}!", name);
            }
        }
        return cnt;
    }
    catch (const std::exception& e)
    {
        if (outputResult)
        {
            logger.error("Error occurred when reloading all plugins!");
            logger.error(TextEncoding::toUTF8(e.what()));
        }
        return false;
    }
    catch (...)
    {
        if (outputResult)
        {
            logger.error("Error occurred when reloading all plugins!");
        }
        return false;
    }
}

bool LL::PluginManager::callEventAtHotLoad(std::string pluginName)
{
    Schedule::nextTick([pluginName]() {
        Event::ServerStartedEvent().callToPlugin(pluginName);       // ServerStartedEvent
    });

    Schedule::delay([pluginName]() {
        auto players = Level::getAllPlayers();
        for (auto& pl : players)                        // PlayerPreJoinEvent
        {
            Event::PlayerPreJoinEvent ev;
            ev.mPlayer = pl;
            ev.mXUID = pl->getXuid();
            ev.mIP = pl->getIP();
            ev.callToPlugin(pluginName);
        }
        for (auto& pl : players)                        // PlayerJoinEvent
        {
            Event::PlayerJoinEvent ev;
            ev.mPlayer = pl;
            ev.callToPlugin(pluginName);
        }
    }, 20);
    return true;
}

bool LL::PluginManager::callEventAtHotUnload(std::string pluginName)
{
    auto players = Level::getAllPlayers();
    for (auto& pl : players)                        // PlayerLeftEvent
    {
        Event::PlayerLeftEvent ev;
        ev.mPlayer = pl;
        ev.mXUID = pl->getXuid();
        ev.callToPlugin(pluginName);
    }

    Event::ServerStoppedEvent().callToPlugin(pluginName);       // ServerStoppedEvent
    return true;
}

//Helper
LIAPI bool RegisterPlugin(HMODULE handler, std::string name, std::string introduction, LL::Version version,
    std::map<std::string, std::string> others)
{
    others["PluginType"] = "DLL Plugin";
    others["PluginFilePath"] = handler ? GetModulePath(handler) : name;
    return LL::PluginManager::registerPlugin(handler, name, introduction, version, others);
}