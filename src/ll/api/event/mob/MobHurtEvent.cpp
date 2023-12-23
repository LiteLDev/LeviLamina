#include "ll/api/event/mob/MobHurtEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

namespace ll::event::inline mob {

ActorDamageSource const& MobHurtEvent::source() const { return mDamageSource; }

LL_TYPED_INSTANCE_HOOK(
    MobHurtEventHook1,
    HookPriority::Normal,
    Mob,
    "?_hurt@Mob@@MEAA_NAEBVActorDamageSource@@M_N1@Z",
    bool,
    ActorDamageSource& src,
    float              damage,
    bool               unk1_1,
    bool               unk2_0
) {
    auto ev = MobHurtEvent(*this, src, damage);
    EventBus::getInstance().publish(ev);
    if (ev.isCancelled()) {
        return false;
    }
    return origin(src, damage, unk1_1, unk2_0);
}

LL_TYPED_INSTANCE_HOOK(
    MobHurtEventHook2,
    HookPriority::Normal,
    Mob,
    "?getDamageAfterResistanceEffect@Mob@@UEBAMAEBVActorDamageSource@@M@Z",
    float,
    ActorDamageSource* src,
    float              damage
) {
    if (src->getCause() == ActorDamageCause::Magic) {
        auto ev = MobHurtEvent(*this, *src, damage);
        EventBus::getInstance().publish(ev);
        if (ev.isCancelled()) {
            return false;
        }
    }
    return origin(src, damage);
}

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&);
class MobHurtEventEmitter : public Emitter<MobHurtEvent, emitterFactory> {
    memory::HookRegistrar<MobHurtEventHook1> hook1;
    memory::HookRegistrar<MobHurtEventHook2> hook2;
};

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&) { return std::make_unique<MobHurtEventEmitter>(); }

} // namespace ll::event::inline mob
