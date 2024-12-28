#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

class RealmsSystem {
public:
    // prevent constructor by default
    RealmsSystem& operator=(RealmsSystem const&);
    RealmsSystem(RealmsSystem const&);
    RealmsSystem();
};

} // namespace Realms
