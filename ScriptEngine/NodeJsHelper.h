#pragma once
#if defined(SCRIPTX_LANG_NODEJS)
#include <map>
#include <node.h>
#include <uv/uv.h>
#include <ScriptX/ScriptX.h>

namespace NodeJsHelper {

extern bool nodeJsInited;
extern std::vector<std::string> args;
extern std::vector<std::string> exec_args;
extern std::unique_ptr<node::MultiIsolatePlatform> platform;
extern std::map<script::ScriptEngine*, node::Environment*> environments;

bool initNodeJs();
void shutdownNodeJs();
script::ScriptEngine* newEngine();
node::Environment* getEnvironmentOf(script::ScriptEngine* engine);
int spinEventLoop(script::ScriptEngine* engine);
int stopEngine(script::ScriptEngine* engine);

bool processPluginPack(const std::string& filePath);

}

#endif