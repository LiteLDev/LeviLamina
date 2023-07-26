#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents::Actions {

struct DropAll {

public:
    // prevent constructor by default
    DropAll& operator=(DropAll const&) = delete;
    DropAll(DropAll const&)            = delete;
    DropAll()                          = delete;
};

}; // namespace AgentComponents::Actions
