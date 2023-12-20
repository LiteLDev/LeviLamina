#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc::trace_event_internal {

class TraceEndOnScopeClose {
public:
    // prevent constructor by default
    TraceEndOnScopeClose& operator=(TraceEndOnScopeClose const&);
    TraceEndOnScopeClose(TraceEndOnScopeClose const&);
    TraceEndOnScopeClose();

public:
    // NOLINTBEGIN
    // symbol: ??1TraceEndOnScopeClose@trace_event_internal@webrtc@@QEAA@XZ
    MCAPI ~TraceEndOnScopeClose();

    // NOLINTEND
};

}; // namespace webrtc::trace_event_internal
