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
    // vIndex: 0, symbol: __gen_??1MountainAttributes@@UEAA@XZ
    virtual ~MountainAttributes() = default;

    // NOLINTEND
};
