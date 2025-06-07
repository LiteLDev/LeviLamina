#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DeserializeDataParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk407f0e;
    ::ll::UntypedStorage<8, 24> mUnk8a0b4a;
    ::ll::UntypedStorage<8, 32> mUnke19b37;
    ::ll::UntypedStorage<1, 1>  mUnk84bd48;
    ::ll::UntypedStorage<1, 1>  mUnka7eaee;
    // NOLINTEND

public:
    // prevent constructor by default
    DeserializeDataParams& operator=(DeserializeDataParams const&);
    DeserializeDataParams();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DeserializeDataParams(::DeserializeDataParams const&);

    MCNAPI ~DeserializeDataParams();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::DeserializeDataParams const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
