#include "ll/api/event/player/PlayerDieEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"


#include "mc/world/actor/player/Player.h"

namespace ll::event::inline player {

LL_TYPED_INSTANCE_HOOK(
    PlayerDieEventHook,
    HookPriority::Normal,
    Player,
    "?die@Player@@UEAAXAEBVActorDamageSource@@@Z",
    void,
    ActorDamageSource const& source
) {
    EventBus::getInstance().publish(PlayerDieEvent(*this, source));
    origin(source);
}

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&);
class PlayerDieEventEmitter : public Emitter<PlayerDieEvent, emitterFactory> {
    memory::HookAutoRegister<PlayerDieEventHook> hook;

public:
    PlayerDieEventEmitter()=default;
    ~PlayerDieEventEmitter() override=default;
};

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&) {
    return std::make_unique<PlayerDieEventEmitter>();
}

} // namespace ll::event::inline player
