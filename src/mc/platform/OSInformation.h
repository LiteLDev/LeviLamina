#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct OSInformation {
public:
    // prevent constructor by default
    OSInformation& operator=(OSInformation const&);
    OSInformation(OSInformation const&);
    OSInformation();

public:
    // NOLINTBEGIN
    MCAPI ~OSInformation();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
