#include "liteloader/api/event/EventManager.h"
#include "liteloader/api/event/player/PlayerLeaveEvent.h"
#include "liteloader/api/memory/Hook.h"

#include "mc/ServerPlayer.hpp"

#include "liteloader/api/event/impl/EventImpl.inl"
#include "liteloader/api/event/impl/EventManagerImpl.inl"
#include "liteloader/api/event/impl/ListenerImpl.inl"

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
