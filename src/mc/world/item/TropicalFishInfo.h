#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TropicalFishInfo {
public:
    // prevent constructor by default
    TropicalFishInfo& operator=(TropicalFishInfo const&);
    TropicalFishInfo(TropicalFishInfo const&);
    TropicalFishInfo();

public:
    // NOLINTBEGIN
    MCAPI ~TropicalFishInfo();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
