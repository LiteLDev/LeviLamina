#include <Main/Loader.h>
#include <Windows.h>
#include <filesystem>
#include <string>
#include <vector>

#include <LoggerAPI.h>
#include <Main/PluginManager.h>
#include <Main/LiteLoader.h>
#include <Utils/StringHelper.h>
#include <Utils/WinHelper.h>
#include <Utils/DbgHelper.h>
#include <Utils/ShellLinkFile.h>
#include <LLAPI.h>
#include <I18nAPI.h>
#include "Config.h"
#include "Version.h"
#include <ScriptEngine/Configs.h>

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

void LoadScriptEngine() {
    std::string llVersion = GetFileVersionString(GetCurrentModule(), true);
    for (string backend : LLSE_VALID_BACKENDS) {
        std::string path = "plugins/LiteLoader/LiteLoader." + backend + ".dll";
        std::string version = GetFileVersionString(path, true);
        if (version != llVersion) {
            logger.warn("The file version <{}> of Script Engine for {} does not match the LiteLoader version <{}>",
                        version, backend, llVersion);
        }
        auto lib = LoadLibrary(str2wstr(path).c_str()); // eg. LiteLoader.Js.dll
        if (lib) {
            logger.info("* ScriptEngine for " + backend + " loaded");
            // Fake Register
            RegisterPlugin(lib, "ScriptEngine-" + backend, "ScriptEngine-" + backend, LITELOADER_VERSION,
                           {{"GitHub", "github.com/LiteLDev/LiteLoaderBDS"}});
        } else {
            logger.error("* Fail to load ScriptEngine for {}!", backend);
            logger.error("* Error: Code[{}] - {}", GetLastError(), GetLastErrorMessage());
        }
    }
}

void LL::LoadMain() {
    logger.info("Loading plugins...");

    CleanOldScriptEngine();
    std::set<string> scriptExts = LLSE_VALID_PLUGIN_EXTENSIONS;
    bool hasScriptPlugin = false;

    // Load plugins
    int pluginCount = 0;
    vector<std::wstring> preloadList = GetPreloadList();

    filesystem::directory_iterator ent("plugins");
    for (auto& file : ent) {

        filesystem::path path;
        bool isShellLink = false;

        if (file.is_regular_file()) {
            path = file.path();
        } else
            continue;
        auto strPath = UTF82String(path.u8string());
        if (strPath.find("LiteLoader.dll") != string::npos || strPath.find("LiteXLoader") != string::npos) // Skip Wrong file path
            continue;

        if (strPath.find("LLMoney.dll") != string::npos) {
            if (!globalConfig.enableEconomyCore) {
                continue;
            }
        }

        string ext = UTF82String(path.extension().u8string());
        if (ext != ".dll") {
            if (ext == ".lnk") // Shell link file
            {
                ShellLinkFile lnk(path.wstring());
                filesystem::path target = lnk.getPathW();
                if (!filesystem::is_regular_file(target))
                    continue;
                if (target.extension() != ".dll") {
                    if (scriptExts.find(ext) != scriptExts.end())
                        hasScriptPlugin = true;
                    continue;
                }
                logger.debug(UTF82String(target.u8string()));
                path = target;
                isShellLink = true;
            } else {
                if (scriptExts.find(ext) != scriptExts.end())
                    hasScriptPlugin = true;
                continue;
            }
        }

        bool loaded = false;
        for (auto& p : preloadList)
            if (p.find(str2wstr(strPath)) != std::wstring::npos) {
                loaded = true;
                break;
            }
        if (loaded)
            continue;

        string pluginFileName = UTF82String(path.filename().u8string());
        auto lib = LoadLibrary(path.wstring().c_str());
        if (lib) {
            ++pluginCount;

            if (isShellLink)
                logger.info("ShellLink Plugin <{} => {}> loaded",
                            UTF82String(file.path().filename().u8string()), UTF82String(path.u8string()));
            else
                logger.info("Plugin <{}> loaded", pluginFileName);

            if (PluginManager::getPlugin(lib) == nullptr) {
                if (!RegisterPlugin(lib, pluginFileName, pluginFileName, LL::Version(1, 0, 0), {})) {
                    logger.error("Failed to register plugin {}!", UTF82String(path.u8string()));
                    if (getPlugin(pluginFileName))
                        logger.error("A plugin named {} has been registered", pluginFileName);
                }
            }
        } else {
            DWORD lastError = GetLastError();
            std::string fileVersion = GetFileVersionString(UTF82String(path.u8string()), true);
            std::string info = pluginFileName;
            if (!fileVersion.empty()) {
                info += " [" + fileVersion + "]";
            }
            logger.error("Fail to load plugin <{}>", info);
            logger.error("Error: Code[{}] {}", lastError, GetLastErrorMessage(lastError));
        }
    }

    // Load ScriptEngine
    if (LL::globalConfig.enableScriptEngine)
        if (LL::globalConfig.alwaysLaunchScriptEngine || hasScriptPlugin)
            LoadScriptEngine();

    //  Call onPostInit
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
                logger.error("Plugin [{}] throws an std::exception in onPostInit", info);
                logger.error("Exception: {}", TextEncoding::toUTF8(e.what()));
                logger.error("Fail to init this plugin!");
            } catch (...) {
                std::string fileVersion = GetFileVersionString(plugin->handle, true);
                std::string info = name;
                if (!fileVersion.empty()) {
                    info += "<" + fileVersion + ">";
                }
                logger.error("Plugin [{}] throws an exception in onPostInit", info);
                logger.error("Fail to init this plugin!");
            }
        }
    }
    logger.info << pluginCount << " plugin(s) loaded" << Logger::endl;
}