#include "liteloader/api/event/EventManager.h"
#include "liteloader/api/event/player/PlayerConnectEvent.h"
#include "liteloader/api/memory/Hook.h"

#include "mc/ConnectionRequest.hpp"
#include "mc/ServerPlayer.hpp"

#include "liteloader/api/event/impl/EventImpl.inl"
#include "liteloader/api/event/impl/EventManagerImpl.inl"
#include "liteloader/api/event/impl/ListenerImpl.inl"

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
