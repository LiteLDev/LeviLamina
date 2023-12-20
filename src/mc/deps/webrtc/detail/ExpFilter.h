#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class ExpFilter {
public:
    // prevent constructor by default
    ExpFilter& operator=(ExpFilter const&);
    ExpFilter(ExpFilter const&);
    ExpFilter();

public:
    // NOLINTBEGIN
    // symbol: ?Apply@ExpFilter@rtc@@QEAAMMM@Z
    MCAPI float Apply(float, float);

    // symbol: ?Reset@ExpFilter@rtc@@QEAAXM@Z
    MCAPI void Reset(float);

    // symbol: ?kValueUndefined@ExpFilter@rtc@@2MB
    MCAPI static float const kValueUndefined;

    // NOLINTEND
};

}; // namespace rtc
