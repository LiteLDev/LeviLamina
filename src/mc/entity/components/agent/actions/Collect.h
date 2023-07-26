#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents::Actions {

struct Collect {

public:
    // prevent constructor by default
    Collect& operator=(Collect const&) = delete;
    Collect(Collect const&)            = delete;
    Collect()                          = delete;
};

}; // namespace AgentComponents::Actions
