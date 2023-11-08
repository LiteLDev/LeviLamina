#include "ll/api/plugin/PluginManager.h"

#include <mutex>

#include "ll/api/utils/UnorderedStringMap.h"

namespace ll::plugin {

struct PluginManager::Impl {
    std::mutex                                        mutex;
    std::vector<std::shared_ptr<Plugin>>              plugins;
    std::unordered_map<Handle, std::weak_ptr<Plugin>> handleMap;
    utils::UnorderedStringMap<std::weak_ptr<Plugin>>  nameMap;
};

PluginManager::PluginManager() { mImpl = std::make_unique<Impl>(); }

auto PluginManager::getInstance() -> PluginManager& {
    static PluginManager instance;
    return instance;
}

auto PluginManager::registerPlugin(std::shared_ptr<Plugin> const& plugin) -> bool {
    std::lock_guard lock(mImpl->mutex);
    if (mImpl->nameMap.contains(plugin->getManifest().name)) { return false; }
    mImpl->plugins.push_back(plugin);
    mImpl->handleMap.insert_or_assign(plugin->getHandle(), plugin);
    mImpl->nameMap.insert_or_assign(plugin->getManifest().name, plugin);
    return true;
}

auto PluginManager::unregisterPlugin(std::weak_ptr<const Plugin> const& plugin) -> bool {
    std::lock_guard lock(mImpl->mutex);
    if (auto ptr = plugin.lock()) {
        mImpl->plugins.erase(std::remove(mImpl->plugins.begin(), mImpl->plugins.end(), ptr), mImpl->plugins.end());
        mImpl->handleMap.erase(ptr->getHandle());
        mImpl->nameMap.erase(ptr->getManifest().name);
        return true;
    }
    return false;
}

auto PluginManager::findPlugin(std::string_view name) -> std::weak_ptr<const Plugin> {
    std::lock_guard lock(mImpl->mutex);
    return mImpl->nameMap.contains(name) ? mImpl->nameMap.find(name)->second : std::weak_ptr<Plugin>();
}

auto PluginManager::findPlugin(Handle handle) -> std::weak_ptr<const Plugin> {
    std::lock_guard lock(mImpl->mutex);
    return mImpl->handleMap.contains(handle) ? mImpl->handleMap.find(handle)->second : std::weak_ptr<Plugin>();
}

auto PluginManager::getAllPlugins() -> std::vector<std::weak_ptr<const Plugin>> {
    std::lock_guard                          lock(mImpl->mutex);
    std::vector<std::weak_ptr<const Plugin>> plugins;
    for (auto& plugin : mImpl->plugins) { plugins.push_back(plugin); }
    return plugins;
}

} // namespace ll::plugin
