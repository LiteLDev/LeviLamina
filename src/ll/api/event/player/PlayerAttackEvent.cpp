#include "ll/api/event/player/PlayerAttackEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

#include "mc/world/actor/Actor.h"
#include "mc/world/actor/player/Player.h"

namespace ll::event::player {

struct {
    Player* player{};
    Actor*  target{};
    bool    cancelled = false;
} currentAttackingPlayer;

LL_TYPED_INSTANCE_HOOK(
    PlayerAttackEventHook1,
    HookPriority::Normal,
    Player,
    "?attack@Player@@UEAA_NAEAVActor@@AEBW4ActorDamageCause@@@Z",
    bool,
    Actor&                  ac,
    const ActorDamageCause& cause
) {
    currentAttackingPlayer.player = this;
    currentAttackingPlayer.target = &ac;
    auto res                      = origin(ac, cause);
    if (currentAttackingPlayer.cancelled) {
        currentAttackingPlayer.cancelled = false;
        return false;
    }
    return res;
}
LL_TYPED_INSTANCE_HOOK(
    PlayerAttackEventHook2,
    HookPriority::Normal,
    Actor,
    &Actor::calculateAttackDamage,
    float,
    Actor& other
) {
    auto damage = origin(other);
    if ((Actor*)currentAttackingPlayer.player == this && currentAttackingPlayer.target == &other) {
        PlayerAttackEvent event(*(Player*)this, other, damage);
        currentAttackingPlayer.player = nullptr;
        currentAttackingPlayer.target = nullptr;
        EventBus::getInstance().publish(event);
        if (event.isCancelled()) {
            currentAttackingPlayer.cancelled = true;
            return 0;
        }
        return event.damage;
    }
    return damage;
}

class PlayerAttackEventEmitter : public Emitter<PlayerAttackEvent> {
public:
    PlayerAttackEventEmitter() {
        PlayerAttackEventHook1::hook();
        PlayerAttackEventHook2::hook();
    } // namespace ll::event::player
    ~PlayerAttackEventEmitter() override {
        PlayerAttackEventHook1::unhook();
        PlayerAttackEventHook2::unhook();
    }
};

std::unique_ptr<EmitterBase> PlayerAttackEvent::emitterFactory(ListenerBase&) {
    return std::make_unique<PlayerAttackEventEmitter>();
}

} // namespace ll::event::player
