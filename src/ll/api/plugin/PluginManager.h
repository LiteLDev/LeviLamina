#pragma once

#include <ranges>
#include <string>
#include <unordered_map>

#include "ll/api/plugin/Manifest.h"

namespace ll::plugin {

class Plugin;

class PluginManager {
private:
    using Handle = void*;

    struct Impl;
    std::unique_ptr<Impl> mImpl;
    PluginManager();

    auto registerPlugin(std::shared_ptr<Plugin> const& plugin) -> bool;

public:
    LLNDAPI static PluginManager& getInstance();

    LLAPI auto loadAllPlugins() -> void;

    LLAPI auto loadPlugin(std::string_view pluginName) -> std::shared_ptr<Plugin>;

    LLNDAPI auto findPlugin(std::string_view name) -> std::weak_ptr<const Plugin>;
    LLNDAPI auto findPlugin(Handle handle) -> std::weak_ptr<const Plugin>;
    LLNDAPI auto getAllPlugins() -> std::vector<std::weak_ptr<const Plugin>>;
};

} // namespace ll::plugin
