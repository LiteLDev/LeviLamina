#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ConstDeserializeDataParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk53e6e0;
    ::ll::UntypedStorage<8, 112> mUnkcb3186;
    ::ll::UntypedStorage<8, 120> mUnk25c848;
    // NOLINTEND

public:
    // prevent constructor by default
    ConstDeserializeDataParams& operator=(ConstDeserializeDataParams const&);
    ConstDeserializeDataParams(ConstDeserializeDataParams const&);
    ConstDeserializeDataParams();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ConstDeserializeDataParams();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
