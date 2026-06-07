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
    MCAPI CountTracker();

    MCFOLD ::std::shared_ptr<void*> acquire();

    MCAPI void clear();

    MCAPI uint get() const;

    MCAPI ~CountTracker();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::Threading
