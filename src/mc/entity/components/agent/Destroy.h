#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents {

class Destroy {

public:
    // prevent constructor by default
    Destroy& operator=(Destroy const&) = delete;
    Destroy(Destroy const&)            = delete;
    Destroy()                          = delete;
};

}; // namespace AgentComponents
