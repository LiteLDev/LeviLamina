#include "ll/api/event/player/PlayerJumpEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"


#include "mc/world/actor/player/Player.h"

namespace ll::event::inline player {

LL_TYPED_INSTANCE_HOOK(PlayerJumpEventHook, HookPriority::Normal, Player, &Player::handleJumpEffects, void) {
    EventBus::getInstance().publish(PlayerJumpEvent(*this));
    return origin();
}

class PlayerJumpEventEmitter : public Emitter<PlayerJumpEvent> {
public:
    PlayerJumpEventEmitter() { PlayerJumpEventHook::hook(); }
    ~PlayerJumpEventEmitter() override { PlayerJumpEventHook::unhook(); }
};

std::unique_ptr<EmitterBase> PlayerJumpEvent::emitterFactory(ListenerBase&) {
    return std::make_unique<PlayerJumpEventEmitter>();
}

} // namespace ll::event::inline player
