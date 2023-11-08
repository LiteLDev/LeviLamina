#include "ll/api/plugin/PluginManager.h"

#include <mutex>

#include "mc/deps/core/data/BidirectionalUnorderedMap.h"

namespace ll::plugin {

template <typename... Bases>
struct overload : Bases... {
    using is_transparent = void;
    using Bases::operator()...;
};

struct char_pointer_hash {
    auto operator()(const char* ptr) const noexcept { return std::hash<std::string_view>{}(ptr); }
};

using transparent_string_hash = overload<std::hash<std::string>, std::hash<std::string_view>, char_pointer_hash>;

template <typename T>
using UnorderedStringMap = std::unordered_map<std::string, T, transparent_string_hash, std::equal_to<>>;

struct PluginManager::Impl {
    std::mutex                                        mutex;
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
    std::lock_guard lock(mImpl->mutex);
    if (mImpl->nameMap.contains(plugin->getManifest().name)) { return false; }
    mImpl->plugins.push_back(plugin);
    mImpl->handleMap.insert_or_assign(plugin->getHandle(), plugin);
    mImpl->nameMap.insert_or_assign(plugin->getManifest().name, plugin);
    return true;
}

auto PluginManager::unregisterPlugin(std::weak_ptr<Plugin> const& plugin) -> bool {
    std::lock_guard lock(mImpl->mutex);
    if (auto ptr = plugin.lock()) {
        mImpl->plugins.erase(std::remove(mImpl->plugins.begin(), mImpl->plugins.end(), ptr), mImpl->plugins.end());
        mImpl->handleMap.erase(ptr->getHandle());
        mImpl->nameMap.erase(ptr->getManifest().name);
        return true;
    }
    return false;
}

auto PluginManager::findPlugin(std::string_view name) -> std::weak_ptr<Plugin> {
    std::lock_guard lock(mImpl->mutex);
    return mImpl->nameMap.contains(name) ? mImpl->nameMap.find(name)->second : std::weak_ptr<Plugin>();
}

auto PluginManager::findPlugin(Handle handle) -> std::weak_ptr<Plugin> {
    std::lock_guard lock(mImpl->mutex);
    return mImpl->handleMap.contains(handle) ? mImpl->handleMap.find(handle)->second : std::weak_ptr<Plugin>();
}

auto PluginManager::getAllPlugins() -> std::vector<std::weak_ptr<Plugin>> {
    std::lock_guard                    lock(mImpl->mutex);
    std::vector<std::weak_ptr<Plugin>> plugins;
    for (auto& plugin : mImpl->plugins) { plugins.push_back(plugin); }
    return plugins;
}

} // namespace ll::plugin
