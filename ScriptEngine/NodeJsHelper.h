#pragma once
#if defined(SCRIPTX_LANG_NODEJS)
#include <map>
#include <node.h>
#include <uv/include/uv.h>
#include <ScriptX/ScriptX.h>

namespace NodeJsHelper {

extern bool nodeJsInited;
extern std::vector<std::string> args;
extern std::vector<std::string> exec_args;
extern std::unique_ptr<node::MultiIsolatePlatform> platform;
extern std::map<script::ScriptEngine*, node::Environment*> environments;

bool initNodeJs();
void shutdownNodeJs();
std::pair<script::ScriptEngine*, std::unique_ptr<node::CommonEnvironmentSetup>> newEngine();
node::Environment* getEnvironmentOf(script::ScriptEngine* engine);
int spinEventLoop(script::ScriptEngine* engine);
int stopEngine(script::ScriptEngine* engine);

bool processPluginPack(const std::string& filePath);

}

#endif