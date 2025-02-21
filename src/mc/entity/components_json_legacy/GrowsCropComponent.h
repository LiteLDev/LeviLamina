#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

class GrowsCropComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>         mCharges;
    ::ll::TypedStorage<4, 12, ::BlockPos> mTargetCrop;
    ::ll::TypedStorage<4, 12, ::BlockPos> mLastGrownCrop;
    // NOLINTEND
};
