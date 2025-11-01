#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MovementRestriction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk6144fd;
    ::ll::UntypedStorage<4, 4> mUnkf57e49;
    // NOLINTEND

public:
    // prevent constructor by default
    MovementRestriction& operator=(MovementRestriction const&);
    MovementRestriction(MovementRestriction const&);
    MovementRestriction();

};
