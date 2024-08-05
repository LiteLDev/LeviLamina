#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace sim {

struct NavigateToPositionsIntent {
public:
    // prevent constructor by default
    NavigateToPositionsIntent& operator=(NavigateToPositionsIntent const&);
    NavigateToPositionsIntent(NavigateToPositionsIntent const&);
    NavigateToPositionsIntent();

public:
    // NOLINTBEGIN
    MCAPI ~NavigateToPositionsIntent();

    // NOLINTEND
};

}; // namespace sim
