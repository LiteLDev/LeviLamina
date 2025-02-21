#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class Vec3;
// clang-format on

struct SnapOnRailComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos>    mSnapToPosition;
    ::ll::TypedStorage<4, 12, ::Vec3>        mOriginalEntityPosition;
    ::ll::TypedStorage<8, 8, ::Block const*> mBlock;
    ::ll::TypedStorage<4, 4, int>            mRailDirection;
    ::ll::TypedStorage<1, 1, bool>           mShouldHaltTrack;
    ::ll::TypedStorage<1, 1, bool>           mIsPowerTrack;
    // NOLINTEND
};
