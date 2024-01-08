#pragma once

#include "ll/api/base/DependencyGraph.h"
#include "ll/api/base/Macro.h"
#include "ll/api/plugin/PluginManager.h"

namespace ll::plugin {
class PluginRegistrar;
class PluginManagerRegistry {
    friend PluginRegistrar;
    struct Impl;
    std::unique_ptr<Impl> impl;

    PluginManagerRegistry();
    ~PluginManagerRegistry();

    bool loadPlugin(Manifest manifest);

    bool unloadPlugin(std::string_view name);

    bool enablePlugin(std::string_view name);

    bool disablePlugin(std::string_view name);

public:
    LLNDAPI static PluginManagerRegistry& getInstance();

    LLNDAPI bool addManager(std::shared_ptr<PluginManager> const& manager);

    LLNDAPI bool hasManager(std::string_view type);

    LLNDAPI std::weak_ptr<PluginManager> getManager(std::string_view type);

    LLNDAPI std::weak_ptr<PluginManager> getManagerForPlugin(std::string_view name);

    LLNDAPI bool eraseManager(std::string_view type);

    LLAPI void forEachManager(std::function<bool(std::string_view type, PluginManager&)> const& fn);

    LLAPI void
    forEachPluginWithType(std::function<bool(std::string_view type, std::string_view name, Plugin&)> const& fn);

    LLNDAPI bool hasPlugin(std::string_view name);

    LLNDAPI std::weak_ptr<Plugin> getPlugin(std::string_view name);
};
} // namespace ll::plugin
