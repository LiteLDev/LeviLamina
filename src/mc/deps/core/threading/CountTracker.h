#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

class CountTracker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<void*>> mCountReference;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~CountTracker();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::Threading
