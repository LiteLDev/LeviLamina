#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class OneTimeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk288ba9;
    ::ll::UntypedStorage<8, 40> mUnkd1349e;
    // NOLINTEND

public:
    // prevent constructor by default
    OneTimeEvent& operator=(OneTimeEvent const&);
    OneTimeEvent(OneTimeEvent const&);
    OneTimeEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~OneTimeEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
