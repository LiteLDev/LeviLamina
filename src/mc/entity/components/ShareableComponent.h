#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ShareableComponent {
public:
    // prevent constructor by default
    ShareableComponent& operator=(ShareableComponent const&);
    ShareableComponent(ShareableComponent const&);
    ShareableComponent();

public:
    // NOLINTBEGIN
    // symbol: ?getCountToPickUp@ShareableComponent@@QEBAHAEBVActor@@AEBVItemActor@@@Z
    MCAPI int getCountToPickUp(class Actor const& owner, class ItemActor const& itemActor) const;

    // symbol: ?getCountToPickUp@ShareableComponent@@QEBAHAEBVActor@@AEBVItemStack@@@Z
    MCAPI int getCountToPickUp(class Actor const& owner, class ItemStack const& item) const;

    // symbol: ?getSlotToSwap@ShareableComponent@@QEBAHAEAVActor@@AEBVItemActor@@@Z
    MCAPI int getSlotToSwap(class Actor& owner, class ItemActor const& itemActor) const;

    // symbol: ?hasSurplus@ShareableComponent@@QEBAHAEAVActor@@AEBVItemStack@@_N@Z
    MCAPI int hasSurplus(class Actor& owner, class ItemStack const& item, bool includeStackSizeofItem) const;

    // symbol: ?hasSurplus@ShareableComponent@@QEBAHAEAVActor@@AEBVItemStack@@AEAV3@_N@Z
    MCAPI int hasSurplus(
        class Actor&           owner,
        class ItemStack const& item,
        class ItemStack&       resultStack,
        bool                   includeStackSizeofItem
    ) const;

    // symbol: ?itemBelongsInInventory@ShareableComponent@@QEBA_NAEAVActor@@AEBVItemStack@@_N@Z
    MCAPI bool
    itemBelongsInInventory(class Actor& owner, class ItemStack const& item, bool canPickupToHandOrEquipment) const;

    // symbol: ?wantsMore@ShareableComponent@@QEBAHAEBVActor@@AEBVItemStack@@@Z
    MCAPI int wantsMore(class Actor const& owner, class ItemStack const& item) const;

    // symbol: ?willPickup@ShareableComponent@@QEBA_NAEAVActor@@AEBVItemStack@@_N2@Z
    MCAPI bool
    willPickup(class Actor& owner, class ItemStack const& item, bool canPickupAnyItem, bool canPickupToHandOrEquipment)
        const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_getItemPriority@ShareableComponent@@AEBAHAEBVShareableDefinition@@AEBVItemStack@@@Z
    MCAPI int _getItemPriority(class ShareableDefinition const& shareable, class ItemStack const& item) const;

    // symbol: ?_shouldReplaceItem@ShareableComponent@@AEBA_NAEBVItemStack@@0AEBVShareableDefinition@@_N@Z
    MCAPI bool _shouldReplaceItem(
        class ItemStack const&           itemToReplace,
        class ItemStack const&           newItem,
        class ShareableDefinition const& shareable,
        bool                             canPickupAnyItem
    ) const;

    // NOLINTEND
};
