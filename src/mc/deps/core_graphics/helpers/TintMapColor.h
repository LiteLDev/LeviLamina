#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/math/Color.h"

class TintMapColor {
public:
    std::array<mce::Color, 4> colors;

public:
    // NOLINTBEGIN
    MCAPI TintMapColor();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
