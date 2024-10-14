#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ComponentInfo {
public:
    // prevent constructor by default
    ComponentInfo& operator=(ComponentInfo const&);
    ComponentInfo(ComponentInfo const&);
    ComponentInfo();

public:
    // NOLINTBEGIN
    MCAPI ~ComponentInfo();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
