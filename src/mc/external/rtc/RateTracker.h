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
    virtual ~RateTracker();

    virtual int64 Time() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AddSamples(int64 sample_count);

    MCNAPI void AddSamplesAtTime(int64 current_time_ms, int64 sample_count);

    MCNAPI double ComputeRateForInterval(int64 interval_milliseconds) const;

    MCNAPI RateTracker(int64 bucket_milliseconds, uint64 bucket_count);

    MCNAPI int64 TotalSampleCount() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(int64 bucket_milliseconds, uint64 bucket_count);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int64 $Time() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace rtc
