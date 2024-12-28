#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class LifecycleId {
public:
    // prevent constructor by default
    LifecycleId& operator=(LifecycleId const&);
    LifecycleId(LifecycleId const&);
    LifecycleId();
};

} // namespace dcsctp
