#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/versionless/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

struct BlockPosTrackerComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mPreviousOnGround;
    ::ll::TypedStorage<4, 12, ::BlockPos> mPreviousBlockPos;
    ::ll::TypedStorage<8, 8, ::Block const*> mCurrentBlock;
    ::ll::TypedStorage<4, 12, ::BlockPos> mCurrentBlockPos;
    ::ll::TypedStorage<1, 1, bool> mShouldTriggerOnStandOn;
    // NOLINTEND

};
