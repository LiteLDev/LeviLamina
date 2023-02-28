#include "llapi/event/EventManager.h"
#include "llapi/event/player/PlayerConnectEvent.h"
#include "llapi/memory/Hook.h"

#include "llapi/mc/ConnectionRequest.hpp"
#include "llapi/mc/ServerPlayer.hpp"

#include "llapi/event/impl/EventImpl.inl"
#include "llapi/event/impl/EventManagerImpl.inl"
#include "llapi/event/impl/ListenerImpl.inl"

namespace ll::event::player {

PlayerConnectEvent::PlayerConnectEvent(Player* player) : player(player) {}

LL_GETTER_IMPL(PlayerConnectEvent, Player*, player, getPlayer)

LL_AUTO_INSTANCE_HOOK(
    PlayerConnectEventHook,
    HookPriority::Normal,
    "?sendLoginMessageLocal@ServerNetworkHandler@@QEAAXAEBVNetworkIdentifier@@"
    "AEBVConnectionRequest@@AEAVServerPlayer@@@Z",
    void,
    NetworkIdentifier* ni,
    ConnectionRequest* cr,
    ServerPlayer*      sp
) {
    PlayerConnectEvent event((Player*)sp);
    EventManager<PlayerConnectEvent>::fireEvent(event);
    return origin(ni, cr, sp);
}

} // namespace ll::event::player

LL_EVENT_IMPL(player::PlayerConnectEvent)
