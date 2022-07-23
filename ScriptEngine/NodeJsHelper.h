#pragma once
#if defined(SCRIPTX_LANG_NODEJS)
#include <map>
#include <node.h>
#include <ScriptX/ScriptX.h>

namespace NodeJsHelper {

bool initNodeJs();
void shutdownNodeJs();

script::ScriptEngine* newEngine();
bool loadPluginCode(script::ScriptEngine* engine, std::string entryScriptPath);
node::Environment* getEnvironmentOf(script::ScriptEngine* engine);
v8::Isolate* getIsolateOf(script::ScriptEngine* engine);
int spinEventLoop(script::ScriptEngine* engine);
int stopEngine(script::ScriptEngine* engine);

bool deployPluginPack(const std::string& filePath);
std::string findEntryScript(const std::string& dirPath);
std::string getPluginPackageName(const std::string& dirPath);

}

#endif