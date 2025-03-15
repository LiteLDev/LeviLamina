#include "ll/api/event/server/ServerStartedEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/event/EventRefObjSerializer.h"
#include "ll/api/memory/Hook.h"

#include "mc/nbt/CompoundTag.h"
#include "mc/scripting/ServerScriptManager.h"

namespace ll::event::inline server {

void ServerStartedEvent::serialize(CompoundTag& nbt) const {
    Event::serialize(nbt);
    nbt["server"] = serializeRefObj(server());
}

ServerInstance& ServerStartedEvent::server() const { return mInstance; }

LL_TYPE_INSTANCE_HOOK(
    ServerStartedEventHook,
    ll::memory::HookPriority::Normal,
    ServerScriptManager,
    &ServerScriptManager::$onServerThreadStarted,
    EventResult,
    ::ServerInstance& ins
) {
    auto result = origin(ins);
    EventBus::getInstance().publish(ServerStartedEvent(ins));
    return result;
}

static std::unique_ptr<EmitterBase> emitterFactory();
class ServerStartedEventEmitter : public Emitter<emitterFactory, ServerStartedEvent> {
    memory::HookRegistrar<ServerStartedEventHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory() { return std::make_unique<ServerStartedEventEmitter>(); }
} // namespace ll::event::inline server
