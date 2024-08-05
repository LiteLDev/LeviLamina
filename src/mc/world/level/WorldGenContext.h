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
    MCAPI ~WorldGenContext();

    // NOLINTEND
};
