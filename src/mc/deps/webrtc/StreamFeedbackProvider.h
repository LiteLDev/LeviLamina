#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class StreamFeedbackProvider {
public:
    // prevent constructor by default
    StreamFeedbackProvider& operator=(StreamFeedbackProvider const&);
    StreamFeedbackProvider(StreamFeedbackProvider const&);
    StreamFeedbackProvider();
};

}; // namespace webrtc
