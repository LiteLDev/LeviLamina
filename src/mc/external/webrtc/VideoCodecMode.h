#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class VideoCodecMode : int {
    KRealtimeVideo = 0,
    KScreensharing = 1,
};

}
