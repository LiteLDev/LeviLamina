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
    ::ll::UntypedStorage<4, 4> mUnk8ab9ee;
    ::ll::UntypedStorage<1, 1> mUnk5ef5da;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemSlotInfo& operator=(ItemSlotInfo const&);
    ItemSlotInfo(ItemSlotInfo const&);
    ItemSlotInfo();
};
