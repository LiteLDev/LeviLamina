#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class HeartbeatInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnked0ab8;
    // NOLINTEND

public:
    // prevent constructor by default
    HeartbeatInfo& operator=(HeartbeatInfo const&);
    HeartbeatInfo(HeartbeatInfo const&);
    HeartbeatInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::vector<uchar> Serialize();
    // NOLINTEND

};

}
