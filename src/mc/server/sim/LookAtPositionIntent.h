#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace sim {

struct LookAtPositionIntent {
public:
    // prevent constructor by default
    LookAtPositionIntent& operator=(LookAtPositionIntent const&);
    LookAtPositionIntent(LookAtPositionIntent const&);
    LookAtPositionIntent();
};

}; // namespace sim
