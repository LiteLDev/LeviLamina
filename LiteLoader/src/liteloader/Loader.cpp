#include <liteloader/Loader.h>
#include <windows.h>
#include <filesystem>
#include <string>
#include <vector>

#include <llapi/LoggerAPI.h>
#include <llapi/PermissionAPI.h>
#include <liteloader/PluginManager.h>
#include <liteloader/LiteLoader.h>
#include <llapi/utils/StringHelper.h>
#include <llapi/utils/WinHelper.h>
#include <llapi/Utils/DbgHelper.h>
#include <llapi/Utils/ShellLinkFile.h>
#include <llapi/LLAPI.h>
#include <llapi/I18nAPI.h>
#include <liteloader/Config.h>
#include <liteloader/Version.h>
#include <llapi/ParticleAPI.h>
#include <ScriptEngine/src/Main/Configs.h>

using namespace std;

vector<std::wstring> GetPreloadList() {
    // 若在preload.conf中，则不加载
    vector<std::wstring> preloadList{};

    if (std::filesystem::exists(std::filesystem::path(TEXT(".\\plugins\\preload.conf")))) {
        std::wifstream dllList(TEXT(".\\plugins\\preload.conf"));
        if (dllList) {
            std::wstring dllName;
            while (getline(dllList, dllName)) {
                if (dllName.back() == TEXT('\n'))
                    dllName.pop_back();
                if (dllName.back() == TEXT('\r'))
                    dllName.pop_back();

                if (dllName.empty() || dllName.front() == TEXT('#'))
                    continue;
                preloadList.push_back(dllName);
            }
            dllList.close();
        }
    }
    return preloadList;
}

void CleanOldScriptEngine() {
    std::error_code ec;
    if (filesystem::exists("plugins/LiteXLoader", ec))
        filesystem::remove_all("plugins/LiteXLoader", ec);
    if (filesystem::exists("plugins/LiteXLoader.Js.dll", ec))
        filesystem::remove("plugins/LiteXLoader.Js.dll", ec);
    if (filesystem::exists("plugins/LiteXLoader.Lua.dll", ec))
        filesystem::remove("plugins/LiteXLoader.Lua.dll", ec);
}


const char* DEFAULT_ROOT_PACKAGE_JSON =
    R"({
    "name": "llse-nodejs-root",
    "version" : "1.0.0",
    "description" : "Root package environment of LLSE NodeJs backend",
    "main" : "index.js",
    "scripts" : { "test": "exit" },
    "author" : "LiteLDev",
    "license" : "LGPL-3.0"
})";

bool IsExistScriptPlugin() {
    std::vector<string> scriptExts = LLSE_VALID_PLUGIN_EXTENSIONS;
    filesystem::directory_iterator ent("plugins");
    for (auto& file : ent) {
        if (!file.is_regular_file())
            continue;

        filesystem::path path = file.path();
        string ext = UTF82String(path.extension().u8string());
        if (ext != ".dll") {
            // Process Shell link file
            if (ext == ".lnk") // Shell link file
            {
                ShellLinkFile lnk(path.wstring());
                path = lnk.getPathW();
                if (!filesystem::is_regular_file(path))
                    continue;
                ext = UTF82String(path.extension().u8string());
            }

            if ((!ext.empty() && std::find(scriptExts.begin(), scriptExts.end(), ext) != scriptExts.end()) || ext == LLSE_PLUGIN_PACKAGE_EXTENSION)
                return true;
        }
    }
    return false;
}

bool IsExistNodeJsPlugin() {
    if (!filesystem::exists(LLSE_NODEJS_ROOT_DIR))
        return false;

    bool exist = false;
    filesystem::directory_iterator ent(LLSE_NODEJS_ROOT_DIR);
    for (auto& file : ent) {
        if (file.is_directory() && filesystem::exists(file.path() / "package.json")) {
            exist = true;
            break;
        }
    }
    return exist;
}

void InitNodeJsDirectories() {
    // Check & Create nodejs directories
    if (!filesystem::exists(LLSE_NODEJS_ROOT_DIR)) {
        filesystem::create_directories(LLSE_NODEJS_ROOT_DIR);
    }
    auto node_modules_path = filesystem::path(LLSE_NODEJS_ROOT_DIR) / "node_modules";
    if (!filesystem::exists(node_modules_path)) {
        filesystem::create_directories(node_modules_path);
    }
    auto package_json_path = filesystem::path(LLSE_NODEJS_ROOT_DIR) / "package.json";
    if (!filesystem::exists(package_json_path)) {
        ofstream fout(package_json_path.c_str());
        fout << DEFAULT_ROOT_PACKAGE_JSON;
        logger.warn(tr("ll.loader.initNodeJsDirectories.created"));
    }
}

void LoadScriptEngine() {
    std::string llVersion = GetFileVersionString(GetCurrentModule(), true);
    for (const string& backend : LLSE_VALID_BACKENDS) {
        std::string path = "plugins/LiteLoader/LiteLoader." + backend + ".dll";
        std::string version = GetFileVersionString(path, true);
        if (version != llVersion) {
            logger.warn(tr("ll.loader.loadScriptEngine.error.versionNotMatch", version, backend, llVersion));
        }
        auto lib = LoadLibrary(str2wstr(path).c_str()); // eg. LiteLoader.Js.dll
        if (lib) {
            logger.info(tr("ll.loader.loadScriptEngine.success", backend));
            // Fake Register
            RegisterPlugin(lib, "ScriptEngine-" + backend, "ScriptEngine-" + backend, LITELOADER_VERSION,
                           {{"GitHub", "https://github.com/LiteLDev/LiteLoaderBDS"}});
        } else {
            logger.error("Fail to load ScriptEngine for {}!", backend);
            logger.error("Error: Code[{}] - {}", GetLastError(), GetLastErrorMessage());
        }
    }
}

void LoadDotNETEngine() {
    std::string llVersion = GetFileVersionString(GetCurrentModule(), true);
    std::string path = "plugins/LiteLoader/LiteLoader.NET.dll";
    std::string version = GetFileVersionString(path, true);
    if (version != llVersion) {
        logger.warn(tr("ll.loader.loadDotNetEngine.error.versionNotMatch", version, llVersion));
    }
    auto lib = LoadLibrary(str2wstr(path).c_str());
    if (lib) {
        logger.info(tr("ll.loader.loadDotNetEngine.success"));
        // Fake Register
        RegisterPlugin(lib, "LiteLoader.NET", "LiteLoader.NET", LITELOADER_VERSION,
                       {{"GitHub", "https://github.com/LiteLDev/LiteLoader.NET"}});
    } else {
        logger.error("Fail to load LiteLoader.NET!");
        logger.error("Error: Code[{}] - {}", GetLastError(), GetLastErrorMessage());
    }
}

void LoadPermissionAPI() {
    std::string path = "plugins/LiteLoader/PermissionAPI.dll";
    auto lib = LoadLibrary(str2wstr(path).c_str());
    if (lib) {
        Permission::init(lib);
    } else {
        logger.error("Fail to load PermissionAPI!");
        logger.error("Error: Code[{}] - {}", GetLastError(), GetLastErrorMessage());
    }
}

void LoadParticleAPI() {
    std::string path = "plugins/LiteLoader/ParticleAPI.dll";
    auto lib = LoadLibrary(str2wstr(path).c_str());
    if (lib) {
        ParticleCUI::init(lib);
    } else {
        logger.error("Fail to load ParticleAPI!");
        logger.error("Error: Code[{}] - {}", GetLastError(), GetLastErrorMessage());
    }
}


void LL::LoadMain() {
    logger.info(tr("ll.loader.loadMain.start"));
    CleanOldScriptEngine();

    // Load plugins
    int pluginCount = 0;
    vector<std::wstring> preloadList = GetPreloadList();

    filesystem::directory_iterator ent("plugins");
    for (auto& file : ent) {

        if (!file.is_regular_file()) {
            continue;
        }
        filesystem::path path = file.path();

        // Skip Wrong file path
        auto strPath = UTF82String(path.u8string());
        if (strPath == "LiteLoader.dll" || strPath.find("LiteXLoader") != string::npos) {
            continue;
        }

        // Process Shell link file
        string ext = UTF82String(path.extension().u8string());
        bool isShellLink = false;
        if (ext == ".lnk") { // Shell link file
            ShellLinkFile lnk(path.wstring());
            path = lnk.getPathW();
            if (!filesystem::is_regular_file(path)) {
                continue;
            }
            ext = UTF82String(path.extension().u8string());
            isShellLink = true;
        }

        // Check is dll
        if (ext != ".dll") {
            continue;
        }

        // LLMoney load check
        if (strPath.find("LLMoney.dll") != string::npos) {
            if (!globalConfig.enableEconomyCore) {
                continue;
            }
        }

        // Avoid preloaded plugin
        string pluginFileName = UTF82String(path.filename().u8string());
        bool loaded = false;
        for (auto& p : preloadList)
            if (p.find(str2wstr(pluginFileName)) != std::wstring::npos) {
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
                logger.info(tr("ll.loader.loadMain.loadedShellLink",
                               UTF82String(file.path().filename().u8string()), UTF82String(path.u8string())));
            } else {
                logger.info(tr("ll.loader.loadMain.loadedPlugin", fmt::arg("name", pluginFileName)));
            }

            if (PluginManager::getPlugin(lib) == nullptr) {
                if (!RegisterPlugin(lib, pluginFileName, pluginFileName, LL::Version(1, 0, 0), {})) {
                    logger.error(tr("ll.pluginManager.error.failToRegisterPlugin", UTF82String(path.u8string())));
                    if (getPlugin(pluginFileName)) {
                        logger.error(tr("ll.pluginManager.error.hasBeenRegistered", pluginFileName));
                    }
                }
            }
        } else {
            DWORD lastError = GetLastError();
            std::string fileVersion = GetFileVersionString(UTF82String(path.u8string()), true);
            std::string info = pluginFileName;
            if (!fileVersion.empty()) {
                info += " [" + fileVersion + "]";
            }
            logger.error("Fail to load plugin <{}>!", info);
            logger.error("Error: Code[{}] {}", lastError, GetLastErrorMessage(lastError));
        }
    }

    // Load PermissionAPI
    if (LL::globalConfig.enablePermissionAPI) {
        if (filesystem::exists("plugins/LiteLoader/PermissionAPI.dll")) {
            LoadPermissionAPI();
        }
    }

    if (LL::globalConfig.enableParticleAPI) {
        if (filesystem::exists("plugins/LiteLoader/ParticleAPI.dll")) {
            LoadParticleAPI();
        }
    }

    // Load ScriptEngine
    if (LL::globalConfig.enableScriptEngine) {
        InitNodeJsDirectories();
        if (LL::globalConfig.alwaysLaunchScriptEngine || IsExistNodeJsPlugin() || IsExistScriptPlugin()) {
            LoadScriptEngine();
        }
    }

    // Load .NET Engine
    if (filesystem::exists("plugins/LiteLoader/LiteLoader.NET.dll")) {
        LoadDotNETEngine();
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
                std::string info = name;
                if (!fileVersion.empty()) {
                    info += "<" + fileVersion + ">";
                }
                logger.error("Plugin <{}> throws an std::exception in onPostInit!", info);
                logger.error("Exception: {}", TextEncoding::toUTF8(e.what()));
                logger.error("Fail to init plugin <{}>!", info);
            } catch (...) {
                std::string fileVersion = GetFileVersionString(plugin->handle, true);
                std::string info = name;
                if (!fileVersion.empty()) {
                    info += "<" + fileVersion + ">";
                }
                logger.error("Plugin <{}> throws an exception in onPostInit!", info);
                logger.error("Fail to init plugin <{}>!", info);
            }
        }
    }
    logger.info(tr("ll.loader.loadMain.done", pluginCount));
}