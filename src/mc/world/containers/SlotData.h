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

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    MCAPI void dtor$();

    MCAPI static struct SlotData& UNKNOWN_LOCATION();

    // NOLINTEND
};
