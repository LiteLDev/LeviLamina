#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemSlotInfo {
public:
    // ItemSlotInfo inner types define
    enum class SlotType : uchar {
        Inventory = 0,
        Equipment = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                      mSlot;
    ::ll::TypedStorage<1, 1, ::ItemSlotInfo::SlotType> mSlotType;
    // NOLINTEND
};
