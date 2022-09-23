#pragma once
#include "llapi/Global.h"
#include <string>
#include <unordered_map>

namespace ll {
struct Plugin;
struct Version;

class PluginManager {
    static bool callEventAtHotLoad(std::string pluginName);
    static bool callEventAtHotUnload(std::string pluginName);

public:
    static LIAPI bool registerPlugin(HMODULE handle, std::string name, std::string desc,
                                     ll::Version version, std::map<std::string, std::string> others);

    static LIAPI ll::Plugin* getPlugin(HMODULE handle);
    static LIAPI ll::Plugin* getPlugin(std::string name, bool includeScriptPlugin = true);
    static LIAPI bool hasPlugin(std::string name, bool includeScriptPlugin = true);
    static LIAPI std::unordered_map<std::string, ll::Plugin*> getAllPlugins(bool includeScriptPlugin = true);

    static bool loadPlugin(std::string pluginFilePath, bool outputStatus = false, bool isHotLoad = false);
    static bool unloadPlugin(std::string pluginName, bool outputStatus = false);
    static bool reloadPlugin(std::string pluginName, bool outputStatus = false);
    static int reloadAllPlugins(bool outputStatus = false);

    static LIAPI bool unRegisterPlugin(std::string name);
};
} // namespace ll

LIAPI bool RegisterPlugin(HMODULE handle, std::string name, std::string desc, ll::Version version,
                          std::map<std::string, std::string> others);
