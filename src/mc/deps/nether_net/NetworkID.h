#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

struct NetworkID {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk37cd93;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkID& operator=(NetworkID const&);
    NetworkID(NetworkID const&);
    NetworkID();
};

} // namespace NetherNet
