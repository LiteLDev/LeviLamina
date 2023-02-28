#include "llapi/event/EventManager.h"
#include "llapi/event/player/PlayerLeaveEvent.h"
#include "llapi/memory/Hook.h"

#include "llapi/mc/ServerPlayer.hpp"

#include "llapi/event/impl/EventImpl.inl"
#include "llapi/event/impl/EventManagerImpl.inl"
#include "llapi/event/impl/ListenerImpl.inl"

namespace ll::event::player {

PlayerLeaveEvent::PlayerLeaveEvent(Player* player) : player(player) {}

LL_GETTER_IMPL(PlayerLeaveEvent, Player*, player, getPlayer)

LL_AUTO_TYPED_INSTANCE_HOOK(
    PlayerLeaveEventHook,
    ServerPlayer,
    HookPriority::Normal,
    "?disconnect@ServerPlayer@@QEAAXXZ",
    void,
) {
    PlayerLeaveEvent event(this);
    EventManager<PlayerLeaveEvent>::fireEvent(event);
    return origin();
}

} // namespace ll::event::player

LL_EVENT_IMPL(player::PlayerLeaveEvent)
