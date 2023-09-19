#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ColorChannel {
public:
    // prevent constructor by default
    ColorChannel& operator=(ColorChannel const&);
    ColorChannel(ColorChannel const&);
    ColorChannel();

public:
    // NOLINTBEGIN
    // symbol: ?INVALID@ColorChannel@@2V1@B
    MCAPI static class ColorChannel const INVALID;

    // NOLINTEND
};
