#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

struct HeartbeatInfo {
public:
    // prevent constructor by default
    HeartbeatInfo& operator=(HeartbeatInfo const&);
    HeartbeatInfo(HeartbeatInfo const&);
    HeartbeatInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::vector<uchar> Serialize();
    // NOLINTEND
};

} // namespace dcsctp
