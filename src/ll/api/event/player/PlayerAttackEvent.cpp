#include "ll/api/event/player/PlayerAttackEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

#include "mc/nbt/CompoundTag.h"

namespace ll::event::inline player {

void PlayerAttackEvent::serialize(CompoundTag& nbt) const {
    Cancellable::serialize(nbt);
    nbt["target"] = (uintptr_t)&target();
    nbt["cause"]  = magic_enum::enum_name(cause());
}

Actor&                  PlayerAttackEvent::target() const { return mTarget; }
ActorDamageCause const& PlayerAttackEvent::cause() const { return mCause; }


LL_TYPE_INSTANCE_HOOK(
    PlayerAttackEventHook,
    HookPriority::Normal,
    Player,
    "?attack@Player@@UEAA_NAEAVActor@@AEBW4ActorDamageCause@@@Z",
    bool,
    Actor&                  ac,
    ActorDamageCause const& cause
) {
    auto ev = PlayerAttackEvent(*this, ac, cause);
    EventBus::getInstance().publish(ev);
    if (ev.isCancelled()) {
        return false;
    }
    return origin(ac, cause);
}

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&);
class PlayerAttackEventEmitter : public Emitter<emitterFactory, PlayerAttackEvent> {
    memory::HookRegistrar<PlayerAttackEventHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&) {
    return std::make_unique<PlayerAttackEventEmitter>();
}

} // namespace ll::event::inline player
