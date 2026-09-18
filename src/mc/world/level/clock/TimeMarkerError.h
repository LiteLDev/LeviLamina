#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/clock/TimeMarkerErrorType.h"

struct TimeMarkerError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::TimeMarkerErrorType> mErrorType;
    ::ll::TypedStorage<8, 32, ::std::string>        mClockName;
    ::ll::TypedStorage<8, 32, ::std::string>        mTimeMarkerName;
    // NOLINTEND
};
