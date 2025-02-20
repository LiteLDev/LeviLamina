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
    TrimPattern();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TrimPattern(::TrimPattern&&);

    MCAPI TrimPattern(::TrimPattern const&);

    MCAPI ~TrimPattern();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::TrimPattern&&);

    MCFOLD void* $ctor(::TrimPattern const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
