#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents {

struct Executing {
public:
    // prevent constructor by default
    Executing& operator=(Executing const&);
    Executing(Executing const&);
    Executing();
};

} // namespace AgentComponents
