#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/ChunkLocalHeight.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ChunkLocalHeight;
class Pos;
// clang-format on

class ChunkBlockPos {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar>              x;
    ::ll::TypedStorage<1, 1, uchar>              z;
    ::ll::TypedStorage<2, 2, ::ChunkLocalHeight> y;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ChunkBlockPos(::BlockPos const& pos, short minDimensionHeight);

    MCAPI ChunkBlockPos(uchar _x, ::ChunkLocalHeight _y, uchar _z);

    MCAPI ::Pos toPos() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::ChunkBlockPos from2D(uchar x, uchar z);

    MCAPI static ::ChunkBlockPos fromLegacyIndex(ushort idx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPos const& pos, short minDimensionHeight);

    MCAPI void* $ctor(uchar _x, ::ChunkLocalHeight _y, uchar _z);
    // NOLINTEND
};
