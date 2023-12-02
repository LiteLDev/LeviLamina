#include "ll/api/event/player/PlayerJoinEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

#include "mc/server/ServerPlayer.h"

namespace ll::event::inline player {

LL_TYPED_INSTANCE_HOOK(
    PlayerJoinEventHook,
    HookPriority::Normal,
    ServerPlayer,
    &ServerPlayer::setLocalPlayerAsInitialized,
    void
) {
    auto event = PlayerJoinEvent(*this);
    EventBus::getInstance().publish(event);
    if (event.isCancelled()) {
        return;
    }
    origin();
}

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&);
class PlayerJoinEventEmitter : public Emitter<PlayerJoinEvent, emitterFactory> {
    memory::HookAutoRegister<PlayerJoinEventHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&) { return std::make_unique<PlayerJoinEventEmitter>(); }
} // namespace ll::event::inline player
