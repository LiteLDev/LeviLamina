#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MobDescriptor {
public:
    // prevent constructor by default
    MobDescriptor();

public:
    // NOLINTBEGIN
    // symbol: ??0MobDescriptor@@QEAA@AEBU0@@Z
    MCAPI MobDescriptor(struct MobDescriptor const&);

    // symbol: ??4MobDescriptor@@QEAAAEAU0@AEBU0@@Z
    MCAPI struct MobDescriptor& operator=(struct MobDescriptor const&);

    // symbol: ??1MobDescriptor@@QEAA@XZ
    MCAPI ~MobDescriptor();

    // NOLINTEND
};
