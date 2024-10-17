#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TrimPattern {
public:
    // prevent constructor by default
    TrimPattern& operator=(TrimPattern const&);
    TrimPattern(TrimPattern const&);
    TrimPattern();

public:
    // NOLINTBEGIN
    MCAPI ~TrimPattern();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
