#include "ll/core/plugin/NativePluginManager.h"
#include "ll/api/utils/ErrorUtils.h"
#include "ll/core/LeviLamina.h"

#include "windows.h"

namespace ll::plugin {

NativePluginManager::NativePluginManager() : PluginManager(NativePluginManagerName) {}
NativePluginManager::~NativePluginManager() = default;

bool NativePluginManager::load(Manifest manifest) {
    auto l(lock());
    if (hasPlugin(manifest.name)) {
        return false;
    }
    auto entry = getPluginsRoot() / manifest.name / manifest.entry;
    auto lib   = LoadLibrary(entry.c_str());
    if (!lib) {
        error_utils::printException(logger, error_utils::getWinLastError());
        return false;
    }
    auto plugin = std::make_shared<NativePlugin>(std::move(manifest), lib);
    plugin->onLoad(reinterpret_cast<Plugin::callback_t*>(GetProcAddress(lib, "ll_plugin_load")));
    plugin->onUnload(reinterpret_cast<Plugin::callback_t*>(GetProcAddress(lib, "ll_plugin_unload")));
    plugin->onEnable(reinterpret_cast<Plugin::callback_t*>(GetProcAddress(lib, "ll_plugin_enable")));
    plugin->onDisable(reinterpret_cast<Plugin::callback_t*>(GetProcAddress(lib, "ll_plugin_disable")));
    if (!plugin->onLoad()) {
        return false;
    }
    if (!addPlugin(plugin->getManifest().name, plugin)) {
        return false;
    }
    handleMap[lib] = plugin;
    return true;
}

bool NativePluginManager::unload(std::string_view name) {
    auto l(lock());
    if (!hasPlugin(name)) {
        return false;
    }
    auto ptr = std::static_pointer_cast<NativePlugin>(getPlugin(name));
    if (!ptr->hasOnUnload()) {
        return false;
    }
    ptr->onDisable();
    if (!ptr->onUnload()) {
        return false;
    }
    if (!FreeLibrary((HMODULE)ptr->getHandle())) {
        error_utils::printException(logger, error_utils::getWinLastError());
        return false;
    }
    erasePlugin(name);
    handleMap.erase(ptr->getHandle());
    return true;
}
} // namespace ll::plugin
