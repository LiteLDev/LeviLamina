#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class VideoCodecType : int {
    KVideoCodecGeneric = 0,
    KVideoCodecVP8     = 1,
    KVideoCodecVP9     = 2,
    KVideoCodecAV1     = 3,
    KVideoCodecH264    = 4,
    KVideoCodecH265    = 5,
};

}
