#include "ll/api/event/player/PlayerLeaveEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

#include "mc/server/ServerPlayer.h"

namespace ll::event::player {

LL_TYPED_INSTANCE_HOOK(PlayerLeaveEventHook, HookPriority::Normal, ServerPlayer, &ServerPlayer::disconnect, void) {
    EventBus::getInstance().publish(PlayerLeaveEvent{*this});
    origin();
}

class PlayerLeaveEventEmitter : public Emitter<PlayerLeaveEvent> {
public:
    PlayerLeaveEventEmitter() { PlayerLeaveEventHook::hook(); }
    ~PlayerLeaveEventEmitter() override { PlayerLeaveEventHook::unhook(); }
};

std::unique_ptr<EmitterBase> PlayerLeaveEvent::emitterFactory(ListenerBase&) {
    return std::make_unique<PlayerLeaveEventEmitter>();
}
} // namespace ll::event::player
