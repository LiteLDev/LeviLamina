#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class TimeMs {
public:
    // prevent constructor by default
    TimeMs& operator=(TimeMs const&);
    TimeMs(TimeMs const&);
    TimeMs();
};

} // namespace dcsctp
