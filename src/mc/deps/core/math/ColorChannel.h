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
    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static class ColorChannel const& INVALID();

    // NOLINTEND
};
