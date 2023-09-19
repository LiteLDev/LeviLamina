#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents {

struct ExecutingFlag {
public:
    // prevent constructor by default
    ExecutingFlag& operator=(ExecutingFlag const&);
    ExecutingFlag(ExecutingFlag const&);
    ExecutingFlag();
};

}; // namespace AgentComponents
