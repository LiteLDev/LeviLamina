#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
struct Tick;
// clang-format on

class SuspectTrackingComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::std::optional<::BlockPos>> mSuspiciousPos;
    ::ll::TypedStorage<8, 16, ::std::optional<::Tick>>     mLastSuspicionTick;
    // NOLINTEND
};
