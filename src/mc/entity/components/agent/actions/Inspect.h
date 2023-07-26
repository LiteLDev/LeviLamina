#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents::Actions {

struct Inspect {

public:
    // prevent constructor by default
    Inspect& operator=(Inspect const&) = delete;
    Inspect(Inspect const&)            = delete;
    Inspect()                          = delete;
};

}; // namespace AgentComponents::Actions
