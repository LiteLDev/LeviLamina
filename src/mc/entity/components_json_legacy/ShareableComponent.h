#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ItemActor;
class ItemDescriptor;
class ItemStack;
class Level;
struct Shareable;
// clang-format on

class ShareableComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::Shareable>> mItems;
    ::ll::TypedStorage<1, 1, bool>                        mShareAllItems;
    ::ll::TypedStorage<4, 4, int>                         mAllItemWantAmount;
    ::ll::TypedStorage<4, 4, int>                         mAllItemSurplusAmount;
    ::ll::TypedStorage<4, 4, int>                         mAllItemMaxAmount;
    ::ll::TypedStorage<1, 1, bool>                        mSingularPickup;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _canPickupItem(
        ::ItemStack const& item,
        ::ItemStack const& carriedItem,
        int                maxAmount,
        bool               singularPickupOnly
    ) const;

    MCAPI bool
    _shouldReplaceItem(::ItemStack const& itemToReplace, ::ItemStack const& newItem, bool canPickupAnyItem) const;

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
    MCAPI static bool _useLegacySurplusRules(::Level const& level);

    MCAPI static bool tryBuildDescriptor(::std::string_view name, ::ItemDescriptor& itemDescriptorOut);
    // NOLINTEND
};
