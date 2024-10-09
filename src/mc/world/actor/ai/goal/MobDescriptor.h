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
};
