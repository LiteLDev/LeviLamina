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
    ItemSpecificSpeed();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ItemSpecificSpeed(::ItemSpecificSpeed const&);

    MCNAPI ::ItemSpecificSpeed& operator=(::ItemSpecificSpeed const&);

    MCNAPI ~ItemSpecificSpeed();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ItemSpecificSpeed const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
