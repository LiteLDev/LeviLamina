#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DamageCondition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk64b566;
    ::ll::UntypedStorage<8, 32> mUnk599c11;
    ::ll::UntypedStorage<4, 4>  mUnkc8edee;
    // NOLINTEND

public:
    // prevent constructor by default
    DamageCondition& operator=(DamageCondition const&);
    DamageCondition(DamageCondition const&);
    DamageCondition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~DamageCondition();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
