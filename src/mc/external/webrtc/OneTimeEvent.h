#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct OneTimeEvent {
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

} // namespace webrtc
