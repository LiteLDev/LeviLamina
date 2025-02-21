#include "ll/api/event/server/ServerStartedEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/event/EventRefObjSerializer.h"
#include "ll/api/memory/Hook.h"

#include "mc/gameplayhandlers/ServerInstanceEventHandler.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/world/events/ServerInstanceEventCoordinator.h"

namespace ll::event::inline server {

void ServerStartedEvent::serialize(CompoundTag& nbt) const {
    Event::serialize(nbt);
    nbt["server"] = serializeRefObj(server());
}

ServerInstance& ServerStartedEvent::server() const { return mInstance; }

LL_TYPE_INSTANCE_HOOK(
    ServerStartedEventHook,
    ll::memory::HookPriority::Normal,
    ServerInstanceEventCoordinator,
    &ServerInstanceEventCoordinator::sendServerInitializeEnd,
    void,
    ::ServerInstance& ins
) {
    origin(ins);
    EventBus::getInstance().publish(ServerStartedEvent(ins));
}

static std::unique_ptr<EmitterBase> emitterFactory();
class ServerStartedEventEmitter : public Emitter<emitterFactory, ServerStartedEvent> {
    memory::HookRegistrar<ServerStartedEventHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory() { return std::make_unique<ServerStartedEventEmitter>(); }
} // namespace ll::event::inline server
