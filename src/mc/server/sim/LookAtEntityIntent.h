#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace sim {

struct LookAtEntityIntent {
public:
    // prevent constructor by default
    LookAtEntityIntent& operator=(LookAtEntityIntent const&);
    LookAtEntityIntent(LookAtEntityIntent const&);
    LookAtEntityIntent();
};

}; // namespace sim
