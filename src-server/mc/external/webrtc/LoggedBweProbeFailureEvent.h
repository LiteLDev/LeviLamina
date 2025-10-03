#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct LoggedBweProbeFailureEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk5d26b5;
    ::ll::UntypedStorage<4, 4> mUnk8d80ec;
    ::ll::UntypedStorage<4, 4> mUnk295ead;
    // NOLINTEND

public:
    // prevent constructor by default
    LoggedBweProbeFailureEvent& operator=(LoggedBweProbeFailureEvent const&);
    LoggedBweProbeFailureEvent(LoggedBweProbeFailureEvent const&);
    LoggedBweProbeFailureEvent();
};

} // namespace webrtc
