#include "ll/api/plugin/PluginManager.h"

namespace ll::plugin::manager {

std::unordered_map<std::string, Plugin> plugins;

bool registerPlugin(
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

optional_ref<Plugin> findPlugin(std::string const& name) {
    auto it = plugins.find(name);
    if (it != plugins.end()) { return it->second; }
    return std::nullopt;
}

std::unordered_map<std::string, Plugin>& getAllPlugins() { return plugins; }

bool unregisterPlugin(std::string const& name) {
    auto plugin = findPlugin(name);
    if (plugin) {
        plugins.erase(name);
        return true;
    } else {
        return false;
    }
}

} // namespace ll::plugin::manager
