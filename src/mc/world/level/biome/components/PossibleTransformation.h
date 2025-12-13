#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PossibleTransformation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk41a036;
    ::ll::UntypedStorage<8, 64> mUnkd7f184;
    ::ll::UntypedStorage<4, 4>  mUnk7996f9;
    // NOLINTEND

public:
    // prevent constructor by default
    PossibleTransformation();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PossibleTransformation(::PossibleTransformation const&);

    MCNAPI ::PossibleTransformation& operator=(::PossibleTransformation const&);

    MCNAPI ~PossibleTransformation();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PossibleTransformation const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
