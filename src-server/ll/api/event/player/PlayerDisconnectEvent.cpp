#include "ll/api/event/player/PlayerDisconnectEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

namespace ll::event::inline player {

LL_TYPE_INSTANCE_HOOK(PlayerDisconnectEventHook, HookPriority::Normal, ServerPlayer, &ServerPlayer::disconnect, void) {
    EventBus::getInstance().publish(PlayerDisconnectEvent{*this});
    origin();
}

static std::unique_ptr<EmitterBase> emitterFactory();
class PlayerDisconnectEventEmitter : public Emitter<emitterFactory, PlayerDisconnectEvent> {
    memory::HookRegistrar<PlayerDisconnectEventHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory() { return std::make_unique<PlayerDisconnectEventEmitter>(); }

} // namespace ll::event::inline player
