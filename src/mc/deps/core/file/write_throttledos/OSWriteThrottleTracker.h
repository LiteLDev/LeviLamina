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

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OSWriteThrottleTracker() = default;

    virtual bool isWriteThrottledOS() const;

    virtual ::Core::WriteThrottledOS::OSWriteThrottleTracker::OSWriteThrottleStats
        getCurrentWriteThrottleStats(::std::optional<uint64>) const;

    virtual uint64 getEstimatedUnthrottledWriteSpeedBytes() const;

    virtual uint64 getBudgetAccrualBytesPerSecond() const;

    virtual uint64 getMaxBudgetBytes() const;

    virtual uint64 getMinBudgetForPlayableExperience(int recoverLeewayHintMb) const;

    virtual uint64 getBudgetForWriteBudgetReplenished() const;

    virtual uint64 getBudgetForWriteBudgetLow() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI bool $isWriteThrottledOS() const;

    MCNAPI ::Core::WriteThrottledOS::OSWriteThrottleTracker::OSWriteThrottleStats
        $getCurrentWriteThrottleStats(::std::optional<uint64>) const;

    MCNAPI uint64 $getEstimatedUnthrottledWriteSpeedBytes() const;

    MCNAPI uint64 $getBudgetAccrualBytesPerSecond() const;

    MCNAPI uint64 $getMaxBudgetBytes() const;

    MCNAPI uint64 $getMinBudgetForPlayableExperience(int recoverLeewayHintMb) const;

    MCNAPI uint64 $getBudgetForWriteBudgetReplenished() const;

    MCNAPI uint64 $getBudgetForWriteBudgetLow() const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core::WriteThrottledOS
