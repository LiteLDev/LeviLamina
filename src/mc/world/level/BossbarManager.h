#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BossbarManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkcb6aac;
    // NOLINTEND

public:
    // prevent constructor by default
    BossbarManager& operator=(BossbarManager const&);
    BossbarManager(BossbarManager const&);
    BossbarManager();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~BossbarManager();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
