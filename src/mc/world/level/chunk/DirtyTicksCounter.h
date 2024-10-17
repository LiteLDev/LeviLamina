#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DirtyTicksCounter {
public:
    int totalTime;  // this+0x0
    int lastChange; // this+0x4

public:
    // NOLINTBEGIN
    MCAPI DirtyTicksCounter();

    MCAPI int getTicksSinceLastChange() const;

    MCAPI int getTotalDirtyTicks() const;

    MCAPI struct DirtyTicksCounter& operator++();

    MCAPI void reset();

    MCAPI void touch();

    MCAPI static struct DirtyTicksCounter max();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    // NOLINTEND
};
