#include "ll/api/event/player/PlayerChangePermEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

namespace ll::event::inline player {

LL_TYPED_INSTANCE_HOOK(
    PlayerChangePermEventHook,
    HookPriority::Normal,
    Player,
    &Player::setPermissions,
    void,
    CommandPermissionLevel perm
) {
    auto event = PlayerChangePermEvent{*this, perm};
    EventBus::getInstance().publish(event);
    if (event.isCancelled()) {
        return;
    }
    origin(perm);
}

class PlayerChangePermEventEmitter : public Emitter<PlayerChangePermEvent> {
public:
    PlayerChangePermEventEmitter() { PlayerChangePermEventHook::hook(); }
    ~PlayerChangePermEventEmitter() override { PlayerChangePermEventHook::unhook(); }
};

std::unique_ptr<EmitterBase> PlayerChangePermEvent::emitterFactory(ListenerBase&) {
    return std::make_unique<PlayerChangePermEventEmitter>();
}
} // namespace ll::event::inline player
