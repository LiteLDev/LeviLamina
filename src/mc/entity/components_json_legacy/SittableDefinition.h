#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SittableDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 104> mUnkccd2c1;
    ::ll::UntypedStorage<8, 104> mUnk92e4be;
    // NOLINTEND

public:
    // prevent constructor by default
    SittableDefinition& operator=(SittableDefinition const&);
    SittableDefinition(SittableDefinition const&);
    SittableDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~SittableDefinition();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
