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

class PlayerAddExperienceEventEmitter : public Emitter<PlayerAddExperienceEvent> {
public:
    PlayerAddExperienceEventEmitter() { PlayerAddExperienceEventHook::hook(); }
    ~PlayerAddExperienceEventEmitter() override { PlayerAddExperienceEventHook::unhook(); }
};

std::unique_ptr<EmitterBase> PlayerAddExperienceEvent::emitterFactory(ListenerBase&) {
    return std::make_unique<PlayerAddExperienceEventEmitter>();
}

} // namespace ll::event::inline player
