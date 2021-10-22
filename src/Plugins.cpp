#include "pch.h"

std::unordered_map<std::string, Plugin> plugins;

std::string loadingPluginName;

bool registerPlugin(
    std::string name, 
    std::string introduction, 
    std::string version, 
    std::string git,
    std::string license,
    std::string website
) {
    if (plugins.count(name)) {
        return false;
    }
    Plugin plugin{name, introduction, version, git, license, website};
    plugins.emplace(name, plugin);
    return true;
}

void completePluginInfo(std::string pluginName, std::wstring filePath ,HMODULE handler) {
    auto& plugin = plugins.at(pluginName);
    plugin.filePath = filePath;
    plugin.handler = handler;
}

Plugin* getPluginByName(std::string name) {
    for (auto& it : plugins) {
        if (it.second.name == name) {
            return &it.second;
        }
    }
    return nullptr;
}

bool hasPlugin(std::string name) {
    return plugins.count(name);
}

bool loaderapi::registerPlugin(std::string name, std::string introduction, std::string version,
                               std::string git, std::string license, std::string website) {
    loadingPluginName = name;
    return ::registerPlugin(name, introduction, version, git, license, website);
}

Plugin* loaderapi::tryGetPluginByName(std::string name) {
    return getPluginByName(name);
}

bool loaderapi::hasPlugin(std::string name) {
    return ::hasPlugin(name);
}