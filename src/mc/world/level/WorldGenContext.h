#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WorldGenContext {
public:
    // prevent constructor by default
    WorldGenContext& operator=(WorldGenContext const&);
    WorldGenContext();

public:
    // NOLINTBEGIN
    // symbol: ??0WorldGenContext@@QEAA@AEBU0@@Z
    MCAPI WorldGenContext(struct WorldGenContext const&);

    // symbol: ??1WorldGenContext@@QEAA@XZ
    MCAPI ~WorldGenContext();

    // NOLINTEND
};
