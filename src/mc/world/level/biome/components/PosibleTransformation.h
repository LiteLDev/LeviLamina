#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PosibleTransformation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkf77487;
    ::ll::UntypedStorage<8, 64> mUnk6b0cf1;
    ::ll::UntypedStorage<4, 4>  mUnkeb933f;
    // NOLINTEND

public:
    // prevent constructor by default
    PosibleTransformation();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PosibleTransformation(::PosibleTransformation const&);

    MCNAPI ::PosibleTransformation& operator=(::PosibleTransformation const&);

    MCNAPI ~PosibleTransformation();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PosibleTransformation const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
