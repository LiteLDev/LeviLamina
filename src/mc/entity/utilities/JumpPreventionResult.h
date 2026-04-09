#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

struct JumpPreventionResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>        mJumpIsPrevented;
    ::ll::TypedStorage<4, 12, ::BlockPos> mPreventingBlockBlockPos;
    // NOLINTEND
};
