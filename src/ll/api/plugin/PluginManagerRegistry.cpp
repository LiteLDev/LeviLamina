#include "ll/api/plugin/PluginManagerRegistry.h"
#include "ll/api/i18n/I18n.h"

#include "ll/core/LeviLamina.h"

namespace ll::plugin {
using namespace i18n_literals;

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

Expected<> PluginManagerRegistry::loadPlugin(Manifest manifest) noexcept {
    try {
        std::lock_guard lock(impl->mutex);
        if (hasManager(manifest.type)) {
            if (hasPlugin(manifest.name)) {
                return makeStringError("Plugin {0} already loaded"_tr(manifest.name));
            }
            std::string name = manifest.name;
            std::string type = manifest.type;
            return getManager(type)->load(std::move(manifest)).transform([&, this] {
                impl->loadedPlugins.insert_or_assign(std::move(name), std::move(type));
            });
        } else {
            return makeStringError("Unrecognized plugin type: {0}"_tr(manifest.type));
        }
    } catch (...) {
        return makeExceptionError();
    }
}

Expected<> PluginManagerRegistry::unloadPlugin(std::string_view name) noexcept {
    try {
        std::lock_guard lock(impl->mutex);
        if (!hasPlugin(name)) {
            return makeStringError("Plugin not found"_tr());
        }
        return getManagerForPlugin(name)->unload(name).transform([&, this] {
            impl->loadedPlugins.erase(std::string{name});
        });
    } catch (...) {
        return makeExceptionError();
    }
}

Expected<> PluginManagerRegistry::enablePlugin(std::string_view name) const noexcept {
    try {
        std::lock_guard lock(impl->mutex);
        if (!hasPlugin(name)) {
            return makeStringError("Plugin not found"_tr());
        }
        return getManagerForPlugin(name)->enable(name);
    } catch (...) {
        return makeExceptionError();
    }
}

Expected<> PluginManagerRegistry::disablePlugin(std::string_view name) const noexcept {
    try {
        std::lock_guard lock(impl->mutex);
        if (!hasPlugin(name)) {
            return makeStringError("Plugin not found"_tr());
        }
        return getManagerForPlugin(name)->disable(name);
    } catch (...) {
        return makeExceptionError();
    }
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

std::shared_ptr<PluginManager> PluginManagerRegistry::getManager(std::string_view type) const {
    std::lock_guard lock(impl->mutex);
    if (hasManager(type)) {
        return impl->managers.find(type)->second;
    }
    return {};
}

std::shared_ptr<PluginManager> PluginManagerRegistry::getManagerForPlugin(std::string_view name) const {
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

std::shared_ptr<Plugin> PluginManagerRegistry::getPlugin(std::string_view name) const {
    std::lock_guard lock(impl->mutex);
    if (!hasPlugin(name)) {
        return {};
    }
    return getManagerForPlugin(name)->getPlugin(name);
}

} // namespace ll::plugin
