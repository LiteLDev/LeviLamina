#include "liteloader/api/event/EventManager.h"
#include "liteloader/api/event/player/PlayerOpenContainerScreenEvent.h"
#include "liteloader/api/memory/Hook.h"

#include "mc/Player.hpp"

#include "liteloader/api/event/impl/EventImpl.inl"
#include "liteloader/api/event/impl/EventManagerImpl.inl"
#include "liteloader/api/event/impl/ListenerImpl.inl"


namespace ll::event::player {

PlayerOpenContainerScreenEvent::PlayerOpenContainerScreenEvent(Player* player) : player(player) {}

LL_GETTER_IMPL(PlayerOpenContainerScreenEvent, Player*, player, getPlayer)

using EventManager = EventManager<PlayerOpenContainerScreenEvent>;

LL_AUTO_TYPED_INSTANCE_HOOK(
    PlayerOpenContainerScreenEventHook,
    Player,
    HookPriority::Normal,
    "?canOpenContainerScreen@Player@@UEAA_NXZ",
    bool,
) {
    PlayerOpenContainerScreenEvent event(this);
    EventManager::fireEvent(event);
    return !event.isCancelled() && origin();
}

} // namespace ll::event::player

LL_EVENT_IMPL(player::PlayerOpenContainerScreenEvent)
