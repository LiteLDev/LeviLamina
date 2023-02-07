#pragma once
#if defined(LLSE_BACKEND_NODEJS)
#pragma warning(disable : 4251)
#include <map>
#include <node.h>
#include <ScriptX/ScriptX.h>
#include "main/Configs.h"
#include <string>

namespace NodeJsHelper {

bool initNodeJs();
void shutdownNodeJs();

script::ScriptEngine* newEngine();
bool stopEngine(script::ScriptEngine* engine);
bool stopEngine(node::Environment* env);
script::ScriptEngine* getEngine(node::Environment* env);

bool loadPluginCode(script::ScriptEngine* engine, std::string entryScriptPath, std::string pluginDirPath); //raw
bool loadNodeJsPlugin(std::string dirPath, const std::string& packagePath, bool isHotLoad = false);

std::string findEntryScript(const std::string& dirPath);
std::string getPluginPackageName(const std::string& dirPath);
bool doesPluginPackHasDependency(const std::string& dirPath);

bool processConsoleNpmCmd(const std::string& cmd);
int executeNpmCommand(std::string cmd, std::string workingDir = LLSE_PLUGINS_ROOT_DIR);

}

#endif