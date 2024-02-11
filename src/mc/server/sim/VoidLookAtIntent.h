#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace sim {

struct VoidLookAtIntent {
public:
    // prevent constructor by default
    VoidLookAtIntent& operator=(VoidLookAtIntent const&);
    VoidLookAtIntent(VoidLookAtIntent const&);
    VoidLookAtIntent();
};

}; // namespace sim
