#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SubChunkPos : public ll::math::intN3<SubChunkPos> {
public:
    using intN3::intN3;

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::SubChunkPos const& MAX();

    MCNAPI static ::SubChunkPos const& MIN();

    MCNAPI static ::SubChunkPos const& ONE();

    MCNAPI static ::SubChunkPos const& ZERO();
    // NOLINTEND

};
