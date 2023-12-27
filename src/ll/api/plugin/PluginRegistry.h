#pragma once

#include "ll/api/base/DependencyGraph.h"
#include "ll/api/base/Macro.h"
#include "ll/api/plugin/PluginManager.h"

namespace ll::plugin {
class PluginRegistry {
    std::recursive_mutex                               mutex;
    UnorderedStringMap<std::shared_ptr<PluginManager>> managers;
    DependencyGraph<std::string>                       deps;

    PluginRegistry()  = default;
    ~PluginRegistry() = default;

public:
    LLNDAPI static PluginRegistry& getInstance();

    [[nodiscard]] bool addManager(std::string_view type, std::shared_ptr<PluginManager> const& manager) {
        std::lock_guard lock(mutex);
        if (!manager) {
            return false;
        }
        return managers.emplace(std::string{type}, manager).second;
    }

    [[nodiscard]] bool hasManager(std::string_view type) { return managers.contains(type); }

    [[nodiscard]] std::shared_ptr<PluginManager> getManager(std::string_view type) {
        std::lock_guard lock(mutex);
        if (auto i = managers.find(type); i != managers.end()) {
            return i->second;
        }
        return nullptr;
    }

    [[nodiscard]] bool eraseManager(std::string_view type) {
        std::lock_guard lock(mutex);
        return managers.erase(type);
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
};
} // namespace ll::plugin
