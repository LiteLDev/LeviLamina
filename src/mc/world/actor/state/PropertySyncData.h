#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PropertySyncData {
public:
    // prevent constructor by default
    PropertySyncData& operator=(PropertySyncData const&);
    PropertySyncData(PropertySyncData const&);
    PropertySyncData();

public:
    // NOLINTBEGIN
    MCAPI struct PropertySyncData& operator=(struct PropertySyncData&&);

    MCAPI ~PropertySyncData();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
