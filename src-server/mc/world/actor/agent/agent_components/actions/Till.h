#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents::Actions {

struct Till {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk7749f3;
    ::ll::UntypedStorage<8, 32> mUnk2a39e3;
    // NOLINTEND

public:
    // prevent constructor by default
    Till& operator=(Till const&);
    Till(Till const&);
    Till();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~Till();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
