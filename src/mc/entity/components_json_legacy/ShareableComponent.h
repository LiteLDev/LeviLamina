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
    MCAPI int getCountToPickUp(::Actor const& owner, ::ItemStack const& item) const;

    MCAPI int getSlotToSwap(::Actor const& owner, ::ItemActor const& itemActor) const;

    MCAPI int hasSurplus(
        ::Actor const&     owner,
        ::ItemStack const& item,
        ::ItemStack&       resultStack,
        bool               includeStackSizeofItem
    ) const;

    MCAPI bool
    itemBelongsInInventory(::Actor const& owner, ::ItemStack const& item, bool canPickupToHandOrEquipment) const;

    MCAPI int wantsMore(::Actor const& owner, ::ItemStack const& item) const;

    MCAPI bool willPickup(
        ::Actor const&     owner,
        ::ItemStack const& item,
        bool               canPickupAnyItem,
        bool               canPickupToHandOrEquipment
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool
    _canPickupItem(::ItemStack const& item, ::ItemStack const& carriedItem, int maxAmount, bool singularPickupOnly);

    MCAPI static bool _shouldReplaceItem(
        ::ItemStack const&           itemToReplace,
        ::ItemStack const&           newItem,
        ::ShareableDefinition const& shareable,
        bool                         canPickupAnyItem
    );
    // NOLINTEND
};
