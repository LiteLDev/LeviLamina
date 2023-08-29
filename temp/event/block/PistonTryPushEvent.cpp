#include "liteloader/api/event/EventManager.h"
#include "liteloader/api/event/block/PistonTryPushEvent.h"
#include "liteloader/api/memory/Hook.h"

#include "mc/Block.hpp"
#include "mc/BlockPos.hpp"
#include "mc/BlockSource.hpp"
#include "mc/Level.hpp"
#include "mc/PistonBlockActor.hpp"

#include "liteloader/api/event/impl/EventImpl.inl"
#include "liteloader/api/event/impl/EventManagerImpl.inl"
#include "liteloader/api/event/impl/ListenerImpl.inl"

namespace ll::event::block {

PistonTryPushEvent::PistonTryPushEvent(
    BlockInstance const& pistonBlockInstance,
    BlockInstance const& targetBlockInstance
)
: pistonBlockInstance(pistonBlockInstance), targetBlockInstance(targetBlockInstance) {}

LL_GETTER_IMPL(PistonTryPushEvent, BlockInstance, pistonBlockInstance, getPistonBlockInstance)
LL_GETTER_IMPL(PistonTryPushEvent, BlockInstance, targetBlockInstance, getTargetBlockInstance)

LL_AUTO_TYPED_INSTANCE_HOOK(
    PistonTryPushEventHook,
    PistonBlockActor,
    HookPriority::Normal,
    "?_attachedBlockWalker@PistonBlockActor@@AEAA_NAEAVBlockSource@@AEBVBlockPos@@EE@Z",
    bool,
    BlockSource* blockSource,
    BlockPos*    blockPos,
    char         a3,
    char         a4
) {
    using EventManager = EventManager<PistonTryPushEvent>;

    auto targetBlockInstance = Level::getBlockInstance(blockPos, blockSource);
    if (targetBlockInstance.getBlock()->getTypeName() == "minecraft:air")
        return origin(blockSource, blockPos, a3, a4);

    auto pistonBlockInstance = Level::getBlockInstance(this->getPosition(), blockSource);

    PistonTryPushEvent tryPushEvent(pistonBlockInstance, targetBlockInstance);
    EventManager::fireEvent(tryPushEvent);
    if (tryPushEvent.isCancelled()) {
        return false;
    }

    return origin(blockSource, blockPos, a3, a4);
}

} // namespace ll::event::block

LL_EVENT_IMPL(block::PistonTryPushEvent)
