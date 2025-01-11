#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct IntervalBudget {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI void IncreaseBudget(int64);

    MCAPI IntervalBudget(int, bool);

    MCAPI void UseBudget(uint64);

    MCAPI double budget_ratio() const;

    MCAPI void set_target_rate_kbps(int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(int, bool);
    // NOLINTEND
};

} // namespace webrtc
