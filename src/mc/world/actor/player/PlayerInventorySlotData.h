#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerInventorySlotData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkadd8ab;
    ::ll::UntypedStorage<4, 4> mUnk972fd9;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerInventorySlotData& operator=(PlayerInventorySlotData const&);
    PlayerInventorySlotData(PlayerInventorySlotData const&);
    PlayerInventorySlotData();
};
