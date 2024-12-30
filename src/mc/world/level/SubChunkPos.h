#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

class SubChunkPos : public ll::math::intN3<SubChunkPos> {
public:
    using intN3::intN3;

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SubChunkPos(::BlockPos const& bp);

    MCAPI explicit operator ::BlockPos() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::SubChunkPos const& MAX();

    MCAPI static ::SubChunkPos const& MIN();

    MCAPI static ::SubChunkPos const& ONE();

    MCAPI static ::SubChunkPos const& ZERO();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPos const& bp);
    // NOLINTEND
};
