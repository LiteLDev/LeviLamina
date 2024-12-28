#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LocalSpatialEntityFetcher {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 288> mUnk9b8ee4;
    // NOLINTEND

public:
    // prevent constructor by default
    LocalSpatialEntityFetcher& operator=(LocalSpatialEntityFetcher const&);
    LocalSpatialEntityFetcher(LocalSpatialEntityFetcher const&);
    LocalSpatialEntityFetcher();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~LocalSpatialEntityFetcher();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
