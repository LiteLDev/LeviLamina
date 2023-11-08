#include "ll/core/PluginLoader.h"

#include <filesystem>
#include <string>
#include <vector>

#include "nlohmann/json.hpp"

#include "libloaderapi.h"
#include "ll/api/Config.h"
#include "ll/api/Logger.h"
#include "ll/api/i18n/I18nAPI.h"
#include "ll/api/plugin/Manifest.h"
#include "ll/api/plugin/Plugin.h"
#include "ll/api/plugin/PluginManager.h"
#include "ll/api/reflection/Serialization.h"
#include "ll/api/utils/StringUtils.h"
#include "ll/api/utils/SystemError.h"
#include "ll/api/utils/WinUtils.h"
#include "ll/core/Config.h"
#include "ll/core/LeviLamina.h"
#include "ll/core/Version.h"

using namespace ll;
using namespace ll::utils;
using namespace ll::plugin;

namespace fs = std::filesystem;

namespace {
bool loadPlugin(fs::path const& dir) {
    auto& pluginManager = PluginManager::getInstance();
    auto  manifestPath  = dir / "manifest.json";
    if (!fs::exists(manifestPath)) { return false; }
    auto content = file_utils::readFile(manifestPath);
    if (!content) { return false; }
    auto json = nlohmann::json::parse(content.value(), nullptr, false, true);
    if (json.is_discarded()) { return false; }

    Manifest manifest;
    try { // TODO: ensure some fields must be present
        ll::reflection::deserialize<nlohmann::json, Manifest>(manifest, json);
    } catch (...) { return false; }

    if (manifest.name != dir.filename().string()) {
        ll::logger.error("Plugin name <{}> does not match folder name <{}>!", manifest.name, dir.filename().string());
        return false;
    }

    if (!pluginManager.findPlugin(manifest.name).expired()) {
        ll::logger.error("Plugin <{}> already loaded!", manifest.name);
        return false;
    }

    auto lib = LoadLibraryW(file_utils::u8path(manifest.entry).wstring().c_str());
    if (!lib) {
        ll::logger.error("Fail to load plugin <{}> ({})!", manifest.name, manifest.entry);
        auto lastError = syserr_utils::getLastError();
        ll::logger.error("{} {}", lastError.code(), lastError.what());
        return false;
    }

    auto plugin = plugin::Plugin::create(manifest, lib);
    if (pluginManager.registerPlugin(plugin)) {
        ll::logger.info("Plugin <{}> loaded!", manifest.name);
        return true;
    } else ll::logger.error("ll.pluginManager.error.failToRegisterPlugin"_tr, manifest.name);
    return false;
}
} // namespace

void ll::plugin_loader::loadPlugins() {
    ll::logger.info("ll.loader.loadMain.start"_tr);

    int pluginCount = 0;

    fs::directory_iterator ent("plugins");

    for (auto& file : ent) {
        if (!file.is_directory()) { continue; }
        if (loadPlugin(file.path())) { pluginCount++; }
    }

    ll::logger.info("ll.loader.loadMain.done"_tr, pluginCount);
}
