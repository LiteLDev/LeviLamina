#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class IntervalBudget {
public:
    // prevent constructor by default
    IntervalBudget& operator=(IntervalBudget const&);
    IntervalBudget(IntervalBudget const&);
    IntervalBudget();

public:
    // NOLINTBEGIN
    // symbol: ?IncreaseBudget@IntervalBudget@webrtc@@QEAAX_J@Z
    MCAPI void IncreaseBudget(int64);

    // symbol: ??0IntervalBudget@webrtc@@QEAA@H_N@Z
    MCAPI IntervalBudget(int, bool);

    // symbol: ?UseBudget@IntervalBudget@webrtc@@QEAAX_K@Z
    MCAPI void UseBudget(uint64);

    // symbol: ?budget_ratio@IntervalBudget@webrtc@@QEBANXZ
    MCAPI double budget_ratio() const;

    // symbol: ?set_target_rate_kbps@IntervalBudget@webrtc@@QEAAXH@Z
    MCAPI void set_target_rate_kbps(int);

    // NOLINTEND
};

}; // namespace webrtc
