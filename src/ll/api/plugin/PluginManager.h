#pragma once

#include <ranges>
#include <string>
#include <unordered_map>

#include "ll/api/Config.h"
#include "ll/api/plugin/Manifest.h"
#include "ll/api/plugin/Plugin.h"

namespace ll::plugin {

class PluginManager {
private:
    using Handle = memory::Handle;

    struct Impl;
    std::unique_ptr<Impl> mImpl;
    PluginManager();

    auto registerPlugin(std::shared_ptr<Plugin> const& plugin) -> bool;
    auto unregisterPlugin(std::weak_ptr<const Plugin> const& plugin) -> bool;

public:
    LLNDAPI static PluginManager& getInstance();

    LLAPI auto loadAllPlugins() -> void;
    LLAPI auto unloadAllPlugins() -> void;
    LLAPI auto enableAllPlugins() -> void;
    LLAPI auto disableAllPlugins() -> void;

    LLAPI auto loadPlugin(std::string_view pluginName) -> std::shared_ptr<Plugin>;
    LLAPI auto unloadPlugin(std::weak_ptr<const Plugin> const& plugin) -> bool;
    LLAPI static auto enablePlugin(std::weak_ptr<const Plugin> const& plugin) -> bool;
    LLAPI static auto disablePlugin(std::weak_ptr<const Plugin> const& plugin) -> bool;

    LLNDAPI auto findPlugin(std::string_view name) -> std::weak_ptr<const Plugin>;
    LLNDAPI auto findPlugin(Handle handle) -> std::weak_ptr<const Plugin>;
    LLNDAPI auto getAllPlugins() -> std::vector<std::weak_ptr<const Plugin>>;

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
                return const_cast<Plugin&>(*p);
            } else {
                throw std::runtime_error(
                    "Plugin not found, make sure you are calling this function from a plugin registered properly"
                );
            }
        }();
        return plugin;
    }
};

} // namespace ll::plugin
