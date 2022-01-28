#pragma once

///////////////////// Configs /////////////////////

// 后端宏
#define LXL_LANG_JS "Js"
#define LXL_LANG_LUA "Lua"

#if defined(SCRIPTX_LANG_JAVASCRIPT)
	#define LXL_SCRIPT_LANG_TYPE LXL_LANG_JS
	#define LXL_PLUGINS_SUFFIX ".js"
#elif defined(SCRIPTX_LANG_LUA)
	#define LXL_SCRIPT_LANG_TYPE LXL_LANG_LUA
	#define LXL_PLUGINS_SUFFIX ".lua"
#endif

#define LXL_BACKEND_TYPE_COUNT			2
#define LLSE_VALID_BACKENDS				{"Js", "Lua"}
#define LLSE_VALID_PLUGIN_EXTENSIONS	{".js",".lua"}


// 插件注册信息
#if defined(SCRIPTX_LANG_JAVASCRIPT)
	#define LXL_LOADER_NAME "LiteLoader-ScriptEngine-Js"
	#define LXL_LOADER_DESCRIPTION "Javascript ScriptEngine For LiteLoaderBDS"
#elif defined(SCRIPTX_LANG_LUA)
	#define LXL_LOADER_NAME "LiteLoader-ScriptEngine-Lua"
	#define LXL_LOADER_DESCRIPTION "Lua ScriptEngine For LiteLoaderBDS"
#endif

#define LXL_MODULE_TYPE LXL_SCRIPT_LANG_TYPE


// 基础库 & 依赖库
#define LXL_DEPENDS_DIR "./plugins/lib"
#define LXL_PLUGINS_LOAD_DIR "./plugins"

// 全局调试
#if defined(SCRIPTX_LANG_JAVASCRIPT)
	#define LXL_DEBUG_CMD "jsdebug"
#elif defined(SCRIPTX_LANG_LUA)
	#define LXL_DEBUG_CMD "luadebug"
#endif
#define LXL_DEBUG_ENGINE_NAME "__LLSE_DEBUG_ENGINE__"

// 全局通信
#define LXL_GLOBAL_DATA_NAME L"LLSE_GLOBAL_DATA_SECTION"
#define LXL_REMOTE_CALL_EVENT_NAME L"LLSE_REMOTE_CALL_EVENT"
#define LXL_MESSAGE_SYSTEM_WAIT_CHECK_INTERVAL 5

//超时
#define LXL_MAXWAIT_REMOTE_LOAD 10*1000
#define LXL_MAXWAIT_REMOTE_CALL 60*1000

//线程池
#define LXL_POOL_THREAD_COUNT 4
