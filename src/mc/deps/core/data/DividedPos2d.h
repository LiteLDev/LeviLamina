#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/Pos2d.h"

template <int T0>
class DividedPos2d : public ::Pos2d {
public:
    // prevent constructor by default
    DividedPos2d& operator=(DividedPos2d const&);
    DividedPos2d(DividedPos2d const&);
    DividedPos2d() = default;
};
