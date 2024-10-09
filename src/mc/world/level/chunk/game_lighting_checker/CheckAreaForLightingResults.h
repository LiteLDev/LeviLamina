#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace GameLightingChecker {

struct CheckAreaForLightingResults {
public:
    // prevent constructor by default
    CheckAreaForLightingResults& operator=(CheckAreaForLightingResults const&);
    CheckAreaForLightingResults(CheckAreaForLightingResults const&);
    CheckAreaForLightingResults();
};

}; // namespace GameLightingChecker
