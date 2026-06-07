#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ChunkPerformanceTrackingUtil {

struct ScopedTimedSection {
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ScopedTimedSection();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI explicit ScopedTimedSection(::std::function<void(::std::chrono::nanoseconds const&)> timeCompleteCallback);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::std::function<void(::std::chrono::nanoseconds const&)> timeCompleteCallback);
#endif
    // NOLINTEND
};

} // namespace ChunkPerformanceTrackingUtil
