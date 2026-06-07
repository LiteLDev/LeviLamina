#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::WriteThrottledOS {

class OSWriteThrottleTracker {
public:
    // OSWriteThrottleTracker inner types declare
    // clang-format off
    struct WriteThrottleTierInfo;
    struct OSWriteThrottleStats;
    // clang-format on

    // OSWriteThrottleTracker inner types define
    struct WriteThrottleTierInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk3de7b2;
        ::ll::UntypedStorage<8, 8> mUnkedf517;
        // NOLINTEND

    public:
        // prevent constructor by default
        WriteThrottleTierInfo& operator=(WriteThrottleTierInfo const&);
        WriteThrottleTierInfo(WriteThrottleTierInfo const&);
        WriteThrottleTierInfo();
    };

    struct OSWriteThrottleStats {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk4318ae;
        ::ll::UntypedStorage<8, 8>  mUnk5d8848;
        ::ll::UntypedStorage<8, 8>  mUnk6969bb;
        ::ll::UntypedStorage<8, 8>  mUnk8cb60b;
        ::ll::UntypedStorage<1, 1>  mUnk8c9cac;
        // NOLINTEND

    public:
        // prevent constructor by default
        OSWriteThrottleStats& operator=(OSWriteThrottleStats const&);
        OSWriteThrottleStats(OSWriteThrottleStats const&);
        OSWriteThrottleStats();
    };
};

} // namespace Core::WriteThrottledOS
