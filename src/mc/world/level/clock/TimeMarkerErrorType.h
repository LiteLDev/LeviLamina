#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class TimeMarkerErrorType : int {
    ExceedsTimeMarkerCapacity   = 0,
    DuplicateTimeMarker         = 1,
    ExceedsTimeMarkerNameLength = 2,
    InvalidTimeMarkerName       = 3,
    InvalidTimeMarkerPeriod     = 4,
};
