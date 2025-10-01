#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet::PlayerMessaging {

struct NetworkID {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkaf6afa;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkID& operator=(NetworkID const&);
    NetworkID(NetworkID const&);
    NetworkID();
};

} // namespace NetherNet::PlayerMessaging
