#include "ll/api/base/ErrorInfo.h"
#include "ll/api/memory/Hook.h"
#include "ll/api/utils/StacktraceUtils.h"
#include "ll/core/LeviLamina.h"

#include "mc/world/item/registry/ItemStack.h"
#include "mc/world/level/BlockSource.h"
#include "mc/world/level/Level.h"
#include "mc/world/level/block/actor/HopperBlockActor.h"

LL_AUTO_TYPED_INSTANCE_HOOK(
    HopperAddItemHook,
    ll::memory::HookPriority::Normal,
    Hopper,
    &Hopper::_addItem,
    bool,
    BlockSource& blockSource,
    Container&   container,
    ItemStack&   item,
    int          face,
    int          itemCount
) {
    auto size = container.getContainerSize();
    if (size == 0) {
        return false;
    }
    for (int slot = 0; slot < size; ++slot) {
        if (!ll::memory::virtualCall<bool, int, int, ItemStack&>(&container, 25 /*canPushInItem*/, slot, face, item)) {
            continue;
        }
        auto& containerItem = container.getItemNonConst(slot);
        if (containerItem.isValid()) {
            auto maxSize = containerItem.getMaxStackSize();
            if (containerItem.mCount == maxSize || !containerItem.isStackable(item)) {
                continue;
            }
            if (itemCount + containerItem.mCount <= maxSize) {
                item.remove(itemCount);
                containerItem.add(itemCount);
            } else {
                item.remove(maxSize - containerItem.mCount);
                containerItem.set(maxSize);
            }
        } else {
            auto originalCount = item.mCount;
            item.set(itemCount);
            container.setItem(slot, item);
            item.set(originalCount - itemCount);
        }
        if (container.getContainerType() == ContainerType::Hopper) {
            ((HopperBlockActor*)((char*)&container - 200)) // dynamic_cast<HopperBlockActor*>
                ->updateCooldownAfterMove(blockSource.getLevel().getCurrentTick(), mMoveItemSpeed);
        }
        container.setContainerChanged(slot);
        return true;
    }
    return false;
}
