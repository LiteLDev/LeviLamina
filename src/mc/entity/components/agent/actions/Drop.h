#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents::Actions {

struct Drop {

public:
    // prevent constructor by default
    Drop& operator=(Drop const&) = delete;
    Drop(Drop const&)            = delete;
    Drop()                       = delete;
};

}; // namespace AgentComponents::Actions
