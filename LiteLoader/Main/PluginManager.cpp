#include "Main/PluginManager.h"
#include <LLAPI.h>
#include <LoggerAPI.h>
#include <EventAPI.h>
#include <ScheduleAPI.h>
#include <Utils/StringHelper.h>
#include <Utils/WinHelper.h>
#include <Utils/STLHelper.h>
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
        plugin.filePath = filesystem::path(others.at("PluginFilePath")).lexically_normal().u8string();
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
        if (it.second.name == name)
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
        name = filesystem::path(name).filename().u8string();
        return GetPlugin_Raw(name, includeScriptPlugin);
    }
    catch(...)
    { }
    return nullptr;
}

LL::Plugin* LL::PluginManager::getPlugin(HMODULE handler) {
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
    filesystem::path path(filesystem::path(pluginFilePath).lexically_normal());
    pluginFilePath = path.u8string();

    string ext = path.extension().u8string();
    if (ext != ".dll")
    {
        if (LLSE_VALID_PLUGIN_EXTENSIONS.find(ext) != LLSE_VALID_PLUGIN_EXTENSIONS.end())   //Script Plugin
        {
            if (pluginFilePath.find(LLSE_COMMAND_FINISHED_SYMBOL) == string::npos && outputResult)       //not finished
            {
                logger.error("Fail to load script plugin {}!", pluginFilePath);
                return false;
            }
            else
                return true;
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
        if (getPlugin(lib) == nullptr)
            RegisterPlugin(lib, pluginFileName, pluginFileName, LL::Version(1, 0, 0), {});
    }
    else
    {
        if (outputResult)
            logger.error("Fail to load the plugin {}!", pluginFileName);
        return false;
    }

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
                logger.error("Exception: ", e.what());
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

bool LL::PluginManager::unloadPlugin(string pluginName, bool outputResult)
{
    if (pluginName.find(LLSE_COMMAND_FINISHED_SYMBOL) != string::npos)            //ScriptPlugin & Finished
        return true;

    LL::Plugin* plugin = getPlugin(pluginName);
    if (!plugin)
    {
        if (outputResult)
            logger.error("No match plugin found!");
        return false;
    }

    if (plugin->type == Plugin::PluginType::ScriptPlugin)        //Script Plugin
    {
        if (pluginName.find(LLSE_COMMAND_FINISHED_SYMBOL) == string::npos && outputResult)       //not finished
        {
            logger.error("Fail to unload script plugin {}!", pluginName);
            return false;
        }
        else
            return true;
    }

    //Hot unload
    callEventAtHotUnload(pluginName);
    unRegisterPlugin(pluginName);
    //removeAllEventListeners(pluginName);

    logger.warn("Wait to be finished.");                    //?????
    return true;
}

bool LL::PluginManager::reloadPlugin(string pluginName, bool outputResult)
{
    if (pluginName.find(LLSE_COMMAND_FINISHED_SYMBOL) != string::npos)            //ScriptPlugin & Finished
        return true;

    LL::Plugin* plugin = getPlugin(pluginName);
    if (!plugin)
    {
        if (outputResult)
            logger.error("No match plugin found!");
        return false;
    }

    string path = plugin->filePath;
    if (!unloadPlugin(pluginName))
        return false;
    return loadPlugin(path);
}

bool LL::PluginManager::reloadAllPlugins(bool outputResult)
{
    auto plugins = getAllPlugins(false);
    bool res = false;
    for (auto& [name, plugin] : plugins)
    {
        if (reloadPlugin(name))
            res = true;
        else
            logger.error("Fail to reload plugin {}!", name);
    }
    return res;
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