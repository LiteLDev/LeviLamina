#include "ll/api/event/player/PlayerJumpEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

namespace ll::event::inline player {
// TODO:
//  LL_TYPE_INSTANCE_HOOK(PlayerJumpEventHook, HookPriority::Normal, Player, &Player::handleJumpEffects, void) {
//      EventBus::getInstance().publish(PlayerJumpEvent(*this));
//      return origin();
//  }

// static std::unique_ptr<EmitterBase> emitterFactory();
// class PlayerJumpEventEmitter : public Emitter<emitterFactory, PlayerJumpEvent> {
//     memory::HookRegistrar<PlayerJumpEventHook> hook;
// };

// static std::unique_ptr<EmitterBase> emitterFactory() { return std::make_unique<PlayerJumpEventEmitter>(); }

} // namespace ll::event::inline player
