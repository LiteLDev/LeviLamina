#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DirtyTicksCounter {
public:
    // prevent constructor by default
    DirtyTicksCounter& operator=(DirtyTicksCounter const&);
    DirtyTicksCounter(DirtyTicksCounter const&);

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
