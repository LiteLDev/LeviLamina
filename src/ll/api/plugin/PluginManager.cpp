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

struct PluginManager::Impl {
    std::recursive_mutex                              mutex;
    std::vector<std::shared_ptr<Plugin>>              plugins;
    std::unordered_map<Handle, std::weak_ptr<Plugin>> handleMap;
    UnorderedStringMap<std::weak_ptr<Plugin>>         nameMap;
};

PluginManager::PluginManager() { mImpl = std::make_unique<Impl>(); }

auto PluginManager::getInstance() -> PluginManager& {
    static PluginManager instance;
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
        using ll_plugin_init_t = void (*)(ll::plugin::Plugin*);
        auto init              = reinterpret_cast<ll_plugin_init_t>(GetProcAddress(lib, "ll_plugin_init"));
        if (init) {
            init(plugin.get());
        } else {
            ll::logger.warn("Plugin <{}> does not have init function!", manifest.name);
        }
        ll::logger.info("Plugin <{}> loaded!", manifest.name);
        return plugin;
    } else ll::logger.error("ll.pluginManager.error.failToRegisterPlugin"_tr, manifest.name);
    return {};
}

auto PluginManager::unloadPlugin(const std::weak_ptr<const Plugin>& plugin) -> bool {
    std::lock_guard<std::recursive_mutex> lock(mImpl->mutex);
    if (auto ptr = plugin.lock()) {
        if (ptr->getState() != PluginState::Disabled) {
            disablePlugin(plugin);
        }
        if (!ptr->onUnload()) {
            ll::logger.error("Fail to unload plugin <{}>!", ptr->getManifest().name);
            return false;
        }
        if (!unregisterPlugin(plugin)) {
            ll::logger.error("Fail to unregister plugin <{}>!", ptr->getManifest().name);
            return false;
        }
        if (!FreeLibrary(static_cast<HMODULE>(ptr->getHandle()))) {
            ll::logger.error("Fail to free library of plugin <{}>! Server may crash!", ptr->getManifest().name);
            return false;
        }
        return true;
    }
    return false;
}

auto PluginManager::enablePlugin(const std::weak_ptr<const Plugin>& plugin) -> bool {
    std::lock_guard<std::recursive_mutex> lock(mImpl->mutex);
    if (auto ptr = plugin.lock()) {
        if (ptr->getState() == PluginState::Enabled) {
            return true;
        }
        if (!ptr->onEnable()) {
            ll::logger.error("Fail to enable plugin <{}>!", ptr->getManifest().name);
            return false;
        }
        ptr->setState(PluginState::Enabled);
        return true;
    }
    return false;
}

auto PluginManager::disablePlugin(const std::weak_ptr<const Plugin>& plugin) -> bool {
    std::lock_guard<std::recursive_mutex> lock(mImpl->mutex);
    if (auto ptr = plugin.lock()) {
        if (ptr->getState() == PluginState::Disabled) {
            return true;
        }
        if (!ptr->onDisable()) {
            ll::logger.error("Fail to disable plugin <{}>!", ptr->getManifest().name);
            return false;
        }
        ptr->setState(PluginState::Disabled);
        return true;
    }
    return false;
}

} // namespace ll::plugin
