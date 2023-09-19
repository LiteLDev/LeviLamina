#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents {

class Interact {
public:
    // prevent constructor by default
    Interact& operator=(Interact const&);
    Interact(Interact const&);
    Interact();
};

}; // namespace AgentComponents
