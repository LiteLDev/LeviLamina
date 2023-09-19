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
    // symbol: ??4PropertySyncData@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct PropertySyncData& operator=(struct PropertySyncData&&);

    // symbol: ??1PropertySyncData@@QEAA@XZ
    MCAPI ~PropertySyncData();

    // NOLINTEND
};
