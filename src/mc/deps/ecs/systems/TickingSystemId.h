#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TickingSystemId {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkb1fbdd;
    // NOLINTEND

public:
    // prevent constructor by default
    TickingSystemId& operator=(TickingSystemId const&);
    TickingSystemId(TickingSystemId const&);
    TickingSystemId();
};
