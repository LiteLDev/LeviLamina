#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MobDescriptor {
public:
    // prevent constructor by default
    MobDescriptor();

public:
    // NOLINTBEGIN
    MCAPI MobDescriptor(struct MobDescriptor const&);

    MCAPI struct MobDescriptor& operator=(struct MobDescriptor const&);

    MCAPI ~MobDescriptor();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct MobDescriptor const&);

    MCAPI void dtor$();

    // NOLINTEND
};
