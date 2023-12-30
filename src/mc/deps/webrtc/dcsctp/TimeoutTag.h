#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class TimeoutTag {
public:
    // prevent constructor by default
    TimeoutTag& operator=(TimeoutTag const&);
    TimeoutTag(TimeoutTag const&);
    TimeoutTag();
};

}; // namespace dcsctp
