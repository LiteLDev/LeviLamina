#pragma once
#include <vector>
#include <string>
#include <map>
#include <LLAPI.h>

class PluginManager
{
private:
	static bool unRegisterPlugin(std::string name);

public:
	static bool loadPlugin(const std::string& filePath, bool isHotLoad = false, bool mustBeCurrectModule = false);
	static bool unloadPlugin(const std::string& name);
	static bool reloadPlugin(const std::string& name);
	static bool reloadAllPlugins();

	static LL::Plugin* getPlugin(std::string name);
	static std::unordered_map<std::string, LL::Plugin*> getLocalPlugins();
	static std::unordered_map<std::string, LL::Plugin*> getAllScriptPlugins();
	static std::unordered_map<std::string, LL::Plugin*> getAllPlugins();

	static bool registerPlugin(std::string filePath, std::string name, std::string introduction,
		LL::Version version, std::map<std::string, std::string> others);
};