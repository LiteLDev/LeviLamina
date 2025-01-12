#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct OptionalString {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk4561b1;
    ::ll::UntypedStorage<8, 32> mUnkdfc92f;
    // NOLINTEND

public:
    // prevent constructor by default
    OptionalString& operator=(OptionalString const&);
    OptionalString(OptionalString const&);
    OptionalString();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~OptionalString();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
