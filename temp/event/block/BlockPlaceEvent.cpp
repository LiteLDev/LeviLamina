#include "liteloader/api/event/EventManager.h"
#include "liteloader/api/event/block/BlockPlaceEvent.h"
#include "liteloader/api/memory/Hook.h"

#include "liteloader/api/event/impl/EventImpl.inl"
#include "liteloader/api/event/impl/EventManagerImpl.inl"
#include "liteloader/api/event/impl/ListenerImpl.inl"

namespace ll::event::block {

BlockPlaceEvent::BlockPlaceEvent(BlockInstance const& blockInstance, Player* player)
: blockInstance(blockInstance), player(player) {}

LL_GETTER_IMPL(BlockPlaceEvent, Player*, player, getPlayer)
LL_GETTER_IMPL(BlockPlaceEvent, BlockInstance, blockInstance, getBlockInstance)

LL_AUTO_INSTANCE_HOOK(
    BlockPlaceEventHook,
    HookPriority::Normal,
    "?sendBlockPlacedByPlayer@BlockEventCoordinator@@QEAAXAEAVPlayer@@AEBVBlock@@AEBVBlockPos@@_N@Z",
    void,
    Player*   pl,
    Block*    bl,
    BlockPos* bp,
    bool      a5
) {
    origin(pl, bl, bp, a5);
    BlockPlaceEvent event(BlockInstance::createBlockInstance(bl, *bp, pl->getDimensionId()), pl);
    EventManager<BlockPlaceEvent>::fireEvent(event);
}

} // namespace ll::event::block

LL_EVENT_IMPL(block::BlockPlaceEvent)
