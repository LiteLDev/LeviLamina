#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockPermutationDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 216> mUnkf3a51e;
    ::ll::UntypedStorage<8, 112> mUnkcb77fb;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockPermutationDescription& operator=(BlockPermutationDescription const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockPermutationDescription();

    MCAPI BlockPermutationDescription(::BlockPermutationDescription const&);

    MCAPI ~BlockPermutationDescription();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::BlockPermutationDescription const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
