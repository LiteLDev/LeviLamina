#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/ClientAcceptanceConfig.h"

struct ClientAcceptanceThresholdsComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 24, ::ClientAcceptanceConfig> mStrictThreshold;
    ::ll::TypedStorage<4, 24, ::ClientAcceptanceConfig> mPermissiveThreshold;
    ::ll::TypedStorage<4, 4, float>                     mCurrentCooldown;
    ::ll::TypedStorage<1, 1, uchar>                     mCurrentServerInitiatedMotionCooldown;
    ::ll::TypedStorage<1, 1, uchar>                     mMaxServerInitiatedMotionCooldown;
    // NOLINTEND
};
