#include "ll/api/event/player/PlayerAddExperienceEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"


namespace ll::event::inline player {

int& PlayerAddExperienceEvent::experience() const { return mExperience; }

LL_TYPED_INSTANCE_HOOK(
    PlayerAddExperienceEventHook,
    HookPriority::Normal,
    Player,
    "?addExperience@Player@@UEAAXH@Z",
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

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&);
class PlayerAddExperienceEventEmitter : public Emitter<PlayerAddExperienceEvent, emitterFactory> {
    memory::HookRegistrar<PlayerAddExperienceEventHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&) {
    return std::make_unique<PlayerAddExperienceEventEmitter>();
}

} // namespace ll::event::inline player
