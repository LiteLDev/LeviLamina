#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class StreamPriorityTag {
public:
    // prevent constructor by default
    StreamPriorityTag& operator=(StreamPriorityTag const&);
    StreamPriorityTag(StreamPriorityTag const&);
    StreamPriorityTag();
};

}; // namespace dcsctp
