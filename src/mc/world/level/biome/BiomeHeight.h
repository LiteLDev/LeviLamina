#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BiomeHeight {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BIOMEHEIGHT
public:
    BiomeHeight& operator=(BiomeHeight const&) = delete;
    BiomeHeight(BiomeHeight const&)            = delete;
    BiomeHeight()                              = delete;
#endif

public:
    /**
     * @symbol ?MIN_DEPTH\@BiomeHeight\@\@2MB
     */
    MCAPI static float const MIN_DEPTH;
};
