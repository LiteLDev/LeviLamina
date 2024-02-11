#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace sim {

struct MoveInDirectionIntent {
public:
    // prevent constructor by default
    MoveInDirectionIntent& operator=(MoveInDirectionIntent const&);
    MoveInDirectionIntent(MoveInDirectionIntent const&);
    MoveInDirectionIntent();
};

}; // namespace sim
