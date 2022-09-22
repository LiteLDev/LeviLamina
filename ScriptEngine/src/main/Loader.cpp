#include "api/APIHelp.h"
#include "engine/GlobalShareData.h"
#include "engine/EngineOwnData.h"
#include "engine/EngineManager.h"
#include "utils/IniHelper.h"
#include "main/PluginManager.h"
#include "main/NodeJsHelper.h"
#include <list>
#include <string>
#include <vector>
#include <fstream>
#include <filesystem>
#include <exception>
#include <filesystem>
#include <memory>
#include "main/Configs.h"

extern ::Logger logger;

// Baselibs dependency 
std::unordered_map<std::string, std::string> depends;

// Debug engine
ScriptEngine* debugEngine;
bool globalDebug = false;

// Pre-declared
extern void BindAPIs(ScriptEngine* engine);

// Pre-load dependency
void LoadDepends() {
#ifdef LLSE_BACKEND_NODEJS
    return; // NodeJs backend load depends code in another place
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
                logger.info(tr("llse.loader.loadDepends.success", UTF82String(i.path().filename().u8string())));
            } catch (std::exception e) {
                logger.warn(tr("llse.loader.loadDepends.fail", UTF82String(i.path().filename().u8string())));
                logger.warn(TextEncoding::toUTF8(e.what()));
            } catch (...) {
                logger.warn(tr("llse.loader.loadDepends.fail", UTF82String(i.path().filename().u8string())));
            }
        }
    }
}

// Load debug engine
void LoadDebugEngine() {
#ifdef LLSE_BACKEND_NODEJS
    return; // NodeJs backend didn't enable debug engine now
#endif

    //  Create engine
    debugEngine = EngineManager::newEngine(LLSE_DEBUG_ENGINE_NAME);
    EngineScope enter(debugEngine);

    // Bind APIs
    try {
        BindAPIs(debugEngine);
    } catch (const Exception& e) {
        logger.error("Fail in binding Debug Engine!\n");
        throw;
    }

    // Load baselibs
    try {
        for (auto& [path, content] : depends) {
            debugEngine->eval(content, path);
        }
    } catch (const Exception& e) {
        logger.error("Fail in Loading Dependence Lib!\n");
        throw;
    }
}


// Main load procedure
void LoadMain_Package();
void LoadMain() {

#if LLSE_IS_PLUGIN_PACKAGE
    // Load plugin package
    LoadMain_Package();

#else

    // Load simple file plugin
    logger.info(tr("llse.loader.loadMain.start", fmt::arg("type", LLSE_MODULE_TYPE)));
    int count = 0;
    std::filesystem::directory_iterator files(LLSE_PLUGINS_LOAD_DIR);
    for (auto& i : files) {
        if (i.is_regular_file() && i.path().extension() == LLSE_PLUGINS_EXTENSION) {
            if (PluginManager::loadPlugin(UTF82String(i.path().generic_u8string()), false, true))
                ++count;
        }
    }
    logger.info(tr("llse.loader.loadMain.done",
                   fmt::arg("count", count),
                   fmt::arg("type", LLSE_MODULE_TYPE)));
#endif
}



#ifdef LLSE_BACKEND_NODEJS
// NodeJs后端 - 主加载
void LoadMain_NodeJs() {
    logger.info(tr("llse.loader.loadMain.start", fmt::arg("type", "Node.js")));
    int installCount = 0;
    int count = 0;

    // Load plugins in NODEJS_ROOT_DIR
    std::filesystem::directory_iterator files(LLSE_PLUGINS_ROOT_DIR);
    for (auto& i : files) {
        std::filesystem::path pth = i.path();
        if (i.is_directory() && pth.filename() != "node_modules") {
            if (std::filesystem::exists(pth / "package.json")) {
                if (PluginManager::loadPlugin(UTF82String(pth.u8string()), false, true)) {
                    ++count;
                }
            }
            else {
                logger.warn(tr("llse.loader.loadMain.nodejs.ignored", UTF82String(pth.filename().u8string())));
            }
        }
    }

    // Unpack .llplugin & install
    // Tips: Must after plugins loaded in NODEJS_ROOT_DIR
    files = std::filesystem::directory_iterator(LLSE_PLUGINS_LOAD_DIR);
    for (auto& i : files) {
        std::filesystem::path pth = i.path();
        if (i.is_regular_file() && EndsWith(UTF82String(pth.u8string()), LLSE_PLUGIN_PACKAGE_EXTENSION)) {
            logger.info(tr("llse.loader.loadMain.nodejs.installPack.start",
                           fmt::arg("path", UTF82String(pth.u8string()))));
            if (!PluginManager::loadPlugin(UTF82String(pth.u8string()), false, true)) {
                logger.error(tr("llse.loader.loadMain.nodejs.installPack.fail"));
            }
            ++installCount;
        }
    }

    logger.info(tr("llse.loader.loadMain.done",
                   fmt::arg("count", count),
                   fmt::arg("type", "Node.js")));
}
#endif

void LoadMain_Package()
{
#ifdef LLSE_BACKEND_NODEJS
    // Process NodeJs backend's plugin load separately
    LoadMain_NodeJs();
    return;
#endif
}