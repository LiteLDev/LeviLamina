#include "ll/api/event/player/PlayerJumpEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

namespace ll::event::inline player {

LL_TYPE_INSTANCE_HOOK(PlayerJumpEventHook, HookPriority::Normal, Player, &Player::handleJumpEffects, void) {
    EventBus::getInstance().publish(PlayerJumpEvent(*this));
    return origin();
}

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&);
class PlayerJumpEventEmitter : public Emitter<emitterFactory, PlayerJumpEvent> {
    memory::HookRegistrar<PlayerJumpEventHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&) { return std::make_unique<PlayerJumpEventEmitter>(); }

} // namespace ll::event::inline player
