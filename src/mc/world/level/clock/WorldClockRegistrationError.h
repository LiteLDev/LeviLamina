#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/clock/TimeMarkerErrorType.h"
#include "mc/world/level/clock/WorldClockErrorType.h"

struct WorldClockRegistrationError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::std::variant<::WorldClockErrorType, ::TimeMarkerErrorType>> mErrorType;
    ::ll::TypedStorage<8, 32, ::std::string>                                               mClockName;
    ::ll::TypedStorage<8, 32, ::std::string>                                               mTimeMarkerName;
    // NOLINTEND
};
