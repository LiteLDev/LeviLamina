#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WorldGenContext {
public:
    // prevent constructor by default
    WorldGenContext& operator=(WorldGenContext const&);
    WorldGenContext(WorldGenContext const&);
    WorldGenContext();

public:
    // NOLINTBEGIN
    // symbol: ??1WorldGenContext@@QEAA@XZ
    MCAPI ~WorldGenContext();

    // NOLINTEND
};
