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
    MCFOLD void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Social::Events
