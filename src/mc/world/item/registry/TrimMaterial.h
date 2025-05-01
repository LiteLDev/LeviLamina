#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TrimMaterial {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk1da951;
    ::ll::UntypedStorage<8, 32> mUnkf63464;
    ::ll::UntypedStorage<8, 48> mUnk52693a;
    // NOLINTEND

public:
    // prevent constructor by default
    TrimMaterial();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TrimMaterial(::TrimMaterial&&);

    MCNAPI TrimMaterial(::TrimMaterial const&);

    MCNAPI ::TrimMaterial& operator=(::TrimMaterial const&);

    MCNAPI ~TrimMaterial();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::TrimMaterial&&);

    MCNAPI void* $ctor(::TrimMaterial const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
