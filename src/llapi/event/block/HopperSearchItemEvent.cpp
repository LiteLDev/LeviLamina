#include <llapi/event/EventManager.h>
#include <llapi/event/block/HopperSearchItemEvent.h>
#include <llapi/memory/Hook.h>

#include <llapi/mc/BlockSource.hpp>
#include <llapi/mc/Level.hpp>

#include <llapi/event/impl/EventImpl.inl>
#include <llapi/event/impl/EventManagerImpl.inl>
#include <llapi/event/impl/ListenerImpl.inl>

namespace ll::event::block {

HopperSearchItemEvent::HopperSearchItemEvent(
    bool                 isMinecart,
    BlockInstance const& hopperBlock,
    Vec3 const&          minecartPos,
    int                  dimensionId
)
: isMinecart(isMinecart), hopperBlock(hopperBlock), minecartPos(minecartPos), dimensionId(dimensionId) {}

LL_GETTER_IMPL(HopperSearchItemEvent, bool, isMinecart, getIsMinecart)
LL_GETTER_IMPL(HopperSearchItemEvent, BlockInstance, hopperBlock, getHopperBlock)
LL_GETTER_IMPL(HopperSearchItemEvent, Vec3, minecartPos, getMinecartPos)
LL_GETTER_IMPL(HopperSearchItemEvent, int, dimensionId, getDimensionId)

LL_AUTO_INSTANCE_HOOK(
    HopperSearchItemEventHook,
    HookPriority::Normal,
    "?_tryPullInItemsFromAboveContainer@Hopper@@IEAA_NAEAVBlockSource@@AEAVContainer@@AEBVVec3@@@Z",
    bool,
    BlockSource* blockSource,
    Container*   container,
    Vec3*        pos
) {
    using EventManager = EventManager<HopperSearchItemEvent>;

    bool                  isMinecart = dAccess<bool>(this, 5); // IDA Hopper::Hopper
    HopperSearchItemEvent event(
        isMinecart,
        isMinecart ? BlockInstance() : Level::getBlockInstance(pos->toBlockPos(), blockSource),
        isMinecart ? (*pos) : Vec3(),
        blockSource->getDimensionId()
    );
    EventManager::fireEvent(event);
    if (event.isCancelled())
        return false;

    return origin(blockSource, container, pos);
}

} // namespace ll::event::block

LL_EVENT_IMPL(block::HopperSearchItemEvent)
