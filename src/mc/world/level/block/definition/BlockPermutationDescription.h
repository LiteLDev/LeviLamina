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
    MCNAPI BlockPermutationDescription();

    MCNAPI BlockPermutationDescription(::BlockPermutationDescription const&);

    MCNAPI ~BlockPermutationDescription();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::BlockPermutationDescription const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
