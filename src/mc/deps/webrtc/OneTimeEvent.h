#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class OneTimeEvent {
public:
    // prevent constructor by default
    OneTimeEvent& operator=(OneTimeEvent const&);
    OneTimeEvent(OneTimeEvent const&);
    OneTimeEvent();

public:
    // NOLINTBEGIN
    // symbol: ??1OneTimeEvent@webrtc@@QEAA@XZ
    MCAPI ~OneTimeEvent();

    // NOLINTEND
};

}; // namespace webrtc
