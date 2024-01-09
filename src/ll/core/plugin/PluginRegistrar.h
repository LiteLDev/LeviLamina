#pragma once

#include "ll/api/plugin/PluginManagerRegistry.h"

namespace ll::plugin { // TODO : store graph, add functions...

class PluginRegistrar {
    struct Impl;
    struct EnableAllPlugins;
    struct DisableAllPlugins;

    std::unique_ptr<Impl> impl;

    PluginRegistrar();
    ~PluginRegistrar();

public:
    static PluginRegistrar& getInstance();

    std::vector<std::string> getSortedPluginNames() const;

    void loadAllPlugins();

    bool loadPlugin(std::string_view name);

    bool unloadPlugin(std::string_view name);

    bool enablePlugin(std::string_view name);

    bool disablePlugin(std::string_view name);
};

} // namespace ll::plugin
