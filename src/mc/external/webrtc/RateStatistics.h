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
        // prevent constructor by default
        Bucket& operator=(Bucket const&);
        Bucket(Bucket const&);
        Bucket();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI explicit Bucket(int64);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(int64);
        // NOLINTEND
    };

public:
    // prevent constructor by default
    RateStatistics& operator=(RateStatistics const&);
    RateStatistics();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void EraseOld(int64);

    MCAPI ::std::optional<int64> Rate(int64) const;

    MCAPI RateStatistics(::webrtc::RateStatistics const&);

    MCAPI RateStatistics(int64, float);

    MCAPI void Update(int64, int64);

    MCAPI ~RateStatistics();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::RateStatistics const&);

    MCAPI void* $ctor(int64, float);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
