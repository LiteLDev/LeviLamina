#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents::Actions {

struct Attack {
public:
    // prevent constructor by default
    Attack& operator=(Attack const&);
    Attack(Attack const&);
    Attack();
};

}; // namespace AgentComponents::Actions
