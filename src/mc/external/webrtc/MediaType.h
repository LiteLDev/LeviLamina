#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class MediaType : int {
    Audio       = 0,
    Video       = 1,
    Data        = 2,
    Unsupported = 3,
    Any         = 4,
};

}
