#include "ll/api/event/server/ServerStartedEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"


namespace ll::event::inline server {

LL_TYPED_INSTANCE_HOOK(
    ServerStartedEventHook,
    ll::memory::HookPriority::Normal,
    ServerInstanceEventCoordinator,
    &ServerInstanceEventCoordinator::sendServerThreadStarted,
    void,
    ::ServerInstance& ins
) {
    origin(ins);
    EventBus::getInstance().publish(ServerStartedEvent(ins));
}

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&);
class ServerStartedEventEmitter : public Emitter<ServerStartedEvent, emitterFactory> {
    memory::HookAutoRegister<ServerStartedEventHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&) {
    return std::make_unique<ServerStartedEventEmitter>();
}
} // namespace ll::event::inline server
