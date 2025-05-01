#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class RateTracker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkd17a92;
    ::ll::UntypedStorage<8, 8> mUnk16b9a2;
    ::ll::UntypedStorage<8, 8> mUnk858563;
    ::ll::UntypedStorage<8, 8> mUnk7b24c6;
    ::ll::UntypedStorage<8, 8> mUnk82a662;
    ::ll::UntypedStorage<8, 8> mUnkd19a61;
    ::ll::UntypedStorage<8, 8> mUnkbe7d10;
    // NOLINTEND

public:
    // prevent constructor by default
    RateTracker& operator=(RateTracker const&);
    RateTracker(RateTracker const&);
    RateTracker();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RateTracker() = default;

    // vIndex: 1
    virtual int64 Time() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AddSamples(int64);

    MCNAPI void AddSamplesAtTime(int64, int64);

    MCNAPI double ComputeRateForInterval(int64) const;

    MCNAPI void EnsureInitialized();

    MCNAPI uint64 NextBucketIndex(uint64) const;

    MCNAPI RateTracker(int64, uint64);

    MCNAPI int64 TotalSampleCount() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(int64, uint64);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace rtc
