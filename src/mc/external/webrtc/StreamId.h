#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class StreamId {
public:
    // prevent constructor by default
    StreamId& operator=(StreamId const&);
    StreamId(StreamId const&);
    StreamId();
};

} // namespace webrtc
