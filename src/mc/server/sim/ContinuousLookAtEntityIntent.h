#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace sim {

struct ContinuousLookAtEntityIntent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk87320c;
    ::ll::UntypedStorage<1, 1>  mUnk3d4c93;
    // NOLINTEND

public:
    // prevent constructor by default
    ContinuousLookAtEntityIntent& operator=(ContinuousLookAtEntityIntent const&);
    ContinuousLookAtEntityIntent(ContinuousLookAtEntityIntent const&);
    ContinuousLookAtEntityIntent();
};

} // namespace sim
