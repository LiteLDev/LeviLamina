#pragma once

#include "../network/TypedServerNetId.h"
#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/item/components/ItemStackNetIdTag.h"

struct ItemStackResponseSlotInfo {

public:
    unsigned char                               mRequestedSlot;        // this+0x0
    unsigned char                               mSlot;                 // this+0x1
    unsigned char                               mAmount;               // this+0x2
    TypedServerNetId<ItemStackNetIdTag, int, 0> mItemStackNetId;       // this+0x4
    std::string                                 mCustomName;           // this+0x8
    short                                       mDurabilityCorrection; // this+0x28

    // prevent constructor by default
    ItemStackResponseSlotInfo& operator=(ItemStackResponseSlotInfo const&) = delete;
    ItemStackResponseSlotInfo(ItemStackResponseSlotInfo const&)            = delete;
    ItemStackResponseSlotInfo()                                            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0ItemStackResponseSlotInfo\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI ItemStackResponseSlotInfo(struct ItemStackResponseSlotInfo&&);
    /**
     * @symbol ??1ItemStackResponseSlotInfo\@\@QEAA\@XZ
     */
    MCAPI ~ItemStackResponseSlotInfo();
    // NOLINTEND
};
