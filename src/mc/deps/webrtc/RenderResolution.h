#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RenderResolution {
public:
    // prevent constructor by default
    RenderResolution& operator=(RenderResolution const&);
    RenderResolution(RenderResolution const&);
    RenderResolution();
};

}; // namespace webrtc
