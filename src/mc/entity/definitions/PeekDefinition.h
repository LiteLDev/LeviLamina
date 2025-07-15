#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PeekDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 104> mUnk24872a;
    ::ll::UntypedStorage<8, 104> mUnka8083b;
    ::ll::UntypedStorage<8, 104> mUnk60915a;
    // NOLINTEND

public:
    // prevent constructor by default
    PeekDefinition& operator=(PeekDefinition const&);
    PeekDefinition(PeekDefinition const&);
    PeekDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PeekDefinition();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
