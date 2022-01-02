#pragma once
#include <Global.h>
#include <Windows.h>
#include <string>
#include <unordered_map>

namespace LL {
struct Plugin;
struct Version;
}

LIAPI bool RegisterPlugin(HMODULE handler, std::string name, std::string introduction, LL::Version version,
                          std::map<std::string, std::string> others);

LL::Plugin* GetPlugin(std::string name);
LL::Plugin* GetPlugin(HMODULE handler);
bool HasPlugin(std::string name);
std::unordered_map<std::string, LL::Plugin>& GetAllPlugins();