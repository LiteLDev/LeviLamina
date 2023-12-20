#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct GenericFrameInfo {
public:
    // prevent constructor by default
    GenericFrameInfo& operator=(GenericFrameInfo const&);
    GenericFrameInfo(GenericFrameInfo const&);
    GenericFrameInfo();
};

}; // namespace webrtc
