#pragma once
#include <Global.h>
#include <string>
#include <unordered_map>
#include <Windows.h>

namespace LL {
    struct Plugin;
}

bool RegisterPlugin(HMODULE handler, std::string name, std::string introduction, std::string version,
                    std::string git = "", std::string license = "", std::string website = "");

LL::Plugin* GetPlugin(std::string name);
LL::Plugin* GetPlugin(HMODULE handler);
bool HasPlugin(std::string name);
std::unordered_map<std::string, LL::Plugin>& GetAllPlugins();