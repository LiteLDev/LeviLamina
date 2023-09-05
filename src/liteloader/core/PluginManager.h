#pragma once
#include "liteloader/api/Global.h"
#include <string>
#include <unordered_map>

namespace ll {
struct Plugin;
struct Version;

class PluginManager {
    static bool callEventAtHotLoad(const std::string& pluginName);
    static bool callEventAtHotUnload(std::string pluginName);

public:
    static LLAPI bool registerPlugin(
        HMODULE                            handle,
        const std::string&                        name,
        std::string                        desc,
        ll::Version                        version,
        std::map<std::string, std::string> others
    );

    static LLAPI ll::Plugin* getPlugin(HMODULE handle);
    static LLAPI ll::Plugin* getPlugin(std::string name, bool includeScriptPlugin = true);
    static LLAPI bool        hasPlugin(std::string name, bool includeScriptPlugin = true);
    static LLAPI std::unordered_map<std::string, ll::Plugin*> getAllPlugins(bool includeScriptPlugin = true);

    static bool loadPlugin(std::string pluginFilePath, bool outputResult = false, bool isHotLoad = false);
    static bool unloadPlugin(const std::string& pluginName, bool outputResult = false);
    static bool reloadPlugin(const std::string& pluginName, bool outputResult = false);
    static int  reloadAllPlugins(bool outputResult = false);

    static LLAPI bool unRegisterPlugin(std::string name);
};
} // namespace ll
