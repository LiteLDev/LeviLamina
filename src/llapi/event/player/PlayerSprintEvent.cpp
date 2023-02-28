#include "llapi/event/EventManager.h"
#include "llapi/event/player/PlayerSprintEvent.h"
#include "llapi/memory/Hook.h"

#include "llapi/mc/Mob.hpp"
#include "llapi/mc/Player.hpp"

#include "llapi/event/impl/EventImpl.inl"
#include "llapi/event/impl/EventManagerImpl.inl"
#include "llapi/event/impl/ListenerImpl.inl"

namespace ll::event::player {

PlayerSprintEvent::PlayerSprintEvent(Player* player, bool isSprinting) : player(player), sprinting(isSprinting) {}

LL_GETTER_IMPL(PlayerSprintEvent, Player*, player, getPlayer)
LL_GETTER_IMPL(PlayerSprintEvent, bool, sprinting, isSprinting)

using EventManager = EventManager<PlayerSprintEvent>;

LL_AUTO_TYPED_INSTANCE_HOOK(
    PlayerSprintEventHook,
    Mob,
    HookPriority::Normal,
    "?setSprinting@Mob@@UEAAX_N@Z",
    void,
    bool sprinting
) {
    if (!this->isPlayer() || this->isSprinting() == sprinting)
        return origin(sprinting);

    PlayerSprintEvent event((Player*)this, sprinting);
    EventManager::fireEvent(event);
    if (event.isCancelled())
        return;

    return origin(sprinting);
}

} // namespace ll::event::player

LL_EVENT_IMPL(player::PlayerSprintEvent)
