#pragma once
#include <vector>
#include <string>


///////////////////////// Configs /////////////////////////

// Plugins & Base libs path
#define LLSE_DEPENDS_DIR "./plugins/lib"
#define LLSE_PLUGINS_LOAD_DIR "./plugins"


// Plugin package information
#define LLSE_PLUGIN_PACKAGE_EXTENSION ".llplugin"
#define LLSE_PLUGIN_PACKAGE_TEMP_DIR "./plugins/LiteLoader/temp"
#define LLSE_PLUGIN_PACKAGE_UNCOMPRESS_TIMEOUT 30000


// Current language information
#define LLSE_BACKEND_NODEJS_NAME "NodeJs"
#define LLSE_BACKEND_JS_NAME "Js"
#define LLSE_BACKEND_LUA_NAME "Lua"
#define LLSE_BACKEND_PYTHON_NAME "Python"

#if defined(LLSE_BACKEND_QUICKJS)
// QuickJs
	#define LLSE_BACKEND_TYPE LLSE_BACKEND_JS_NAME
	#define LLSE_SOURCE_FILE_EXTENSION ".js"
	#define LLSE_PLUGINS_ROOT_DIR "plugins"
	#define LLSE_IS_PLUGIN_PACKAGE 0

#elif defined(LLSE_BACKEND_LUA)
// Lua
	#define LLSE_BACKEND_TYPE LLSE_BACKEND_LUA_NAME
	#define LLSE_SOURCE_FILE_EXTENSION ".lua"
	#define LLSE_PLUGINS_ROOT_DIR "plugins"
	#define LLSE_IS_PLUGIN_PACKAGE 0

#elif defined(LLSE_BACKEND_NODEJS)
// NodeJs
	#define LLSE_BACKEND_TYPE LLSE_BACKEND_NODEJS_NAME
	#define LLSE_SOURCE_FILE_EXTENSION ".js"
	#define LLSE_PLUGINS_ROOT_DIR "plugins/nodejs"
	#define LLSE_IS_PLUGIN_PACKAGE 1

#elif defined(LLSE_BACKEND_PYTHON)
// Python
	#define LLSE_BACKEND_TYPE LLSE_BACKEND_PYTHON_NAME
	#define LLSE_SOURCE_FILE_EXTENSION ".py"
	#define LLSE_PLUGINS_ROOT_DIR "plugins/python"
	#define LLSE_IS_PLUGIN_PACKAGE 1
#endif


// All backends information
#define LLSE_MODULE_TYPE LLSE_BACKEND_TYPE
#define LLSE_VALID_BACKENDS std::vector<std::string>({"Js", "Lua", "NodeJs", "Python"})
#define LLSE_VALID_PLUGIN_EXTENSIONS std::vector<std::string>({".js", ".lua", "", ""})
#define LLSE_VALID_PLUGIN_PACKAGE_IDENTIFIER \
	std::vector<std::string>({"", "", "package.json", "pyproject.toml"})
#define LLSE_VALID_BACKENDS_COUNT LLSE_VALID_BACKENDS.size()


// Loader information
#if defined(LLSE_BACKEND_NODEJS)
	#define LLSE_LOADER_NAME "ScriptEngine-NodeJs"
	#define LLSE_LOADER_DESCRIPTION "Node.js ScriptEngine for LiteLoaderBDS"
#elif defined(LLSE_BACKEND_QUICKJS)
	#define LLSE_LOADER_NAME "ScriptEngine-QuickJs"
	#define LLSE_LOADER_DESCRIPTION "Javascript ScriptEngine for LiteLoaderBDS"
#elif defined(LLSE_BACKEND_LUA)
	#define LLSE_LOADER_NAME "ScriptEngine-Lua"
	#define LLSE_LOADER_DESCRIPTION "Lua ScriptEngine for LiteLoaderBDS"
#elif defined(LLSE_BACKEND_PYTHON)
	#define LLSE_LOADER_NAME "ScriptEngine-Python"
	#define LLSE_LOADER_DESCRIPTION "Python ScriptEngine for LiteLoaderBDS"
#endif


// Debug engine information
#if defined(LLSE_BACKEND_NODEJS)
	#define LLSE_DEBUG_CMD "nodejsdebug"
#elif defined(LLSE_BACKEND_QUICKJS)
	#define LLSE_DEBUG_CMD "jsdebug"
#elif defined(LLSE_BACKEND_LUA)
	#define LLSE_DEBUG_CMD "luadebug"
#elif defined(LLSE_BACKEND_PYTHON)
	#define LLSE_DEBUG_CMD "pydebug"
#endif
#define LLSE_DEBUG_ENGINE_NAME "__LLSE_DEBUG_ENGINE__"


// Global communication
#define LLSE_GLOBAL_DATA_NAME L"LLSE_GLOBAL_DATA_SECTION"
#define LLSE_REMOTE_CALL_EVENT_NAME L"LLSE_REMOTE_CALL_EVENT"
#define LLSE_MESSAGE_SYSTEM_WAIT_CHECK_INTERVAL 5


// Timeout
#define LLSE_MAXWAIT_REMOTE_LOAD 10 * 1000
#define LLSE_MAXWAIT_REMOTE_CALL 30 * 1000


// Thread pool parameter
#define LLSE_POOL_THREAD_COUNT 4


// Others
#define LLSE_7Z_PATH "./plugins/LiteLoader/7z/7za.exe"
