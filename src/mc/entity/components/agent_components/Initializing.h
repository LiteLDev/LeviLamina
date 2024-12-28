#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents {

struct Initializing {
public:
    // prevent constructor by default
    Initializing& operator=(Initializing const&);
    Initializing(Initializing const&);
    Initializing();
};

} // namespace AgentComponents
