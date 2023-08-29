#include "liteloader/api/event/EventManager.h"
#include "liteloader/api/event/block/PistonPushEvent.h"
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

PistonPushEvent::PistonPushEvent(BlockInstance const& pistonBlockInstance, BlockInstance const& targetBlockInstance)
: pistonBlockInstance(pistonBlockInstance), targetBlockInstance(targetBlockInstance) {}

LL_GETTER_IMPL(PistonPushEvent, BlockInstance, pistonBlockInstance, getPistonBlockInstance)
LL_GETTER_IMPL(PistonPushEvent, BlockInstance, targetBlockInstance, getTargetBlockInstance)

LL_AUTO_TYPED_INSTANCE_HOOK(
    PistonPushEventHook,
    PistonBlockActor,
    HookPriority::Normal,
    "?_attachedBlockWalker@PistonBlockActor@@AEAA_NAEAVBlockSource@@AEBVBlockPos@@EE@Z",
    bool,
    BlockSource* blockSource,
    BlockPos*    blockPos,
    char         a3,
    char         a4
) {
    using EventManager = EventManager<PistonPushEvent>;

    auto result = origin(blockSource, blockPos, a3, a4);
    if (!result)
        return false;

    auto targetBlockInstance = Level::getBlockInstance(blockPos, blockSource);
    if (targetBlockInstance.getBlock()->getTypeName() == "minecraft:air")
        return true;

    auto pistonBlockInstance = Level::getBlockInstance(this->getPosition(), blockSource);

    PistonPushEvent pushEvent(pistonBlockInstance, targetBlockInstance);
    EventManager::fireEvent(pushEvent);

    return true;
}

} // namespace ll::event::block

LL_EVENT_IMPL(block::PistonPushEvent)
