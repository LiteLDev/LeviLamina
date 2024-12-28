#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Trade {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk566420;
    ::ll::UntypedStorage<1, 1>  mUnkb6605c;
    ::ll::UntypedStorage<4, 4>  mUnke6d5f2;
    ::ll::UntypedStorage<4, 4>  mUnk5c8e4c;
    ::ll::UntypedStorage<4, 4>  mUnk3e8840;
    ::ll::UntypedStorage<8, 24> mUnk9efbba;
    ::ll::UntypedStorage<8, 24> mUnkfa4bf7;
    // NOLINTEND

public:
    // prevent constructor by default
    Trade& operator=(Trade const&);
    Trade(Trade const&);
    Trade();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~Trade();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
