#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class RPC4GlobalRegistration {
public:
    // prevent constructor by default
    RPC4GlobalRegistration& operator=(RPC4GlobalRegistration const&);
    RPC4GlobalRegistration(RPC4GlobalRegistration const&);
    RPC4GlobalRegistration();
};

} // namespace RakNet
