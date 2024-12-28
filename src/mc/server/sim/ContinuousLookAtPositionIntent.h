#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace sim {

struct ContinuousLookAtPositionIntent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk98987b;
    ::ll::UntypedStorage<1, 1>  mUnk5c3dd7;
    // NOLINTEND

public:
    // prevent constructor by default
    ContinuousLookAtPositionIntent& operator=(ContinuousLookAtPositionIntent const&);
    ContinuousLookAtPositionIntent(ContinuousLookAtPositionIntent const&);
    ContinuousLookAtPositionIntent();
};

} // namespace sim
