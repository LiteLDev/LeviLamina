#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

struct HeartbeatInfo {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::vector<uchar> Serialize();
    // NOLINTEND
};

} // namespace dcsctp
