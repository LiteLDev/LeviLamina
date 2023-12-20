#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct IceFieldTrials {
public:
    // prevent constructor by default
    IceFieldTrials& operator=(IceFieldTrials const&);
    IceFieldTrials(IceFieldTrials const&);
    IceFieldTrials();
};

}; // namespace cricket
