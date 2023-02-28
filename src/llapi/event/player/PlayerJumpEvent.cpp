#include <llapi/event/EventManager.h>
#include <llapi/event/player/PlayerJumpEvent.h>
#include <llapi/memory/Hook.h>

#include <llapi/mc/Player.hpp>

#include <llapi/event/impl/EventImpl.inl>
#include <llapi/event/impl/EventManagerImpl.inl>
#include <llapi/event/impl/ListenerImpl.inl>

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
