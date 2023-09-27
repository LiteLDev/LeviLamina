#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/TypedServerNetId.h"
#include "mc/world/item/components/ItemStackNetIdTag.h"

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
    // symbol: ??0ItemStackResponseSlotInfo@@QEAA@$$QEAU0@@Z
    MCAPI ItemStackResponseSlotInfo(struct ItemStackResponseSlotInfo&&);

    // symbol: ??1ItemStackResponseSlotInfo@@QEAA@XZ
    MCAPI ~ItemStackResponseSlotInfo();

    // NOLINTEND
};
