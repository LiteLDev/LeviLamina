#include "ll/api/event/player/PlayerLeaveEvent.h"
#include "ll/api/event/EventManager.h"
#include "ll/api/memory/Hook.h"

#include "mc/ServerPlayer.hpp"

#include "ll/api/event/impl/EventImpl.inl"
#include "ll/api/event/impl/EventManagerImpl.inl"
#include "ll/api/event/impl/ListenerImpl.inl"

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
