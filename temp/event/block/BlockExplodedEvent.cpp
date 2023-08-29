#include "liteloader/api/event/EventManager.h"
#include "liteloader/api/event/block/BlockExplodedEvent.h"
#include "liteloader/api/memory/Hook.h"

#include "mc/Block.hpp"
#include "mc/BlockSource.hpp"
#include "mc/Level.hpp"

#include "liteloader/api/event/impl/EventImpl.inl"
#include "liteloader/api/event/impl/EventManagerImpl.inl"
#include "liteloader/api/event/impl/ListenerImpl.inl"

namespace ll::event::block {

BlockExplodedEvent::BlockExplodedEvent(BlockInstance const& blockInstance, Actor* explodeSource)
: blockInstance(blockInstance), explodeSource(explodeSource) {}

LL_GETTER_IMPL(BlockExplodedEvent, BlockInstance, blockInstance, getBlockInstance)
LL_GETTER_IMPL(BlockExplodedEvent, Actor*, explodeSource, getExplodeSource)

LL_AUTO_TYPED_INSTANCE_HOOK(
    BlockExplodedEventHook,
    Block,
    HookPriority::Normal,
    "?onExploded@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z",
    void,
    BlockSource* blockSource,
    BlockPos*    blockPos,
    Actor*       actor
) {
    using EventManager = EventManager<BlockExplodedEvent>;

    auto blockInstance = BlockInstance::createBlockInstance(this, *blockPos, blockSource->getDimensionId());
    BlockExplodedEvent event(blockInstance, actor);
    EventManager::fireEvent(event);

    if (event.isCancelled()) {
        return;
    }
    return origin(blockSource, blockPos, actor);
}

} // namespace ll::event::block

LL_EVENT_IMPL(block::BlockExplodedEvent)
