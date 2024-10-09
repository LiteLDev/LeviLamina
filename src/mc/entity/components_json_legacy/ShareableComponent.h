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
    MCAPI int getCountToPickUp(class Actor const& owner, class ItemActor const& itemActor) const;

    MCAPI int getCountToPickUp(class Actor const& owner, class ItemStack const& item) const;

    MCAPI int getSlotToSwap(class Actor& owner, class ItemActor const& itemActor) const;

    MCAPI int hasSurplus(class Actor& owner, class ItemStack const& item, bool includeStackSizeofItem) const;

    MCAPI int hasSurplus(
        class Actor&           owner,
        class ItemStack const& item,
        class ItemStack&       resultStack,
        bool                   includeStackSizeofItem
    ) const;

    MCAPI bool
    itemBelongsInInventory(class Actor& owner, class ItemStack const& item, bool canPickupToHandOrEquipment) const;

    MCAPI int wantsMore(class Actor const& owner, class ItemStack const& item) const;

    MCAPI bool
    willPickup(class Actor& owner, class ItemStack const& item, bool canPickupAnyItem, bool canPickupToHandOrEquipment)
        const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI int _getItemPriority(class ShareableDefinition const& shareable, class ItemStack const& item) const;

    MCAPI bool _shouldReplaceItem(
        class ItemStack const&           itemToReplace,
        class ItemStack const&           newItem,
        class ShareableDefinition const& shareable,
        bool                             canPickupAnyItem
    ) const;

    // NOLINTEND
};
