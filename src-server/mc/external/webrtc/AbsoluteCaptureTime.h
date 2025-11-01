#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct AbsoluteCaptureTime {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk262eec;
    ::ll::UntypedStorage<8, 16> mUnk2d05df;
    // NOLINTEND

public:
    // prevent constructor by default
    AbsoluteCaptureTime& operator=(AbsoluteCaptureTime const&);
    AbsoluteCaptureTime(AbsoluteCaptureTime const&);
    AbsoluteCaptureTime();

};

}
