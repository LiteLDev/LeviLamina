#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace catalog {

enum class SortBy : uint {
    Alphabetical  = 0,
    AverageRating = 1,
    Price         = 2,
    StartDate     = 3,
    Relevance     = 4,
    Installed     = 5,
    Count         = 6,
};

}
