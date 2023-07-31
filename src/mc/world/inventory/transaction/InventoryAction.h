#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/inventory/transaction/InventorySource.h"
#include "mc/world/item/NetworkItemStackDescriptor.h"
#include "mc/world/item/registry/ItemStack.h"

class InventoryAction {

public:
    // prevent constructor by default
    InventoryAction() = delete;

    InventorySource            mSource;             // this+0x0
    unsigned int               mSlot;               // this+0xC
    NetworkItemStackDescriptor mFromItemDescriptor; // this+0x10
    NetworkItemStackDescriptor mToItemDescriptor;   // this+0x70
    ItemStack                  mFromItem;           // this+0xD0
    ItemStack                  mToItem;             // this+0x170

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0InventoryAction\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI InventoryAction(class InventoryAction const&);
    /**
     * @symbol ??4InventoryAction\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class InventoryAction& operator=(class InventoryAction const&);
    /**
     * @symbol ??1InventoryAction\@\@QEAA\@XZ
     */
    MCAPI ~InventoryAction();
    // NOLINTEND
};
