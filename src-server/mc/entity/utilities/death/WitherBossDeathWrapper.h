#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WitherBossDeathWrapper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk5a6e53;
    // NOLINTEND

public:
    // prevent constructor by default
    WitherBossDeathWrapper& operator=(WitherBossDeathWrapper const&);
    WitherBossDeathWrapper(WitherBossDeathWrapper const&);
    WitherBossDeathWrapper();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void explode();
    // NOLINTEND

};
