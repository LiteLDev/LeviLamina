#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct AbsoluteCaptureTime {
public:
    // prevent constructor by default
    AbsoluteCaptureTime& operator=(AbsoluteCaptureTime const&);
    AbsoluteCaptureTime(AbsoluteCaptureTime const&);
    AbsoluteCaptureTime();
};

}; // namespace webrtc
