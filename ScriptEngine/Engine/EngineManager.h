#pragma once
#include <ScriptX/ScriptX.h>
#include <PluginManager.h>
#include <string>
#include <map>
#include <vector>

class EngineManager
{
protected:
	friend class PluginManager;
	static bool unRegisterEngine(script::ScriptEngine* engine);

public:
	static script::ScriptEngine* newEngine(std::string pluginName = "");
	static bool registerEngine(script::ScriptEngine* engine);
	static bool isValid(script::ScriptEngine* engine, bool onlyCheckLocal = false);

	static std::vector<script::ScriptEngine*> getLocalEngines();
	static std::vector<script::ScriptEngine*> getGlobalEngines();
	static script::ScriptEngine* getEngine(std::string name, bool onlyLocalEngine = false);

	static std::string getEngineType(script::ScriptEngine* engine);
};