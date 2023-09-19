#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents {

class Destroy {
public:
    // prevent constructor by default
    Destroy& operator=(Destroy const&);
    Destroy(Destroy const&);
    Destroy();
};

}; // namespace AgentComponents
