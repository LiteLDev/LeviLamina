#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace sim {

struct ContinuousLookAtPositionIntent {
public:
    // prevent constructor by default
    ContinuousLookAtPositionIntent& operator=(ContinuousLookAtPositionIntent const&);
    ContinuousLookAtPositionIntent(ContinuousLookAtPositionIntent const&);
    ContinuousLookAtPositionIntent();
};

}; // namespace sim
