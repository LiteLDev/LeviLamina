#include "ll/api/plugin/PluginManager.h"

namespace ll::plugin {

struct PluginManager::Impl {
    PluginStorage plugins;
};

PluginManager::PluginManager() { mImpl = std::make_unique<Impl>(); }

auto PluginManager::getInstance() -> PluginManager& {
    static PluginManager instance;
    return instance;
}

auto PluginManager::registerPlugin(Manifest manifest, Handle handle) -> bool {
    if (findPlugin(manifest.name)) { return false; }
    auto name   = manifest.name;
    auto plugin = Plugin{std::move(manifest), handle};
    mImpl->plugins.emplace(std::move(name), std::move(plugin));
    return true;
}

auto PluginManager::unregisterPlugin(std::string_view name) -> bool {
    auto it = mImpl->plugins.find(name);
    if (it != mImpl->plugins.end()) {
        mImpl->plugins.erase(it);
        return true;
    }
    return false;
}

auto PluginManager::findPlugin(std::string_view name) -> optional_ref<Plugin> {
    auto it = mImpl->plugins.find(name);
    if (it != mImpl->plugins.end()) { return it->second; }
    return std::nullopt;
}

auto PluginManager::getAllPlugins() -> const PluginStorage& { return mImpl->plugins; }

} // namespace ll::plugin
