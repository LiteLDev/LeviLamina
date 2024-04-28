#pragma once

#include <memory>
#include <string_view>
#include <unordered_map>

#include "ll/api/plugin/Manifest.h"
#include "ll/api/plugin/NativePlugin.h"
#include "ll/api/plugin/PluginManager.h"

namespace ll::plugin {
class NativePluginManager final : public PluginManager {
public:
    using Handle = void*;

    NativePluginManager();
    ~NativePluginManager() override;

    std::shared_ptr<NativePlugin> getPluginByHandle(Handle handle);

protected:
    Expected<> load(Manifest manifest) override;

    Expected<> unload(std::string_view name) override;

private:
    std::unordered_map<Handle, std::shared_ptr<NativePlugin>> handleMap;
};
} // namespace ll::plugin
