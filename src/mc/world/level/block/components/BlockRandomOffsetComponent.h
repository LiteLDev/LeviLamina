#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/FloatRange.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Vec3;
// clang-format on

class BlockRandomOffsetComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange> mRangeX;
    ::ll::TypedStorage<4, 4, uint>                      mStepsX;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange> mRangeY;
    ::ll::TypedStorage<4, 4, uint>                      mStepsY;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange> mRangeZ;
    ::ll::TypedStorage<4, 4, uint>                      mStepsZ;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Vec3 getRandomOffset(::BlockPos const& blockPos) const;
    // NOLINTEND
};
