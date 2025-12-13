#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/gameevents/VibrationInfo.h"
#include "mc/world/level/Tick.h"

class VibrationSelector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Tick>                            mFirstCandidateTick;
    ::ll::TypedStorage<8, 64, ::std::optional<::VibrationInfo>> mCandidateVibrationInfo;
    // NOLINTEND
};
