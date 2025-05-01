#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

struct HeartbeatInfo {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::vector<uchar> Serialize();
    // NOLINTEND
};

} // namespace dcsctp
