#include "ll/api/event/mob/MobDieEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

namespace ll::event::inline mob {

ActorDamageSource const& MobDieEvent::source() const { return mDamageSource; }


LL_TYPED_INSTANCE_HOOK(
    MobDieEventHook,
    HookPriority::Normal,
    Mob,
    "?die@Mob@@UEAAXAEBVActorDamageSource@@@Z",
    bool,
    ActorDamageSource* ads
) {
    auto ev = MobDieEvent(*this, *ads);
    EventBus::getInstance().publish(ev);
    if (ev.isCancelled()) {
        return false;
    }
    return origin(ads);
}

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&);
class MobDieEventEmitter : public Emitter<MobDieEvent, emitterFactory> {
    memory::HookRegistrar<MobDieEventHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&) { return std::make_unique<MobDieEventEmitter>(); }

} // namespace ll::event::inline mob
