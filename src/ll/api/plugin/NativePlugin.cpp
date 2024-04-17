#include <utility>

#include "ll/api/plugin/NativePlugin.h"
#include "ll/api/plugin/PluginManagerRegistry.h"
#include "ll/core/plugin/NativePluginManager.h"

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

    if (handle == win_utils::getCurrentModuleHandle()) {
        static auto llSelf = std::make_shared<NativePlugin>(
            Manifest{"./../../LeviLamina.dll", "LeviLamina", std::string{NativePluginManagerName}},
            win_utils::getCurrentModuleHandle()
        );
        return llSelf;
    }
    auto manger = std::static_pointer_cast<NativePluginManager>(
        PluginManagerRegistry::getInstance().getManager(NativePluginManagerName)
    );
    if (!manger) {
        return {};
    }
    return manger->getPluginByHandle(handle);
}

std::shared_ptr<NativePlugin> NativePlugin::current(Handle handle) { return getByHandle(handle); }

} // namespace ll::plugin
