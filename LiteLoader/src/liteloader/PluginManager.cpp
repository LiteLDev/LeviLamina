#include <liteloader/PluginManager.h>
#include <llapi/LLAPI.h>
#include <llapi/LoggerAPI.h>
#include <llapi/EventAPI.h>
#include <llapi/ScheduleAPI.h>
#include <llapi/utils/StringHelper.h>
#include <llapi/utils/WinHelper.h>
#include <llapi/Utils/STLHelper.h>
#include <llapi/I18nAPI.h>
#include <llapi/mc/Level.hpp>
#include <llapi/mc/Player.hpp>
#include <windows.h>
#include <string>
#include <unordered_map>
#include <ScriptEngine/Main/Configs.h>
using namespace std;

extern Logger logger;
std::unordered_map<std::string, LL::Plugin> plugins;

bool LL::PluginManager::registerPlugin(HMODULE handle, std::string name, std::string desc, LL::Version version,
                                       std::map<std::string, std::string> others) {
    if (handle != nullptr) // DLL Plugin
    {
        if (getPlugin(handle) != nullptr) {
            erase_if(plugins, [&handle](auto& data) { // Allow plugins to overwrite their own plugin registory
                return data.second.handle == handle;
            });
        } else if (getPlugin(name) != nullptr) {
            return false; // Reject overwriting other's data
        }
    }

    LL::Plugin plugin{name, desc, version, others};
    plugin.handle = handle;
    try {
        plugin.type = others.at("PluginType") == "Script Plugin" ? Plugin::PluginType::ScriptPlugin : Plugin::PluginType::DllPlugin;
        others.erase("PluginType");
    } catch (...) {
        plugin.type = handle ? Plugin::PluginType::DllPlugin : Plugin::PluginType::ScriptPlugin;
    }

    try {
        plugin.filePath = UTF82String(filesystem::path(str2wstr(others.at("PluginFilePath"))).lexically_normal().u8string());
        others.erase("PluginFilePath");
    } catch (...) {
        if (handle)
            plugin.filePath = GetModulePath(handle);
    }

    plugins.emplace(name, plugin);
    return true;
}

bool LL::PluginManager::unRegisterPlugin(std::string name) {
    auto plugin = getPlugin(name);
    if (plugin == nullptr) {
        return false;
    } else {
        plugins.erase(plugin->name);
        return true;
    }
}

// Helper
LL::Plugin* GetPlugin_Raw(std::string name, bool includeScriptPlugin) {
    for (auto& it : plugins) {
        if (it.second.name == name || UTF82String(filesystem::path(str2wstr(it.second.filePath)).filename().u8string()) == name) {
            if (!includeScriptPlugin && it.second.type == LL::Plugin::PluginType::ScriptPlugin)
                continue;
            return &it.second;
        }
    }
    return nullptr;
}

LL::Plugin* LL::PluginManager::getPlugin(std::string name, bool includeScriptPlugin) {
    auto res = GetPlugin_Raw(name, includeScriptPlugin);
    if (res)
        return res;
    /* issue #510
    try
    {
        name = UTF82String(filesystem::path(str2wstr(name)).stem().u8string());
        return GetPlugin_Raw(name, includeScriptPlugin);
    }
    catch(...)
    { }
    */
    return nullptr;
}

LL::Plugin* LL::PluginManager::getPlugin(HMODULE handle) {
    if (!handle)
        return nullptr;

    for (auto& it : plugins) {
        if (it.second.handle == handle) {
            return &it.second;
        }
    }
    return nullptr;
}

bool LL::PluginManager::hasPlugin(std::string name, bool includeScriptPlugin) {
    return getPlugin(name, includeScriptPlugin) != nullptr;
}

std::unordered_map<std::string, LL::Plugin*> LL::PluginManager::getAllPlugins(bool includeScriptPlugin) {
    std::unordered_map<std::string, LL::Plugin*> res;
    for (auto& [k, v] : plugins) {
        if (!includeScriptPlugin && v.type == Plugin::PluginType::ScriptPlugin)
            continue;
        res[k] = &v;
    }
    return res;
}

bool LL::PluginManager::loadPlugin(string pluginFilePath, bool outputResult, bool isHotLoad) {
    // if (!LL::isDebugMode())
    //     return false;
    try {
        filesystem::path path(filesystem::path(str2wstr(pluginFilePath)).lexically_normal());
        pluginFilePath = UTF82String(path.u8string());

        string ext = UTF82String(path.extension().u8string());
        if (ext != ".dll") {
            if (filesystem::is_directory(path))
            {
                // Maybe uncompressed LLSE Script Plugin Package
                Event::ScriptPluginManagerEvent ev;
                ev.operation = Event::ScriptPluginManagerEvent::Operation::Load;
                ev.target = pluginFilePath;
                ev.pluginExtension = ext;
                ev.pluginType = Event::ScriptPluginManagerEvent::PluginType::UncompressedPackage;
                ev.call();

                return ev.success;
            }
            else if(ext == ".llplugin")
            {
                // LLSE Script Plugin Package
                Event::ScriptPluginManagerEvent ev;
                ev.operation = Event::ScriptPluginManagerEvent::Operation::Load;
                ev.target = pluginFilePath;
                ev.pluginExtension = ext;
                ev.pluginType = Event::ScriptPluginManagerEvent::PluginType::PluginPackage;
                ev.call();

                return ev.success;
            }
            auto validExts = LLSE_VALID_PLUGIN_EXTENSIONS;
            if(!ext.empty() && std::find(validExts.begin(), validExts.end(), ext) != validExts.end())
            {
                // LLSE single-file script plugin
                Event::ScriptPluginManagerEvent ev;
                ev.operation = Event::ScriptPluginManagerEvent::Operation::Load;
                ev.target = pluginFilePath;
                ev.pluginExtension = ext;
                ev.pluginType = Event::ScriptPluginManagerEvent::PluginType::SingleFile;
                ev.call();

                return ev.success;
            }
            else if (outputResult) {
                logger.error(tr("ll.pluginManager.error.invalidFileType", ext, pluginFilePath));
            }
            return false;
        }

        if (pluginFilePath.find("/") == string::npos && pluginFilePath.find("\\") == string::npos && loadPlugin("plugins/" + pluginFilePath)) {
            if (outputResult) {
                logger.error(tr("ll.pluginManager.error.noValidPluginFound", pluginFilePath));
            }
            return false;
        }

        string pluginFileName = UTF82String(path.filename().u8string());
        auto lib = LoadLibrary(str2wstr(pluginFilePath).c_str());
        if (lib) {
            if (getPlugin(lib) == nullptr) {
                if (!RegisterPlugin(lib, pluginFileName, pluginFileName, LL::Version(1, 0, 0), {})) {
                    logger.error(tr("ll.pluginManager.error.failToRegisterPlugin", pluginFilePath));
                    if (getPlugin(pluginFileName)) {
                        logger.error(tr("ll.pluginManager.error.hasBeenRegistered", pluginFileName));
                    }
                    return false;
                }
            }
        } else {
            if (outputResult) {
                logger.error(tr("ll.pluginManager.error.failToLoadPlugin", pluginFileName));
            }
            return false;
        }

        if (!getPlugin(lib))
            return false;
        //  Call onPostInit
        auto fn = GetProcAddress(getPlugin(lib)->handle, "onPostInit");
        if (fn) {
            try {
                ((void (*)())fn)();
                return true;
            } catch (std::exception& e) {
                if (outputResult) {
                    logger.error("Plugin <{}> throws an std::exception in onPostInit", pluginFileName);
                    logger.error("Exception: ", TextEncoding::toUTF8(e.what()));
                    logger.error("Fail to init this plugin!");
                }
                return false;
            } catch (...) {
                if (outputResult) {
                    logger.error("Plugin <{}> throws an exception in onPostInit", pluginFileName);
                    logger.error("Fail to init this plugin!");
                }
                return false;
            }
        } else if (outputResult) {
            logger.error("Fail to get the initialize point of the plugin {}!", pluginFileName);
            return false;
        }

        // Hot Load
        if (isHotLoad) {
            callEventAtHotLoad(getPlugin(lib)->name);
        }
        return true;
    } catch (const std::exception& e) {
        if (outputResult) {
            logger.error("Error occurred when loading plugin {}!", pluginFilePath);
            logger.error(TextEncoding::toUTF8(e.what()));
        }
        return false;
    } catch (...) {
        if (outputResult) {
            logger.error("Error occurred when loading plugin {}!", pluginFilePath);
        }
        return false;
    }
}

bool LL::PluginManager::unloadPlugin(string pluginName, bool outputResult) {
    // if (!LL::isDebugMode())
    //     return false;
    try {
        LL::Plugin* plugin = getPlugin(pluginName);
        if (!plugin) {
            if (outputResult) {
                logger.error(tr("ll.pluginManager.error.pluginNotFound"));
            }
            return false;
        }

        if (plugin->type == Plugin::PluginType::ScriptPlugin) // Script Plugin
        {
            Event::ScriptPluginManagerEvent ev;
            ev.operation = Event::ScriptPluginManagerEvent::Operation::Unload;
            ev.target = pluginName;
            ev.pluginExtension = UTF82String(filesystem::path(str2wstr(plugin->filePath)).extension().u8string());
            ev.call();

            return ev.success;
        }

        // Hot unload
        // callEventAtHotUnload(pluginName);
        // unRegisterPlugin(pluginName);
        // removeAllEventListeners(pluginName);

        logger.warn(tr("ll.pluginManager.warning.unloadDllNotFinished")); // TODO
        return false;
    } catch (const std::exception& e) {
        if (outputResult) {
            logger.error("Error occurred when unloading plugin {}!", pluginName);
            logger.error(TextEncoding::toUTF8(e.what()));
        }
        return false;
    } catch (...) {
        if (outputResult) {
            logger.error("Error occurred when unloading plugin {}!", pluginName);
        }
        return false;
    }
}

bool LL::PluginManager::reloadPlugin(string pluginName, bool outputResult) {
    // if (!LL::isDebugMode())
    //     return false;
    try {
        LL::Plugin* plugin = getPlugin(pluginName);
        if (!plugin) {
            if (outputResult) {
                logger.error(tr("ll.pluginManager.error.pluginNotFound"));
            }
            return false;
        }

        if (plugin->type == Plugin::PluginType::ScriptPlugin) // Script Plugin
        {
            Event::ScriptPluginManagerEvent ev;
            ev.operation = Event::ScriptPluginManagerEvent::Operation::Reload;
            ev.target = pluginName;
            ev.pluginExtension = UTF82String(filesystem::path(str2wstr(plugin->filePath)).extension().u8string());
            ev.call();
            return ev.success;
        }

        /*string path = plugin->filePath;
        if (!unloadPlugin(pluginName))
            return false;
        return loadPlugin(path);*/

        logger.warn(tr("ll.pluginManager.warning.reloadDllNotFinished")); // TODO
        return false;
    } catch (const std::exception& e) {
        if (outputResult) {
            logger.error("Error occurred when reloading plugin {}!", pluginName);
            logger.error(TextEncoding::toUTF8(e.what()));
        }
        return false;
    } catch (...) {
        if (outputResult) {
            logger.error("Error occurred when reloading plugin {}!", pluginName);
        }
        return false;
    }
}

int LL::PluginManager::reloadAllPlugins(bool outputResult) {
    // if (!LL::isDebugMode())
    //     return false;
    try {
        auto plugins = getAllPlugins(true);
        int cnt = 0;
        for (auto& [name, plugin] : plugins) {
            if (plugin->type == Plugin::PluginType::ScriptPlugin) {
                Event::ScriptPluginManagerEvent ev;
                ev.operation = Event::ScriptPluginManagerEvent::Operation::Reload;
                ev.target = plugin->name;
                ev.pluginExtension = UTF82String(filesystem::path(str2wstr(plugin->filePath)).extension().u8string());
                ev.call();

                if (ev.success) {
                    ++cnt;
                }
            } else {
                if (reloadPlugin(name)) {
                    ++cnt;
                } else {
                    logger.error(tr("ll.pluginManager.reloadPlugin.fail", name));
                }
            }
        }
        return cnt;
    } catch (const std::exception& e) {
        if (outputResult) {
            logger.error("Error occurred when reloading all plugins!");
            logger.error(TextEncoding::toUTF8(e.what()));
        }
        return false;
    } catch (...) {
        if (outputResult) {
            logger.error("Error occurred when reloading all plugins!");
        }
        return false;
    }
}

bool LL::PluginManager::callEventAtHotLoad(std::string pluginName) {
    // if (!LL::isDebugMode())
    //     return false;
    Schedule::nextTick([pluginName]() {
        Event::ServerStartedEvent().callToPlugin(pluginName); // ServerStartedEvent
    });

    Schedule::delay([pluginName]() {
        auto players = Level::getAllPlayers();
        for (auto& pl : players) // PlayerPreJoinEvent
        {
            Event::PlayerPreJoinEvent ev;
            ev.mPlayer = pl;
            ev.mXUID = pl->getXuid();
            ev.mIP = pl->getIP();
            ev.callToPlugin(pluginName);
        }
        for (auto& pl : players) // PlayerJoinEvent
        {
            Event::PlayerJoinEvent ev;
            ev.mPlayer = pl;
            ev.callToPlugin(pluginName);
        }
    },
                    20);
    return true;
}

bool LL::PluginManager::callEventAtHotUnload(std::string pluginName) {
    // if (!LL::isDebugMode())
    //     return false;
    auto players = Level::getAllPlayers();
    for (auto& pl : players) // PlayerLeftEvent
    {
        Event::PlayerLeftEvent ev;
        ev.mPlayer = pl;
        ev.mXUID = pl->getXuid();
        ev.callToPlugin(pluginName);
    }

    Event::ServerStoppedEvent().callToPlugin(pluginName); // ServerStoppedEvent
    return true;
}

// Helper
LIAPI bool RegisterPlugin(HMODULE handle, std::string name, std::string desc, LL::Version version,
                          std::map<std::string, std::string> others) {
    others["PluginType"] = "DLL Plugin";
    others["PluginFilePath"] = handle ? GetModulePath(handle) : name;
    return LL::PluginManager::registerPlugin(handle, name, desc, version, others);
}