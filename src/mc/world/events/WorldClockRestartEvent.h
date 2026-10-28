#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class WorldClock;
// clang-format on

struct WorldClockRestartEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::WorldClock*>> mClock;
    ::ll::TypedStorage<4, 4, int>                            mNewTime;
    // NOLINTEND
};
