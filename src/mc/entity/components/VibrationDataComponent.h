#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
struct Tick;
// clang-format on

class VibrationDataComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::std::optional<::BlockPos>> mLastVibrationPos;
    ::ll::TypedStorage<8, 8, ::Tick>                       mLastVibrationTick;
    // NOLINTEND
};
