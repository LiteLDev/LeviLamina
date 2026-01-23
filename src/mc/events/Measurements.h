#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social::Events {

class Measurements {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnka6c12a;
    // NOLINTEND

public:
    // prevent constructor by default
    Measurements& operator=(Measurements const&);
    Measurements(Measurements const&);
    Measurements();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~Measurements();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Social::Events
