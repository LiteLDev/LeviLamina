#include "liteloader/api/event/EventManager.h"
#include "liteloader/api/event/block/HopperPushOutEvent.h"
#include "liteloader/api/event/block/HopperSearchItemEvent.h"
#include "liteloader/api/event/impl/EventImpl.inl"
#include "liteloader/api/event/impl/EventManagerImpl.inl"
#include "liteloader/api/event/impl/ListenerImpl.inl"
#include "mc/BlockSource.hpp"
#include "mc/Level.hpp"
#include "liteloader/api/memory/Hook.h"

namespace ll::event::block {

HopperSearchItemEvent::HopperSearchItemEvent(bool isMinecart, Vec3 const& pos, int dimensionId, ItemStack* itemStack)
: minecart(isMinecart), pos(pos), dimensionId(dimensionId), itemStack(itemStack) {}

LL_GETTER_IMPL(HopperSearchItemEvent, bool, minecart, isMinecart)
LL_GETTER_IMPL(HopperSearchItemEvent, Vec3, pos, getPos)
LL_GETTER_IMPL(HopperSearchItemEvent, int, dimensionId, getDimensionId)
LL_GETTER_IMPL(HopperSearchItemEvent, ItemStack*, itemStack, getItemStack)

HopperPushOutEvent::HopperPushOutEvent(bool isMinecart, Vec3 const& pos, int dimensionId, ItemStack* itemStack)
: minecart(isMinecart), pos(pos), dimensionId(dimensionId), itemStack(itemStack) {}

LL_GETTER_IMPL(HopperPushOutEvent, bool, minecart, isMinecart)
LL_GETTER_IMPL(HopperPushOutEvent, Vec3, pos, getPos)
LL_GETTER_IMPL(HopperPushOutEvent, int, dimensionId, getDimensionId)
LL_GETTER_IMPL(HopperPushOutEvent, ItemStack*, itemStack, getItemStack)

enum { None, Search, Push } hopperState = None;

Vec3* hopperPos;

LL_AUTO_INSTANCE_HOOK(
    HopperAddItemHook,
    HookPriority::Normal,
    "?_addItem@Hopper@@IEAA_NAEAVBlockSource@@AEAVContainer@@AEAVItemStack@@HH@Z",
    bool,
    BlockSource* bs,
    Container*   a3,
    ItemStack*   it,
    int          a5,
    int          a6
) {
    if (hopperState == Search) {
        HopperSearchItemEvent event(dAccess<bool>(this, 5), *hopperPos, bs->getDimensionId(), it);
        EventManager<HopperSearchItemEvent>::fireEvent(event);
        if (event.isCancelled())
            return false;
    } else if (hopperState == Push) {
        HopperPushOutEvent event(dAccess<bool>(this, 5), *hopperPos, bs->getDimensionId(), it);
        EventManager<HopperPushOutEvent>::fireEvent(event);
        if (event.isCancelled())
            return false;
    }
    hopperState = None;
    return origin(bs, a3, it, a5, a6);
}

LL_AUTO_INSTANCE_HOOK(
    HopperTryMoveItemsHook,
    HookPriority::Normal,
    "?_tryMoveItems@Hopper@@IEAA_NAEAVBlockSource@@AEAVContainer@@AEBVVec3@@H_N@Z",
    bool,
    BlockSource* a2,
    Container*   a3,
    Vec3*        a4,
    int          a5,
    bool         a6
) {
    origin(a2, a3, a4, a5, a6);
    return true; // Just in case it does anything
}

/////////////////// HopperSearchItem ///////////////////
LL_AUTO_INSTANCE_HOOK(
    HopperTryPullInItemsFromAboveContainerHook,
    HookPriority::Normal,
    "?_tryPullInItemsFromAboveContainer@Hopper@@IEAA_NAEAVBlockSource@@AEAVContainer@@AEBVVec3@@@Z",
    bool,
    BlockSource* bs,
    Container*   container,
    Vec3*        pos
) {
    hopperPos   = pos;
    hopperState = Search;
    return origin(bs, container, pos);
}

/////////////////// HopperPushOut ///////////////////
LL_AUTO_INSTANCE_HOOK(
    HopperPushOutItemsHook,
    HookPriority::Normal,
    "?_pushOutItems@Hopper@@IEAA_NAEAVBlockSource@@AEAVContainer@@AEBVVec3@@H@Z",
    bool,
    BlockSource* bs,
    Container*   container,
    Vec3*        pos,
    int          a5
) {
    hopperPos   = pos;
    hopperState = Push;
    return origin(bs, container, pos, a5);
}

} // namespace ll::event::block

LL_EVENT_IMPL(block::HopperPushOutEvent)
LL_EVENT_IMPL(block::HopperSearchItemEvent)
