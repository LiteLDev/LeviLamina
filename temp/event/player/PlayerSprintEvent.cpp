#include "ll/api/event/player/PlayerSprintEvent.h"
#include "ll/api/event/EventManager.h"
#include "ll/api/memory/Hook.h"

#include "mc/Mob.hpp"
#include "mc/Player.hpp"

#include "ll/api/event/impl/EventImpl.inl"
#include "ll/api/event/impl/EventManagerImpl.inl"
#include "ll/api/event/impl/ListenerImpl.inl"

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
