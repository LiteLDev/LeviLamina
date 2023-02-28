#include <llapi/event/EventManager.h>
#include <llapi/event/player/PlayerRespawnEvent.h>
#include <llapi/memory/Hook.h>

#include <llapi/mc/Player.hpp>

#include <llapi/event/impl/EventImpl.inl>
#include <llapi/event/impl/EventManagerImpl.inl>
#include <llapi/event/impl/ListenerImpl.inl>

namespace ll::event::player {

PlayerRespawnEvent::PlayerRespawnEvent(Player* player) : player(player) {}

LL_GETTER_IMPL(PlayerRespawnEvent, Player*, player, getPlayer)

using EventManager = EventManager<PlayerRespawnEvent>;

LL_AUTO_TYPED_INSTANCE_HOOK(
    PlayerRespawnEventHook,
    Player,
    HookPriority::Normal,
    "?respawn@Player@@UEAAXXZ",
    void
) {
    // If the player returns from TheEnd, the health will > 0.
    if (getHealth() <= 0) {
        if (!this) {
            return;
        }
        PlayerRespawnEvent event(this);
        EventManager::fireEvent(event);
    }
    origin();
}

} // namespace ll::event::player

LL_EVENT_IMPL(player::PlayerRespawnEvent)
