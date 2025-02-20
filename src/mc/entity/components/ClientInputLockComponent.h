#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ClientInputLockComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnk312cc3;
    ::ll::UntypedStorage<2, 2> mUnkc9c39b;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientInputLockComponent& operator=(ClientInputLockComponent const&);
    ClientInputLockComponent(ClientInputLockComponent const&);
    ClientInputLockComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _applyActiveCategoryLocks();
    // NOLINTEND
};
