#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents::Actions {

struct InspectItemSpace {
public:
    // prevent constructor by default
    InspectItemSpace& operator=(InspectItemSpace const&);
    InspectItemSpace(InspectItemSpace const&);
    InspectItemSpace();
};

}; // namespace AgentComponents::Actions
