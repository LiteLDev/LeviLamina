#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/inventory/transaction/InventorySource.h"
#include "mc/world/item/NetworkItemStackDescriptor.h"
#include "mc/world/item/registry/ItemStack.h"

class InventoryAction {
public:
    InventorySource            mSource;             // this+0x0
    uint                       mSlot;               // this+0xC
    NetworkItemStackDescriptor mFromItemDescriptor; // this+0x10
    NetworkItemStackDescriptor mToItemDescriptor;   // this+0x70
    ItemStack                  mFromItem;           // this+0xD0
    ItemStack                  mToItem;             // this+0x170

public:
    InventoryAction(InventorySource source, uint slot, ItemStack const& fromItem, ItemStack const& toItem)
    : mSource(source),
      mSlot(slot),
      mFromItemDescriptor(fromItem),
      mToItemDescriptor(toItem) {
        mFromItem = fromItem;
        mToItem   = toItem;
    };

    InventoryAction(
        InventorySource                   source,
        uint                              slot,
        NetworkItemStackDescriptor const& fromItemDescriptor,
        NetworkItemStackDescriptor const& toItemDescriptor
    )
    : mSource(source),
      mSlot(slot),
      mFromItemDescriptor(fromItemDescriptor),
      mToItemDescriptor(toItemDescriptor),
      mFromItem(),
      mToItem(){};

public:
    // NOLINTBEGIN
    // symbol: ??0InventoryAction@@QEAA@AEBV0@@Z
    MCAPI InventoryAction(class InventoryAction const&);

    // symbol: ??4InventoryAction@@QEAAAEAV0@AEBV0@@Z
    MCAPI class InventoryAction& operator=(class InventoryAction const&);

    // symbol: ??1InventoryAction@@QEAA@XZ
    MCAPI ~InventoryAction();

    // NOLINTEND
};
