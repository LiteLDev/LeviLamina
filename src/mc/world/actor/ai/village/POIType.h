#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class POIType : int {
    InvalidPOI  = 4294967295,
    Bed         = 0,
    MeetingArea = 1,
    Jobsite     = 2,
    Count       = 3,
};
