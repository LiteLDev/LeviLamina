#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockPermutationDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>  mUnkf3a51e;
    ::ll::UntypedStorage<8, 112> mUnkcb77fb;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockPermutationDescription(BlockPermutationDescription const&);
    BlockPermutationDescription();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::BlockPermutationDescription& operator=(::BlockPermutationDescription const&);

    MCAPI ~BlockPermutationDescription();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
