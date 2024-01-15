#include "ll/api/plugin/PluginManager.h"

namespace ll::plugin {

struct PluginManager::Impl {
    std::string                                 type;
    std::recursive_mutex                        mutex;
    UnorderedStringMap<std::shared_ptr<Plugin>> plugins;
    explicit Impl(std::string type) : type(std::move(type)) {}
};

PluginManager::PluginManager(std::string_view type) : impl(std::make_unique<Impl>(std::string{type})) {}

PluginManager::~PluginManager() = default;

std::lock_guard<std::recursive_mutex> PluginManager::lock() { return std::lock_guard(impl->mutex); }

bool PluginManager::addPlugin(std::string_view name, std::shared_ptr<Plugin> const& plugin) {
    auto l(lock());
    if (!plugin) {
        return false;
    }
    return impl->plugins.emplace(std::string{name}, plugin).second;
}

bool PluginManager::erasePlugin(std::string_view name) {
    auto l(lock());
    if (auto i = impl->plugins.find(name); i != impl->plugins.end()) {
        impl->plugins.erase(i);
        return true;
    }
    return false;
}

bool PluginManager::enable(std::string_view name) {
    auto l(lock());
    auto plugin = getPlugin(name);
    if (!plugin) return false;
    return plugin->onEnable();
}

bool PluginManager::disable(std::string_view name) {
    auto l(lock());
    auto plugin = getPlugin(name);
    if (!plugin) return false;
    return plugin->onDisable();
}

[[nodiscard]] std::string const& PluginManager::getType() const { return impl->type; }

[[nodiscard]] bool PluginManager::hasPlugin(std::string_view name) {
    auto l(lock());
    return impl->plugins.contains(name);
}

[[nodiscard]] std::shared_ptr<Plugin> PluginManager::getPlugin(std::string_view name) {
    auto l(lock());
    if (auto i = impl->plugins.find(name); i != impl->plugins.end()) {
        return i->second;
    }
    return {};
}

[[nodiscard]] size_t PluginManager::getPluginCount() {
    auto l(lock());
    return impl->plugins.size();
}

void PluginManager::forEachPlugin(std::function<bool(std::string_view name, Plugin&)> const& fn) {
    auto l(lock());
    for (auto& [name, plugin] : impl->plugins) {
        if (!fn(name, *plugin)) {
            return;
        }
    }
}

} // namespace ll::plugin
