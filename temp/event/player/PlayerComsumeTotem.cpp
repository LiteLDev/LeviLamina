#include "liteloader/api/event/EventManager.h"
#include "liteloader/api/event/player/PlayerConsumeTotemEvent.h"
#include "liteloader/api/memory/Hook.h"

#include "liteloader/api/event/impl/EventImpl.inl"
#include "liteloader/api/event/impl/EventManagerImpl.inl"
#include "liteloader/api/event/impl/ListenerImpl.inl"

namespace ll::event::player {

PlayerConsumeTotemEvent::PlayerConsumeTotemEvent(Player* player) : player(player) {}

LL_GETTER_IMPL(PlayerConsumeTotemEvent, Player*, player, getPlayer)

using EventManager = EventManager<PlayerConsumeTotemEvent>;

LL_AUTO_TYPED_INSTANCE_HOOK(
    PlayerConsumeTotemEventHook,
    Player,
    HookPriority::Normal,
    "?consumeTotem@Player@@UEAA_NXZ",
    void
) {
    PlayerConsumeTotemEvent event(this);
    EventManager::fireEvent(event);
    if (event.isCancelled())
        return;
    return origin();
}

} // namespace ll::event::player

LL_EVENT_IMPL(player::PlayerConsumeTotemEvent)
