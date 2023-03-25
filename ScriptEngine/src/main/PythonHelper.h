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
int executePipCommand(std::string cmd);

// This fix is used for Python3.10's bug: 
// The thread will freeze when creating a new engine while another thread is blocking to read stdin
// Side effects: sys.stdin cannot be used after this patch.
// More info to see: https://github.com/python/cpython/issues/83526
//
// Attention! When CPython is upgraded, this fix must be re-adapted or removed!!
//
namespace FixPython310Stdin {

bool hookPython310CreateStdio();
bool unhookPython310CreateStdio();

}

}

#endif