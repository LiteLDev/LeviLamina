#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
struct ReplayStateValueDiff {
public:
    // prevent constructor by default
    ReplayStateValueDiff& operator=(ReplayStateValueDiff const&);
    ReplayStateValueDiff(ReplayStateValueDiff const&);
    ReplayStateValueDiff();
};
