#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ClientAcceptanceConfig;
// clang-format on

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
