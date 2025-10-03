#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class IntervalBudget {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk62e032;
    ::ll::UntypedStorage<8, 8> mUnkc076e6;
    ::ll::UntypedStorage<8, 8> mUnk19f905;
    ::ll::UntypedStorage<1, 1> mUnkc86c2e;
    // NOLINTEND

public:
    // prevent constructor by default
    IntervalBudget& operator=(IntervalBudget const&);
    IntervalBudget(IntervalBudget const&);
    IntervalBudget();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void IncreaseBudget(int64 delta_time_ms);

    MCNAPI IntervalBudget(int initial_target_rate_kbps, bool can_build_up_underuse);

    MCNAPI void UseBudget(uint64 bytes);

    MCNAPI double budget_ratio() const;

    MCNAPI void set_target_rate_kbps(int target_rate_kbps);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(int initial_target_rate_kbps, bool can_build_up_underuse);
    // NOLINTEND
};

} // namespace webrtc
