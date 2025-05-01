#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class RouteEndpoint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkfa5a4e;
    ::ll::UntypedStorage<2, 2> mUnk348a1e;
    ::ll::UntypedStorage<2, 2> mUnk824dac;
    ::ll::UntypedStorage<1, 1> mUnkdf1e8b;
    // NOLINTEND

public:
    // prevent constructor by default
    RouteEndpoint& operator=(RouteEndpoint const&);
    RouteEndpoint(RouteEndpoint const&);
    RouteEndpoint();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::rtc::RouteEndpoint const&) const;
    // NOLINTEND
};

} // namespace rtc
