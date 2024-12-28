#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FilterInput {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnke0752f;
    ::ll::UntypedStorage<8, 32> mUnkfbc8dc;
    ::ll::UntypedStorage<4, 4>  mUnk4c9284;
    ::ll::UntypedStorage<4, 4>  mUnk1800e1;
    // NOLINTEND

public:
    // prevent constructor by default
    FilterInput(FilterInput const&);
    FilterInput();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit FilterInput(int i);

    MCAPI ::FilterInput& operator=(::FilterInput const&);

    MCAPI ::FilterInput& operator=(::FilterInput&&);

    MCAPI ~FilterInput();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(int i);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
