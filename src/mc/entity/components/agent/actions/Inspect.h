#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents::Actions {

struct Inspect {
public:
    // prevent constructor by default
    Inspect& operator=(Inspect const&);
    Inspect(Inspect const&);
    Inspect();
};

}; // namespace AgentComponents::Actions
