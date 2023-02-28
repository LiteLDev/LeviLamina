#include <llapi/event/EventManager.h>
#include <llapi/event/block/RedStoneUpdateEvent.h>
#include <llapi/memory/Hook.h>

#include <llapi/mc/Level.hpp>

#include <llapi/event/impl/EventImpl.inl>
#include <llapi/event/impl/EventManagerImpl.inl>
#include <llapi/event/impl/ListenerImpl.inl>

namespace ll::event::block {

RedStoneUpdateEvent::RedStoneUpdateEvent(BlockInstance const& blockInstance, bool isActivated, int redStonePower)
: blockInstance(blockInstance), redStonePower(redStonePower), activated(isActivated) {}

LL_GETTER_IMPL(RedStoneUpdateEvent, BlockInstance, blockInstance, getBlockInstance)
LL_GETTER_IMPL(RedStoneUpdateEvent, int, redStonePower, getRedStonePower)
LL_SETTER_IMPL(RedStoneUpdateEvent, int, redStonePower, setRedStonePower)
LL_GETTER_IMPL(RedStoneUpdateEvent, bool, activated, isActivated)

using EventManager = ll::event::EventManager<RedStoneUpdateEvent>;

// 红石粉
LL_AUTO_INSTANCE_HOOK(
    RedStoneUpdateEventHook1,
    HookPriority::Normal,
    "?onRedstoneUpdate@RedStoneWireBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z",
    void,
    BlockSource* blockSource,
    BlockPos*    blockPos,
    int          level,
    bool         isActive
) {
    RedStoneUpdateEvent event(Level::getBlockInstance(blockPos, blockSource), level != 0, level);
    EventManager::fireEvent(event);
    if (event.isCancelled()) {
        return;
    }

    level = event.getRedStonePower();
    return origin(blockSource, blockPos, level, isActive);
}

// 红石火把
LL_AUTO_INSTANCE_HOOK(
    RedStoneUpdateEventHook2,
    HookPriority::Normal,
    "?onRedstoneUpdate@RedstoneTorchBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z",
    void,
    BlockSource* blockSource,
    BlockPos*    blockPos,
    int          level,
    bool         isActive
) {
    RedStoneUpdateEvent event(Level::getBlockInstance(blockPos, blockSource), level != 0, level);
    EventManager::fireEvent(event);
    if (event.isCancelled()) {
        return;
    }

    level = event.getRedStonePower();
    return origin(blockSource, blockPos, level, isActive);
}

// 红石中继器
LL_AUTO_INSTANCE_HOOK(
    RedStoneUpdateEventHook3,
    HookPriority::Normal,
    "?onRedstoneUpdate@DiodeBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z",
    void,
    BlockSource* blockSource,
    BlockPos*    blockPos,
    int          level,
    bool         isActive
) {
    RedStoneUpdateEvent event(Level::getBlockInstance(blockPos, blockSource), level != 0, level);
    EventManager::fireEvent(event);
    if (event.isCancelled()) {
        return;
    }

    level = event.getRedStonePower();
    return origin(blockSource, blockPos, level, isActive);
}

// 红石比较器
LL_AUTO_INSTANCE_HOOK(
    RedStoneUpdateEventHook4,
    HookPriority::Normal,
    "?onRedstoneUpdate@ComparatorBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z",
    void,
    BlockSource* blockSource,
    BlockPos*    blockPos,
    int          level,
    bool         isActive
) {
    RedStoneUpdateEvent event(Level::getBlockInstance(blockPos, blockSource), level != 0, level);
    EventManager::fireEvent(event);
    if (event.isCancelled()) {
        return;
    }

    level = event.getRedStonePower();
    return origin(blockSource, blockPos, level, isActive);
}

} // namespace ll::event::block

LL_EVENT_IMPL(block::RedStoneUpdateEvent)
