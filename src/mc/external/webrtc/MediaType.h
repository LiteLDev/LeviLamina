#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class MediaType : int {
    Any   = 0,
    Audio = 1,
    Video = 2,
    Data  = 3,
};

}
