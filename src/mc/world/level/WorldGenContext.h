#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WorldGenContext {

public:
    // prevent constructor by default
    WorldGenContext& operator=(WorldGenContext const&) = delete;
    WorldGenContext(WorldGenContext const&)            = delete;
    WorldGenContext()                                  = delete;

public:
    /**
     * @symbol ??1WorldGenContext\@\@QEAA\@XZ
     */
    MCAPI ~WorldGenContext(); // NOLINT
};
