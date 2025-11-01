#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/versionless/world/level/BlockPos.h"
#include "mc/world/level/Tick.h"

class SuspectTrackingComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::std::optional<::BlockPos>> mSuspiciousPos;
    ::ll::TypedStorage<8, 16, ::std::optional<::Tick>> mLastSuspicionTick;
    // NOLINTEND

};
