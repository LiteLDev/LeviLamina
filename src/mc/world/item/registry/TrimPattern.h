#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TrimPattern {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk39f162;
    ::ll::UntypedStorage<8, 48> mUnkc3364d;
    // NOLINTEND

public:
    // prevent constructor by default
    TrimPattern& operator=(TrimPattern const&);
    TrimPattern(TrimPattern const&);
    TrimPattern();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~TrimPattern();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
