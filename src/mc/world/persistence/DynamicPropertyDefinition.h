#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DynamicPropertyDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk970e8b;
    ::ll::UntypedStorage<8, 40> mUnk2aade6;
    ::ll::UntypedStorage<8, 8>  mUnk1b77f8;
    // NOLINTEND

public:
    // prevent constructor by default
    DynamicPropertyDefinition& operator=(DynamicPropertyDefinition const&);
    DynamicPropertyDefinition(DynamicPropertyDefinition const&);
    DynamicPropertyDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~DynamicPropertyDefinition();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
