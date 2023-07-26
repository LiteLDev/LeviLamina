#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents {

struct ExecutingFlag {

public:
    // prevent constructor by default
    ExecutingFlag& operator=(ExecutingFlag const&) = delete;
    ExecutingFlag(ExecutingFlag const&)            = delete;
    ExecutingFlag()                                = delete;
};

}; // namespace AgentComponents
