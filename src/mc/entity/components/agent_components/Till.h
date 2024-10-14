#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents::Actions {

struct Till {
public:
    // prevent constructor by default
    Till& operator=(Till const&);
    Till(Till const&);
    Till();

public:
    // NOLINTBEGIN
    MCAPI ~Till();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace AgentComponents::Actions
