#pragma once

#include <ranges>
#include <string>
#include <unordered_map>

#include "ll/api/Config.h"
#include "ll/api/plugin/Manifest.h"

namespace ll::plugin {

class Plugin;

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
    LLAPI auto enablePlugin(std::weak_ptr<const Plugin> const& plugin) -> bool;
    LLAPI auto disablePlugin(std::weak_ptr<const Plugin> const& plugin) -> bool;

    LLNDAPI auto findPlugin(std::string_view name) -> std::weak_ptr<const Plugin>;
    LLNDAPI auto findPlugin(Handle handle) -> std::weak_ptr<const Plugin>;
    LLNDAPI auto getAllPlugins() -> std::vector<std::weak_ptr<const Plugin>>;
};

} // namespace ll::plugin
