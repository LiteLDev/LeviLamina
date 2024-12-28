#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social::Events {

class RealtimeRoute {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk6e48d5;
    ::ll::UntypedStorage<8, 32> mUnk3881fc;
    // NOLINTEND

public:
    // prevent constructor by default
    RealtimeRoute& operator=(RealtimeRoute const&);
    RealtimeRoute(RealtimeRoute const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RealtimeRoute();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};

} // namespace Social::Events
