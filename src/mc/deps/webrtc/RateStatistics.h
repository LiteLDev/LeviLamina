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
        // NOLINTBEGIN
        // symbol: ??0Bucket@RateStatistics@webrtc@@QEAA@_J@Z
        MCAPI explicit Bucket(int64);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    RateStatistics& operator=(RateStatistics const&);
    RateStatistics();

public:
    // NOLINTBEGIN
    // symbol: ?Rate@RateStatistics@webrtc@@QEBA?AV?$optional@_J@std@@_J@Z
    MCAPI std::optional<int64> Rate(int64) const;

    // symbol: ??0RateStatistics@webrtc@@QEAA@AEBV01@@Z
    MCAPI RateStatistics(class webrtc::RateStatistics const&);

    // symbol: ??0RateStatistics@webrtc@@QEAA@_JM@Z
    MCAPI RateStatistics(int64, float);

    // symbol: ?Update@RateStatistics@webrtc@@QEAAX_J0@Z
    MCAPI void Update(int64, int64);

    // symbol: ??1RateStatistics@webrtc@@QEAA@XZ
    MCAPI ~RateStatistics();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?EraseOld@RateStatistics@webrtc@@AEAAX_J@Z
    MCAPI void EraseOld(int64);

    // NOLINTEND
};

}; // namespace webrtc
