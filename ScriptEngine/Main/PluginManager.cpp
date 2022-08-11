#include <API/APIHelp.h>
#include "PluginManager.h"
#include <Global.hpp>
#include <Configs.h>
#include <filesystem>
#include <Engine/GlobalShareData.h>
#include <Engine/LocalShareData.h>
#include <Engine/MessageSystem.h>
#include <Engine/LoaderHelper.h>
#include <Engine/RemoteCall.h>
#include <Engine/TimeTaskSystem.h>
#include <Engine/EngineManager.h>
#include <Utils/STLHelper.h>
#include <LiteLoader/Main/PluginManager.h>
#include <Loader.h>
#include <ScheduleAPI.h>
#include <API/EventAPI.h>
#include <API/CommandAPI.h>
#include <Utils/Hash.h>
#include <NodeJsHelper.h>
#ifdef LLSE_BACKEND_NODEJS
#include <NodeJs/include/node.h>
#endif
#define H(x) do_hash(x)
using namespace std;

extern void BindAPIs(ScriptEngine* engine);

// Helper
string RemoveRealAllExtension(string fileName) {
    int pos = fileName.find(".");
    if (pos == string::npos)
        return fileName;
    else
        return fileName.substr(0, pos);
}

// 加载插件
bool PluginManager::loadPlugin(const std::string& filePath, bool isHotLoad, bool mustBeCurrentModule) {
#ifdef LLSE_BACKEND_NODEJS
    return loadNodeJsPlugin(filePath); // Process NodeJs plugin load separately
#endif

    if (filePath == LLSE_DEBUG_ENGINE_NAME)
        return true;

    string suffix = UTF82String(filesystem::path(str2wstr(filePath)).extension().u8string());
    string moduleToBroadcast;
    switch (H(suffix.c_str())) {
        case H(".lua"):
            moduleToBroadcast = LLSE_BACKEND_LUA_NAME;
            break;
        case H(".js"):
            moduleToBroadcast = LLSE_BACKEND_QUICKJS_NAME;
            break;
        default:
            logger.error("Do not support this type of plugin!");
            return false;
            break;
    }

    if (suffix != LLSE_PLUGINS_EXTENSION) {
        if (mustBeCurrentModule)
            return false;

        // Remote Load
        // logger.debug("Remote Load begin");

        ostringstream sout;
        sout << isHotLoad << "\n"
             << filePath;
        string request = sout.str();

        auto result = ModuleMessage::sendToRandom(moduleToBroadcast, ModuleMessage::MessageType::RemoteLoadRequest, request);
        if (!result) {
            logger.error("Fail to send remote load request!");
            return false;
        }

        if (!result.waitForAllResults(LLSE_MAXWAIT_REMOTE_LOAD)) {
            logger.error("Remote Load Timeout!");
            return false;
        }
        return true;
    }

    //判重
    string pluginFileName = UTF82String(std::filesystem::path(str2wstr(filePath)).filename().u8string());
    if (PluginManager::getPlugin(pluginFileName)) {
        // logger.error("This plugin has been loaded by LiteLoader. You cannot load it twice.");
        return false;
    }

    if (!filesystem::exists(str2wstr(filePath))) {
        logger.error("Plugin no found! Check the path you input again.");
        return false;
    }

    ScriptEngine* engine = nullptr;
    try {
        auto scripts = ReadAllFile(filePath);
        if (!scripts) {
            throw std::runtime_error("Fail to open plugin file!");
        }

        //启动引擎
        engine = EngineManager::newEngine();
        EngineScope enter(engine);

        // setData
        ENGINE_OWN_DATA()->pluginName = pluginFileName;
        ENGINE_OWN_DATA()->pluginFilePath = filePath;
        ENGINE_OWN_DATA()->logger.title = RemoveRealAllExtension(pluginFileName);

        //绑定API
        try {
            BindAPIs(engine);
        } catch (const Exception& e) {
            logger.error("Fail in Binding APIs!\n");
            throw;
        }
        //加载libs依赖库
        try {
            for (auto& [path, content] : depends) {
                engine->eval(content, path);
            }
        } catch (const Exception& e) {
            logger.error("Fail in Loading Dependence Lib!\n");
            throw;
        }

        //加载脚本
        try {
            engine->eval(*scripts, ENGINE_OWN_DATA()->pluginFilePath);
        } catch (const Exception& e) {
            logger.error("Fail in Loading Script Plugin!\n");
            throw;
        }
        std::string const& pluginName = ENGINE_OWN_DATA()->pluginName;
        ExitEngineScope exit;

        //如果插件自身未注册则帮忙注册信息
        if (!PluginManager::getPlugin(pluginName))
            PluginManager::registerPlugin(filePath, pluginName, pluginName, LL::Version(1, 0, 0), {});

        //热加载完毕后补调用各启动事件
        if (isHotLoad)
            LLSECallEventsOnHotLoad(engine);
        logger.info(tr("llse.loader.loadMain.loadedPlugin",
                       fmt::arg("type", moduleToBroadcast),
                       fmt::arg("name", pluginName)));
        return true;
    } catch (const Exception& e) {
        logger.error("Fail to load " + filePath + "!");
        if (engine) {
            EngineScope enter(engine);
            logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName);
            PrintException(e);
            ExitEngineScope exit;

            LLSERemoveTimeTaskData(engine);
            LLSERemoveAllEventListeners(engine);
            LLSERemoveCmdRegister(engine);
            LLSERemoveCmdCallback(engine);
            LLSERemoveAllExportedFuncs(engine);

            engine->getData().reset();
            EngineManager::unRegisterEngine(engine);
        }
        if (engine) {
            engine->destroy();
        }
    } catch (const std::exception& e) {
        logger.error("Fail to load " + filePath + "!");
        logger.error(TextEncoding::toUTF8(e.what()));
    } catch (...) {
        logger.error("Fail to load " + filePath + "!");
    }
    return false;
}


#ifdef LLSE_BACKEND_NODEJS
// 加载NodeJs插件
bool PluginManager::loadNodeJsPlugin(const std::string& dirPath) {
    // NodeJs plugins do not support features like hot-load or remote-load now

    std::string entryPath = NodeJsHelper::findEntryScript(dirPath);
    if (entryPath.empty())
        return false;
    std::string pluginName = NodeJsHelper::getPluginPackageName(dirPath);

    // Run "npm install" if needed
    if (NodeJsHelper::doesPluginPackHasDependency(dirPath) && !filesystem::exists(filesystem::path(dirPath) / "node_modules")) {
        int exitCode = 0;
        logger.info(tr("llse.loader.nodejs.executeNpmInstall.start", fmt::arg("name", filesystem::path(dirPath).filename().u8string())));
        if ((exitCode = NodeJsHelper::executeNpmCommand("npm install", dirPath)) == 0)
            logger.info(tr("llse.loader.nodejs.executeNpmInstall.success"));
        else
            logger.error(tr("llse.loader.nodejs.executeNpmInstall.fail", fmt::arg("code",exitCode)));
    }

    // Create engine & Load plugin
    ScriptEngine* engine = nullptr;
    node::Environment* env = nullptr;
    try {
        engine = EngineManager::newEngine();
        {
            EngineScope enter(engine);
            // setData
            ENGINE_OWN_DATA()->pluginName = pluginName;
            ENGINE_OWN_DATA()->pluginFilePath = entryPath;
            ENGINE_OWN_DATA()->logger.title = pluginName;
            // bindAPIs
            BindAPIs(engine);
        }
        if (!NodeJsHelper::loadPluginCode(engine, entryPath, dirPath))
            throw "Uncaught exception thrown in code";

        if (!PluginManager::getPlugin(pluginName)) {
            // Plugin did't register itself. Help to register it
            string description = pluginName;
            LL::Version ver(1, 0, 0);
            std::map<string, string> others = {};

            // Read information from package.json
            try {
                std::filesystem::path packageFilePath = std::filesystem::path(dirPath) / "package.json";
                std::ifstream file(packageFilePath.make_preferred().u8string());
                nlohmann::json j;
                file >> j;
                file.close();

                // description
                if (j.contains("description")) {
                    description = j["description"].get<std::string>();
                }
                // version
                if (j.contains("version") && j["version"].is_string()) {
                    ver = LL::Version::parse(j["version"].get<std::string>());
                }
                // license
                if (j.contains("license") && j["license"].is_string()) {
                    others["License"] = j["license"].get<std::string>();
                } else if (j["license"].is_object() && j["license"].contains("url")) {
                    others["License"] = j["license"]["url"].get<std::string>();
                }
                // repository
                if (j.contains("repository") && j["repository"].is_string()) {
                    others["Repository"] = j["repository"].get<std::string>();
                } else if (j["repository"].is_object() && j["repository"].contains("url")) {
                    others["Repository"] = j["repository"]["url"].get<std::string>();
                }
            } catch (...) {
                logger.warn(tr("llse.loader.nodejs.register.fail", fmt::arg("name", pluginName)));
            }

            // register
            PluginManager::registerPlugin(dirPath, pluginName, description, ver, others);
        }

        
        logger.info(tr("llse.loader.loadMain.loadedPlugin",
                       fmt::arg("type", "Node.js"),
                       fmt::arg("name", pluginName)));
        return true;
    } catch (const Exception& e) {
        logger.error("Fail to load " + dirPath + "!");
        if (engine) {
            EngineScope enter(engine);
            logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName);
            PrintException(e);
            ExitEngineScope exit;

            LLSERemoveTimeTaskData(engine);
            LLSERemoveAllEventListeners(engine);
            LLSERemoveCmdRegister(engine);
            LLSERemoveCmdCallback(engine);
            LLSERemoveAllExportedFuncs(engine);

            engine->getData().reset();
            EngineManager::unRegisterEngine(engine);
        }
        if (engine) {
            node::Stop(env);
        }
    } catch (const std::exception& e) {
        logger.error("Fail to load " + dirPath + "!");
        logger.error(TextEncoding::toUTF8(e.what()));
    } catch (...) {
        logger.error("Fail to load " + dirPath + "!");
    }
    return false;
}
#endif

//卸载插件
bool PluginManager::unloadPlugin(const std::string& name) {
    if (name == LLSE_DEBUG_ENGINE_NAME)
        return false;

    auto engine = EngineManager::getEngine(name);
    if (!engine)
        return false;
    LLSECallEventsOnHotUnload(engine);
    LLSERemoveTimeTaskData(engine);
    LLSERemoveAllEventListeners(engine);
    LLSERemoveCmdRegister(engine);
    LLSERemoveCmdCallback(engine);
    LLSERemoveAllExportedFuncs(engine);

    EngineManager::unRegisterEngine(engine);
    engine->getData().reset();

    PluginManager::unRegisterPlugin(name);
    Schedule::nextTick([engine]() {
#if defined(LLSE_BACKEND_NODEJS)
        NodeJsHelper::stopEngine(engine);
#else
        engine->destroy();
#endif
    });

    logger.info(name + " unloaded.");
    return true;
}

//重载插件
bool PluginManager::reloadPlugin(const std::string& name) {
    if (name == LLSE_DEBUG_ENGINE_NAME)
        return true;

    auto plugin = PluginManager::getPlugin(name);
    if (!plugin)
        return false;

    string filePath = plugin->filePath;
    if (!PluginManager::unloadPlugin(name))
        return false;
    return PluginManager::loadPlugin(filePath, true, true);
}

//重载全部插件
bool PluginManager::reloadAllPlugins() {
    auto pluginsList = PluginManager::getLocalPlugins();
    for (auto& plugin : pluginsList)
        reloadPlugin(plugin.second->name);
    return true;
}

LL::Plugin* PluginManager::getPlugin(std::string name) {
    return LL::PluginManager::getPlugin(name, true);
}

//获取当前语言的所有插件
std::unordered_map<std::string, LL::Plugin*> PluginManager::getLocalPlugins() {
    std::unordered_map<std::string, LL::Plugin*> res;

    auto engines = EngineManager::getLocalEngines();
    for (auto& engine : engines) {
        string name = ENGINE_GET_DATA(engine)->pluginName;
        if (name != LLSE_DEBUG_ENGINE_NAME) {
            LL::Plugin* plugin = PluginManager::getPlugin(name);
            if (plugin)
                res[plugin->name] = plugin;
        }
    }
    return res;
}

std::unordered_map<std::string, LL::Plugin*> PluginManager::getAllScriptPlugins() {
    auto res = getAllPlugins();
    erase_if(res, [](auto& item) {
        return item.second->type != LL::Plugin::PluginType::ScriptPlugin;
    });
    return res;
}

// 获取所有的插件
std::unordered_map<std::string, LL::Plugin*> PluginManager::getAllPlugins() {
    return LL::PluginManager::getAllPlugins();
}

bool PluginManager::registerPlugin(std::string filePath, std::string name, std::string desc,
                                   LL::Version version, std::map<std::string, std::string> others) {
    others["PluginType"] = "Script Plugin";
    others["PluginFilePath"] = filePath;
    return LL::PluginManager::registerPlugin(NULL, name, desc, version, others);
}

bool PluginManager::unRegisterPlugin(std::string name) {
    return LL::PluginManager::unRegisterPlugin(name);
}
