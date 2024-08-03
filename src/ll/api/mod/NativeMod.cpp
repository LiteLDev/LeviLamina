#include <utility>

#include "ll/api/mod/ModManagerRegistry.h"
#include "ll/api/mod/NativeMod.h"
#include "ll/core/LeviLamina.h"
#include "ll/core/mod/NativeModManager.h"

namespace ll::mod {

struct NativeMod::Impl {
    sys_utils::HandleT        handle; // for ll self
    sys_utils::DynamicLibrary lib;
};

NativeMod::NativeMod(Manifest manifest, sys_utils::HandleT handle)
: Mod(std::move(manifest)),
  mImpl(std::make_unique<Impl>(handle)) {}

NativeMod::~NativeMod() = default;

sys_utils::DynamicLibrary& NativeMod::getDynamicLibrary() { return mImpl->lib; }

sys_utils::HandleT NativeMod::getHandle() const { return mImpl->handle ? mImpl->handle : (mImpl->lib.handle()); }

std::shared_ptr<NativeMod> NativeMod::getByHandle(sys_utils::HandleT handle) {
    if (handle == sys_utils::getCurrentModuleHandle()) {
        return getSelfModIns();
    }
    auto manger =
        std::static_pointer_cast<NativeModManager>(ModManagerRegistry::getInstance().getManager(NativeModManagerName));
    if (!manger) {
        return {};
    }
    return manger->getModByHandle(handle);
}

std::shared_ptr<NativeMod> NativeMod::current(sys_utils::HandleT handle) { return getByHandle(handle); }

} // namespace ll::mod
