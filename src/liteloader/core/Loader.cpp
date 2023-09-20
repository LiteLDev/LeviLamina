#include "liteloader/core/Loader.h"

#include <filesystem>
#include <string>
#include <vector>

#include "liteloader/api/utils/DbgHelper.h"
#include "liteloader/api/utils/StringUtils.h"
#include "liteloader/api/utils/WinHelper.h"

#include "liteloader/api/LLAPI.h"
#include "liteloader/api/LoggerAPI.h"
#include "liteloader/api/i18n/I18nAPI.h"
#include "liteloader/api/perm/PermissionAPI.h"


#include "liteloader/core/Config.h"
#include "liteloader/core/LiteLoader.h"
#include "liteloader/core/PluginManager.h"
#include "liteloader/core/Version.h"

#include <windows.h>

using namespace std;
using namespace ll::StringUtils;

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

void ll::LoadMain() {
    ll::logger.info(tr("ll.loader.loadMain.start"));

    // Load plugins
    int                 pluginCount = 0;
    vector<std::string> preloadList = getPreloadList();

    filesystem::directory_iterator ent("plugins");
    for (auto& file : ent) {

        if (!file.is_regular_file()) {
            continue;
        }
        const filesystem::path& path = file.path();

        auto ext = path.extension().u8string();

        // Check is dll
        if (ext != u8".dll") {
            continue;
        }

        // Avoid preloaded plugin
        auto pluginFileName = u8str2str(path.filename().u8string());
        bool loaded         = false;
        for (auto& p : preloadList)
            if (p.find(pluginFileName) != std::string::npos) {
                loaded = true;
                break;
            }
        if (loaded)
            continue;

        // Do load
        auto lib = LoadLibraryW(path.wstring().c_str());
        if (lib) {
            ++pluginCount;

            if (PluginManager::getPlugin(lib) == nullptr) {
                if (!ll::PluginManager::registerPlugin(lib, pluginFileName, pluginFileName, ll::Version(1, 0, 0), {})) {
                    ll::logger.error(tr("ll.pluginManager.error.failToRegisterPlugin", u8str2str(path.u8string())));
                    if (PluginManager::getPlugin(pluginFileName)) {
                        ll::logger.error(tr("ll.pluginManager.error.hasBeenRegistered", pluginFileName));
                    }
                }
            }
        } else {
            DWORD       lastError   = GetLastError();
            std::string fileVersion = GetFileVersionString(u8str2str(path.u8string()), true);
            std::string info        = pluginFileName;
            if (!fileVersion.empty()) {
                info += " [" + fileVersion + "]";
            }
            ll::logger.error("Fail to load plugin <{}>!", info);
            ll::logger.error("Error: Code[{}] {}", lastError, GetLastErrorMessage(lastError));
        }
    }

    // TODO: call OnPostInit Event
    ll::logger.info(tr("ll.loader.loadMain.done", pluginCount));
}