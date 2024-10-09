#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemSlotInfo {
public:
    // prevent constructor by default
    ItemSlotInfo& operator=(ItemSlotInfo const&);
    ItemSlotInfo(ItemSlotInfo const&);
    ItemSlotInfo();
};
