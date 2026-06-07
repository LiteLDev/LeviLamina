#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::Profile::FrameType {
// inner types
enum : uchar {
    // bitfield representation
    Invalid   = 0,
    Client    = 1 << 0,
    Server    = 1 << 1,
    CPURender = 1 << 2,
    Legacy    = 1 << 3,
};

} // namespace Core::Profile::FrameType
