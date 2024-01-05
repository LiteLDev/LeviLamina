#include "ll/api/plugin/PluginManager.h"

namespace ll::plugin {

struct PluginManager::Impl {
    std::string                                 type;
    std::recursive_mutex                        mutex;
    UnorderedStringMap<std::shared_ptr<Plugin>> plugins;
    Impl(std::string type) : type(std::move(type)) {}
};
PluginManager::PluginManager(std::string type) : impl(std::make_unique<Impl>(std::move(type))) {}

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
    return getPlugin(name).lock()->onEnable();
}

bool PluginManager::disable(std::string_view name) {
    auto l(lock());
    return getPlugin(name).lock()->onDisable();
}


[[nodiscard]] std::string_view PluginManager::getType() const { return impl->type; }

[[nodiscard]] bool PluginManager::hasPlugin(std::string_view name) {
    auto l(lock());
    return impl->plugins.contains(name);
}

[[nodiscard]] std::weak_ptr<Plugin> PluginManager::getPlugin(std::string_view name) {
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

[[nodiscard]] std::vector<std::string> PluginManager::getPluginNames() {
    auto                     l(lock());
    std::vector<std::string> result;
    result.reserve(impl->plugins.size());
    for (auto& [name, plugin] : impl->plugins) {
        result.emplace_back(name);
    }
    return result;
}
void PluginManager::forEachPlugin(std::function<bool(std::string_view name, Plugin&)> const& fn) {
    auto l(lock());
    for (auto& [name, plugin] : impl->plugins) {
        if (!fn(name, *plugin)) {
            return;
        }
    }
}
size_t PluginManager::unloadAll() {
    auto   l(lock());
    size_t count{};
    for (auto& [name, plugin] : impl->plugins) {
        count += unload(name);
    }
    return count;
}
size_t PluginManager::enableAll() {
    auto   l(lock());
    size_t count{};
    for (auto& [name, plugin] : impl->plugins) {
        count += enable(name);
    }
    return count;
}
size_t PluginManager::disableAll() {
    auto   l(lock());
    size_t count{};
    for (auto& [name, plugin] : impl->plugins) {
        count += disable(name);
    }
    return count;
}
} // namespace ll::plugin
