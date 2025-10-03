#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct LoggedRouteChangeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk5becee;
    ::ll::UntypedStorage<1, 1> mUnkcb9a4b;
    ::ll::UntypedStorage<4, 4> mUnk5144a3;
    // NOLINTEND

public:
    // prevent constructor by default
    LoggedRouteChangeEvent& operator=(LoggedRouteChangeEvent const&);
    LoggedRouteChangeEvent(LoggedRouteChangeEvent const&);
    LoggedRouteChangeEvent();
};

} // namespace webrtc
