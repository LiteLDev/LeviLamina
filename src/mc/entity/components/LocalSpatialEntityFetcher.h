#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LocalSpatialEntityFetcher {
public:
    // prevent constructor by default
    LocalSpatialEntityFetcher& operator=(LocalSpatialEntityFetcher const&);
    LocalSpatialEntityFetcher(LocalSpatialEntityFetcher const&);
    LocalSpatialEntityFetcher();

public:
    // NOLINTBEGIN
    MCAPI ~LocalSpatialEntityFetcher();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
