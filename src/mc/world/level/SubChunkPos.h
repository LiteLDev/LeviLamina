#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

class SubChunkPos {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> x;
    ::ll::TypedStorage<4, 4, int> y;
    ::ll::TypedStorage<4, 4, int> z;
    // NOLINTEND

public:
    // prevent constructor by default
    SubChunkPos& operator=(SubChunkPos const&);
    SubChunkPos(SubChunkPos const&);
    SubChunkPos();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit SubChunkPos(::BlockPos const& bp);

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
