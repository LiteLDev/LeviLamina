#include "ll/api/plugin/PluginManagerRegistry.h"

#include "ll/core/LeviLamina.h"

namespace ll::plugin {
struct PluginManagerRegistry::Impl {
    std::recursive_mutex                               mutex;
    UnorderedStringMap<std::shared_ptr<PluginManager>> managers;
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
        return getSharedManager(manifest.type)->load(std::move(manifest));
    }
    return false;
}
bool PluginManagerRegistry::unloadPlugin(std::string_view type, std::string_view name) {
    std::lock_guard lock(impl->mutex);
    if (hasManager(type)) {
        return getSharedManager(type)->unload(name);
    }
    return false;
}
bool PluginManagerRegistry::enablePlugin(std::string_view type, std::string_view name) {
    std::lock_guard lock(impl->mutex);
    if (hasManager(type)) {
        return getSharedManager(type)->enable(name);
    }
    return false;
}
bool PluginManagerRegistry::disablePlugin(std::string_view type, std::string_view name) {
    std::lock_guard lock(impl->mutex);
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
bool PluginManagerRegistry::hasPlugin(std::string_view name, std::string_view type) {
    std::lock_guard lock(impl->mutex);
    if (type.empty()) {
        bool res = false;
        forEachManager([&](std::string_view, PluginManager& manager) {
            if (manager.hasPlugin(name)) {
                res = true;
            }
            return !res;
        });
        return res;
    } else {
        if (!hasManager(type)) {
            return false;
        }
        return getSharedManager(type)->hasPlugin(name);
    }
}
std::weak_ptr<Plugin> PluginManagerRegistry::getPlugin(std::string_view name, std::string_view type) {
    std::lock_guard lock(impl->mutex);
    if (type.empty()) {
        bool                  has = false;
        std::weak_ptr<Plugin> res;
        forEachManager([&](std::string_view, PluginManager& manager) {
            if (manager.hasPlugin(name)) {
                has = true;
                res = manager.getPlugin(name);
            }
            return !has;
        });
        return res;
    } else {
        if (!hasManager(type)) {
            return {};
        }
        return getSharedManager(type)->getPlugin(name);
    }
}
} // namespace ll::plugin
