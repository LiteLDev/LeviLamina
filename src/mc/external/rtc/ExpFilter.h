#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

struct ExpFilter {
public:
    // prevent constructor by default
    ExpFilter& operator=(ExpFilter const&);
    ExpFilter(ExpFilter const&);
    ExpFilter();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI float Apply(float, float);

    MCAPI void Reset(float);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static float const& kValueUndefined();
    // NOLINTEND
};

} // namespace rtc
