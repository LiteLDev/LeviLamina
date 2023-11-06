#include "ll/api/plugin/PluginManager.h"

#include "mc/deps/core/data/BidirectionalUnorderedMap.h"

#include <windows.h>

namespace ll::plugin {

struct PluginManager::Impl {
    PluginStorage                                  plugins;
    BidirectionalUnorderedMap<Handle, std::string> dllmapping;
};

PluginManager::PluginManager() { mImpl = std::make_unique<Impl>(); }

auto PluginManager::getInstance() -> PluginManager& {
    static PluginManager instance;
    return instance;
}

auto PluginManager::getCurrentPlugin(void* base) -> Plugin& {
    HMODULE hModule = nullptr;
    GetModuleHandleEx(
        GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
        reinterpret_cast<LPCTSTR>(base),
        &hModule
    );
    auto& i = *getInstance().mImpl;
    if (!i.dllmapping.contains(hModule)) { throw std::runtime_error("Plugin didn't inject correctly."); }
    return i.plugins.at(i.dllmapping[hModule]);
}

void PluginManager::addDllMapping(Handle h, std::string_view v) { mImpl->dllmapping.emplace(h, std::string{v}); }

auto PluginManager::registerPlugin(Manifest manifest) -> bool {
    if (findPlugin(manifest.name)) { return false; }
    auto name   = manifest.name;
    auto plugin = Plugin{std::move(manifest)};
    mImpl->plugins.emplace(std::move(name), std::move(plugin));
    return true;
}

auto PluginManager::unregisterPlugin(std::string_view name) -> bool {
    auto it = mImpl->plugins.find(name);
    if (it != mImpl->plugins.end()) {
        if (mImpl->dllmapping.contains(it->first)) { mImpl->dllmapping.erase(it->first); }
        mImpl->plugins.erase(it);
        return true;
    }
    return false;
}

auto PluginManager::findPlugin(std::string_view name) -> optional_ref<Plugin const> {
    auto it = mImpl->plugins.find(name);
    if (it != mImpl->plugins.end()) { return it->second; }
    return std::nullopt;
}

auto PluginManager::getAllPlugins() -> PluginStorage const& { return mImpl->plugins; }

} // namespace ll::plugin
