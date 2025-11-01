#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

class CountTracker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkd2fa18;
    // NOLINTEND

public:
    // prevent constructor by default
    CountTracker& operator=(CountTracker const&);
    CountTracker(CountTracker const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CountTracker();

    MCNAPI ~CountTracker();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
