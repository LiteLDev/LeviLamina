#include <llapi/event/EventManager.h>
#include <llapi/event/player/PlayerSwingEvent.h>
#include <llapi/memory/Hook.h>

#include <llapi/mc/AnimatePacket.hpp>
#include <llapi/mc/Player.hpp>
#include <llapi/mc/ServerNetworkHandler.hpp>
#include <llapi/mc/ServerPlayer.hpp>

#include <llapi/event/impl/EventImpl.inl>
#include <llapi/event/impl/EventManagerImpl.inl>
#include <llapi/event/impl/ListenerImpl.inl>

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
