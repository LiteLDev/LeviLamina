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

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BreedableType();

    MCNAPI BreedableType(::BreedableType const&);

    MCNAPI ~BreedableType();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::BreedableType const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
