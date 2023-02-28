#include <llapi/event/EventManager.h>
#include <llapi/event/player/PlayerSneakEvent.h>
#include <llapi/memory/Hook.h>

#include <llapi/mc/Actor.hpp>
#include <llapi/mc/Player.hpp>

#include <llapi/event/impl/EventImpl.inl>
#include <llapi/event/impl/EventManagerImpl.inl>
#include <llapi/event/impl/ListenerImpl.inl>
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
