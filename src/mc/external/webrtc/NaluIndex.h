#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc::H264 {

struct NaluIndex {
public:
    // prevent constructor by default
    NaluIndex& operator=(NaluIndex const&);
    NaluIndex(NaluIndex const&);
    NaluIndex();
};

} // namespace webrtc::H264
