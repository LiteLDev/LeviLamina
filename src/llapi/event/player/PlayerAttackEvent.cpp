#include <llapi/event/EventManager.h>
#include <llapi/event/player/PlayerAttackEvent.h>
#include <llapi/memory/Hook.h>

#include <llapi/mc/ServerPlayer.hpp>

#include <llapi/event/impl/EventImpl.inl>
#include <llapi/event/impl/EventManagerImpl.inl>
#include <llapi/event/impl/ListenerImpl.inl>

namespace ll::event::player {

PlayerAttackEvent::PlayerAttackEvent(Player* player, Player* target, float damage)
: player(player), target(target), damage(damage) {}

LL_GETTER_IMPL(PlayerAttackEvent, Player*, player, getPlayer)
LL_GETTER_IMPL(PlayerAttackEvent, Player*, target, getTarget)
LL_GETTER_IMPL(PlayerAttackEvent, float, damage, getDamage)
LL_SETTER_IMPL(PlayerAttackEvent, float, damage, setDamage)

struct {
    Player* player{};
    Actor*  target{};
    bool    cancelled = false;
} currentAttackingPlayer;

LL_AUTO_TYPED_INSTANCE_HOOK(
    PlayerAttackEventHook1,
    Player,
    HookPriority::Normal,
    "?attack@Player@@UEAA_NAEAVActor@@AEBW4ActorDamageCause@@@Z",
    bool,
    Actor*           ac,
    ActorDamageCause cause
) {
    currentAttackingPlayer.player = this;
    currentAttackingPlayer.target = ac;
    auto res                      = origin(ac, cause);
    if (currentAttackingPlayer.cancelled) {
        currentAttackingPlayer.cancelled = false;
        return false;
    }
    return res;
}
LL_AUTO_TYPED_INSTANCE_HOOK(
    PlayerAttackEventHook2,
    Actor,
    HookPriority::Normal,
    "?calculateAttackDamage@Actor@@QEAAMAEAV1@@Z",
    float,
    Actor* other
) {
    auto damage = origin(other);
    if ((Actor*)currentAttackingPlayer.player == this && currentAttackingPlayer.target == other) {
        PlayerAttackEvent event((Player*)this, (Player*)other, damage);
        currentAttackingPlayer.player = nullptr;
        currentAttackingPlayer.target = nullptr;
        EventManager<PlayerAttackEvent>::fireEvent(event);
        if (event.isCancelled()) {
            currentAttackingPlayer.cancelled = true;
            return 0;
        }
        return event.getDamage();
    }
    return damage;
}

} // namespace ll::event::player

LL_EVENT_IMPL(player::PlayerAttackEvent)
