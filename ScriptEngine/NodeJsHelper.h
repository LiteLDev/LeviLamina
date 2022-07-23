#pragma once
#if defined(SCRIPTX_LANG_NODEJS)
#include <map>
#include <ScriptX/ScriptX.h>
#include <Configs.h>

namespace NodeJsHelper {

bool initNodeJs();
void shutdownNodeJs();

script::ScriptEngine* newEngine();
bool loadPluginCode(script::ScriptEngine* engine, std::string entryScriptPath);
int stopEngine(script::ScriptEngine* engine);

bool deployPluginPack(const std::string& filePath);
std::string findEntryScript(const std::string& dirPath);
std::string getPluginPackageName(const std::string& dirPath);

int executeNpmCommand(const std::string& cmd, const std::string& workingDir = LLSE_NODEJS_ROOT_DIR);

}

#endif