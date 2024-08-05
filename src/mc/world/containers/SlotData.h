#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SlotData {
public:
    // prevent constructor by default
    SlotData& operator=(SlotData const&);
    SlotData(SlotData const&);

public:
    // NOLINTBEGIN
    MCAPI SlotData();

    MCAPI ~SlotData();

    MCAPI static struct SlotData UNKNOWN_LOCATION;

    // NOLINTEND
};
