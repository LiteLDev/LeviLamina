#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DirtyTicksCounter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> totalTime;
    ::ll::TypedStorage<4, 4, int> lastChange;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DirtyTicksCounter();

    MCAPI int getTicksSinceLastChange() const;

    MCFOLD int getTotalDirtyTicks() const;

    MCAPI ::DirtyTicksCounter& operator++();

    MCAPI void reset();

    MCAPI void touch();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::DirtyTicksCounter max();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
