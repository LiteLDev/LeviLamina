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

    // vIndex: 46
    virtual bool add(::ItemStack& item) /*override*/;

    // vIndex: 47
    virtual bool canAdd(::ItemStack const& item) const /*override*/;

    // vIndex: 53
    virtual int getFirstEmptySlot() const;

    // vIndex: 26
    virtual int getEmptySlotsCount() const /*override*/;

    // vIndex: 54
    virtual void setContainerSize(int size);

    // vIndex: 12
    virtual void setItem(int slot, ::ItemStack const& item) /*override*/;

    // vIndex: 13
    virtual void setItemWithForceBalance(int slot, ::ItemStack const& item, bool forceBalanced) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void dropSlot(int slot, bool onlyClearContainer, bool dropAll, bool randomly);

    MCAPI void setupDefault();

    MCAPI void tick(int selectedSlot);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $init();

    MCAPI bool $add(::ItemStack& item);

    MCAPI bool $canAdd(::ItemStack const& item) const;

    MCAPI int $getFirstEmptySlot() const;

    MCFOLD int $getEmptySlotsCount() const;

    MCAPI void $setContainerSize(int size);

    MCFOLD void $setItem(int slot, ::ItemStack const& item);

    MCAPI void $setItemWithForceBalance(int slot, ::ItemStack const& item, bool forceBalanced);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
