#pragma once
#if defined(LLSE_BACKEND_NODEJS)
#include <map>
#include <NodeJs/include/node.h>
#include <ScriptX/ScriptX.h>
#include <Configs.h>

namespace NodeJsHelper {

bool initNodeJs();
void shutdownNodeJs();

script::ScriptEngine* newEngine();
bool loadPluginCode(script::ScriptEngine* engine, std::string entryScriptPath, std::string pluginDirPath);
bool stopEngine(script::ScriptEngine* engine);
bool stopEngine(node::Environment* env);
script::ScriptEngine* getEngine(node::Environment* env);

bool deployPluginPack(const std::string& filePath);
std::string findEntryScript(const std::string& dirPath);
std::string getPluginPackageName(const std::string& dirPath);
bool doesPluginPackHasDependency(const std::string& dirPath);

bool processConsoleNpmCmd(const std::string& cmd);
int executeNpmCommand(std::string cmd, std::string workingDir = LLSE_NODEJS_ROOT_DIR);

}

#endif