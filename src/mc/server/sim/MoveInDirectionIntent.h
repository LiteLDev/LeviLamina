#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace sim {

struct MoveInDirectionIntent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk6c055c;
    ::ll::UntypedStorage<1, 1>  mUnkb9ac2b;
    // NOLINTEND

public:
    // prevent constructor by default
    MoveInDirectionIntent& operator=(MoveInDirectionIntent const&);
    MoveInDirectionIntent(MoveInDirectionIntent const&);
    MoveInDirectionIntent();
};

} // namespace sim
