#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/mce/Color.h"

class TintMapColor {
public:
    std::array<mce::Color, 4> colors;

public:
    // NOLINTBEGIN
    MCAPI TintMapColor();

    // NOLINTEND
};
