#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Profiling {

class PerfClock {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::chrono::time_point<
        ::Bedrock::Profiling::PerfClock,
        ::std::chrono::duration<int64, ::std::ratio<1, 1000000000000000000>>>
    now();

#ifdef LL_PLAT_C
    MCNAPI static void takeSampleToMaintainWallClockConversionSupport();
#endif

    MCNAPI static ::std::optional<::std::chrono::nanoseconds>
    tryApproximateToWallClockTime(::std::chrono::duration<int64, ::std::ratio<1, 1000000000000000000>> unitlessTime);
    // NOLINTEND
};

} // namespace Bedrock::Profiling
