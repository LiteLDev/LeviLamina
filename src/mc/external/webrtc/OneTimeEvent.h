#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct OneTimeEvent {
public:
    // prevent constructor by default
    OneTimeEvent& operator=(OneTimeEvent const&);
    OneTimeEvent(OneTimeEvent const&);
    OneTimeEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~OneTimeEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
