#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc::trace_event_internal {

struct TraceEndOnScopeClose {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~TraceEndOnScopeClose();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc::trace_event_internal
