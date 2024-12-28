#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemSpecificSpeed {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk313ad1;
    ::ll::UntypedStorage<4, 4>  mUnke75603;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemSpecificSpeed& operator=(ItemSpecificSpeed const&);
    ItemSpecificSpeed(ItemSpecificSpeed const&);
    ItemSpecificSpeed();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ItemSpecificSpeed();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
