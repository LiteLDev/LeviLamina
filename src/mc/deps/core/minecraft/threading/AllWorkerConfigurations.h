#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AllWorkerConfigurations {
public:
    // prevent constructor by default
    AllWorkerConfigurations& operator=(AllWorkerConfigurations const&);
    AllWorkerConfigurations(AllWorkerConfigurations const&);

public:
    // NOLINTBEGIN
    MCAPI AllWorkerConfigurations();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    // NOLINTEND
};
