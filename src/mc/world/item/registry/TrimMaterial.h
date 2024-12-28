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
    TrimMaterial& operator=(TrimMaterial const&);
    TrimMaterial(TrimMaterial const&);
    TrimMaterial();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~TrimMaterial();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
