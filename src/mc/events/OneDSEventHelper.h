#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social::Events {

class OneDSEventHelper {
public:
    // prevent constructor by default
    OneDSEventHelper& operator=(OneDSEventHelper const&);
    OneDSEventHelper(OneDSEventHelper const&);

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
