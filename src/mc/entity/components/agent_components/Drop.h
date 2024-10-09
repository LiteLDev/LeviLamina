#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents::Actions {

struct Drop {
public:
    // prevent constructor by default
    Drop& operator=(Drop const&);
    Drop(Drop const&);
    Drop();
};

}; // namespace AgentComponents::Actions
