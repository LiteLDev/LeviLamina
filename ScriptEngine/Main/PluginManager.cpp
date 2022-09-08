#include <API/APIHelp.h>
#include "PluginManager.h"
#include <Global.hpp>
#include <Configs.h>
#include <filesystem>
#include <utility>
#include <Engine/LocalShareData.h>
#include <Engine/RemoteCall.h>
#include <Engine/TimeTaskSystem.h>
#include <Engine/EngineManager.h>
#include <Utils/STLHelper.h>
#include <LiteLoader/Main/PluginManager.h>
#include <Loader.h>
#include <ScheduleAPI.h>
#include <API/CommandAPI.h>
#include <API/EventAPI.h>
#include <Utils/Hash.h>
#ifdef LLSE_BACKEND_NODEJS
#pragma warning(disable : 4251)
#include <NodeJsHelper.h>
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

// Load plugin
// - This function must be called in correct backend
// - "filePath" can be a single-file plugin path, or a .llplugin compressed package path
// or a dir path which contains uncompressed plugin package
bool PluginManager::loadPlugin(const std::string& fileOrDirPath, bool isHotLoad, bool mustBeCurrentModule) {
    if (fileOrDirPath == LLSE_DEBUG_ENGINE_NAME)
        return true;

    if (!filesystem::exists(str2wstr(fileOrDirPath))) {
        logger.error("Plugin not found! Check the path you input again.");
        return false;
    }

    // Get bacis information
    bool isPluginPackage = filesystem::is_directory(fileOrDirPath);
    string backendType = getPluginBackendType(fileOrDirPath);
    if (backendType.empty())
    {
        logger.error(fileOrDirPath + " is not a valid plugin path!");
        return false;
    }
    std::filesystem::path p(str2wstr(fileOrDirPath));
    string pluginFileName = RemoveRealAllExtension(UTF82String(p.filename().stem().u8string()));

    // Uncompress plugin package if needed
    string realPath = fileOrDirPath;
    if (backendType == "PluginPackage")
    {
        // Get plugin package
        // Clean temp dir first
        std::error_code ec;
        filesystem::remove_all(LLSE_PLUGIN_PACKAGE_TEMP_DIR, ec);

        // Uncompress package to temp dir
        string uncompressToDir = LLSE_PLUGIN_PACKAGE_TEMP_DIR;
        auto [exitCode, output] = UncompressFile(fileOrDirPath, uncompressToDir, LLSE_PLUGIN_PACKAGE_UNCOMPRESS_TIMEOUT);
        if (exitCode != 0) {
            logger.error("Fail to uncompress plugin package at " + fileOrDirPath + "!");
            logger.debug(output);
            return false;
        }

        // Re-get backendType
        isPluginPackage = true;
        realPath = uncompressToDir;
        backendType = getPluginBackendType(realPath);
    }

    // Re-check backendType
    if (backendType.empty() || backendType == "PluginPackage")
    {
        logger.error(pluginFileName + " is not a valid plugin!");
        return false;
    }
    else if (backendType != LLSE_BACKEND_TYPE)
    {
        // Unmatched backend
        // logger.error(pluginFileName + " is not a plugin of " + LLSE_BACKEND_TYPE + " engine!");
        return false;
    }
    
    // Plugin package
    if (isPluginPackage)
    {
        return loadPluginPackage(realPath, fileOrDirPath, isHotLoad);
    }

    // Single file plugin
    // Check duplicated
    if (PluginManager::getPlugin(pluginFileName)) {
        // logger.error("This plugin has been loaded by LiteLoader. You cannot load it twice.");
        return false;
    }

    ScriptEngine* engine = nullptr;
    try {
        auto scripts = ReadAllFile(realPath);
        if (!scripts) {
            throw std::runtime_error("Fail to open plugin file!");
        }

        // Create script engine
        engine = EngineManager::newEngine();
        EngineScope enter(engine);

        // setData
        ENGINE_OWN_DATA()->pluginName = pluginFileName;
        ENGINE_OWN_DATA()->pluginFileOrDirPath = realPath;
        ENGINE_OWN_DATA()->logger.title = pluginFileName;

        // Bind APIs
        try {
            BindAPIs(engine);
        } catch (const Exception& e) {
            logger.error("Fail in Binding APIs!\n");
            throw;
        }
        // Load depend libs
        try {
            for (auto& [path, content] : depends) {
                engine->eval(content, path);
            }
        } catch (const Exception& e) {
            logger.error("Fail in Loading Dependence Lib!\n");
            throw;
        }

        // Load script
        try {
            engine->eval(*scripts, ENGINE_OWN_DATA()->pluginFileOrDirPath);
        } catch (const Exception& e) {
            logger.error("Fail in Loading Script Plugin!\n");
            throw;
        }
        std::string const& pluginName = ENGINE_OWN_DATA()->pluginName;
        ExitEngineScope exit;

        // If plugin itself doesn't register, help it to do so
        if (!PluginManager::getPlugin(pluginName))
            PluginManager::registerPlugin(realPath, pluginName, pluginName, LL::Version(1, 0, 0), {});

        // Call necessary events when at hot load
        if (isHotLoad)
            LLSECallEventsOnHotLoad(engine);

        // Success
        logger.info(tr("llse.loader.loadMain.loadedPlugin",
                       fmt::arg("type", backendType),
                       fmt::arg("name", pluginName)));
        return true;
    } catch (const Exception& e) {
        logger.error("Fail to load " + realPath + "!");
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
        logger.error("Fail to load " + realPath + "!");
        logger.error(TextEncoding::toUTF8(e.what()));
    } catch (...) {
        logger.error("Fail to load " + realPath + "!");
    }
    return false;
}

// Load plugin package
// This function must be called in correct backend
bool PluginManager::loadPluginPackage(const std::string& dirPath, const std::string& packagePath, bool isHotLoad)
{
    // "dirPath" is always public temp dir (LLSE_PLUGIN_PACKAGE_TEMP_DIR)
    if (!filesystem::is_directory(dirPath))
        return false;
    bool result = false;

#ifdef LLSE_BACKEND_NODEJS
    result = NodeJsHelper::loadNodeJsPlugin(dirPath, packagePath, isHotLoad);
#endif

    if (result)
    {
        // OK now. Delete installed plugin package
        std::error_code ec;
        std::filesystem::remove(packagePath, ec);
    }
    return result;
}

// Unload plugin
bool PluginManager::unloadPlugin(const std::string& name) {
    if (name == LLSE_DEBUG_ENGINE_NAME)
        return false;

    auto engine = EngineManager::getEngine(name, true);
    if (!engine)
        return false;
    string pluginName = ENGINE_GET_DATA(engine)->pluginName;

    //NodeJs use his own setTimeout, so no need to remove
#ifndef LLSE_BACKEND_NODEJS
    LLSERemoveTimeTaskData(engine);
#endif

    LLSECallEventsOnHotUnload(engine);
    LLSERemoveAllEventListeners(engine);
    LLSERemoveCmdRegister(engine);
    LLSERemoveCmdCallback(engine);
    LLSERemoveAllExportedFuncs(engine);

    EngineManager::unRegisterEngine(engine);
    engine->getData().reset();

    PluginManager::unRegisterPlugin(name);
    Schedule::nextTick([engine]() {
#ifdef LLSE_BACKEND_NODEJS
        NodeJsHelper::stopEngine(engine);
#else
        engine->destroy();
#endif
    });

    logger.info(pluginName + " unloaded.");
    return true;
}

// Reload plugin
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

// Reload all plugins
bool PluginManager::reloadAllPlugins() {
    auto pluginsList = PluginManager::getLocalPlugins();
    for (auto& plugin : pluginsList)
        reloadPlugin(plugin.second->name);
    return true;
}

LL::Plugin* PluginManager::getPlugin(std::string name) {
    return LL::PluginManager::getPlugin(std::move(name), true);
}

// Get all plugins of current language
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

// Get all plugins
std::unordered_map<std::string, LL::Plugin*> PluginManager::getAllPlugins() {
    return LL::PluginManager::getAllPlugins();
}

bool PluginManager::registerPlugin(std::string filePath, std::string name, std::string desc,
                                   LL::Version version, std::map<std::string, std::string> others) {
    others["PluginType"] = "Script Plugin";
    others["PluginFilePath"] = std::move(filePath);
    return LL::PluginManager::registerPlugin(nullptr, std::move(name), std::move(desc), version, others);
}

bool PluginManager::unRegisterPlugin(std::string name) {
    return LL::PluginManager::unRegisterPlugin(std::move(name));
}

// Get plugin backend type from its file path (single file plugin)
// or its unpressed dir path (plugin package)
std::string PluginManager::getPluginBackendType(const std::string& path)
{
    filesystem::path filePath(str2wstr(path));
    if (!filesystem::exists(filePath))
        return "";

    if (filesystem::is_directory(filePath))
    {
        // Uncompressed plugin package
        auto identifiers = LLSE_VALID_PLUGIN_PACKAGE_IDENTIFIER;
        vector<string> filesExts = {};
        for (int i = 0; i < identifiers.size(); ++i)
            if (!identifiers.empty())
            {
                string id = identifiers[i];
                if (id.empty())
                    continue;

                if (id.find('*') != std::string::npos)
                {
                    // match identifier like "*.py"
                    if (filesExts.empty())
                    {
                        // build filesExts list
                        std::filesystem::directory_iterator files(filePath);
                        for (auto& item : files) {
                            if (item.is_regular_file())
                                filesExts.emplace_back(UTF82String(item.path().extension().u8string()));
                        }
                    }
                    string compareExt = id.substr(id.find_last_of('.'));
                    if (std::find(filesExts.begin(), filesExts.end(), compareExt) != filesExts.end())
                    {
                        // match
                        return LLSE_VALID_BACKENDS[i];
                    }
                }
                else
                {
                    // match identifier like "package.json"
                    if (filesystem::exists(filePath / id))
                    {
                        // match
                        return LLSE_VALID_BACKENDS[i];
                    }
                }
            }
    }
    else
    {
        // Common plugin file
        string ext = UTF82String(filePath.extension().u8string());
        if (ext == LLSE_PLUGIN_PACKAGE_EXTENSION)
        {
            // Never consider .llplugin
            // Just uncompress it and then come to check
            return "PluginPackage";
        }
        auto validExts = LLSE_VALID_PLUGIN_EXTENSIONS;
        for (int i = 0; i < validExts.size(); ++i)
            if (!validExts[i].empty() && validExts[i] == ext)
            {
                // match
                return LLSE_VALID_BACKENDS[i];
            }
    }
    // none backend matched
    return "";
}