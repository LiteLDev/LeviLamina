#include "ll/core/Loader.h"

#include <filesystem>
#include <string>
#include <vector>

#include "ll/api/LLAPI.h"
#include "ll/api/Logger.h"
#include "ll/api/i18n/I18nAPI.h"
#include "ll/api/utils/StringUtils.h"
#include "ll/api/utils/WinHelper.h"

#include "ll/core/Config.h"
#include "ll/core/LeviLamina.h"
#include "ll/core/PluginManager.h"
#include "ll/core/Version.h"

#include "windows.h"

using namespace ll::string_utils;
using ll::plugin::PluginManager;
using ll::plugin::Version;

void ll::LoadMain() {
    ll::logger.info("ll.loader.loadMain.start"_tr);

    // Load plugins
    int pluginCount = 0;

    std::filesystem::directory_iterator ent("plugins");
    for (auto& file : ent) {

        if (!file.is_regular_file()) { continue; }
        std::filesystem::path const& path = file.path();

        // Check is dll
        if (path.extension() != ".dll") { continue; }

        // Avoid preloaded plugin
        auto pluginFileName = u8str2str(path.filename().u8string());

        // Do load
        auto lib = LoadLibrary(path.wstring().c_str());
        if (lib) {
            ++pluginCount;

            if (!PluginManager::findPlugin(pluginFileName).has_value()) {
                if (!PluginManager::registerPlugin(pluginFileName, pluginFileName, {}, {})) {
                    ll::logger.error("ll.pluginManager.error.failToRegisterPlugin"_tr, u8str2str(path.u8string()));
                }
            }
        } else {
            DWORD lastError = GetLastError();
            ll::logger.error("Fail to load plugin <{}>!", pluginFileName);
            ll::logger.error("Error: Code[{}] {}", lastError, GetLastErrorMessage(lastError));
        }
    }

    ll::logger.info("ll.loader.loadMain.done"_tr, pluginCount);
}