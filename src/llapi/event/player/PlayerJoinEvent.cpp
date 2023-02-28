#include "llapi/event/EventManager.h"
#include "llapi/event/player/PlayerJoinEvent.h"
#include "llapi/memory/Hook.h"

#include "llapi/mc/ServerPlayer.hpp"

#include "llapi/event/impl/EventImpl.inl"
#include "llapi/event/impl/EventManagerImpl.inl"
#include "llapi/event/impl/ListenerImpl.inl"

namespace ll::event::player {

PlayerJoinEvent::PlayerJoinEvent(Player* player) : player(player) {}

LL_GETTER_IMPL(PlayerJoinEvent, Player*, player, getPlayer)

LL_AUTO_TYPED_INSTANCE_HOOK(
    PlayerJoinEventHook,
    ServerPlayer,
    HookPriority::Normal,
    "?setLocalPlayerAsInitialized@ServerPlayer@@QEAAXXZ",
    bool,
) {
    PlayerJoinEvent event(this);
    EventManager<PlayerJoinEvent>::fireEvent(event);
    if (event.isCancelled()) {
        return false;
    }
    return origin();
}

} // namespace ll::event::player

LL_EVENT_IMPL(player::PlayerJoinEvent)
