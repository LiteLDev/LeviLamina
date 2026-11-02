#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FilterInputs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2>  mUnke637f5;
    ::ll::UntypedStorage<8, 48> mUnk260a64;
    ::ll::UntypedStorage<2, 2>  mUnkf5bc24;
    ::ll::UntypedStorage<8, 48> mUnk6920e4;
    // NOLINTEND

public:
    // prevent constructor by default
    FilterInputs& operator=(FilterInputs const&);
    FilterInputs(FilterInputs const&);
    FilterInputs();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~FilterInputs();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
