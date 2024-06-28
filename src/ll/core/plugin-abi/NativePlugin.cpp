#include <utility>

#include "ll/api/mod/NativeMod.h"
#include "ll/core/plugin-abi/NativePlugin.h"

namespace ll::plugin {

struct NativePlugin::Impl {
    Handle handle;
};

NativePlugin::NativePlugin(Manifest manifest, Handle handle)
: Plugin(std::move(manifest)),
  mImpl(std::make_unique<Impl>(handle)) {}

NativePlugin::~NativePlugin() = default;

void NativePlugin::setHandle(Handle handle) { mImpl->handle = handle; }

NativePlugin::Handle NativePlugin::getHandle() const { return mImpl->handle; }

std::shared_ptr<NativePlugin> NativePlugin::getByHandle(Handle handle) {
    return std::reinterpret_pointer_cast<NativePlugin>(mod::NativeMod::getByHandle(handle));
}
std::shared_ptr<NativePlugin> NativePlugin::current(Handle handle) { return getByHandle(handle); }

} // namespace ll::plugin
