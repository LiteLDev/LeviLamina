#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/inventory/network/ItemStackNetIdTag.h"
#include "mc/world/inventory/network/TypedServerNetId.h"

struct ItemStackResponseSlotInfo {
public:
    uchar          mRequestedSlot;        // this+0x0
    uchar          mSlot;                 // this+0x1
    uchar          mAmount;               // this+0x2
    ItemStackNetId mItemStackNetId;       // this+0x4
    std::string    mCustomName;           // this+0x8
    short          mDurabilityCorrection; // this+0x28

    // prevent constructor by default
    ItemStackResponseSlotInfo& operator=(ItemStackResponseSlotInfo const&);
    ItemStackResponseSlotInfo(ItemStackResponseSlotInfo const&);
    ItemStackResponseSlotInfo();

public:
    // NOLINTBEGIN
    MCAPI ItemStackResponseSlotInfo(struct ItemStackResponseSlotInfo&&);

    MCAPI ~ItemStackResponseSlotInfo();

    // NOLINTEND
};
