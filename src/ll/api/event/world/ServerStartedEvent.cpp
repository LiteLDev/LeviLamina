#include "ll/api/event/world/ServerStartedEvent.h"
#include "ll/api/ServerInfo.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

#include "mc/world/events/ServerInstanceEventCoordinator.h"

#include "mc/nbt/CompoundTag.h"

namespace ll::event::inline world {

void ServerStartedEvent::serialize(CompoundTag& nbt) const {
    Event::serialize(nbt);
    nbt["instance"] = (uintptr_t)&instance();
}

ServerInstance& ServerStartedEvent::instance() const { return mInstance; }

LL_TYPED_INSTANCE_HOOK(
    ServerStartedEventHook,
    ll::memory::HookPriority::Normal,
    ServerInstanceEventCoordinator,
    &ServerInstanceEventCoordinator::sendServerThreadStarted,
    void,
    ::ServerInstance& ins
) {
    origin(ins);
    getServerStatusNonConst() = ServerStatus::Running;
    EventBus::getInstance().publish(ServerStartedEvent(ins));
}

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&);
class ServerStartedEventEmitter : public Emitter<ServerStartedEvent, emitterFactory> {
    memory::HookRegistrar<ServerStartedEventHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&) {
    return std::make_unique<ServerStartedEventEmitter>();
}
} // namespace ll::event::inline world
