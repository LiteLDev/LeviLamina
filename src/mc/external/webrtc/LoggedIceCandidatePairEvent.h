#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct LoggedIceCandidatePairEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkbb2846;
    ::ll::UntypedStorage<4, 4> mUnk8e5c55;
    ::ll::UntypedStorage<4, 4> mUnk1eb621;
    ::ll::UntypedStorage<4, 4> mUnk3e5b4f;
    // NOLINTEND

public:
    // prevent constructor by default
    LoggedIceCandidatePairEvent& operator=(LoggedIceCandidatePairEvent const&);
    LoggedIceCandidatePairEvent(LoggedIceCandidatePairEvent const&);
    LoggedIceCandidatePairEvent();
};

} // namespace webrtc
