#include "ll/core/Loader.h"

#include <filesystem>
#include <string>
#include <vector>

#include "ll/api/Logger.h"
#include "ll/api/i18n/I18nAPI.h"
#include "ll/api/utils/StringUtils.h"
#include "ll/api/utils/WinUtils.h"

#include "ll/api/plugin/PluginManager.h"
#include "ll/core/Config.h"
#include "ll/core/LeviLamina.h"
#include "ll/core/Version.h"

#include "windows.h"

using namespace ll::utils;
using ll::plugin::Version;

void ll::LoadMain() {
    ll::logger.info("ll.loader.loadMain.start"_tr);

    // Load plugins
    int   pluginCount   = 0;
    auto& pluginManager = plugin::PluginManager::getInstance();

    std::filesystem::directory_iterator ent("plugins");

    for (auto& file : ent) {

        if (!file.is_regular_file()) { continue; }
        std::filesystem::path const& path = file.path();

        // Check is dll
        if (path.extension() != ".dll") { continue; }

        // Avoid preloaded plugin
        auto pluginFileName = string_utils::u8str2str(path.filename().u8string());

        // Do load
        auto lib = LoadLibraryW(path.wstring().c_str());
        if (lib) {
            ++pluginCount;
            if (!pluginManager.findPlugin(pluginFileName).has_value()) {
                if (!pluginManager.registerPlugin(plugin::Manifest{pluginFileName}, lib)) { // TODO: read manifest
                    ll::logger.error(
                        "ll.pluginManager.error.failToRegisterPlugin"_tr,
                        string_utils::u8str2str(path.u8string())
                    );
                }
            }
        } else {
            DWORD lastError = GetLastError();
            ll::logger.error("Fail to load plugin <{}>!", pluginFileName);
            ll::logger.error("Error: Code[{}] {}", lastError, win_utils::getLastErrorMessage(lastError));
        }
    }

    ll::logger.info("ll.loader.loadMain.done"_tr, pluginCount);
}
