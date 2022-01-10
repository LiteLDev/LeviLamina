#include "Main/PluginManager.h"
#include <LLAPI.h>
#include <Psapi.h>
#include <Utils/StringHelper.h>
#include <Windows.h>
#include <string>
#include <unordered_map>
using namespace std;

std::unordered_map<std::string, LL::Plugin> plugins;

string GetModulePath(HMODULE handler) {
    wchar_t buf[MAX_PATH] = {0};
    GetModuleFileNameEx(GetCurrentProcess(), handler, buf, MAX_PATH);
    return wstr2str(wstring(buf));
}

bool RegisterPlugin(HMODULE handler, std::string name, std::string introduction, LL::Version version,
                    std::map<std::string, std::string> others) {
    if (GetPlugin(name) != nullptr) {
        return false;
    }
    if (GetPlugin(handler) != nullptr) {
        auto map = GetPlugin(handler);
        for (auto iter = plugins.begin(); iter != plugins.end(); ++iter) {
            if (iter->second.handler == handler) {
                plugins.erase(iter->first);
            }
        }
    }
    LL::Plugin plugin{name, introduction, version, others};
    plugin.handler = handler;
    plugin.filePath = GetModulePath(handler);

    plugins.emplace(name, plugin);
    return true;
}

LL::Plugin* GetPlugin(std::string name) {
    for (auto& it : plugins) {
        if (it.second.name == name) {
            return &it.second;
        }
    }
    return nullptr;
}

LL::Plugin* GetPlugin(HMODULE handler) {
    for (auto& it : plugins) {
        if (it.second.handler == handler) {
            return &it.second;
        }
    }
    return nullptr;
}

bool HasPlugin(std::string name) {
    return plugins.count(name);
}

std::unordered_map<std::string, LL::Plugin>& GetAllPlugins() {
    return plugins;
}