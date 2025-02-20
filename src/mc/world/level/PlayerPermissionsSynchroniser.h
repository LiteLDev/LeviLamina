#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PlayerPermissionsSynchroniser {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkfdc9cf;
    ::ll::UntypedStorage<8, 24> mUnk4b563b;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerPermissionsSynchroniser& operator=(PlayerPermissionsSynchroniser const&);
    PlayerPermissionsSynchroniser(PlayerPermissionsSynchroniser const&);
    PlayerPermissionsSynchroniser();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PlayerPermissionsSynchroniser();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
