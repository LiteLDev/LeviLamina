#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace TelemtetryEvents {

struct UnsupportedAction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk547d54;
    // NOLINTEND

public:
    // prevent constructor by default
    UnsupportedAction& operator=(UnsupportedAction const&);
    UnsupportedAction(UnsupportedAction const&);
    UnsupportedAction();

public:
    // member functions
    // NOLINTBEGIN

    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace TelemtetryEvents
