#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class AsyncDnsResolver {
public:
    // prevent constructor by default
    AsyncDnsResolver& operator=(AsyncDnsResolver const&);
    AsyncDnsResolver(AsyncDnsResolver const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AsyncDnsResolver();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
