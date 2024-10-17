#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/FillingContainer.h"

class Inventory : public ::FillingContainer {
public:
    // prevent constructor by default
    Inventory& operator=(Inventory const&);
    Inventory(Inventory const&);
    Inventory();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Inventory() = default;

    // vIndex: 1
    virtual void init();

    // vIndex: 12
    virtual void setItem(int slot, class ItemStack const& item);

    // vIndex: 13
    virtual void setItemWithForceBalance(int slot, class ItemStack const& item, bool forceBalanced);

    // vIndex: 26
    virtual int getEmptySlotsCount() const;

    // vIndex: 41
    virtual bool add(class ItemStack& item);

    // vIndex: 42
    virtual bool canAdd(class ItemStack const& item) const;

    // vIndex: 46
    virtual int getFirstEmptySlot() const;

    // vIndex: 47
    virtual void setContainerSize(int size);

    MCAPI explicit Inventory(class Player* player);

    MCAPI void dropSlot(int slot, bool onlyClearContainer, bool dropAll, bool randomly);

    MCAPI std::vector<class ItemStack> getComplexItems();

    MCAPI void setupDefault();

    MCAPI void tick(int selectedSlot);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(class Player* player);

    MCAPI bool add$(class ItemStack& item);

    MCAPI bool canAdd$(class ItemStack const& item) const;

    MCAPI int getEmptySlotsCount$() const;

    MCAPI int getFirstEmptySlot$() const;

    MCAPI void init$();

    MCAPI void setContainerSize$(int size);

    MCAPI void setItem$(int slot, class ItemStack const& item);

    MCAPI void setItemWithForceBalance$(int slot, class ItemStack const& item, bool forceBalanced);

    // NOLINTEND
};
