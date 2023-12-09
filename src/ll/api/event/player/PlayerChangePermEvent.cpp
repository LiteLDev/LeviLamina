#include "ll/api/event/player/PlayerChangePermEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

namespace ll::event::inline player {

CommandPermissionLevel& PlayerChangePermEvent::newPerm() const { return mMewPerm; }

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

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&);
class PlayerChangePermEventEmitter : public Emitter<PlayerChangePermEvent, emitterFactory> {
    memory::HookAutoRegister<PlayerChangePermEventHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&) {
    return std::make_unique<PlayerChangePermEventEmitter>();
}

} // namespace ll::event::inline player
