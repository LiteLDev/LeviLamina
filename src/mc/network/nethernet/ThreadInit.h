#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

struct ThreadInit {
public:
    // prevent constructor by default
    ThreadInit& operator=(ThreadInit const&);
    ThreadInit(ThreadInit const&);
    ThreadInit();
};

}; // namespace NetherNet
