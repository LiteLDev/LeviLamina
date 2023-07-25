#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WorldGenContext {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORLDGENCONTEXT
public:
    WorldGenContext& operator=(WorldGenContext const&) = delete;
    WorldGenContext(WorldGenContext const&)            = delete;
    WorldGenContext()                                  = delete;
#endif

public:
    /**
     * @symbol ??1WorldGenContext\@\@QEAA\@XZ
     */
    MCAPI ~WorldGenContext();
};
