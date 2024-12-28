#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace sim {

struct LookAtPositionIntent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkb58479;
    ::ll::UntypedStorage<4, 4>  mUnk11abdb;
    // NOLINTEND

public:
    // prevent constructor by default
    LookAtPositionIntent& operator=(LookAtPositionIntent const&);
    LookAtPositionIntent(LookAtPositionIntent const&);
    LookAtPositionIntent();
};

} // namespace sim
