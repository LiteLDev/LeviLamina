#include "liteloader/api/event/EventManager.h"
#include "liteloader/api/event/block/LiquidSpreadEvent.h"
#include "liteloader/api/memory/Hook.h"

#include "mc/BlockSource.hpp"
#include "mc/LiquidBlockDynamic.hpp"

#include "liteloader/api/event/impl/EventImpl.inl"
#include "liteloader/api/event/impl/EventManagerImpl.inl"
#include "liteloader/api/event/impl/ListenerImpl.inl"

namespace ll::event::block {

LiquidSpreadEvent::LiquidSpreadEvent(BlockInstance const& blockInstance, BlockPos const& target, int dimensionId)
: blockInstance(blockInstance), target(target), dimensionId(dimensionId) {}

LL_GETTER_IMPL(LiquidSpreadEvent, BlockInstance, blockInstance, getBlockInstance)
LL_GETTER_IMPL(LiquidSpreadEvent, BlockPos, target, getTarget)
LL_GETTER_IMPL(LiquidSpreadEvent, int, dimensionId, getDimensionId)

LL_AUTO_TYPED_INSTANCE_HOOK(
    LiquidSpreadEventHook,
    LiquidBlockDynamic,
    HookPriority::Normal,
    "?_canSpreadTo@LiquidBlockDynamic@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@1E@Z",
    bool,
    class BlockSource&    blockSource,
    class BlockPos const& to,
    class BlockPos const& from,
    unsigned char         unk
) {
    using EventManager = ll::event::EventManager<LiquidSpreadEvent>;

    auto result = origin(blockSource, to, from, unk);
    if (!result)
        return false;

    auto dimensionId = blockSource.getDimensionId();
    auto blockInstance =
        BlockInstance::createBlockInstance(const_cast<Block*>(&this->getRenderBlock()), from, dimensionId);
    LiquidSpreadEvent event(blockInstance, to, dimensionId);
    EventManager::fireEvent(event);
    if (event.isCancelled())
        return false;

    return result;
}

} // namespace ll::event::block

LL_EVENT_IMPL(block::LiquidSpreadEvent)
