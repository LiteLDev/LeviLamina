#include "ll/api/event/entity/ActorHurtEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

#include "mc/nbt/CompoundTag.h"

namespace ll::event::inline entity {

void ActorHurtEvent::serialize(CompoundTag& nbt) const {
    Cancellable::serialize(nbt);
    nbt["source"] = (uintptr_t)&source();
    nbt["damage"] = damage();
    nbt["knock"]  = knock();
    nbt["ignite"] = ignite();
}

void ActorHurtEvent::deserialize(CompoundTag const& nbt) {
    Cancellable::deserialize(nbt);
    damage() = nbt["damage"];
    knock()  = nbt["knock"];
    ignite() = nbt["ignite"];
}

ActorDamageSource const& ActorHurtEvent::source() const { return mSource; }
float&                   ActorHurtEvent::damage() const { return mDamage; }
bool&                    ActorHurtEvent::knock() const { return mKnock; }
bool&                    ActorHurtEvent::ignite() const { return mIgnite; }

LL_TYPE_INSTANCE_HOOK(
    ActorHurtEventHook,
    HookPriority::Normal,
    Actor,
    &Actor::hurt,
    bool,
    ActorDamageSource const& source,
    float                    damage,
    bool                     knock,
    bool                     ignite
) {
    auto ev = ActorHurtEvent(*this, source, damage, knock, ignite);
    EventBus::getInstance().publish(ev);
    if (ev.isCancelled()) {
        return false;
    }
    return origin(source, damage, knock, ignite);
}

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&);
class ActorHurtEventEmitter : public Emitter<emitterFactory, ActorHurtEvent> {
    memory::HookRegistrar<ActorHurtEventHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&) { return std::make_unique<ActorHurtEventEmitter>(); }

} // namespace ll::event::inline entity
