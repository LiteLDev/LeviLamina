#include "ll/api/plugin/PluginManager.h"
#include "ll/api/i18n/I18n.h"

namespace ll::plugin {
using namespace i18n_literals;

struct PluginManager::Impl {
    std::string                                 type;
    std::recursive_mutex                        mutex;
    UnorderedStringMap<std::shared_ptr<Plugin>> plugins;
    explicit Impl(std::string type) : type(std::move(type)) {}
};

PluginManager::PluginManager(std::string_view type) : impl(std::make_unique<Impl>(std::string{type})) {}

PluginManager::~PluginManager() = default;

std::lock_guard<std::recursive_mutex> PluginManager::lock() { return std::lock_guard(impl->mutex); }

void PluginManager::addPlugin(std::string_view name, std::shared_ptr<Plugin> const& plugin) {
    auto l(lock());
    impl->plugins.try_emplace(std::string{name}, plugin);
}

void PluginManager::erasePlugin(std::string_view name) {
    auto l(lock());
    if (auto i = impl->plugins.find(name); i != impl->plugins.end()) {
        impl->plugins.erase(i);
    }
}

Expected<> PluginManager::enable(std::string_view name) {
    auto l(lock());
    return getPlugin(name)->onEnable();
}

Expected<> PluginManager::disable(std::string_view name) {
    auto l(lock());
    return getPlugin(name)->onDisable();
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
