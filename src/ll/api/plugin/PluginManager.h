#pragma once

#include <ranges>
#include <string>
#include <unordered_map>

#include "ll/api/Config.h"
#include "ll/api/plugin/Manifest.h"
#include "ll/api/plugin/Plugin.h"

namespace ll::plugin {

class PluginManager {
    using Handle = memory::Handle;

    struct Impl;
    std::unique_ptr<Impl> mImpl;
    PluginManager();

public:
    LLNDAPI static PluginManager& getInstance();

    LLAPI auto registerPlugin(std::shared_ptr<Plugin> const& plugin) -> bool;
    LLAPI auto unregisterPlugin(std::weak_ptr<Plugin> const& plugin) -> bool;

    LLNDAPI auto findPlugin(std::string_view name) -> std::weak_ptr<Plugin>;
    LLNDAPI auto findPlugin(Handle handle) -> std::weak_ptr<Plugin>;
    LLNDAPI auto getAllPlugins() -> std::vector<std::weak_ptr<Plugin>>;

    auto unregisterPlugin(std::string_view name) -> bool {
        if (auto plugin = findPlugin(name).lock()) { return unregisterPlugin(plugin); }
        return false;
    }

    auto unregisterPlugin(Handle handle) -> bool {
        if (auto plugin = findPlugin(handle).lock()) { return unregisterPlugin(plugin); }
        return false;
    }

    // throw exception if not found
    [[maybe_unused]] static auto getCurrentPlugin() -> Plugin& {
        static auto& plugin = []() -> Plugin& {
            if (auto p = getInstance().findPlugin(memory::getCurrentModuleHandle()).lock()) {
                return *p;
            } else {
                throw std::runtime_error("Plugin not found");
            }
        }();
        return plugin;
    }
};

} // namespace ll::plugin
