#include "ll/api/event/player/PlayerSwingEvent.h"
#include "ll/api/event/EventManager.h"
#include "ll/api/memory/Hook.h"

#include "mc/AnimatePacket.hpp"
#include "mc/Player.hpp"
#include "mc/ServerNetworkHandler.hpp"
#include "mc/ServerPlayer.hpp"

#include "ll/api/event/impl/EventImpl.inl"
#include "ll/api/event/impl/EventManagerImpl.inl"
#include "ll/api/event/impl/ListenerImpl.inl"

namespace ll::event::player {

PlayerSwingEvent::PlayerSwingEvent(Player* player) : player(player) {}

LL_GETTER_IMPL(PlayerSwingEvent, Player*, player, getPlayer)

using EventManager = EventManager<PlayerSwingEvent>;

LL_AUTO_TYPED_INSTANCE_HOOK(
    PlayerSwingEventHook,
    ServerNetworkHandler,
    HookPriority::Normal,
    "?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVAnimatePacket@@@Z",
    void,
    NetworkIdentifier const& networkIdentifier,
    AnimatePacket const&     animatePacket
) {
    if (animatePacket.mAction == AnimatePacket::Action::Swing) {
        PlayerSwingEvent event(getServerPlayer(networkIdentifier));
        EventManager::fireEvent(event);
    }
    return origin(networkIdentifier, animatePacket);
}

} // namespace ll::event::player

LL_EVENT_IMPL(player::PlayerSwingEvent)
