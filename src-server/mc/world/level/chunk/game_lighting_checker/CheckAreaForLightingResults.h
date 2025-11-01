#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace GameLightingChecker {

struct CheckAreaForLightingResults {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk4df996;
    ::ll::UntypedStorage<8, 8> mUnk3b75ab;
    ::ll::UntypedStorage<1, 1> mUnk1cf40d;
    // NOLINTEND

public:
    // prevent constructor by default
    CheckAreaForLightingResults& operator=(CheckAreaForLightingResults const&);
    CheckAreaForLightingResults(CheckAreaForLightingResults const&);
    CheckAreaForLightingResults();

};

}
