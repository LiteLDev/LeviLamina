#include "ll/core/PluginManager.h"

#include <string>
#include <unordered_map>

#include "ll/api/LLAPI.h"
#include "ll/core/LeviLamina.h"

#include "windows.h"

namespace ll::plugin {

std::unordered_map<std::string, Plugin> plugins;

bool PluginManager::registerPlugin(
    std::string const&                               name,
    std::string const&                               description,
    Version const&                                   version,
    std::map<std::string, std::string> const&        extraInfo,
    std::unordered_map<std::string, std::any> const& sharedData
) {
    if (plugins.contains(name)) { return false; }
    plugins.emplace(name, Plugin{name, description, version, extraInfo, sharedData});
    return true;
}

optional_ref<Plugin> PluginManager::findPlugin(std::string const& name) {
    auto it = plugins.find(name);
    if (it != plugins.end()) { return it->second; }
    return std::nullopt;
}

std::unordered_map<std::string, Plugin>& PluginManager::getAllPlugins() { return plugins; }

bool PluginManager::unregisterPlugin(std::string const& name) {
    auto plugin = findPlugin(name);
    if (plugin.has_value()) {
        plugins.erase(name);
        return true;
    } else {
        return false;
    }
}

} // namespace ll::plugin
