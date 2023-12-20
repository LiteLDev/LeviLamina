#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerInventorySlotData {
public:
    // prevent constructor by default
    PlayerInventorySlotData& operator=(PlayerInventorySlotData const&);
    PlayerInventorySlotData(PlayerInventorySlotData const&);
    PlayerInventorySlotData();
};
