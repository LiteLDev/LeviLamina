#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents {

class Interact {

public:
    // prevent constructor by default
    Interact& operator=(Interact const&) = delete;
    Interact(Interact const&)            = delete;
    Interact()                           = delete;
};

}; // namespace AgentComponents
