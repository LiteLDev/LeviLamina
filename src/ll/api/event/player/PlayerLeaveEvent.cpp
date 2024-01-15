#include "ll/api/event/player/PlayerLeaveEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

namespace ll::event::inline player {

LL_TYPE_INSTANCE_HOOK(PlayerLeaveEventHook, HookPriority::Normal, ServerPlayer, &ServerPlayer::disconnect, void) {
    EventBus::getInstance().publish(PlayerLeaveEvent{*this});
    origin();
}

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&);
class PlayerLeaveEventEmitter : public Emitter<emitterFactory, PlayerLeaveEvent> {
    memory::HookRegistrar<PlayerLeaveEventHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&) {
    return std::make_unique<PlayerLeaveEventEmitter>();
}

} // namespace ll::event::inline player
