#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BeforeLevelForLevelHoldingOwnership {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk393182;
    // NOLINTEND

public:
    // prevent constructor by default
    BeforeLevelForLevelHoldingOwnership& operator=(BeforeLevelForLevelHoldingOwnership const&);
    BeforeLevelForLevelHoldingOwnership(BeforeLevelForLevelHoldingOwnership const&);
    BeforeLevelForLevelHoldingOwnership();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ~BeforeLevelForLevelHoldingOwnership();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
