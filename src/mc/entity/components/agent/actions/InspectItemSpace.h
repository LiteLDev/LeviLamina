#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents::Actions {

struct InspectItemSpace {

public:
    // prevent constructor by default
    InspectItemSpace& operator=(InspectItemSpace const&) = delete;
    InspectItemSpace(InspectItemSpace const&)            = delete;
    InspectItemSpace()                                   = delete;
};

}; // namespace AgentComponents::Actions
