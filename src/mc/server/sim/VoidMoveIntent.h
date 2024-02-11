#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace sim {

struct VoidMoveIntent {
public:
    // prevent constructor by default
    VoidMoveIntent& operator=(VoidMoveIntent const&);
    VoidMoveIntent(VoidMoveIntent const&);
    VoidMoveIntent();
};

}; // namespace sim
