#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RouteEndpoint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk83ef19;
    ::ll::UntypedStorage<2, 2> mUnka8a48a;
    ::ll::UntypedStorage<2, 2> mUnk5725c7;
    ::ll::UntypedStorage<1, 1> mUnk42973d;
    // NOLINTEND

public:
    // prevent constructor by default
    RouteEndpoint& operator=(RouteEndpoint const&);
    RouteEndpoint(RouteEndpoint const&);
    RouteEndpoint();
};

} // namespace webrtc
