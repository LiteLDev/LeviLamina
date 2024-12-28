#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class StreamIDTag {
public:
    // prevent constructor by default
    StreamIDTag& operator=(StreamIDTag const&);
    StreamIDTag(StreamIDTag const&);
    StreamIDTag();
};

} // namespace dcsctp
