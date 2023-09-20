#include "liteloader/core/PluginManager.h"

#include <string>
#include <unordered_map>
#include <utility>

#include "liteloader/api/LLAPI.h"
#include "liteloader/api/LoggerAPI.h"
#include "liteloader/api/ScheduleAPI.h"
#include "liteloader/api/i18n/I18nAPI.h"
#include "liteloader/api/utils/StringUtils.h"
#include "liteloader/api/utils/WinHelper.h"
#include "liteloader/core/LiteLoader.h"

#include <windows.h>

using namespace std;
using namespace ll::StringUtils;

using ll::logger;

std::unordered_map<std::string, ll::Plugin> plugins;

bool ll::PluginManager::registerPlugin(
    HMODULE                            handle,
    const std::string&                 name,
    std::string                        desc,
    ll::Version                        version,
    std::map<std::string, std::string> others
) {

    others["PluginType"]     = "DLL Plugin";
    others["PluginFilePath"] = handle ? GetModulePath(handle) : name;
    if (handle != nullptr) {
        if (getPlugin(handle) != nullptr) {
            std::erase_if(plugins, [&handle](auto& data) { // Allow plugins to overwrite their own plugin registry
                return data.second.handle == handle;
            });
        } else if (getPlugin(name) != nullptr) {
            return false; // Reject overwriting other's data
        }
    }

    ll::Plugin plugin{name, std::move(desc), version, others};
    plugin.handle = handle;
    try {
        plugin.type = others.at("PluginType") == "Script Plugin" ? Plugin::PluginType::ScriptPlugin
                                                                 : Plugin::PluginType::DllPlugin;
        others.erase("PluginType");
    } catch (...) {
        plugin.type = handle ? Plugin::PluginType::DllPlugin : Plugin::PluginType::ScriptPlugin;
    }

    try {
        plugin.filePath =
            u8str2str(filesystem::path(str2wstr(others.at("PluginFilePath"))).lexically_normal().u8string());
        others.erase("PluginFilePath");
    } catch (...) {
        if (handle)
            plugin.filePath = GetModulePath(handle);
    }

    plugins.emplace(name, plugin);
    return true;
}

bool ll::PluginManager::unRegisterPlugin(std::string name) {
    auto plugin = getPlugin(std::move(name));
    if (plugin == nullptr) {
        return false;
    } else {
        plugins.erase(plugin->name);
        return true;
    }
}

// Helper
ll::Plugin* GetPlugin_Raw(const std::string& name, bool includeScriptPlugin) {
    for (auto& it : plugins) {
        if (it.second.name == name ||
            u8str2str(filesystem::path(str2wstr(it.second.filePath)).filename().u8string()) == name) {
            if (!includeScriptPlugin && it.second.type == ll::Plugin::PluginType::ScriptPlugin)
                continue;
            return &it.second;
        }
    }
    return nullptr;
}

ll::Plugin* ll::PluginManager::getPlugin(std::string name, bool includeScriptPlugin) {
    auto res = GetPlugin_Raw(std::move(name), includeScriptPlugin);
    if (res)
        return res;
    /* issue #510
    try
    {
        name = UTF82String(filesystem::path(str2wstr(name)).stem().u8string());
        return GetPlugin_Raw(name, includeScriptPlugin);
    }
    catch(...)
    { }
    */
    return nullptr;
}

ll::Plugin* ll::PluginManager::getPlugin(HMODULE handle) {
    if (!handle)
        return nullptr;

    for (auto& it : plugins) {
        if (it.second.handle == handle) {
            return &it.second;
        }
    }
    return nullptr;
}

bool ll::PluginManager::hasPlugin(std::string name, bool includeScriptPlugin) {
    return getPlugin(std::move(name), includeScriptPlugin) != nullptr;
}

std::unordered_map<std::string, ll::Plugin*> ll::PluginManager::getAllPlugins(bool includeScriptPlugin) {
    std::unordered_map<std::string, ll::Plugin*> res;
    for (auto& [k, v] : plugins) {
        if (!includeScriptPlugin && v.type == Plugin::PluginType::ScriptPlugin)
            continue;
        res[k] = &v;
    }
    return res;
}
