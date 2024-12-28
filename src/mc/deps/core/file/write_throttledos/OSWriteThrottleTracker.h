#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::WriteThrottledOS {

class OSWriteThrottleTracker {
public:
    // OSWriteThrottleTracker inner types declare
    // clang-format off
    struct OSWriteThrottleStats;
    struct WriteThrottleTierInfo;
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

public:
    // prevent constructor by default
    OSWriteThrottleTracker& operator=(OSWriteThrottleTracker const&);
    OSWriteThrottleTracker(OSWriteThrottleTracker const&);
    OSWriteThrottleTracker();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OSWriteThrottleTracker();

    // vIndex: 1
    virtual bool isWriteThrottledOS() const;

    // vIndex: 2
    virtual ::Core::WriteThrottledOS::OSWriteThrottleTracker::OSWriteThrottleStats
        getCurrentWriteThrottleStats(::std::optional<uint64>) const;

    // vIndex: 3
    virtual uint64 getEstimatedUnthrottledWriteSpeedBytes() const;

    // vIndex: 4
    virtual uint64 getBudgetAccrualBytesPerSecond() const;

    // vIndex: 5
    virtual uint64 getMaxBudgetBytes() const;

    // vIndex: 6
    virtual uint64 getMinBudgetForPlayableExperience(int) const;

    // vIndex: 7
    virtual uint64 getBudgetForWriteBudgetReplenished() const;

    // vIndex: 8
    virtual uint64 getBudgetForWriteBudgetLow() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isWriteThrottledOS() const;

    MCAPI ::Core::WriteThrottledOS::OSWriteThrottleTracker::OSWriteThrottleStats
        $getCurrentWriteThrottleStats(::std::optional<uint64>) const;

    MCAPI uint64 $getEstimatedUnthrottledWriteSpeedBytes() const;

    MCAPI uint64 $getBudgetAccrualBytesPerSecond() const;

    MCAPI uint64 $getMaxBudgetBytes() const;

    MCAPI uint64 $getMinBudgetForPlayableExperience(int) const;

    MCAPI uint64 $getBudgetForWriteBudgetReplenished() const;

    MCAPI uint64 $getBudgetForWriteBudgetLow() const;
    // NOLINTEND
};

} // namespace Core::WriteThrottledOS
