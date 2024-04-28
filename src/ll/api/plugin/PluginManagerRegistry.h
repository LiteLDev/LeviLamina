#pragma once

#include "ll/api/Expected.h"
#include "ll/api/base/Macro.h"
#include "ll/api/data/DependencyGraph.h"
#include "ll/api/plugin/PluginManager.h"

namespace ll::plugin {
class PluginRegistrar;
class PluginManagerRegistry {
    friend PluginRegistrar;
    struct Impl;
    std::unique_ptr<Impl> impl;

    PluginManagerRegistry();
    ~PluginManagerRegistry();

    Expected<> loadPlugin(Manifest manifest) noexcept;

    Expected<> unloadPlugin(std::string_view name) noexcept;

    Expected<> enablePlugin(std::string_view name) const noexcept;

    Expected<> disablePlugin(std::string_view name) const noexcept;

public:
    LLNDAPI static PluginManagerRegistry& getInstance();

    LLNDAPI bool addManager(std::shared_ptr<PluginManager> const& manager);

    LLNDAPI bool eraseManager(std::string_view type);

    LLNDAPI bool hasManager(std::string_view type) const;

    LLNDAPI std::shared_ptr<PluginManager> getManager(std::string_view type) const;

    LLNDAPI std::shared_ptr<PluginManager> getManagerForPlugin(std::string_view name) const;

    LLAPI void forEachManager(std::function<bool(std::string_view type, PluginManager&)> const& fn) const;

    LLAPI void
    forEachPluginWithType(std::function<bool(std::string_view type, std::string_view name, Plugin&)> const& fn) const;

    LLNDAPI bool hasPlugin(std::string_view name) const;

    LLNDAPI std::string getPluginType(std::string_view name) const;

    LLNDAPI std::shared_ptr<Plugin> getPlugin(std::string_view name) const;
};
} // namespace ll::plugin
