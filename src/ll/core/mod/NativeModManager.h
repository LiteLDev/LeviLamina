#pragma once

#include <memory>
#include <string_view>

#include "ll/api/base/Containers.h"
#include "ll/api/mod/Manifest.h"
#include "ll/api/mod/ModManager.h"
#include "ll/api/mod/NativeMod.h"

namespace ll::mod {
class NativeModManager final : public ModManager {
public:
    using Handle = void*;

    NativeModManager();
    ~NativeModManager() override;

    std::shared_ptr<NativeMod> getModByHandle(Handle handle);

protected:
    Expected<> load(Manifest manifest) override;

    Expected<> unload(std::string_view name) override;

private:
    DenseMap<Handle, std::shared_ptr<NativeMod>> handleMap;
};
} // namespace ll::mod
