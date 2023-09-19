#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MountainAttributes {
public:
    // MountainAttributes inner types declare
    // clang-format off
    struct SteepMaterial;
    // clang-format on

    // MountainAttributes inner types define
    struct SteepMaterial {
    public:
        // prevent constructor by default
        SteepMaterial& operator=(SteepMaterial const&);
        SteepMaterial(SteepMaterial const&);
        SteepMaterial();
    };

public:
    // prevent constructor by default
    MountainAttributes& operator=(MountainAttributes const&);
    MountainAttributes(MountainAttributes const&);
    MountainAttributes();

public:
    // NOLINTBEGIN
    // symbol: ??0MountainAttributes@@QEAA@$$QEAU0@@Z
    MCAPI MountainAttributes(struct MountainAttributes&&);

    // symbol: ??4MountainAttributes@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct MountainAttributes& operator=(struct MountainAttributes&&);

    // symbol: ??1MountainAttributes@@QEAA@XZ
    MCAPI ~MountainAttributes();

    // NOLINTEND
};
