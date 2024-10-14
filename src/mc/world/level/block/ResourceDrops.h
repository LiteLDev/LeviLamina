#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ResourceDrops {
public:
    // prevent constructor by default
    ResourceDrops& operator=(ResourceDrops const&);
    ResourceDrops(ResourceDrops const&);
    ResourceDrops();

public:
    // NOLINTBEGIN
    MCAPI ~ResourceDrops();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
