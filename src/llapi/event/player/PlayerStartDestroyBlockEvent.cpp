#include <llapi/event/EventManager.h>
#include <llapi/event/player/PlayerStartDestroyBlockEvent.h>
#include <llapi/memory/Hook.h>

#include <llapi/mc/Level.hpp>
#include <llapi/mc/Player.hpp>

#include <llapi/event/impl/EventImpl.inl>
#include <llapi/event/impl/EventManagerImpl.inl>
#include <llapi/event/impl/ListenerImpl.inl>

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
