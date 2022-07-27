#pragma once
#include <set>
#include <string>

#define LLSE_BACKEND_NODEJS_NAME "NodeJs"
#define LLSE_BACKEND_QUICKJS_NAME "QuickJs"
#define LLSE_BACKEND_LUA_NAME "Lua"

///////////////////// Configs /////////////////////

#if defined(LLSE_BACKEND_NODEJS)
	#define LLSE_BACKEND_TYPE LLSE_BACKEND_NODEJS_NAME
	#define LLSE_PLUGINPACK_EXTENSION ".ll.zip"
	#define LLSE_PLUGINS_EXTENSION ".js"
#elif defined(LLSE_BACKEND_QUICKJS)
	#define LLSE_BACKEND_TYPE LLSE_BACKEND_QUICKJS_NAME
	#define LLSE_PLUGINS_EXTENSION ".js"
#elif defined(LLSE_BACKEND_LUA)
	#define LLSE_BACKEND_TYPE LLSE_BACKEND_LUA_NAME
	#define LLSE_PLUGINS_EXTENSION ".lua"
#endif

#define LLSE_VALID_BACKENDS std::set<std::string>({"QuickJs", "Lua", "NodeJs"})
#define LLSE_VALID_PLUGIN_EXTENSIONS std::set<std::string>({".js", ".lua", ".ll.zip"})
#define LLSE_VALID_BACKENDS_COUNT LLSE_VALID_BACKENDS.size()


// NodeJs额外宏
#define LLSE_NODEJS_ROOT_DIR "plugins/nodejs"
#define LLSE_NODEJS_TEMP_DIR LLSE_NODEJS_ROOT_DIR "/temp"
#define LLSE_NODEJS_UNCOMPRESS_TIMEOUT 30000


// 插件注册信息
#if defined(LLSE_BACKEND_NODEJS)
	#define LLSE_LOADER_NAME "ScriptEngine-NodeJs"
	#define LLSE_LOADER_DESCRIPTION "Node.js ScriptEngine for LiteLoaderBDS"
#elif defined(LLSE_BACKEND_QUICKJS)
	#define LLSE_LOADER_NAME "ScriptEngine-QuickJs"
	#define LLSE_LOADER_DESCRIPTION "Javascript ScriptEngine for LiteLoaderBDS"
#elif defined(LLSE_BACKEND_LUA)
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
#if defined(LLSE_BACKEND_NODEJS)
#define LLSE_DEBUG_CMD "nodedebug"
#elif defined(LLSE_BACKEND_QUICKJS)
#define LLSE_DEBUG_CMD "jsdebug"
#elif defined(LLSE_BACKEND_LUA)
#define LLSE_DEBUG_CMD "luadebug"
#endif
#define LLSE_DEBUG_ENGINE_NAME "__LLSE_DEBUG_ENGINE__"

// 全局通信
#define LLSE_GLOBAL_DATA_NAME L"LLSE_GLOBAL_DATA_SECTION"
#define LLSE_REMOTE_CALL_EVENT_NAME L"LLSE_REMOTE_CALL_EVENT"
#define LLSE_MESSAGE_SYSTEM_WAIT_CHECK_INTERVAL 5

// 超时
#define LLSE_MAXWAIT_REMOTE_LOAD 10 * 1000
#define LLSE_MAXWAIT_REMOTE_CALL 30 * 1000

// 线程池
#define LLSE_POOL_THREAD_COUNT 4

// 其他
#define LLSE_7Z_PATH "./plugins/LiteLoader/7z/7za.exe"
