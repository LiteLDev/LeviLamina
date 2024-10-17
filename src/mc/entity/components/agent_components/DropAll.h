#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents::Actions {

struct DropAll {
public:
    // prevent constructor by default
    DropAll& operator=(DropAll const&);
    DropAll(DropAll const&);
    DropAll();
};

}; // namespace AgentComponents::Actions
