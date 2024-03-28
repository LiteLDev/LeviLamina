#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/Pos2d.h"

template <int T0>
class DividedPos2d : public ::Pos2d {
public:
    // prevent constructor by default
    DividedPos2d<T0>& operator=(DividedPos2d<T0> const& other) {
        x = other.x;
        z = other.x;
        return *this;
    };
    DividedPos2d<T0>(DividedPos2d<T0> const& other) {
        x = other.x;
        z = other.x;
    }
    DividedPos2d() = default;
};
