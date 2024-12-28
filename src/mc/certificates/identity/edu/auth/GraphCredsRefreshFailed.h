#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace edu::auth {

struct GraphCredsRefreshFailed {
public:
    // prevent constructor by default
    GraphCredsRefreshFailed& operator=(GraphCredsRefreshFailed const&);
    GraphCredsRefreshFailed(GraphCredsRefreshFailed const&);
    GraphCredsRefreshFailed();
};

} // namespace edu::auth
