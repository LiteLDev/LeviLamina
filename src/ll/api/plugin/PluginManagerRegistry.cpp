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
std::shared_ptr<PluginManager> const& PluginManagerRegistry::getSharedManager(std::string_view type) {
    return impl->managers.find(type)->second;
}
bool PluginManagerRegistry::loadPlugin(Manifest manifest) {
    std::lock_guard lock(impl->mutex);
    if (hasManager(manifest.type)) {
        std::string name = manifest.name;
        std::string type = manifest.type;
        if (getSharedManager(type)->load(std::move(manifest))) {
            impl->loadedPlugins.insert_or_assign(std::move(name), std::move(type));
            return true;
        }
    }
    return false;
}
bool PluginManagerRegistry::unloadPlugin(std::string_view name) {
    std::lock_guard lock(impl->mutex);
    if (!hasPlugin(name)) {
        return {};
    }
    auto& type = impl->loadedPlugins.find(name)->first;
    if (hasManager(type)) {
        if (getSharedManager(type)->unload(name)) {
            impl->loadedPlugins.erase(std::string{name});
            return true;
        }
    }
    return false;
}
bool PluginManagerRegistry::enablePlugin(std::string_view name) {
    std::lock_guard lock(impl->mutex);
    if (!hasPlugin(name)) {
        return {};
    }
    auto& type = impl->loadedPlugins.find(name)->first;
    if (hasManager(type)) {
        return getSharedManager(type)->enable(name);
    }
    return false;
}
bool PluginManagerRegistry::disablePlugin(std::string_view name) {
    std::lock_guard lock(impl->mutex);
    if (!hasPlugin(name)) {
        return {};
    }
    auto& type = impl->loadedPlugins.find(name)->first;
    if (hasManager(type)) {
        return getSharedManager(type)->disable(name);
    }
    return false;
}
bool PluginManagerRegistry::addManager(std::shared_ptr<PluginManager> const& manager) {
    std::lock_guard lock(impl->mutex);
    if (!manager) {
        return false;
    }
    return impl->managers.emplace(manager->getType(), manager).second;
}
bool PluginManagerRegistry::hasManager(std::string_view type) {
    std::lock_guard lock(impl->mutex);
    return impl->managers.contains(type);
}
std::weak_ptr<PluginManager> PluginManagerRegistry::getManager(std::string_view type) {
    std::lock_guard lock(impl->mutex);
    if (hasManager(type)) {
        return getSharedManager(type);
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
void PluginManagerRegistry::forEachManager(std::function<bool(std::string_view type, PluginManager&)> const& fn) {
    std::lock_guard lock(impl->mutex);
    for (auto& [type, manager] : impl->managers) {
        if (!fn(type, *manager)) {
            return;
        }
    }
}
void PluginManagerRegistry::forEachPluginWithType(
    std::function<bool(std::string_view type, std::string_view name, Plugin&)> const& fn
) {
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
bool PluginManagerRegistry::hasPlugin(std::string_view name) {
    std::lock_guard lock(impl->mutex);
    return impl->loadedPlugins.contains(name);
}
std::weak_ptr<Plugin> PluginManagerRegistry::getPlugin(std::string_view name) {
    std::lock_guard lock(impl->mutex);
    if (!hasPlugin(name)) {
        return {};
    }
    auto& type = impl->loadedPlugins.find(name)->first;
    if (hasManager(type)) {
        return getSharedManager(type)->getPlugin(name);
    }
    return {};
}
} // namespace ll::plugin
