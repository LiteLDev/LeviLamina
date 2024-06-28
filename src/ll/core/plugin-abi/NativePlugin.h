#pragma once

#include <memory>
#include <string_view>

#include "ll/api/base/Macro.h"
#include "ll/api/utils/WinUtils.h"
#include "ll/core/plugin-abi/Manifest.h"
#include "ll/core/plugin-abi/Plugin.h"

namespace ll::plugin {

class NativePluginManager;
[[maybe_unused]] constexpr std::string_view NativePluginManagerName = "native";

class NativePlugin : public Plugin {
    friend NativePluginManager;
    struct Impl;
    std::unique_ptr<Impl> mImpl;

public:
    using Handle = void*;

protected:
    void setHandle(Handle handle);

public:
    NativePlugin(Manifest manifest, Handle handle = nullptr);
    ~NativePlugin();

    LLNDAPI Handle getHandle() const;

    LLNDAPI static std::shared_ptr<NativePlugin> getByHandle(Handle handle);

    LLNDAPI static std::shared_ptr<NativePlugin> current(Handle handle = win_utils::getCurrentModuleHandle());
};

} // namespace ll::plugin
