#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents::Actions {

struct Collect {
public:
    // prevent constructor by default
    Collect& operator=(Collect const&);
    Collect(Collect const&);
    Collect();
};

}; // namespace AgentComponents::Actions
