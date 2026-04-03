#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SubChunkPos : public ll::math::intN3<SubChunkPos> {
public:
    using intN3::intN3;

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::SubChunkPos const& ZERO();
    // NOLINTEND
};
