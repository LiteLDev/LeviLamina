#include "ll/api/event/player/PlayerAddExperienceEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"


#include "mc/world/actor/player/Player.h"

namespace ll::event::inline player {

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
    memory::HookAutoRegister<PlayerAddExperienceEventHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&) {
    return std::make_unique<PlayerAddExperienceEventEmitter>();
}

} // namespace ll::event::inline player
