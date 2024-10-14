#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class ScopeExit {
public:
    // prevent constructor by default
    ScopeExit& operator=(ScopeExit const&);
    ScopeExit(ScopeExit const&);
    ScopeExit();

public:
    // NOLINTBEGIN
    MCAPI ~ScopeExit();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Bedrock
