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
    virtual ~Inventory() /*override*/ = default;

    virtual void init() /*override*/;

    virtual bool add(::ItemStack& item) /*override*/;

    virtual bool canAdd(::ItemStack const& item) const /*override*/;

    virtual int getFirstEmptySlot() const;

    virtual int getEmptySlotsCount() const /*override*/;

    virtual void setContainerSize(int size);

    virtual void setItem(int modelSlot, ::ItemStack const& item) /*override*/;

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

    MCFOLD void $setItem(int modelSlot, ::ItemStack const& item);

    MCAPI void $setItemWithForceBalance(int slot, ::ItemStack const& item, bool forceBalanced);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
