#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InventoryTransactionItemGroup {
public:
    InventoryTransactionItemGroup() = delete;


    int                                mItemId;   // this+0x0
    int                                mItemAux;  // this+0x4
    std::unique_ptr<class CompoundTag> mTag;      // this+0x8
    int                                mCount;    // this+0x10
    bool                               mOverflow; // this+0x14

public:
    // NOLINTBEGIN
    MCAPI class ItemStack getItemInstance() const;

    MCAPI class InventoryTransactionItemGroup& operator=(class InventoryTransactionItemGroup const&);

    MCAPI ~InventoryTransactionItemGroup();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
