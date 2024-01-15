#include "ll/api/event/entity/MobDieEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

#include "mc/nbt/CompoundTag.h"

namespace ll::event::inline entity {

void MobDieEvent::serialize(CompoundTag& nbt) const {
    MobEvent::serialize(nbt);
    nbt["source"] = (uintptr_t)&source();
}

ActorDamageSource const& MobDieEvent::source() const { return mSource; }


LL_TYPE_INSTANCE_HOOK(
    MobDieEventHook,
    HookPriority::Normal,
    Mob,
    "?die@Mob@@UEAAXAEBVActorDamageSource@@@Z",
    void,
    ActorDamageSource const& source
) {
    auto ev = MobDieEvent(*this, source);
    EventBus::getInstance().publish(ev);
    return origin(source);
}

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&);
class MobDieEventEmitter : public Emitter<emitterFactory, MobDieEvent> {
    memory::HookRegistrar<MobDieEventHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&) { return std::make_unique<MobDieEventEmitter>(); }

} // namespace ll::event::inline entity
