#pragma once

#include "ll/api/plugin/NativePlugin.h"
#include "ll/api/plugin/PluginManager.h"

namespace ll::plugin {
class NativePluginManager final : public PluginManager {
public:
    using Handle = void*;

    NativePluginManager();
    ~NativePluginManager() override;

    std::shared_ptr<NativePlugin> getPluginByHandle(Handle handle) {
        if (handleMap.contains(handle)) {
            return handleMap.at(handle);
        }
        return {};
    }

protected:
    bool load(Manifest manifest) override;

    bool unload(std::string_view name) override;

private:
    std::unordered_map<Handle, std::shared_ptr<NativePlugin>> handleMap;
};
} // namespace ll::plugin
