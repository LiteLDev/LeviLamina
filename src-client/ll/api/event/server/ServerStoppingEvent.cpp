#include "ll/api/event/server/ServerStoppingEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/event/EventRefObjSerializer.h"
#include "ll/api/memory/Hook.h"

#include "mc/nbt/CompoundTag.h"

namespace ll::event::inline server {

void ServerStoppingEvent::serialize(CompoundTag& nbt) const {
    Event::serialize(nbt);
    nbt["server"] = serializeRefObj(server());
}

ServerInstance& ServerStoppingEvent::server() const { return mServer; }

LL_TYPE_INSTANCE_HOOK(
    ServerStoppingEventHook,
    HookPriority::Normal,
    ServerInstance,
    &ServerInstance::startLeaveGame,
    void
) {
    EventBus::getInstance().publish(ServerStoppingEvent(*this));
    origin();
}

static std::unique_ptr<EmitterBase> emitterFactory();
class ServerStoppingEventEmitter : public Emitter<emitterFactory, ServerStoppingEvent> {
    memory::HookRegistrar<ServerStoppingEventHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory() { return std::make_unique<ServerStoppingEventEmitter>(); }
} // namespace ll::event::inline server
