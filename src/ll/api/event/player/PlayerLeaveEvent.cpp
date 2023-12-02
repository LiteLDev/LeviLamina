#include "ll/api/event/player/PlayerLeaveEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

#include "mc/server/ServerPlayer.h"

namespace ll::event::inline player {

LL_TYPED_INSTANCE_HOOK(PlayerLeaveEventHook, HookPriority::Normal, ServerPlayer, &ServerPlayer::disconnect, void) {
    EventBus::getInstance().publish(PlayerLeaveEvent{*this});
    origin();
}

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&);
class PlayerLeaveEventEmitter : public Emitter<PlayerLeaveEvent, emitterFactory> {
    memory::HookAutoRegister<PlayerLeaveEventHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&) {
    return std::make_unique<PlayerLeaveEventEmitter>();
}
} // namespace ll::event::inline player
