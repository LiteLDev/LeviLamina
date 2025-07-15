#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class ThreadUnsafeOneTimeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk85d0ce;
    // NOLINTEND

public:
    // prevent constructor by default
    ThreadUnsafeOneTimeEvent& operator=(ThreadUnsafeOneTimeEvent const&);
    ThreadUnsafeOneTimeEvent(ThreadUnsafeOneTimeEvent const&);
    ThreadUnsafeOneTimeEvent();
};

} // namespace webrtc
