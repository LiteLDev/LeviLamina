#pragma once
#if defined(LLSE_BACKEND_PYTHON)
#include <map>
#include <ScriptX/ScriptX.h>
#include "Configs.h"
#include <string>
#include <filesystem>

namespace PythonHelper {

bool initPythonRuntime();

// raw, will throw exception if fail
bool loadPluginCode(script::ScriptEngine* engine, std::string entryScriptPath, std::string pluginDirPath); 
bool loadPythonPlugin(std::string dirPath, const std::string& packagePath, bool isHotLoad = false);

std::string findEntryScript(const std::string& dirPath);
std::string getPluginPackageName(const std::string& dirPath);
std::string getPluginPackDependencyFilePath(const std::string& dirPath);

bool processPythonDebugEngine(const std::string &cmd);

bool processConsolePipCmd(const std::string& cmd);
int executePipCommand(std::string cmd, std::string workingDir = LLSE_PLUGINS_ROOT_DIR);

}

#endif