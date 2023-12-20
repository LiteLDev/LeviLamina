#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class DurationMs {
public:
    // prevent constructor by default
    DurationMs& operator=(DurationMs const&);
    DurationMs(DurationMs const&);
    DurationMs();
};

}; // namespace dcsctp
