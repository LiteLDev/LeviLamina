#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Audio {

class OnlineAudioTimingHistogram {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 36> mUnkdecafe;
    ::ll::UntypedStorage<4, 40> mUnke56262;
    ::ll::UntypedStorage<8, 8>  mUnk7fb5e7;
    ::ll::UntypedStorage<4, 4>  mUnk18ef5b;
    // NOLINTEND

public:
    // prevent constructor by default
    OnlineAudioTimingHistogram& operator=(OnlineAudioTimingHistogram const&);
    OnlineAudioTimingHistogram(OnlineAudioTimingHistogram const&);
    OnlineAudioTimingHistogram();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::string getBucketCountsAsJson(::std::string_view keyPrefix) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static ::std::array<uint, 9> const& REQUEST_TIMING_BUCKET_BOUNDS_MS();

    MCNAPI static ::std::array<uint, 9> const& UPDATE_INTERVAL_BUCKET_BOUNDS_MS();
#endif
    // NOLINTEND
};

} // namespace Audio
