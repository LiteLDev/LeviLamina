#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc::trace_event_internal {

class TraceStringWithCopy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk4cc5be;
    // NOLINTEND

public:
    // prevent constructor by default
    TraceStringWithCopy& operator=(TraceStringWithCopy const&);
    TraceStringWithCopy(TraceStringWithCopy const&);
    TraceStringWithCopy();
};

} // namespace webrtc::trace_event_internal
