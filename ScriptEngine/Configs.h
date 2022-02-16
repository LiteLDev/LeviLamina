#pragma once
#include <set>
#include <string>

///////////////////// Configs /////////////////////

// 后端宏
#define LLSE_BACKEND_JS "Js"
#define LLSE_BACKEND_LUA "Lua"

#if defined(SCRIPTX_LANG_JAVASCRIPT)
	#define LLSE_BACKEND_TYPE LLSE_BACKEND_JS
	#define LLSE_PLUGINS_EXTENSION ".js"
#elif defined(SCRIPTX_LANG_LUA)
	#define LLSE_BACKEND_TYPE LLSE_BACKEND_LUA
	#define LLSE_PLUGINS_EXTENSION ".lua"
#endif

#define LLSE_VALID_BACKENDS				std::set<std::string>({"Js", "Lua"})
#define LLSE_VALID_PLUGIN_EXTENSIONS	std::set<std::string>({".js",".lua"})
#define LLSE_VALID_BACKENDS_COUNT		LLSE_VALID_BACKENDS.size()


// 插件注册信息
#if defined(SCRIPTX_LANG_JAVASCRIPT)
	#define LLSE_LOADER_NAME "ScriptEngine-Js"
	#define LLSE_LOADER_DESCRIPTION "Javascript ScriptEngine for LiteLoaderBDS"
#elif defined(SCRIPTX_LANG_LUA)
	#define LLSE_LOADER_NAME "ScriptEngine-Lua"
	#define LLSE_LOADER_DESCRIPTION "Lua ScriptEngine for LiteLoaderBDS"
#endif

#define LLSE_MODULE_TYPE LLSE_BACKEND_TYPE

// 配置文件
#define LITELOADER_CONFIG_FILE "plugins/LiteLoader/LiteLoader.json"

// 基础库 & 依赖库
#define LLSE_DEPENDS_DIR "./plugins/lib"
#define LLSE_PLUGINS_LOAD_DIR "./plugins"

// 调试引擎
#if defined(SCRIPTX_LANG_JAVASCRIPT)
	#define LLSE_DEBUG_CMD "jsdebug"
#elif defined(SCRIPTX_LANG_LUA)
	#define LLSE_DEBUG_CMD "luadebug"
#endif
#define LLSE_DEBUG_ENGINE_NAME "__LLSE_DEBUG_ENGINE__"

// 全局通信
#define LLSE_GLOBAL_DATA_NAME L"LLSE_GLOBAL_DATA_SECTION"
#define LLSE_REMOTE_CALL_EVENT_NAME L"LLSE_REMOTE_CALL_EVENT"
#define LLSE_MESSAGE_SYSTEM_WAIT_CHECK_INTERVAL 5

// 超时
#define LLSE_MAXWAIT_REMOTE_LOAD 10*1000
#define LLSE_MAXWAIT_REMOTE_CALL 30*1000

// 线程池
#define LLSE_POOL_THREAD_COUNT 4

// 内置命令
#define LLSE_COMMAND_FINISHED_SYMBOL ".FiniShed"
#define LLSE_COMMAND_FINISHED_SUFFIX LLSE_COMMAND_FINISHED_SYMBOL LLSE_PLUGINS_EXTENSION
