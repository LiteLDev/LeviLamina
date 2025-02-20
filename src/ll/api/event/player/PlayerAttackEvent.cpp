#include "ll/api/event/player/PlayerAttackEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/event/EventRefObjSerializer.h"
#include "ll/api/memory/Hook.h"

#include "mc/nbt/CompoundTag.h"

namespace ll::event::inline player {

void PlayerAttackEvent::serialize(CompoundTag& nbt) const {
    Cancellable::serialize(nbt);
    nbt["target"] = serializeRefObj(target());
    nbt["cause"]  = magic_enum::enum_name(cause());
}

Actor&                                         PlayerAttackEvent::target() const { return mTarget; }
::SharedTypes::Legacy::ActorDamageCause const& PlayerAttackEvent::cause() const { return mCause; }


LL_TYPE_INSTANCE_HOOK(
    PlayerAttackEventHook,
    HookPriority::Normal,
    Player,
    &Player::_attack,
    bool,
    Actor&                                         ac,
    ::SharedTypes::Legacy::ActorDamageCause const& cause,
    bool                                           doPredictiveSound
) {
    auto ev = PlayerAttackEvent(*this, ac, cause);
    EventBus::getInstance().publish(ev);
    if (ev.isCancelled()) {
        return false;
    }
    return origin(ac, cause, doPredictiveSound);
}

static std::unique_ptr<EmitterBase> emitterFactory();
class PlayerAttackEventEmitter : public Emitter<emitterFactory, PlayerAttackEvent> {
    memory::HookRegistrar<PlayerAttackEventHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory() { return std::make_unique<PlayerAttackEventEmitter>(); }

} // namespace ll::event::inline player
