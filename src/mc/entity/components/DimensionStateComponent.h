#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DimensionStateComponent {
public:
    // DimensionStateComponent inner types define
    enum class DimensionState {};

public:
    // prevent constructor by default
    DimensionStateComponent& operator=(DimensionStateComponent const&);
    DimensionStateComponent(DimensionStateComponent const&);
    DimensionStateComponent();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0DimensionStateComponent@@QEAA@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@@Z
    MCAPI explicit DimensionStateComponent(std::chrono::steady_clock::time_point);

    // NOLINTEND
};
