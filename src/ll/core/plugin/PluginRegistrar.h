#pragma once

#include "ll/api/plugin/PluginManagerRegistry.h"

namespace ll::plugin { // TODO : store graph, add functions...

class PluginRegistrar {
    struct Impl;
    std::unique_ptr<Impl> impl;

    PluginRegistrar();
    ~PluginRegistrar();

public:
    static PluginRegistrar& getInstance();

    void registerPlugins();
};

} // namespace ll::plugin
