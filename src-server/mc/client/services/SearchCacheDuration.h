#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class SearchCacheDuration : uint {
    None = 0,
    Minutes10 = 600,
    Minutes30 = 1800,
    Hours1 = 3600,
    Hours2 = 7200,
    Hours12 = 43200,
    Hours24 = 86400,
    Week1 = 604800,
};
