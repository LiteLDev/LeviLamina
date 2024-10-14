#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Dependencies {
public:
    // prevent constructor by default
    Dependencies& operator=(Dependencies const&);
    Dependencies(Dependencies const&);
    Dependencies();

public:
    // NOLINTBEGIN
    MCAPI ~Dependencies();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
