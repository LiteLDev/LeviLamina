#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class ImmediateAckFlagTag {
public:
    // prevent constructor by default
    ImmediateAckFlagTag& operator=(ImmediateAckFlagTag const&);
    ImmediateAckFlagTag(ImmediateAckFlagTag const&);
    ImmediateAckFlagTag();
};

}; // namespace dcsctp
