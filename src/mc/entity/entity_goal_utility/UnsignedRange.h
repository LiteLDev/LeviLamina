#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EntityGoalUtility {

template <typename T0>
struct UnsignedRange {
public:
    // prevent constructor by default
    UnsignedRange& operator=(UnsignedRange const&);
    UnsignedRange(UnsignedRange const&);
    UnsignedRange();
};

}; // namespace EntityGoalUtility
