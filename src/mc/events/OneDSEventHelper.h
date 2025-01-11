#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social::Events {

class OneDSEventHelper {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI OneDSEventHelper();

    MCAPI ~OneDSEventHelper();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Social::Events
