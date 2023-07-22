#include "liteloader/api/event/EventManager.h"
#include "liteloader/api/event/block/BlockChangedEvent.h"

#include "mc/Block.hpp"
#include "mc/BlockSource.hpp"
#include "mc/Level.hpp"

#include "liteloader/api/memory/Hook.h"

#include "liteloader/api/event/impl/EventImpl.inl"
#include "liteloader/api/event/impl/EventManagerImpl.inl"
#include "liteloader/api/event/impl/ListenerImpl.inl"

namespace ll::event::block {

BlockChangedEvent::BlockChangedEvent(BlockInstance const& previousBlockInstance, BlockInstance const& newBlockInstance)
: previousBlockInstance(previousBlockInstance), newBlockInstance(newBlockInstance) {}

LL_GETTER_IMPL(BlockChangedEvent, BlockInstance, previousBlockInstance, getPreviousBlockInstance)
LL_GETTER_IMPL(BlockChangedEvent, BlockInstance, newBlockInstance, getNewBlockInstance)

LL_AUTO_TYPED_INSTANCE_HOOK(
    BlockChangedEventHook,
    BlockSource,
    HookPriority::Normal,
    "?_blockChanged@BlockSource@@IEAAXAEBVBlockPos@@IAEBVBlock@@1HPEBUActorBlockSyncMessage@@PEAVActor@@@Z",
    void,
    BlockPos* blockPos,
    int       a3,
    Block*    afterBlock,
    Block*    beforeBlock,
    int       a6,
    void*     a7,
    Actor*    actor
) {
    using EventManager = EventManager<BlockChangedEvent>;

    int  dimId                 = this->getDimensionId();
    auto previousBlockInstance = BlockInstance::createBlockInstance(beforeBlock, *blockPos, dimId);
    auto newBlockInstance      = BlockInstance::createBlockInstance(afterBlock, *blockPos, dimId);

    BlockChangedEvent event(previousBlockInstance, newBlockInstance);
    EventManager::fireEvent(event);

    if (event.isCancelled()) {
        return;
    }
    return origin(blockPos, a3, afterBlock, beforeBlock, a6, a7, actor);
}

} // namespace ll::event::block

LL_EVENT_IMPL(block::BlockChangedEvent)
