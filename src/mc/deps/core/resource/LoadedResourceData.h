#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LoadedResourceData {
public:
    // prevent constructor by default
    LoadedResourceData& operator=(LoadedResourceData const&);
    LoadedResourceData(LoadedResourceData const&);
    LoadedResourceData();

public:
    // NOLINTBEGIN
    MCAPI ~LoadedResourceData();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
