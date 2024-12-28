#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BreedableType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 176> mUnk640f52;
    ::ll::UntypedStorage<8, 176> mUnkaf0b85;
    ::ll::UntypedStorage<8, 104> mUnkf04ec1;
    // NOLINTEND

public:
    // prevent constructor by default
    BreedableType& operator=(BreedableType const&);
    BreedableType(BreedableType const&);
    BreedableType();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~BreedableType();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
