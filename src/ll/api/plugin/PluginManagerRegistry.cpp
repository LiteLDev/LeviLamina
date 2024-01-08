#include "ll/api/plugin/PluginManagerRegistry.h"

#include "ll/core/LeviLamina.h"

namespace ll::plugin {
struct PluginManagerRegistry::Impl {
    std::recursive_mutex                               mutex;
    UnorderedStringMap<std::shared_ptr<PluginManager>> managers;
    UnorderedStringMap<std::string>                    loadedPlugins; // k, v: name, type
};

PluginManagerRegistry::PluginManagerRegistry() : impl(std::make_unique<Impl>()) {}
PluginManagerRegistry::~PluginManagerRegistry() = default;

PluginManagerRegistry& PluginManagerRegistry::getInstance() {
    static PluginManagerRegistry instance;
    return instance;
}
bool PluginManagerRegistry::loadPlugin(Manifest manifest) {
    std::lock_guard lock(impl->mutex);
    if (hasManager(manifest.type)) {
        std::string name = manifest.name;
        std::string type = manifest.type;
        if (getManager(type).lock()->load(std::move(manifest))) {
            impl->loadedPlugins.insert_or_assign(std::move(name), std::move(type));
            return true;
        }
    }
    return false;
}
bool PluginManagerRegistry::unloadPlugin(std::string_view name) {
    std::lock_guard lock(impl->mutex);
    if (!hasPlugin(name)) {
        return false;
    }
    if (getManagerForPlugin(name).lock()->unload(name)) {
        impl->loadedPlugins.erase(std::string{name});
        return true;
    }

    return false;
}
bool PluginManagerRegistry::enablePlugin(std::string_view name) const {
    std::lock_guard lock(impl->mutex);
    if (!hasPlugin(name)) {
        return false;
    }
    return getManagerForPlugin(name).lock()->enable(name);
}
bool PluginManagerRegistry::disablePlugin(std::string_view name) const {
    std::lock_guard lock(impl->mutex);
    if (!hasPlugin(name)) {
        return false;
    }
    return getManagerForPlugin(name).lock()->disable(name);
}
bool PluginManagerRegistry::addManager(std::shared_ptr<PluginManager> const& manager) {
    std::lock_guard lock(impl->mutex);
    if (!manager) {
        return false;
    }
    return impl->managers.emplace(manager->getType(), manager).second;
}
bool PluginManagerRegistry::hasManager(std::string_view type) const {
    std::lock_guard lock(impl->mutex);
    return impl->managers.contains(type);
}
std::weak_ptr<PluginManager> PluginManagerRegistry::getManager(std::string_view type) const {
    std::lock_guard lock(impl->mutex);
    if (hasManager(type)) {
        return impl->managers.find(type)->second;
    }
    return {};
}
std::weak_ptr<PluginManager> PluginManagerRegistry::getManagerForPlugin(std::string_view name) const {
    std::lock_guard lock(impl->mutex);
    if (hasPlugin(name)) {
        return getManager(impl->loadedPlugins.find(name)->second);
    }
    return {};
}
bool PluginManagerRegistry::eraseManager(std::string_view type) {
    std::lock_guard lock(impl->mutex);
    if (auto i = impl->managers.find(type); i != impl->managers.end()) {
        std::erase_if(impl->loadedPlugins, [type](auto& item) { return item.second == type; });
        impl->managers.erase(i);
        return true;
    }
    return false;
}
void PluginManagerRegistry::forEachManager(std::function<bool(std::string_view type, PluginManager&)> const& fn) const {
    std::lock_guard lock(impl->mutex);
    for (auto& [type, manager] : impl->managers) {
        if (!fn(type, *manager)) {
            return;
        }
    }
}
void PluginManagerRegistry::forEachPluginWithType(
    std::function<bool(std::string_view type, std::string_view name, Plugin&)> const& fn
) const {
    std::lock_guard lock(impl->mutex);
    bool            interrupted = false;
    forEachManager([&](std::string_view type, PluginManager& manager) {
        manager.forEachPlugin([&](std::string_view name, Plugin& plugin) {
            if (!fn(type, name, plugin)) {
                interrupted = true;
            }
            return !interrupted;
        });
        return !interrupted;
    });
}
bool PluginManagerRegistry::hasPlugin(std::string_view name) const {
    std::lock_guard lock(impl->mutex);
    return impl->loadedPlugins.contains(name) && hasManager(impl->loadedPlugins.find(name)->second);
}
std::string PluginManagerRegistry::getPluginType(std::string_view name) const {
    std::lock_guard lock(impl->mutex);
    if (hasPlugin(name)) {
        return impl->loadedPlugins.find(name)->second;
    }
    return {};
}
std::weak_ptr<Plugin> PluginManagerRegistry::getPlugin(std::string_view name) const {
    std::lock_guard lock(impl->mutex);
    if (!hasPlugin(name)) {
        return {};
    }
    return getManagerForPlugin(name).lock()->getPlugin(name);
}
} // namespace ll::plugin
