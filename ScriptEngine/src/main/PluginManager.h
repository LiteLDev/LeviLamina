#pragma once
#include <vector>
#include <string>
#include <map>
#include <llapi/LLAPI.h>

class PluginManager
{
private:
    static bool unRegisterPlugin(std::string name);
    static bool loadPluginPackage(const std::string& dirPath, const std::string& packagePath, bool isHotLoad, bool isUncompressedFirstTime);

public:
    // if mustBeCurrectModule == true and not-current-module plugin is found, will throw exception
    static bool loadPlugin(const std::string& fileOrDirPath, bool isHotLoad = false, bool mustBeCurrectModule = false);
    static bool unloadPlugin(const std::string& name);
    static bool reloadPlugin(const std::string& name);
    static bool reloadAllPlugins();

    static ll::Plugin* getPlugin(std::string name);
    static std::unordered_map<std::string, ll::Plugin*> getLocalPlugins();
    static std::unordered_map<std::string, ll::Plugin*> getAllScriptPlugins();
    static std::unordered_map<std::string, ll::Plugin*> getAllPlugins();

    static std::string getPluginBackendType(const std::string &path);

    static bool registerPlugin(std::string filePath, std::string name, std::string desc,
        ll::Version version, std::map<std::string, std::string> others);
};