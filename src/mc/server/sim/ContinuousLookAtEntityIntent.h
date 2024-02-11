#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace sim {

struct ContinuousLookAtEntityIntent {
public:
    // prevent constructor by default
    ContinuousLookAtEntityIntent& operator=(ContinuousLookAtEntityIntent const&);
    ContinuousLookAtEntityIntent(ContinuousLookAtEntityIntent const&);
    ContinuousLookAtEntityIntent();
};

}; // namespace sim
