#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class H264PacketizationMode : int {
    NonInterleaved = 0,
    SingleNalUnit = 1,
};

}
