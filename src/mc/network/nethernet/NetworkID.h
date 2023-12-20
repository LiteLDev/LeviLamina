#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

struct NetworkID {
public:
    // prevent constructor by default
    NetworkID& operator=(NetworkID const&);
    NetworkID(NetworkID const&);
    NetworkID();
};

}; // namespace NetherNet
