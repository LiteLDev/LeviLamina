#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/Tick.h"

class VibrationDataComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::std::optional<::BlockPos>> mLastVibrationPos;
    ::ll::TypedStorage<8, 8, ::Tick>                       mLastVibrationTick;
    // NOLINTEND
};
