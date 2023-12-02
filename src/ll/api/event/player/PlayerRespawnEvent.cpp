#include "ll/api/event/player/PlayerRespawnEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"


#include "mc/world/actor/player/Player.h"

namespace ll::event::inline player {

LL_TYPED_INSTANCE_HOOK(PlayerRespawnEventHook, HookPriority::Normal, Player, "?respawn@Player@@UEAAXXZ", void) {
    // If the player returns from end or just joins server, his health will > 0
    if (this->getHealth() <= 0) {
        EventBus::getInstance().publish(PlayerRespawnEvent(*this));
    }
    origin();
}

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&);
class PlayerRespawnEventEmitter : public Emitter<PlayerRespawnEvent, emitterFactory> {
    memory::HookAutoRegister<PlayerRespawnEventHook> hook;

public:
    PlayerRespawnEventEmitter()=default;
    ~PlayerRespawnEventEmitter() override=default;
};

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&) {
    return std::make_unique<PlayerRespawnEventEmitter>();
}

} // namespace ll::event::inline player
