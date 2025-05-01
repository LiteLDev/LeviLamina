#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct IntervalBudget {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void IncreaseBudget(int64);

    MCNAPI IntervalBudget(int, bool);

    MCNAPI void UseBudget(uint64);

    MCNAPI double budget_ratio() const;

    MCNAPI void set_target_rate_kbps(int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(int, bool);
    // NOLINTEND
};

} // namespace webrtc
