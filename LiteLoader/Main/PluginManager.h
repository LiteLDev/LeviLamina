#pragma once
#include <Global.h>
#include <Windows.h>
#include <string>
#include <unordered_map>

namespace LL
{
    struct Plugin;
    struct Version;

    class PluginManager
    {
    private:
        static bool callEventAtHotLoad(std::string pluginName);
        static bool callEventAtHotUnload(std::string pluginName);

    public:
        static LIAPI bool registerPlugin(HMODULE handler, std::string name, std::string introduction,
            LL::Version version, std::map<std::string, std::string> others);

        static LIAPI LL::Plugin* getPlugin(HMODULE handler);
        static LIAPI LL::Plugin* getPlugin(std::string name, bool includeScriptPlugin = true);
        static LIAPI bool hasPlugin(std::string name, bool includeScriptPlugin = true);
        static LIAPI std::unordered_map<std::string, LL::Plugin*> getAllPlugins(bool includeScriptPlugin = true);

        static bool loadPlugin(std::string pluginFilePath, bool outputStatus = false, bool isHotLoad = false);
        static bool unloadPlugin(std::string pluginName, bool outputStatus = false);
        static bool reloadPlugin(std::string pluginName, bool outputStatus = false);
        static bool reloadAllPlugins(bool outputStatus = false);

        static LIAPI bool unRegisterPlugin(std::string name);
    };
}

LIAPI bool RegisterPlugin(HMODULE handler, std::string name, std::string introduction, LL::Version version,
    std::map<std::string, std::string> others);

