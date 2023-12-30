#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class RateTracker {
public:
    // prevent constructor by default
    RateTracker& operator=(RateTracker const&);
    RateTracker(RateTracker const&);
    RateTracker();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1RateTracker@rtc@@UEAA@XZ
    virtual ~RateTracker();

    // vIndex: 1, symbol: ?Time@RateTracker@rtc@@MEBA_JXZ
    virtual int64 Time() const;

    // symbol: ?AddSamples@RateTracker@rtc@@QEAAX_J@Z
    MCAPI void AddSamples(int64);

    // symbol: ?AddSamplesAtTime@RateTracker@rtc@@QEAAX_J0@Z
    MCAPI void AddSamplesAtTime(int64, int64);

    // symbol: ?ComputeRateForInterval@RateTracker@rtc@@QEBAN_J@Z
    MCAPI double ComputeRateForInterval(int64) const;

    // symbol: ??0RateTracker@rtc@@QEAA@_J_K@Z
    MCAPI RateTracker(int64, uint64);

    // symbol: ?TotalSampleCount@RateTracker@rtc@@QEBA_JXZ
    MCAPI int64 TotalSampleCount() const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?EnsureInitialized@RateTracker@rtc@@AEAAXXZ
    MCAPI void EnsureInitialized();

    // symbol: ?NextBucketIndex@RateTracker@rtc@@AEBA_K_K@Z
    MCAPI uint64 NextBucketIndex(uint64) const;

    // NOLINTEND
};

}; // namespace rtc
