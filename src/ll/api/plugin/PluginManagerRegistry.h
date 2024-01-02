#pragma once

#include "ll/api/base/DependencyGraph.h"
#include "ll/api/base/Macro.h"
#include "ll/api/plugin/PluginManager.h"

namespace ll::plugin { // TODO : pimpl
class PluginRegistrar;
class PluginManagerRegistry {
    friend PluginRegistrar;
    std::recursive_mutex                               mutex;
    UnorderedStringMap<std::shared_ptr<PluginManager>> managers;

    PluginManagerRegistry()  = default;
    ~PluginManagerRegistry() = default;

    [[nodiscard]] std::shared_ptr<PluginManager> const& getSharedManager(std::string_view type) {
        return managers.find(type)->second;
    }

    [[nodiscard]] bool loadPlugin(Manifest manifest) {
        std::lock_guard lock(mutex);
        if (hasManager(manifest.type)) {
            return getSharedManager(manifest.type)->load(std::move(manifest));
        }
        return false;
    }

    [[nodiscard]] bool unloadPlugin(std::string_view type, std::string_view name) {
        std::lock_guard lock(mutex);
        if (hasManager(type)) {
            return getSharedManager(type)->unload(name);
        }
        return false;
    }

    [[nodiscard]] bool enablePlugin(std::string_view type, std::string_view name) {
        std::lock_guard lock(mutex);
        if (hasManager(type)) {
            return getSharedManager(type)->enable(name);
        }
        return false;
    }

    [[nodiscard]] bool disablePlugin(std::string_view type, std::string_view name) {
        std::lock_guard lock(mutex);
        if (hasManager(type)) {
            return getSharedManager(type)->disable(name);
        }
        return false;
    }

public:
    LLNDAPI static PluginManagerRegistry& getInstance();

    [[nodiscard]] bool addManager(std::string_view type, std::shared_ptr<PluginManager> const& manager) {
        std::lock_guard lock(mutex);
        if (!manager) {
            return false;
        }
        return managers.emplace(std::string{type}, manager).second;
    }

    [[nodiscard]] bool hasManager(std::string_view type) {
        std::lock_guard lock(mutex);
        return managers.contains(type);
    }

    [[nodiscard]] std::weak_ptr<PluginManager> getManager(std::string_view type) {
        std::lock_guard lock(mutex);
        if (hasManager(type)) {
            return getSharedManager(type);
        }
        return {};
    }

    [[nodiscard]] bool eraseManager(std::string_view type) {
        std::lock_guard lock(mutex);
        if (auto i = managers.find(type); i != managers.end()) {
            managers.erase(i);
            return true;
        }
        return false;
    }

    void forEachManager(std::function<bool(std::string_view type, PluginManager&)> const& fn) {
        std::lock_guard lock(mutex);
        for (auto& [type, manager] : managers) {
            if (!fn(type, *manager)) {
                return;
            }
        }
    }

    void forEachPluginWithType(std::function<bool(std::string_view type, std::string_view name, Plugin&)> const& fn) {
        std::lock_guard lock(mutex);
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

    bool hasPlugin(std::string_view name, std::string_view type = "") {
        std::lock_guard lock(mutex);
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

    std::weak_ptr<Plugin> getPlugin(std::string_view name, std::string_view type = "") {
        std::lock_guard lock(mutex);
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
};
} // namespace ll::plugin
