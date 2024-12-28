#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace sim {

struct LookAtEntityIntent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk98e7e8;
    ::ll::UntypedStorage<4, 4>  mUnkbf14b0;
    // NOLINTEND

public:
    // prevent constructor by default
    LookAtEntityIntent& operator=(LookAtEntityIntent const&);
    LookAtEntityIntent(LookAtEntityIntent const&);
    LookAtEntityIntent();
};

} // namespace sim
