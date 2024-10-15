#include "ll/api/event/player/PlayerAddExperienceEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

#include "mc/nbt/CompoundTag.h"

namespace ll::event::inline player {

void PlayerAddExperienceEvent::serialize(CompoundTag& nbt) const {
    Cancellable::serialize(nbt);
    nbt["experience"] = experience();
}

void PlayerAddExperienceEvent::deserialize(CompoundTag const& nbt) {
    Cancellable::deserialize(nbt);
    experience() = nbt["experience"];
}

int& PlayerAddExperienceEvent::experience() const { return mExperience; }

LL_TYPE_INSTANCE_HOOK(
    PlayerAddExperienceEventHook,
    HookPriority::Normal,
    Player,
    &Player::addExperience$,
    void,
    int exp
) {
    auto ev = PlayerAddExperienceEvent(*this, exp);
    EventBus::getInstance().publish(ev);
    if (ev.isCancelled()) {
        return;
    }
    origin(exp);
}

static std::unique_ptr<EmitterBase> emitterFactory();
class PlayerAddExperienceEventEmitter : public Emitter<emitterFactory, PlayerAddExperienceEvent> {
    memory::HookRegistrar<PlayerAddExperienceEventHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory() { return std::make_unique<PlayerAddExperienceEventEmitter>(); }

} // namespace ll::event::inline player
