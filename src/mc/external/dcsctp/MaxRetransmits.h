#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class MaxRetransmits {
public:
    // prevent constructor by default
    MaxRetransmits& operator=(MaxRetransmits const&);
    MaxRetransmits(MaxRetransmits const&);
    MaxRetransmits();
};

} // namespace dcsctp
