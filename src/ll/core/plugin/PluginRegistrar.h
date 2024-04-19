#pragma once

#include <memory>
#include <string>
#include <string_view>
#include <vector>

#include "ll/api/Expected.h"
#include "ll/api/plugin/PluginManagerRegistry.h"

namespace ll::plugin {

class PluginRegistrar {
    struct Impl;
    struct EnableAllPlugins;
    struct DisableAllPlugins;

    std::unique_ptr<Impl> impl;

    PluginRegistrar();
    ~PluginRegistrar();

public:
    static PluginRegistrar& getInstance();

    [[nodiscard]] std::vector<std::string> getSortedPluginNames() const;

    void loadAllPlugins();

    Expected<> loadPlugin(std::string_view name) noexcept;

    Expected<> unloadPlugin(std::string_view name) noexcept;

    Expected<> enablePlugin(std::string_view name) noexcept;

    Expected<> disablePlugin(std::string_view name) noexcept;
};

} // namespace ll::plugin
