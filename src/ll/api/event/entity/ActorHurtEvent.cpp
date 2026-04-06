#include "ll/api/event/entity/ActorHurtEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/event/EventRefObjSerializer.h"
#include "ll/api/memory/Hook.h"

#include "mc/deps/nbt/CompoundTag.h"
#include "mc/scripting/event_handlers/ScriptActorGameplayHandler.h"
#include "mc/world/events/ActorBeforeHurtEvent.h"

namespace ll::event::inline entity {

void ActorHurtEvent::serialize(CompoundTag& nbt) const {
    Cancellable::serialize(nbt);
    nbt["source"] = serializeRefObj(source());
    nbt["damage"] = damage();
}

void ActorHurtEvent::deserialize(CompoundTag const& nbt) {
    Cancellable::deserialize(nbt);
    damage() = nbt["damage"];
}

ActorDamageSource const& ActorHurtEvent::source() const { return mSource; }
float&                   ActorHurtEvent::damage() const { return mDamage; }

LL_TYPE_INSTANCE_HOOK(
    ActorHurtEventHook,
    HookPriority::Normal,
    ScriptActorGameplayHandler,
    &ScriptActorGameplayHandler::$handleEvent,
    GameplayHandlerResult<CoordinatorResult>,
    ActorBeforeHurtEvent& actorHurtEvent
) {
    auto ev =
        ActorHurtEvent(const_cast<Actor&>(actorHurtEvent.mEntity), actorHurtEvent.mSource, actorHurtEvent.mDamage);
    EventBus::getInstance().publish(ev);
    if (ev.isCancelled()) {
        return {HandlerResult::BypassListeners, CoordinatorResult::Cancel};
    }
    return origin(actorHurtEvent);
}

static std::unique_ptr<EmitterBase> emitterFactory();
class ActorHurtEventEmitter : public Emitter<emitterFactory, ActorHurtEvent> {
    memory::HookRegistrar<ActorHurtEventHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory() { return std::make_unique<ActorHurtEventEmitter>(); }

} // namespace ll::event::inline entity
