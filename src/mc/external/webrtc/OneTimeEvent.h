#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct OneTimeEvent {
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
