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
    MCAPI ItemSpecificSpeed(::ItemSpecificSpeed const&);

    MCFOLD ::ItemSpecificSpeed& operator=(::ItemSpecificSpeed const&);

    MCAPI ~ItemSpecificSpeed();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::ItemSpecificSpeed const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
