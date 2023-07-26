#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ColorChannel {

public:
    // prevent constructor by default
    ColorChannel& operator=(ColorChannel const&) = delete;
    ColorChannel(ColorChannel const&)            = delete;
    ColorChannel()                               = delete;

public:
    /**
     * @symbol ?INVALID\@ColorChannel\@\@2V1\@B
     */
    MCAPI static class ColorChannel const INVALID; // NOLINT
};
