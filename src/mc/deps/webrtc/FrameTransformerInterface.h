#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class FrameTransformerInterface {
public:
    // prevent constructor by default
    FrameTransformerInterface& operator=(FrameTransformerInterface const&);
    FrameTransformerInterface(FrameTransformerInterface const&);
    FrameTransformerInterface();
};

}; // namespace webrtc
