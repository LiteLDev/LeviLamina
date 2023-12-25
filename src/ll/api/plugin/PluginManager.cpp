#include "ll/api/plugin/PluginManager.h"
#include "ll/api/Config.h"

#include <mutex>

#include "ll/api/base/ErrorInfo.h"
#include "ll/api/base/UnorderedStringMap.h"
#include "ll/api/io/FileUtils.h"
#include "ll/api/plugin/Plugin.h"

#include "ll/core/LeviLamina.h"

#include "windows.h"

using namespace ll::string_utils;
using namespace ll::i18n_literals;

namespace fs = std::filesystem;

fs::path pluginDir = u8"plugins";

namespace ll::plugin {

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wmissing-field-initializers"
#endif

auto ll = Plugin::create(Manifest{"LeviLamina.dll", "LeviLamina"}, win_utils::getCurrentModuleHandle());

#ifdef __clang__
#pragma clang diagnostic pop
#endif

struct PluginManager::Impl {
    std::recursive_mutex                              mutex;
    std::vector<std::shared_ptr<Plugin>>              plugins;
    std::unordered_map<Handle, std::weak_ptr<Plugin>> handleMap;
    UnorderedStringMap<std::weak_ptr<Plugin>>         nameMap;
};

PluginManager::PluginManager() { mImpl = std::make_unique<Impl>(); }

auto PluginManager::getInstance() -> PluginManager& {
    static PluginManager instance = []() -> PluginManager {
        PluginManager pm{};
        pm.registerPlugin(ll);
        return pm;
    }();
    return instance;
}

auto PluginManager::registerPlugin(std::shared_ptr<Plugin> const& plugin) -> bool {
    std::lock_guard<std::recursive_mutex> lock(mImpl->mutex);
    if (mImpl->nameMap.contains(plugin->getManifest().name)) {
        return false;
    }
    mImpl->plugins.push_back(plugin);
    mImpl->handleMap.insert_or_assign(plugin->getHandle(), plugin);
    mImpl->nameMap.insert_or_assign(plugin->getManifest().name, plugin);
    return true;
}

auto PluginManager::findPlugin(std::string_view name) -> std::weak_ptr<const Plugin> {
    std::lock_guard<std::recursive_mutex> lock(mImpl->mutex);
    return mImpl->nameMap.contains(name) ? mImpl->nameMap.find(name)->second : std::weak_ptr<Plugin>();
}

auto PluginManager::findPlugin(Handle handle) -> std::weak_ptr<const Plugin> {
    std::lock_guard<std::recursive_mutex> lock(mImpl->mutex);
    return mImpl->handleMap.contains(handle) ? mImpl->handleMap.find(handle)->second : std::weak_ptr<Plugin>();
}

auto PluginManager::getAllPlugins() -> std::vector<std::weak_ptr<const Plugin>> {
    std::lock_guard<std::recursive_mutex>    lock(mImpl->mutex);
    std::vector<std::weak_ptr<const Plugin>> plugins;
    for (auto& plugin : mImpl->plugins) {
        plugins.push_back(plugin);
    }
    return plugins;
}

auto PluginManager::loadAllPlugins() -> void {
    std::lock_guard<std::recursive_mutex> lock(mImpl->mutex);
    ll::logger.info("ll.loader.loadMain.start"_tr);

    int pluginCount = 0;

    fs::directory_iterator ent(pluginDir);

    for (auto& file : ent) {
        if (!file.is_directory()) {
            continue;
        }
        if (loadPlugin(u8sv2sv(file.path().filename().u8string()))) {
            pluginCount++;
        }
    }
    ll::logger.info("ll.loader.loadMain.done"_tr, pluginCount);
}

auto PluginManager::loadPlugin(std::string_view pluginName) -> std::shared_ptr<Plugin> {
    std::lock_guard<std::recursive_mutex> lock(mImpl->mutex);
    auto                                  manifestPath = pluginDir / sv2u8sv(pluginName) / "manifest.json";
    if (!fs::exists(manifestPath)) {
        return {};
    }
    auto content = file_utils::readFile(manifestPath);
    if (!content) {
        return {};
    }
    auto json = nlohmann::json::parse(*content, nullptr, false, true);
    if (json.is_discarded()) {
        return {};
    }

    Manifest manifest;
    try {
        ll::reflection::deserialize<nlohmann::json, Manifest>(manifest, json);
    } catch (...) {
        ll::logger.error("Plugin <{}> manifest file error!", pluginName);
        error_info::printCurrentException();
        return {};
    }

    if (manifest.name != pluginName) {
        ll::logger.error("Plugin name <{}> does not match folder name <{}>!", manifest.name, pluginName);
        return {};
    }

    if (!findPlugin(manifest.name).expired()) {
        ll::logger.error("Plugin <{}> already loaded!", manifest.name);
        return {};
    }

    auto lib = LoadLibraryW((pluginDir / sv2u8sv(pluginName) / file_utils::u8path(manifest.entry)).wstring().c_str());
    if (!lib) {
        ll::logger.error("Fail to load plugin <{}> ({})!", manifest.name, manifest.entry);
        error_info::printException(error_info::getWinLastError());
        return {};
    }

    auto plugin = plugin::Plugin::create(manifest, lib);
    if (registerPlugin(plugin)) {
        auto load = reinterpret_cast<bool (*)(Plugin&)>(GetProcAddress(lib, "ll_plugin_load"));
        if (load) plugin->onLoad(load);
        if (load) {
            load(*plugin);
        } else {
            ll::logger.warn("Plugin <{}> does not have load function!", manifest.name);
        }
        ll::logger.info("Plugin <{}> loaded!", manifest.name);
        return plugin;
    } else ll::logger.error("ll.pluginManager.error.failToRegisterPlugin"_tr, manifest.name);
    return {};
}

} // namespace ll::plugin
