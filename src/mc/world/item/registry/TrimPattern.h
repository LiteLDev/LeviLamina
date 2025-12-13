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
    MCNAPI TrimPattern(::TrimPattern&&);

    MCNAPI ~TrimPattern();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::TrimPattern&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
