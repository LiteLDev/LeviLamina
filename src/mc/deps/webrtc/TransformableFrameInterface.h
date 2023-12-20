#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class TransformableFrameInterface {
public:
    // prevent constructor by default
    TransformableFrameInterface& operator=(TransformableFrameInterface const&);
    TransformableFrameInterface(TransformableFrameInterface const&);
    TransformableFrameInterface();
};

}; // namespace webrtc
