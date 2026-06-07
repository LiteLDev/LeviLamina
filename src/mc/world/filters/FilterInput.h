#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FilterInput {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnke0752f;
    ::ll::UntypedStorage<8, 32> mUnk96ba17;
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
    MCNAPI ::FilterInput& operator=(::FilterInput const&);

    MCNAPI ~FilterInput();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
