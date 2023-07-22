#include "liteloader/api/event/EventManager.h"
#include "liteloader/api/event/block/BlockInteractEvent.h"
#include "liteloader/api/memory/Hook.h"

#include "mc/Level.hpp"

#include "liteloader/api/event/impl/EventImpl.inl"
#include "liteloader/api/event/impl/EventManagerImpl.inl"
#include "liteloader/api/event/impl/ListenerImpl.inl"

namespace ll::event::block {

BlockInteractEvent::BlockInteractEvent(BlockInstance const& blockInstance, Player* player)
: blockInstance(blockInstance), player(player) {}

LL_GETTER_IMPL(BlockInteractEvent, Player*, player, getPlayer)
LL_GETTER_IMPL(BlockInteractEvent, BlockInstance, blockInstance, getBlockInstance)

LL_AUTO_INSTANCE_HOOK(
    BlockInteractEventHook,
    HookPriority::Normal,
    "?onBlockInteractedWith@VanillaServerGameplayEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVBlockPos@@@Z",
    unsigned short,
    Player*   player,
    BlockPos* blockPos
) {
    BlockInteractEvent event(Level::getBlockInstance(*blockPos, player->getDimensionId()), player);
    EventManager<BlockInteractEvent>::fireEvent(event);
    if (event.isCancelled()) {
        return 0;
    }
    return origin(player, blockPos);
}

} // namespace ll::event::block

LL_EVENT_IMPL(block::BlockInteractEvent)
