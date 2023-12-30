#pragma once

#include "ll/api/plugin/Plugin.h"
#include "ll/api/utils/WinUtils.h"

namespace ll::plugin {
class NativePluginManager;
class NativePlugin : public Plugin {
    friend NativePluginManager;
    struct Impl;
    std::unique_ptr<Impl> mImpl;

public:
    using Handle = void*;

protected:
    void setHandle(Handle);

public:
    NativePlugin(Manifest, Handle);
    ~NativePlugin();

    LLNDAPI Handle getHandle() const;

    LLNDAPI static std::weak_ptr<NativePlugin> getByHandle(Handle);

    LLNDAPI static std::weak_ptr<NativePlugin> current(Handle = win_utils::getCurrentModuleHandle());
};
} // namespace ll::plugin
