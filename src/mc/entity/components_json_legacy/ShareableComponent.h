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
    MCNAPI int _getItemPriority(::ShareableDefinition const& shareable, ::ItemStack const& item) const;

    MCNAPI int _getMaxItemAmount(::ShareableDefinition const& shareable, ::ItemStack const& item) const;

    MCNAPI int _getPickupLimitAmount(::ShareableDefinition const& shareable, ::ItemStack const& item) const;

    MCNAPI bool _shouldReplaceItem(
        ::ItemStack const&           itemToReplace,
        ::ItemStack const&           newItem,
        ::ShareableDefinition const& shareable,
        bool                         canPickupAnyItem
    ) const;

    MCNAPI int getCountToPickUp(::Actor const& owner, ::ItemStack const& item) const;

    MCNAPI int getSlotToSwap(::Actor& owner, ::ItemActor const& itemActor) const;

    MCNAPI int
    hasSurplus(::Actor& owner, ::ItemStack const& item, ::ItemStack& resultStack, bool includeStackSizeofItem) const;

    MCNAPI bool itemBelongsInInventory(::Actor& owner, ::ItemStack const& item, bool canPickupToHandOrEquipment) const;

    MCNAPI int wantsMore(::Actor const& owner, ::ItemStack const& item) const;

    MCNAPI bool
    willPickup(::Actor& owner, ::ItemStack const& item, bool canPickupAnyItem, bool canPickupToHandOrEquipment) const;
    // NOLINTEND
};
