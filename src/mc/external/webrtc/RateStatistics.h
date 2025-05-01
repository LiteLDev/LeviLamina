#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RateStatistics {
public:
    // RateStatistics inner types declare
    // clang-format off
    struct Bucket;
    // clang-format on

    // RateStatistics inner types define
    struct Bucket {
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI explicit Bucket(int64);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(int64);
        // NOLINTEND
    };

public:
    // prevent constructor by default
    RateStatistics& operator=(RateStatistics const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void EraseOld(int64);

    MCNAPI ::std::optional<int64> Rate(int64) const;

    MCNAPI RateStatistics(::webrtc::RateStatistics const&);

    MCNAPI RateStatistics(int64, float);

    MCNAPI void Update(int64, int64);

    MCNAPI ~RateStatistics();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::RateStatistics const&);

    MCNAPI void* $ctor(int64, float);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
