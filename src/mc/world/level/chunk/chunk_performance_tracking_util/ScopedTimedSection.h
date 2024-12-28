#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ChunkPerformanceTrackingUtil {

struct ScopedTimedSection {
public:
    // prevent constructor by default
    ScopedTimedSection& operator=(ScopedTimedSection const&);
    ScopedTimedSection(ScopedTimedSection const&);
    ScopedTimedSection();
};

} // namespace ChunkPerformanceTrackingUtil
