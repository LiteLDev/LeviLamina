#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents::Actions {

struct Attack {

public:
    // prevent constructor by default
    Attack& operator=(Attack const&) = delete;
    Attack(Attack const&)            = delete;
    Attack()                         = delete;
};

}; // namespace AgentComponents::Actions
