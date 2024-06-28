#pragma once

#include <memory>
#include <string_view>

#include "ll/api/base/Macro.h"
#include "ll/api/mod/Manifest.h"
#include "ll/api/mod/Mod.h"
#include "ll/api/utils/WinUtils.h"

namespace ll::mod {

class NativeModManager;
[[maybe_unused]] constexpr std::string_view NativeModManagerName = "native";

class NativeMod : public Mod {
    friend NativeModManager;
    struct Impl;
    std::unique_ptr<Impl> mImpl;

public:
    using Handle = void*;

protected:
    void setHandle(Handle handle);

public:
    NativeMod(Manifest manifest, Handle handle = nullptr);
    ~NativeMod();

    LLNDAPI Handle getHandle() const;

    LLNDAPI static std::shared_ptr<NativeMod> getByHandle(Handle handle);

    LLNDAPI static std::shared_ptr<NativeMod> current(Handle handle = win_utils::getCurrentModuleHandle());
};

} // namespace ll::mod
