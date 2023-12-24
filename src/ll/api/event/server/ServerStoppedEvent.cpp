#include "ll/api/event/server/ServerStoppedEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

#include "mc/server/common/DedicatedServer.h"

namespace ll::event::inline server {

LL_TYPED_INSTANCE_HOOK(
    ServerStoppedEventHook,
    HookPriority::Normal,
    DedicatedServer,
    "??1DedicatedServer@@UEAA@XZ",
    void
) {
    EventBus::getInstance().publish(ServerStoppedEvent());
    origin();
}

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&);
class ServerStoppedEventEmitter : public Emitter<ServerStoppedEvent, emitterFactory> {
    memory::HookRegistrar<ServerStoppedEventHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&) {
    return std::make_unique<ServerStoppedEventEmitter>();
}
} // namespace ll::event::inline server
