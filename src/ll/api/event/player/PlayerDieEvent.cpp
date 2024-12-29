#include "ll/api/event/player/PlayerDieEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

#include "mc/nbt/CompoundTag.h"

namespace ll::event::inline player {

void PlayerDieEvent::serialize(CompoundTag& nbt) const {
    PlayerEvent::serialize(nbt);
    nbt["source"] = (uintptr_t)&source();
}

ActorDamageSource const& PlayerDieEvent::source() const { return mSource; }

LL_TYPE_INSTANCE_HOOK(
    PlayerDieEventHook,
    HookPriority::Normal,
    Player,
    &Player::$die,
    void,
    ActorDamageSource const& source
) {
    EventBus::getInstance().publish(PlayerDieEvent(*this, source));
    origin(source);
}

static std::unique_ptr<EmitterBase> emitterFactory();
class PlayerDieEventEmitter : public Emitter<emitterFactory, PlayerDieEvent> {
    memory::HookRegistrar<PlayerDieEventHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory() { return std::make_unique<PlayerDieEventEmitter>(); }

} // namespace ll::event::inline player
