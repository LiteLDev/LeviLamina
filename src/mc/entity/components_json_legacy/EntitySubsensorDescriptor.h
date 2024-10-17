#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EntitySubsensorDescriptor {
public:
    // prevent constructor by default
    EntitySubsensorDescriptor& operator=(EntitySubsensorDescriptor const&);
    EntitySubsensorDescriptor();

public:
    // NOLINTBEGIN
    MCAPI EntitySubsensorDescriptor(struct EntitySubsensorDescriptor const&);

    MCAPI ~EntitySubsensorDescriptor();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct EntitySubsensorDescriptor const&);

    MCAPI void dtor$();

    // NOLINTEND
};
