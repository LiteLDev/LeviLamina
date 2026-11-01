#pragma once

#include <memory>
#include <string_view>

#include "ll/api/base/Macro.h"
#include "ll/api/mod/Manifest.h"
#include "ll/api/mod/Mod.h"
#include "ll/api/utils/SystemUtils.h"

namespace ll::mod {

class NativeModManager;
[[maybe_unused]] constexpr std::string_view NativeModManagerName = "native";

class NativeMod : public Mod {
    friend NativeModManager;
    struct Impl;
    std::unique_ptr<Impl> mImpl;

protected:
    sys_utils::DynamicLibrary& getDynamicLibrary();

public:
    NativeMod(Manifest manifest, sys_utils::HandleT handle = nullptr);
    ~NativeMod();

    LLNDAPI sys_utils::HandleT getHandle() const;

    LLNDAPI static std::shared_ptr<NativeMod> getByHandle(sys_utils::HandleT handle);

    LLNDAPI static std::shared_ptr<NativeMod> current(sys_utils::HandleT handle = sys_utils::getCurrentModuleHandle());
};

} // namespace ll::mod
