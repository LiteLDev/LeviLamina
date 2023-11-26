#include "ll/api/plugin/PluginManager.h"

#include <mutex>

#include "ll/api/base/ErrorInfo.h"
#include "ll/api/base/UnorderedStringMap.h"
#include "ll/api/io/FileUtils.h"
#include "ll/api/plugin/Plugin.h"

#include "ll/core/LeviLamina.h"

#include "windows.h"

using namespace ll::utils;
using namespace ll::utils::string_utils;
using namespace ll::i18n_literals;

namespace fs = std::filesystem;

fs::path pluginDir = u8"plugins";

namespace ll::plugin {

auto ll = Plugin::create(Manifest{"LeviLamina.dll", "LeviLamina"}, memory::getCurrentModuleHandle());

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

auto PluginManager::unregisterPlugin(std::weak_ptr<const Plugin> const& plugin) -> bool {
    std::lock_guard<std::recursive_mutex> lock(mImpl->mutex);
    if (auto ptr = plugin.lock()) {
        mImpl->plugins.erase(std::remove(mImpl->plugins.begin(), mImpl->plugins.end(), ptr), mImpl->plugins.end());
        mImpl->handleMap.erase(ptr->getHandle());
        mImpl->nameMap.erase(ptr->getManifest().name);
        // TODO: unregister from event, command, scheduler, service, etc.
        return true;
    }
    return false;
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
    enableAllPlugins();
    ll::logger.info("ll.loader.loadMain.done"_tr, pluginCount);
}

auto PluginManager::unloadAllPlugins() -> void {
    std::lock_guard<std::recursive_mutex> lock(mImpl->mutex);
    for (auto& plugin : mImpl->plugins) {
        unloadPlugin(plugin);
    }
}

auto PluginManager::enableAllPlugins() -> void {
    std::lock_guard<std::recursive_mutex> lock(mImpl->mutex);
    for (auto& plugin : mImpl->plugins) {
        enablePlugin(plugin);
    }
}

auto PluginManager::disableAllPlugins() -> void {
    std::lock_guard<std::recursive_mutex> lock(mImpl->mutex);
    for (auto& plugin : mImpl->plugins) {
        disablePlugin(plugin);
    }
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
    auto json = nlohmann::json::parse(content.value(), nullptr, false, true);
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
        auto load    = reinterpret_cast<Plugin::ll_plugin_load_t>(GetProcAddress(lib, "ll_plugin_load"));
        auto unload  = reinterpret_cast<Plugin::ll_plugin_unload_t>(GetProcAddress(lib, "ll_plugin_unload"));
        auto enable  = reinterpret_cast<Plugin::ll_plugin_enable_t>(GetProcAddress(lib, "ll_plugin_enable"));
        auto disable = reinterpret_cast<Plugin::ll_plugin_disable_t>(GetProcAddress(lib, "ll_plugin_disable"));
        if (load) plugin->onLoad(load);
        if (unload) plugin->onUnload(unload);
        if (enable) plugin->onEnable(enable);
        if (disable) plugin->onDisable(disable);
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

auto PluginManager::unloadPlugin(const std::weak_ptr<const Plugin>& plugin) -> bool {
    auto lock = std::lock_guard(mImpl->mutex);
    auto sp   = plugin.lock();
    if (!sp) return false;
    auto& p = const_cast<Plugin&>(*sp);
    if (p.getState() != PluginState::Disabled) {
        disablePlugin(plugin);
    }
    if (!p.onUnload()) {
        ll::logger.error("Fail to unload plugin <{}>!", p.getManifest().name);
        return false;
    }
    if (!unregisterPlugin(plugin)) {
        ll::logger.error("Fail to unregister plugin <{}>!", p.getManifest().name);
        return false;
    }
    if (!FreeLibrary(static_cast<HMODULE>(p.getHandle()))) {
        ll::logger.error("Fail to free library of plugin <{}>! Server may crash!", p.getManifest().name);
        return false;
    }
    return true;
}

auto PluginManager::enablePlugin(const std::weak_ptr<const Plugin>& plugin) -> bool {
    auto lock = std::lock_guard(mImpl->mutex);
    auto sp   = plugin.lock();
    if (!sp) return false;
    auto& p = const_cast<Plugin&>(*sp);
    if (p.getState() == PluginState::Enabled) {
        return true;
    }
    if (!p.onEnable()) {
        ll::logger.error("Fail to enable plugin <{}>!", p.getManifest().name);
        return false;
    }
    p.setState(PluginState::Enabled);
    return true;
}

auto PluginManager::disablePlugin(const std::weak_ptr<const Plugin>& plugin) -> bool {
    auto lock = std::lock_guard(mImpl->mutex);
    auto sp   = plugin.lock();
    if (!sp) return false;
    auto& p = const_cast<Plugin&>(*sp);
    if (p.getState() == PluginState::Disabled) {
        return true;
    }
    if (!p.onDisable()) {
        ll::logger.error("Fail to disable plugin <{}>!", p.getManifest().name);
        return false;
    }
    p.setState(PluginState::Disabled);
    return true;
}

} // namespace ll::plugin
