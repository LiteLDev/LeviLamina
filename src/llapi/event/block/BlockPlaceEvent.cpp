#include "llapi/event/EventManager.h"
#include "llapi/event/block/BlockPlaceEvent.h"
#include "llapi/memory/Hook.h"

#include "llapi/event/impl/EventImpl.inl"
#include "llapi/event/impl/EventManagerImpl.inl"
#include "llapi/event/impl/ListenerImpl.inl"

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
