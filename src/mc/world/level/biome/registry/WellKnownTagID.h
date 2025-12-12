#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WellKnownTagID {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk1609ee;
    ::ll::UntypedStorage<8, 8>  mUnkc8f33b;
    // NOLINTEND

public:
    // prevent constructor by default
    WellKnownTagID& operator=(WellKnownTagID const&);
    WellKnownTagID(WellKnownTagID const&);
    WellKnownTagID();
};
