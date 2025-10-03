#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct LoggedAlrStateEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk4138f1;
    ::ll::UntypedStorage<1, 1> mUnk685b8f;
    // NOLINTEND

public:
    // prevent constructor by default
    LoggedAlrStateEvent& operator=(LoggedAlrStateEvent const&);
    LoggedAlrStateEvent(LoggedAlrStateEvent const&);
    LoggedAlrStateEvent();
};

} // namespace webrtc
