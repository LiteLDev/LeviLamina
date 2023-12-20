#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

class StunStats {
public:
    // prevent constructor by default
    StunStats& operator=(StunStats const&);
    StunStats(StunStats const&);
    StunStats();
};

}; // namespace cricket
