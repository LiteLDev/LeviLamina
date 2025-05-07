#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/FillingContainer.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
// clang-format on

class Inventory : public ::FillingContainer {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Inventory() /*override*/ = default;

    // vIndex: 1
    virtual void init() /*override*/;

    // vIndex: 43
    virtual bool add(::ItemStack& item) /*override*/;

    // vIndex: 44
    virtual bool canAdd(::ItemStack const& item) const /*override*/;

    // vIndex: 50
    virtual int getFirstEmptySlot() const;

    // vIndex: 26
    virtual int getEmptySlotsCount() const /*override*/;

    // vIndex: 51
    virtual void setContainerSize(int size);

    // vIndex: 12
    virtual void setItem(int slot, ::ItemStack const& item) /*override*/;

    // vIndex: 13
    virtual void setItemWithForceBalance(int slot, ::ItemStack const& item, bool forceBalanced) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void dropSlot(int slot, bool onlyClearContainer, bool dropAll, bool randomly);

    MCNAPI ::std::vector<::ItemStack> getComplexItems();

    MCNAPI void setupDefault();

    MCNAPI void tick(int selectedSlot);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $init();

    MCNAPI bool $add(::ItemStack& item);

    MCNAPI bool $canAdd(::ItemStack const& item) const;

    MCNAPI int $getFirstEmptySlot() const;

    MCNAPI int $getEmptySlotsCount() const;

    MCNAPI void $setContainerSize(int size);

    MCNAPI void $setItem(int slot, ::ItemStack const& item);

    MCNAPI void $setItemWithForceBalance(int slot, ::ItemStack const& item, bool forceBalanced);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
