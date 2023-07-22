#include "liteloader/api/event/EventManager.h"
#include "liteloader/api/event/player/PlayerSneakEvent.h"
#include "liteloader/api/memory/Hook.h"

#include "mc/Actor.hpp"
#include "mc/Player.hpp"

#include "liteloader/api/event/impl/EventImpl.inl"
#include "liteloader/api/event/impl/EventManagerImpl.inl"
#include "liteloader/api/event/impl/ListenerImpl.inl"
#include <utility>

namespace ll::event::player {

PlayerSneakEvent::PlayerSneakEvent(Player* player, bool sneaking) : player(player), sneaking(sneaking) {}

LL_GETTER_IMPL(PlayerSneakEvent, Player*, player, getPlayer)
LL_GETTER_IMPL(PlayerSneakEvent, bool, sneaking, isSneaking)
LL_SETTER_IMPL(PlayerSneakEvent, bool, sneaking, setSneaking)

using EventManager = EventManager<PlayerSneakEvent>;

LL_AUTO_INSTANCE_HOOK(
    PlayerSneakEventHook,
    HookPriority::Normal,
    "?sendActorSneakChanged@ActorEventCoordinator@@QEAAXAEAVActor@@_N@Z",
    void,
    Actor* ac,
    bool   sneaking
) {
    if (auto player = dynamic_cast<Player*>(ac)) {
        PlayerSneakEvent event(player, sneaking);
        EventManager::fireEvent(event);
        sneaking = event.isSneaking();
    }
    return origin(ac, sneaking);
}

} // namespace ll::event::player

LL_EVENT_IMPL(player::PlayerSneakEvent)
