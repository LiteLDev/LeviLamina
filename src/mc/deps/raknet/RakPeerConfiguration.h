#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct RakPeerConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> useJoinfloodProtection;
    // NOLINTEND
};

} // namespace RakNet
