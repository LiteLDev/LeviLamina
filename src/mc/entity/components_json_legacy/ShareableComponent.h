#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ItemActor;
class ItemStack;
class ShareableDefinition;
// clang-format on

class ShareableComponent {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI int _getItemPriority(::ShareableDefinition const& shareable, ::ItemStack const& item) const;

    MCAPI int _getMaxItemAmount(::ShareableDefinition const& shareable, ::ItemStack const& item) const;

    MCAPI int _getPickupLimitAmount(::ShareableDefinition const& shareable, ::ItemStack const& item) const;

    MCAPI bool _shouldReplaceItem(
        ::ItemStack const&           itemToReplace,
        ::ItemStack const&           newItem,
        ::ShareableDefinition const& shareable,
        bool                         canPickupAnyItem
    ) const;

    MCAPI int getCountToPickUp(::Actor const& owner, ::ItemStack const& item) const;

    MCAPI int getSlotToSwap(::Actor& owner, ::ItemActor const& itemActor) const;

    MCAPI int
    hasSurplus(::Actor& owner, ::ItemStack const& item, ::ItemStack& resultStack, bool includeStackSizeofItem) const;

    MCAPI bool itemBelongsInInventory(::Actor& owner, ::ItemStack const& item, bool canPickupToHandOrEquipment) const;

    MCAPI int wantsMore(::Actor const& owner, ::ItemStack const& item) const;

    MCAPI bool
    willPickup(::Actor& owner, ::ItemStack const& item, bool canPickupAnyItem, bool canPickupToHandOrEquipment) const;
    // NOLINTEND
};
