#include "liteloader/core/Loader.h"

#include <filesystem>
#include <string>
#include <vector>

// #include <ScriptEngine/src/main/Configs.h>

#include "liteloader/api/utils/DbgHelper.h"
#include "liteloader/api/utils/ShellLinkFile.h"
#include "liteloader/api/utils/StringHelper.h"
#include "liteloader/api/utils/WinHelper.h"

#include "liteloader/api/I18nAPI.h"
#include "liteloader/api/LLAPI.h"
#include "liteloader/api/LoggerAPI.h"
// #include "liteloader/api/ParticleAPI.h"
#include "liteloader/api/PermissionAPI.h"

#include "liteloader/core/Config.h"
#include "liteloader/core/LiteLoader.h"
#include "liteloader/core/PluginManager.h"
#include "liteloader/core/Version.h"

#include <windows.h>

using namespace std;

inline vector<std::string> getPreloadList() {
    // Not load if is already loaded in preloader
    vector<std::string> preloadList{};

    if (std::filesystem::exists(std::filesystem::path(".\\plugins\\preload.conf"))) {
        std::ifstream preloadConf{".\\plugins\\preload.conf"};
        if (preloadConf) {
            std::string preloadName;
            while (getline(preloadConf, preloadName)) {
                if (preloadName.back() == '\n')
                    preloadName.pop_back();
                if (preloadName.back() == '\r')
                    preloadName.pop_back();

                if (preloadName.empty() || preloadName.front() == '#')
                    continue;
                if (preloadName.find("LiteLoader.dll") != std::string::npos)
                    continue;
                if (preloadName.find("LiteXLoader.dll") != std::string::npos)
                    continue;

                preloadList.emplace_back(preloadName);
            }
            preloadConf.close();
        }
    }
    return preloadList;
}

inline void cleanOldScriptEngine() {
    std::error_code ec;
    if (filesystem::exists("plugins/LiteXLoader", ec))
        filesystem::remove_all("plugins/LiteXLoader", ec);
    if (filesystem::exists("plugins/LiteXLoader.Js.dll", ec))
        filesystem::remove("plugins/LiteXLoader.Js.dll", ec);
    if (filesystem::exists("plugins/LiteXLoader.Lua.dll", ec))
        filesystem::remove("plugins/LiteXLoader.Lua.dll", ec);
}

constexpr auto DEFAULT_ROOT_PACKAGE_JSON =
    R"({
    "name": "llse-nodejs-root",
    "version" : "1.0.0",
    "description" : "Root package environment of LLSE NodeJs backend",
    "main" : "index.js",
    "scripts" : { "test": "exit" },
    "author" : "LiteLDev",
    "license" : "LGPL-3.0"
})";

inline void loadDotNETEngine() {
    std::string path = "plugins/LiteLoader/LiteLoader.NET.dll";
    auto        lib  = LoadLibrary(str2wstr(path).c_str());
    if (lib) {
        ll::logger.info(tr("ll.loader.loadDotNetEngine.success"));
        // Fake Register
        RegisterPlugin(
            lib,
            "LiteLoader.NET",
            "LiteLoader.NET",
            LITELOADER_VERSION,
            {
                {"GitHub", "https://github.com/LiteLDev/LiteLoader.NET"}
        }
        );
    } else {
        ll::logger.error("Fail to load LiteLoader.NET!");
        ll::logger.error("Error: Code[{}] - {}", GetLastError(), GetLastErrorMessage());
    }
}

inline void loadParticleApi() {
    // std::string path = "plugins/LiteLoader/ParticleAPI.dll";
    // auto        lib  = LoadLibrary(str2wstr(path).c_str());
    // if (lib) {
    //     ParticleCUI::init(lib);
    // } else {
    //     ll::logger.error("Fail to load ParticleAPI!");
    //     ll::logger.error("Error: Code[{}] - {}", GetLastError(), GetLastErrorMessage());
    // }
}

void ll::LoadMain() {
    ll::logger.info(tr("ll.loader.loadMain.start"));
    cleanOldScriptEngine();

    // Load plugins
    int                 pluginCount = 0;
    vector<std::string> preloadList = getPreloadList();

    filesystem::directory_iterator ent("plugins");
    for (auto& file : ent) {

        if (!file.is_regular_file()) {
            continue;
        }
        filesystem::path path = file.path();

        // Skip Wrong file path
        auto strPath = UTF82String(path.u8string());
        if (strPath == "LiteLoader.dll" || strPath.find("LiteXLoader") != std::string::npos) {
            continue;
        }

        // Process Shell link file
        std::string ext         = UTF82String(path.extension().u8string());
        bool   isShellLink = false;
        if (ext == ".lnk") { // Shell link file
            ShellLinkFile lnk(path.wstring());
            path = lnk.getPathW();
            if (!filesystem::is_regular_file(path)) {
                continue;
            }
            ext         = UTF82String(path.extension().u8string());
            isShellLink = true;
        }

        // Check is dll
        if (ext != ".dll") {
            continue;
        }

        // LLMoney load check
        if (strPath.find("LLMoney.dll") != std::string::npos) {
            if (!globalConfig.enableEconomyCore) {
                continue;
            }
        }

        // Avoid preloaded plugin
        std::string pluginFileName = UTF82String(path.filename().u8string());
        bool   loaded         = false;
        for (auto& p : preloadList)
            if (p.find(pluginFileName) != std::wstring::npos) {
                loaded = true;
                break;
            }
        if (loaded)
            continue;

        // Real load
        auto lib = LoadLibrary(path.wstring().c_str());
        if (lib) {
            ++pluginCount;

            if (isShellLink) {
                std::string tmp =
                    tr("ll.loader.loadMain.loadedShellLink", UTF82String(file.path().filename().u8string()));
                ll::logger.info(tmp, UTF82String(path.u8string()));
            } else {
                ll::logger.info(tr("ll.loader.loadMain.loadedPlugin", fmt::arg("name", pluginFileName)));
            }

            if (PluginManager::getPlugin(lib) == nullptr) {
                if (!RegisterPlugin(lib, pluginFileName, pluginFileName, ll::Version(1, 0, 0), {})) {
                    ll::logger.error(tr("ll.pluginManager.error.failToRegisterPlugin", UTF82String(path.u8string())));
                    if (PluginManager::getPlugin(pluginFileName)) {
                        ll::logger.error(tr("ll.pluginManager.error.hasBeenRegistered", pluginFileName));
                    }
                }
            }
        } else {
            DWORD       lastError   = GetLastError();
            std::string fileVersion = GetFileVersionString(UTF82String(path.u8string()), true);
            std::string info        = pluginFileName;
            if (!fileVersion.empty()) {
                info += " [" + fileVersion + "]";
            }
            ll::logger.error("Fail to load plugin <{}>!", info);
            ll::logger.error("Error: Code[{}] {}", lastError, GetLastErrorMessage(lastError));
        }
    }

    if (ll::globalConfig.enableParticleAPI) {
        if (filesystem::exists("plugins/LiteLoader/ParticleAPI.dll")) {
            loadParticleApi();
        }
    }

    // Load ScriptEngine
    //    if (ll::globalConfig.enableScriptEngine) {
    //        initNodeJsDirectories();
    //        if (ll::globalConfig.alwaysLaunchScriptEngine || isExistNodeJsPlugin() || isExistScriptPlugin()) {
    //            loadScriptEngine();
    //        }
    //    }

    // Load .NET Engine
    if (filesystem::exists("plugins/LiteLoader/LiteLoader.NET.dll")) {
        loadDotNETEngine();
    }

    // Call onPostInit
    auto plugins = PluginManager::getAllPlugins(false);
    for (auto& [name, plugin] : plugins) {
        auto fn = GetProcAddress(plugin->handle, "onPostInit");
        if (fn) {
            try {
                ((void (*)())fn)();
            } catch (std::exception& e) {
                std::string fileVersion = GetFileVersionString(plugin->handle, true);
                std::string info        = name;
                if (!fileVersion.empty()) {
                    info += "<" + fileVersion + ">";
                }
                ll::logger.error("Plugin <{}> throws an std::exception in onPostInit!", info);
                ll::logger.error("Exception: {}", TextEncoding::toUTF8(e.what()));
                ll::logger.error("Fail to init plugin <{}>!", info);
            } catch (...) {
                std::string fileVersion = GetFileVersionString(plugin->handle, true);
                std::string info        = name;
                if (!fileVersion.empty()) {
                    info += "<" + fileVersion + ">";
                }
                ll::logger.error("Plugin <{}> throws an exception in onPostInit!", info);
                ll::logger.error("Fail to init plugin <{}>!", info);
            }
        }
    }
    ll::logger.info(tr("ll.loader.loadMain.done", pluginCount));
}