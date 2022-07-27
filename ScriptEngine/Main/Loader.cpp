#include <API/APIHelp.h>
#include <Engine/GlobalShareData.h>
#include <Engine/EngineOwnData.h>
#include <Engine/LoaderHelper.h>
#include <Engine/EngineManager.h>
#include <Tools/IniHelper.h>
#include <PluginManager.h>
#include <NodeJsHelper.h>
#include <list>
#include <string>
#include <vector>
#include <fstream>
#include <filesystem>
#include <exception>
#include <filesystem>
#include <memory>
#include <Configs.h>

extern ::Logger logger;

// 基础库 & 依赖库
std::unordered_map<std::string, std::string> depends;

// 调试引擎
ScriptEngine *debugEngine;
bool globalDebug = false;

// 前置声明
extern void BindAPIs(ScriptEngine *engine);


// 预加载依赖库
void LoadDepends()
{
#ifdef LLSE_BACKEND_NODEJS
    return;     // NodeJs backend load depends code in another place
#endif

    std::filesystem::directory_iterator deps(LLSE_DEPENDS_DIR);
    for (auto& i : deps) {
        if (i.is_regular_file() && i.path().filename() == string("BaseLib") + LLSE_PLUGINS_EXTENSION) {
            try {
                auto path = UTF82String(i.path().generic_u8string());
                auto content = ReadAllFile(path);
                if (!content)
                    throw("Fail to open plugin file!");
                depends.emplace(path, *content);
                logger.info("Dependence " + UTF82String(i.path().filename().u8string()) + " loaded.");
            } catch (std::exception e) {
                logger.warn("Fail to load dependence " + UTF82String(i.path().filename().u8string()) + ".");
                logger.warn(TextEncoding::toUTF8(e.what()));
            } catch (...) {
                logger.warn("Fail to load dependence " + UTF82String(i.path().filename().u8string()) + ".");
            }
        }
    }
}

// 加载调试引擎
void LoadDebugEngine()
{
#ifdef LLSE_BACKEND_NODEJS
    return;     // NodeJs backend didn't enable debug engine now
#endif

    // 启动引擎
    debugEngine = EngineManager::newEngine(LLSE_DEBUG_ENGINE_NAME);
    EngineScope enter(debugEngine);

    // 绑定API
    try {
        BindAPIs(debugEngine);
    } catch (const Exception& e) {
        logger.error("Fail in binding Debug Engine!\n");
        throw;
    }

    // 加载libs依赖库
    try {
        for (auto& [path, content] : depends) {
            debugEngine->eval(content, path);
        }
    } catch (const Exception& e) {
        logger.error("Fail in Loading Dependence Lib!\n");
        throw;
    }
}


// 主加载
void LoadMain_NodeJs();
void LoadMain()
{
#ifdef LLSE_BACKEND_NODEJS
    LoadMain_NodeJs();      // Process NodeJs backend's plugin load separately
    return;
#endif

    logger.info("Loading " LLSE_MODULE_TYPE " plugins...");
    int count = 0;
    std::filesystem::directory_iterator files(LLSE_PLUGINS_LOAD_DIR);
    for (auto& i : files)
    {
        if (i.is_regular_file() && i.path().extension() == LLSE_PLUGINS_EXTENSION)
        {
            if (PluginManager::loadPlugin(UTF82String(i.path().generic_u8string())))
                ++count;
        }
    }
    logger.info(std::to_string(count) + " " + LLSE_MODULE_TYPE + " plugin(s) loaded");
}


#ifdef LLSE_BACKEND_NODEJS
// NodeJs后端 - 主加载
void LoadMain_NodeJs()
{
    logger.info("Loading Node.js plugins...");
    int installCount = 0;
    int count = 0;

    // Unpack .ll.zip
    std::filesystem::directory_iterator files(LLSE_PLUGINS_LOAD_DIR);
    for (auto& i : files) {
        if (i.is_regular_file() && EndsWith(i.path().u8string(), LLSE_PLUGINPACK_EXTENSION)) {
            logger.info("Found Node.js plugin pack \"{}\"! Try installing...", i.path().u8string());
            if (!NodeJsHelper::deployPluginPack(i.path().u8string())) {
                logger.error("Failed to install plugin pack {}, please check your package.json file");
            }
            ++installCount;
        }
    }
    logger.info("{} Node.js plugin pack(s) installed", installCount);

    // Load Plugins in NODEJS_ROOT_DIR
    files = std::filesystem::directory_iterator(LLSE_NODEJS_ROOT_DIR);
    for (auto& i : files) {
        if (i.is_directory() && i.path().filename() != "temp" && i.path().filename() != "node_modules") {
            std::filesystem::path pth = i.path();
            if (std::filesystem::exists(pth / "package.json")) {
                if (PluginManager::loadPlugin(i.path().u8string())) {
                    ++count;
                }
            }
            else {
                logger.warn("No package.json file found in directory {}, ignored.", i.path().filename().u8string());
            }
        }
    }
    logger.info("{} Node.js plugin(s) loaded", count);
}
#endif