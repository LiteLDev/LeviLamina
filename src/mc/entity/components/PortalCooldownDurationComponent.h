#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

struct PortalCooldownDurationComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos> mPortalBlockPos;
    ::ll::TypedStorage<4, 4, int>         mMaxPortalCooldownTicks;
    ::ll::TypedStorage<4, 4, int>         mCurrentPortalCooldownTicks;
    ::ll::TypedStorage<4, 4, int>         mInsidePortalTimeTicks;
    ::ll::TypedStorage<4, 4, int>         mMaxPortalWaitTime;
    // NOLINTEND
};
