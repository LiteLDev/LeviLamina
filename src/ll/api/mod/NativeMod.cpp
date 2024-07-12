#include <utility>

#include "ll/api/mod/ModManagerRegistry.h"
#include "ll/api/mod/NativeMod.h"
#include "ll/core/LeviLamina.h"
#include "ll/core/mod/NativeModManager.h"

namespace ll::mod {

struct NativeMod::Impl {
    Handle handle;
};

NativeMod::NativeMod(Manifest manifest, Handle handle)
: Mod(std::move(manifest)),
  mImpl(std::make_unique<Impl>(handle)) {}

NativeMod::~NativeMod() = default;

void NativeMod::setHandle(Handle handle) { mImpl->handle = handle; }

NativeMod::Handle NativeMod::getHandle() const { return mImpl->handle; }

std::shared_ptr<NativeMod> NativeMod::getByHandle(Handle handle) {
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

std::shared_ptr<NativeMod> NativeMod::current(Handle handle) { return getByHandle(handle); }

} // namespace ll::mod
