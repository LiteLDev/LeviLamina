#include "ll/api/event/player/PlayerStartDestroyBlockEvent.h"
#include "ll/api/event/EventManager.h"
#include "ll/api/memory/Hook.h"

#include "mc/Level.hpp"
#include "mc/Player.hpp"

#include "ll/api/event/impl/EventImpl.inl"
#include "ll/api/event/impl/EventManagerImpl.inl"
#include "ll/api/event/impl/ListenerImpl.inl"

namespace ll::event::player {

PlayerStartDestroyBlockEvent::PlayerStartDestroyBlockEvent(Player* player, BlockInstance const& blockInstance)
: player(player), blockInstance(blockInstance) {}

LL_GETTER_IMPL(PlayerStartDestroyBlockEvent, Player*, player, getPlayer)
LL_GETTER_IMPL(PlayerStartDestroyBlockEvent, BlockInstance, blockInstance, getBlockInstance)

using EventManager = EventManager<PlayerStartDestroyBlockEvent>;

LL_AUTO_INSTANCE_HOOK(
    PlayerStartDestroyBlockEventHook,
    HookPriority::Normal,
    "?sendBlockDestructionStarted@BlockEventCoordinator@@QEAAXAEAVPlayer@@AEBVBlockPos@@@Z",
    void,
    Player*   pl,
    BlockPos* bp
) {
    PlayerStartDestroyBlockEvent event(pl, Level::getBlockInstance(bp, Level::getBlockSource(pl)));
    EventManager::fireEvent(event);
    return origin(pl, bp);
}

} // namespace ll::event::player

LL_EVENT_IMPL(player::PlayerStartDestroyBlockEvent)
