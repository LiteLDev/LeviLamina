#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MolangOffsetPlaceholder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnkd7a0d3;
    ::ll::UntypedStorage<8, 8>  mUnk1ff695;
    // NOLINTEND

public:
    // prevent constructor by default
    MolangOffsetPlaceholder& operator=(MolangOffsetPlaceholder const&);
    MolangOffsetPlaceholder(MolangOffsetPlaceholder const&);
    MolangOffsetPlaceholder();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~MolangOffsetPlaceholder();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
