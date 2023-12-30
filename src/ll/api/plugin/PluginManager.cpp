#include "ll/api/plugin/PluginManager.h"

namespace ll::plugin {
 bool PluginManager::enable(std::string_view name) {
    std::lock_guard lock(mutex);
    if (!hasPlugin(name)) {
        return false;
    }
    if (!getPlugin(name).lock()->onEnable()) {
        return true;
    }
    return true;
}

 bool PluginManager::disable(std::string_view name) {
    std::lock_guard lock(mutex);
    if (!hasPlugin(name)) {
        return false;
    }
    if (!getPlugin(name).lock()->onDisable()) {
        return true;
    }
    return true;
}
}