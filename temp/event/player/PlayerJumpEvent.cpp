#include "ll/api/event/player/PlayerJumpEvent.h"
#include "ll/api/event/EventManager.h"
#include "ll/api/memory/Hook.h"

#include "mc/Player.hpp"

#include "ll/api/event/impl/EventImpl.inl"
#include "ll/api/event/impl/EventManagerImpl.inl"
#include "ll/api/event/impl/ListenerImpl.inl"

namespace ll::event::player {

PlayerJumpEvent::PlayerJumpEvent(Player* player) : player(player) {}

LL_GETTER_IMPL(PlayerJumpEvent, Player*, player, getPlayer)

LL_AUTO_TYPED_INSTANCE_HOOK(
    PlayerJumpEventHook,
    Player,
    HookPriority::Normal,
    "?jumpFromGround@Player@@UEAAXXZ",
    void
) {
    PlayerJumpEvent event(this);
    EventManager<PlayerJumpEvent>::fireEvent(event);
    return origin();
}

} // namespace ll::event::player

LL_EVENT_IMPL(player::PlayerJumpEvent)
