#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class Vec3;
// clang-format on

class ClockSpriteCalculator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>   mFrame;
    ::ll::TypedStorage<4, 4, float> mRot;
    ::ll::TypedStorage<4, 4, float> mRotA;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI int update(::BlockSource const& region, ::Vec3 const& pos, bool instant);
    // NOLINTEND
};
