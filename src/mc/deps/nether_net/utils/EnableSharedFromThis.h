#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

template <typename T0>
class EnableSharedFromThis {
public:
    // prevent constructor by default
    EnableSharedFromThis& operator=(EnableSharedFromThis const&);
    EnableSharedFromThis(EnableSharedFromThis const&);
    EnableSharedFromThis();
};

} // namespace NetherNet
