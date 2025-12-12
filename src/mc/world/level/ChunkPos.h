#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Vec3;
// clang-format on

class ChunkPos {
public:
    // member variables
    // NOLINTBEGIN
    union {
        ::ll::TypedStorage<8, 8, int64> packed;
        struct {
            ::ll::TypedStorage<4, 4, int> x;
            ::ll::TypedStorage<4, 4, int> z;
        };
    };
    // NOLINTEND

public:
    // prevent constructor by default
    ChunkPos();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ChunkPos(::BlockPos const& pos);

    MCAPI explicit ChunkPos(::Vec3 const& pos);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::ChunkPos const& INVALID();

    MCAPI static ::ChunkPos const& MAX();

    MCAPI static ::ChunkPos const& MIN();

    MCAPI static ::ChunkPos const& ONE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPos const& pos);

    MCAPI void* $ctor(::Vec3 const& pos);
    // NOLINTEND
};
