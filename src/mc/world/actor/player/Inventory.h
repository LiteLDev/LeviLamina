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

    virtual void setContainerSize(int);

    virtual void setItem(int slot, ::ItemStack const& item) /*override*/;

    virtual void setItemWithForceBalance(int slot, ::ItemStack const& item, bool forceBalanced) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void dropSlot(int slot, bool onlyClearContainer, bool dropAll, bool randomly);
#endif

    MCAPI void setupDefault();

    MCAPI void tick(int selectedSlot);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
